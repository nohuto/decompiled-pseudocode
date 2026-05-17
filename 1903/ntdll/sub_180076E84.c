/*
 * XREFs of sub_180076E84 @ 0x180076E84
 * Callers:
 *     sub_180076BD0 @ 0x180076BD0 (sub_180076BD0.c)
 *     sub_1801031E8 @ 0x1801031E8 (sub_1801031E8.c)
 *     sub_1801032A0 @ 0x1801032A0 (sub_1801032A0.c)
 *     sub_1801033C4 @ 0x1801033C4 (sub_1801033C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180076E84(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
  if ( *(_BYTE *)(a1 + 418) == 2 )
    v2 = *(_QWORD *)(a1 + 408);
  else
    v2 = 0LL;
  if ( v2 )
    v1 -= *(_QWORD *)(v2 + 72);
  return v1;
}
