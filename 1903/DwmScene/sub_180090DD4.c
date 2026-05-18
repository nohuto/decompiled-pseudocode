/*
 * XREFs of sub_180090DD4 @ 0x180090DD4
 * Callers:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_1800C3634 @ 0x1800C3634 (sub_1800C3634.c)
 * Callees:
 *     sub_1800F5D80 @ 0x1800F5D80 (sub_1800F5D80.c)
 */

__int64 __fastcall sub_180090DD4(__int64 a1, __int64 a2, _QWORD *a3)
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
  return sub_1800F5D80(v4, a2, &v6);
}
