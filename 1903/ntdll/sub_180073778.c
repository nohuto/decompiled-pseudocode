/*
 * XREFs of sub_180073778 @ 0x180073778
 * Callers:
 *     sub_18004EE4C @ 0x18004EE4C (sub_18004EE4C.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_180073778(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = *a2 - *(_QWORD *)(a1 + 16);
  if ( *a2 == *(_QWORD *)(a1 + 16) )
    v2 = a2[1] - *(_QWORD *)(a1 + 24);
  return v2 == 0;
}
