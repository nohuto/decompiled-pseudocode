/*
 * XREFs of sub_1800910E0 @ 0x1800910E0
 * Callers:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_180110C10 @ 0x180110C10 (sub_180110C10.c)
 * Callees:
 *     sub_1800F5FFC @ 0x1800F5FFC (sub_1800F5FFC.c)
 */

__int64 __fastcall sub_1800910E0(__int64 a1, __int64 a2, _QWORD *a3)
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
  return sub_1800F5FFC(v4, a2, &v6);
}
