/*
 * XREFs of ??1DXGPROCESSVMWP@@UEAA@XZ @ 0x1C00444E0
 * Callers:
 *     ??_EDXGPROCESSVMWP@@UEAAPEAXI@Z @ 0x1C00445A0 (--_EDXGPROCESSVMWP@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z @ 0x1C00445E4 (--_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C00FA354 (--1DXGPROCESS@@MEAA@XZ.c)
 */

void __fastcall DXGPROCESSVMWP::~DXGPROCESSVMWP(DXGPROCESSVMWP *this, unsigned int a2)
{
  void *v3; // rcx

  *(_QWORD *)this = &DXGPROCESSVMWP::`vftable';
  v3 = (void *)*((_QWORD *)this + 54);
  if ( v3 )
    DXGVIRTUALMACHINE::`scalar deleting destructor'(v3, a2);
  DXGPROCESS::~DXGPROCESS(this);
}
