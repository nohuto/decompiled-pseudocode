/*
 * XREFs of InterAlign @ 0x1C02C520C
 * Callers:
 *     itrp_ALIGNRP @ 0x1C02C5CD0 (itrp_ALIGNRP.c)
 *     itrp_MDRP @ 0x1C02CB250 (itrp_MDRP.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall InterAlign(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // r10
  int v5; // ecx
  int v6; // edx
  int v7; // r8d
  int v8; // eax

  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_DWORD *)(v4 + 4LL * a2);
  v6 = *(_DWORD *)(v4 + 4LL * a4);
  v7 = *(_DWORD *)(v4 + 4LL * a3);
  v8 = v6;
  if ( v5 <= v6 )
    v8 = v5;
  if ( v8 > v7 )
    return 0LL;
  if ( v5 <= v6 )
    v5 = *(_DWORD *)(v4 + 4LL * a4);
  return v7 <= v5;
}
