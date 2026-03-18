/*
 * XREFs of ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C027071C
 * Callers:
 *     GreReferenceObject @ 0x1C008A04C (GreReferenceObject.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREF::vKeepIt(SURFREF *this)
{
  INC_SHARE_REF_CNT(*(_QWORD *)this);
}
