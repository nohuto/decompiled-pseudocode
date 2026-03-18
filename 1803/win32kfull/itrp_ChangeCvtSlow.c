/*
 * XREFs of itrp_ChangeCvtSlow @ 0x1C02C6594
 * Callers:
 *     InvokeMovePoint @ 0x1C02C5308 (InvokeMovePoint.c)
 * Callees:
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 *     itrp_GetCVTScale @ 0x1C02C8320 (itrp_GetCVTScale.c)
 */

__int64 __fastcall itrp_ChangeCvtSlow(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdi
  int CVTScale; // eax
  __int64 result; // rax

  v4 = a2;
  CVTScale = itrp_GetCVTScale();
  result = CompDiv(CVTScale, (__int64)a3 << 16);
  *(_DWORD *)(*(_QWORD *)(qword_1C0327180 + 16) + 4 * v4) += result;
  return result;
}
