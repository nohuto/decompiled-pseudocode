/*
 * XREFs of ?BuildFromCRegion@CRegionShape@@QEAAJAEBVCRegion@@@Z @ 0x180015E50
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180047930 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B6E30 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A8A88 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegionShape::BuildFromCRegion(CRegionShape *this, const struct CRegion *a2)
{
  FastRegion::CRegion *v2; // rbx
  __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx

  v2 = (CRegionShape *)((char *)this + 16);
  **((_DWORD **)this + 2) = 0;
  v4 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = FastRegion::CRegion::Copy(v2, a2);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x17u);
  return v7;
}
