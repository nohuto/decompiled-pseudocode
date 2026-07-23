/*
 * XREFs of MiAddNonSecuredPagesToDump @ 0x1402ADCFC
 * Callers:
 *     MmGetDumpRange @ 0x1402AE4F8 (MmGetDumpRange.c)
 * Callees:
 *     MiIsPageSecured @ 0x1400EA860 (MiIsPageSecured.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiAddNonSecuredPagesToDump(
        __int64 (__fastcall **a1)(_QWORD, __int64, __int64, __int64),
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // r11d
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // r10
  __int64 result; // rax
  __int64 v11; // r10

  v3 = 0;
  v4 = a3;
  v5 = a2;
  if ( a3 )
  {
    v7 = a2 + 1;
    v8 = 48 * a2 - 0x58000000000LL;
    do
    {
      if ( MiIsPageSecured(v8) )
      {
        if ( v9 )
        {
          result = (*a1)(a1, v5, v9, 258LL);
          v3 = result;
          if ( (int)result < 0 )
            return result;
        }
        v5 = v7;
        v11 = 0LL;
      }
      else
      {
        v11 = v9 + 1;
      }
      v8 += 48LL;
      ++v7;
      --v4;
    }
    while ( v4 );
    if ( v11 )
      return (unsigned int)(*a1)(a1, v5, v11, 258LL);
  }
  return v3;
}
