/*
 * XREFs of KiContinuePreviousModeUser @ 0x14001B824
 * Callers:
 *     KiContinueEx @ 0x14001BA10 (KiContinueEx.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140016C60 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140016CB8 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x140016D1C (RtlpSanitizeContextFlags.c)
 *     KeVerifyContextXStateCetU @ 0x14001B750 (KeVerifyContextXStateCetU.c)
 *     KeVerifyContextRecord @ 0x14001B950 (KeVerifyContextRecord.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeContextToKframes @ 0x1401C3C50 (KeContextToKframes.c)
 *     _alloca_probe @ 0x1401CC4E0 (_alloca_probe.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlpReadExtendedContext @ 0x1405E76E4 (RtlpReadExtendedContext.c)
 */

__int64 __fastcall KiContinuePreviousModeUser(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int64 v9; // rax
  void *v10; // rsp
  int v11; // edx
  int v12; // ecx
  __int64 v13; // [rsp+20h] [rbp-10h]
  unsigned int v14; // [rsp+30h] [rbp+0h] BYREF
  __int64 v15; // [rsp+38h] [rbp+8h]

  v14 = *(_DWORD *)(a1 + 48);
  result = RtlpSanitizeContextFlags(&v14);
  if ( (int)result >= 0 )
  {
    result = RtlGetExtendedContextLength(v14);
    if ( (int)result >= 0 )
    {
      v9 = (unsigned int)v15 + 15LL;
      if ( v9 <= (unsigned int)v15 )
        v9 = 0xFFFFFFFFFFFFFF0LL;
      v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(&v14, 0, (unsigned int)v15);
      result = RtlInitializeExtendedContext((__int64)&v14, v14);
      if ( (int)result >= 0 )
      {
        LOBYTE(v11) = 1;
        result = RtlpReadExtendedContext(v12, v11, v15, v14, a1, 0LL);
        if ( (int)result >= 0 )
        {
          result = KeVerifyContextRecord(a4, &v14);
          if ( (int)result >= 0 )
          {
            result = KeVerifyContextXStateCetU(a4, &v14);
            if ( (int)result >= 0 )
            {
              LOBYTE(v13) = 1;
              KeContextToKframes(a3, a2, (unsigned int)&v14, v14, v13);
              return 0LL;
            }
          }
        }
      }
    }
  }
  return result;
}
