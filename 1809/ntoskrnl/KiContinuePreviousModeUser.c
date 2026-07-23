/*
 * XREFs of KiContinuePreviousModeUser @ 0x1400A234C
 * Callers:
 *     KiContinueEx @ 0x1400A2480 (KiContinueEx.c)
 * Callees:
 *     KeVerifyContextXStateCetU @ 0x1400A1B50 (KeVerifyContextXStateCetU.c)
 *     KeVerifyContextRecord @ 0x1400A1BC8 (KeVerifyContextRecord.c)
 *     RtlGetExtendedContextLength @ 0x1400A1C84 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400A1CDC (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1400A1D40 (RtlpSanitizeContextFlags.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeContextToKframes @ 0x1401BBE50 (KeContextToKframes.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlpReadExtendedContext @ 0x140621F80 (RtlpReadExtendedContext.c)
 */

int __fastcall KiContinuePreviousModeUser(__int64 a1, int a2, int a3, __int64 a4)
{
  int result; // eax
  unsigned __int64 v9; // rax
  void *v10; // rsp
  int v11; // edx
  int v12; // ecx
  __int64 v13; // [rsp+20h] [rbp-10h]
  ULONG ContextFlags; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength[2]; // [rsp+38h] [rbp+8h] BYREF

  ContextFlags = *(_DWORD *)(a1 + 48);
  result = RtlpSanitizeContextFlags(&ContextFlags);
  if ( result >= 0 )
  {
    result = RtlGetExtendedContextLength(ContextFlags, ContextLength);
    if ( result >= 0 )
    {
      v9 = ContextLength[0] + 15LL;
      if ( v9 <= ContextLength[0] )
        v9 = 0xFFFFFFFFFFFFFF0LL;
      v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(&ContextFlags, 0, ContextLength[0]);
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, ContextFlags, (PCONTEXT_EX *)ContextLength);
      if ( result >= 0 )
      {
        LOBYTE(v11) = 1;
        result = RtlpReadExtendedContext(v12, v11, ContextLength[0], ContextFlags, a1, 0LL);
        if ( result >= 0 )
        {
          result = KeVerifyContextRecord(a4, (__int64)&ContextFlags);
          if ( result >= 0 )
          {
            result = KeVerifyContextXStateCetU(a4, &ContextFlags);
            if ( result >= 0 )
            {
              LOBYTE(v13) = 1;
              KeContextToKframes(a3, a2, (unsigned int)&ContextFlags, ContextFlags, v13);
              return 0;
            }
          }
        }
      }
    }
  }
  return result;
}
