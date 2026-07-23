/*
 * XREFs of KiContinuePreviousModeUser @ 0x14001BC14
 * Callers:
 *     KiContinueEx @ 0x14001BE00 (KiContinueEx.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140017050 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400170A8 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x14001710C (RtlpSanitizeContextFlags.c)
 *     KeVerifyContextXStateCetU @ 0x14001BB40 (KeVerifyContextXStateCetU.c)
 *     KeVerifyContextRecord @ 0x14001BD40 (KeVerifyContextRecord.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeContextToKframes @ 0x1401C47D0 (KeContextToKframes.c)
 *     _alloca_probe @ 0x1401CD060 (_alloca_probe.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpReadExtendedContext @ 0x1405E7EB4 (RtlpReadExtendedContext.c)
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
          result = KeVerifyContextRecord(a4, &ContextFlags);
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
