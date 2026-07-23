/*
 * XREFs of MiResumeMarkPageLists @ 0x140159BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MiResumeMarkPageLists(__int64 a1, int a2)
{
  if ( a2 )
    *(_BYTE *)(a1 + 4764) = a2;
  *(_BYTE *)(a1 + 4765) = 1;
}
