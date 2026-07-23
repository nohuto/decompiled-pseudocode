/*
 * XREFs of HvlpDiscoverTopologyAmd @ 0x1409F501C
 * Callers:
 *     HvlpDiscoverTopologyWorker @ 0x140818BB0 (HvlpDiscoverTopologyWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlpLpCpuid @ 0x1409F53CC (HvlpLpCpuid.c)
 */

__int64 __fastcall HvlpDiscoverTopologyAmd(__int64 a1, unsigned int a2, unsigned int *a3, _DWORD *a4)
{
  unsigned int v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // esi
  unsigned int v10; // ebp
  int v11; // ecx
  __int64 result; // rax
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+28h] [rbp-40h]

  v13 = 0LL;
  v14 = 0LL;
  v7 = 1;
  v8 = 1;
  v9 = a1;
  HvlpLpCpuid(a1, 0x80000000LL, 0LL, &v13);
  v10 = v13;
  if ( (unsigned int)v13 >= 0x80000008 )
  {
    HvlpLpCpuid(v9, 2147483656LL, 0LL, &v13);
    LOWORD(v11) = (unsigned __int16)v14 >> 12;
    if ( !((unsigned __int16)v14 >> 12) )
      _BitScanReverse((unsigned int *)&v11, 2 * (unsigned __int8)v14 + 1);
    v8 = 1 << v11;
    if ( v10 >= 0x8000001E )
    {
      HvlpLpCpuid(v9, 2147483649LL, 0LL, &v13);
      if ( (v14 & 0x400000) != 0 )
      {
        HvlpLpCpuid(v9, 2147483678LL, 0LL, &v13);
        v7 = BYTE5(v13) + 1;
        v8 /= v7;
      }
    }
  }
  *a3 = a2 / (v8 * v7);
  result = a2 / v7;
  *a4 = result;
  return result;
}
