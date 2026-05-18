/*
 * XREFs of sub_18007EB08 @ 0x18007EB08
 * Callers:
 *     sub_18006EB30 @ 0x18006EB30 (sub_18006EB30.c)
 *     sub_1800B9778 @ 0x1800B9778 (sub_1800B9778.c)
 * Callees:
 *     sub_18006F880 @ 0x18006F880 (sub_18006F880.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18007EB08(__int64 *a1, _QWORD *a2)
{
  __int64 j; // rax
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 i; // rcx
  __int64 v6; // rdx
  __int64 v8[2]; // [rsp+20h] [rbp-28h] BYREF

  sub_18006F880(a1, v8, a2);
  j = v8[0];
  v3 = 0LL;
  while ( j != v8[1] )
  {
    v4 = *(_QWORD *)(j + 16);
    ++v3;
    if ( *(_BYTE *)(v4 + 25) )
    {
      for ( i = *(_QWORD *)(j + 8); !*(_BYTE *)(i + 25) && j == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
        j = i;
      j = i;
    }
    else
    {
      v6 = *(_QWORD *)v4;
      for ( j = *(_QWORD *)(j + 16); !*(_BYTE *)(v6 + 25); v6 = *(_QWORD *)v6 )
        j = v6;
    }
  }
  return v3;
}
