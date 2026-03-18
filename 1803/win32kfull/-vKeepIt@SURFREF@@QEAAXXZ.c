/*
 * XREFs of ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C01970AC
 * Callers:
 *     GreReferenceObject @ 0x1C00C5604 (GreReferenceObject.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREF::vKeepIt(SURFREF *this)
{
  INC_SHARE_REF_CNT(*(_QWORD *)this);
}
