/*
 * XREFs of MiPrefetchDriverPages @ 0x1406A5C90
 * Callers:
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 * Callees:
 *     MiReadPteShadow @ 0x14004B430 (MiReadPteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140076358 (MiMakeDemandZeroPte.c)
 *     MiPrefetchVirtualMemory @ 0x1400F5100 (MiPrefetchVirtualMemory.c)
 */

__int64 __fastcall MiPrefetchDriverPages(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-10h]

  result = MiMakeDemandZeroPte(4, a2, a3, a4);
  v7 = 0LL;
  v8 = result;
  v13 = 0LL;
  v9 = 0LL;
  v12 = 0LL;
  if ( v5 <= v10 )
  {
    do
    {
      result = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
        result = MiReadPteShadow(v5, *(_QWORD *)v5);
      if ( (result & 1) == 0 && ((result & 0x400) != 0 || (result & 0x800) == 0 && result != v8) )
      {
        result = 0LL;
        v11 = v5 << 25;
        if ( !v7 )
        {
          v9 = v11 >> 16;
          v12 = v11 >> 16;
        }
        v7 = ((v11 + 0x10000000) >> 16) - v9;
        v13 = v7;
      }
      v5 += 8LL;
    }
    while ( v5 <= v6 );
    if ( v7 > 0x1000 )
      return MiPrefetchVirtualMemory(1uLL, (__int64)&v12, 1LL, 45);
  }
  return result;
}
