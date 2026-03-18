/*
 * XREFs of ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C0270E2C
 * Callers:
 *     GreReferenceObject @ 0x1C004567C (GreReferenceObject.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREF::vKeepIt(SURFREF *this)
{
  INC_SHARE_REF_CNT(*(_QWORD *)this);
}
