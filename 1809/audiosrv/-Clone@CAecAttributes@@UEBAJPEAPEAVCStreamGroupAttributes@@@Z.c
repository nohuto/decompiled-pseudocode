/*
 * XREFs of ?Clone@CAecAttributes@@UEBAJPEAPEAVCStreamGroupAttributes@@@Z @ 0x1800F0640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAecAttributes::Clone(CAecAttributes *this, struct CStreamGroupAttributes **a2)
{
  return CAecAttributes::CreateInstance(*((_QWORD *)this + 2), *((unsigned int *)this + 6));
}
