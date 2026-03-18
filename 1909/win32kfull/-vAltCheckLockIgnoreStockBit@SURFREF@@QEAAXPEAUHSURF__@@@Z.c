/*
 * XREFs of ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C027362C
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00CCC00 (NtGdiDdDDICreateDCFromMemory.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C0102A70 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     DxgkEngBltViaGDI @ 0x1C0273B20 (DxgkEngBltViaGDI.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREF::vAltCheckLockIgnoreStockBit(SURFREF *this, HSURF a2)
{
  HSURF v3; // rcx

  v3 = a2;
  LOBYTE(a2) = 5;
  *(_QWORD *)this = HmgShareLockCheckIgnoreStockBit(v3, a2);
}
