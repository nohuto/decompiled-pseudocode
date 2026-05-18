/*
 * XREFs of sub_1800911F0 @ 0x1800911F0
 * Callers:
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_180110D20 @ 0x180110D20 (sub_180110D20.c)
 * Callees:
 *     sub_1800F610C @ 0x1800F610C (sub_1800F610C.c)
 */

__int64 __fastcall sub_1800911F0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3[1];
  v6 = 0LL;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = a3[1];
  }
  v4 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)&v6 = *a3;
  *((_QWORD *)&v6 + 1) = v3;
  return sub_1800F610C(v4, a2, &v6);
}
