/*
 * XREFs of sub_1800A5238 @ 0x1800A5238
 * Callers:
 *     sub_1800ACEF0 @ 0x1800ACEF0 (sub_1800ACEF0.c)
 *     sub_1800B0A34 @ 0x1800B0A34 (sub_1800B0A34.c)
 *     sub_1800C33C0 @ 0x1800C33C0 (sub_1800C33C0.c)
 *     sub_1800C8208 @ 0x1800C8208 (sub_1800C8208.c)
 *     sub_1800CB170 @ 0x1800CB170 (sub_1800CB170.c)
 *     sub_1801012B0 @ 0x1801012B0 (sub_1801012B0.c)
 * Callees:
 *     sub_1800F5E90 @ 0x1800F5E90 (sub_1800F5E90.c)
 */

__int64 __fastcall sub_1800A5238(__int64 a1, __int64 a2, _QWORD *a3)
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
  v4 = *(_QWORD *)(a1 + 18648);
  *(_QWORD *)&v6 = *a3;
  *((_QWORD *)&v6 + 1) = v3;
  return sub_1800F5E90(v4, a2, &v6);
}
