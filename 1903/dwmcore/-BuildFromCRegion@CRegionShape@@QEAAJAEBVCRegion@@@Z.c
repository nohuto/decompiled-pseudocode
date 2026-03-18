/*
 * XREFs of ?BuildFromCRegion@CRegionShape@@QEAAJAEBVCRegion@@@Z @ 0x1800AE398
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800677D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z @ 0x1800AD240 (-GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD330 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180090988 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegionShape::BuildFromCRegion(CRegionShape *this, int **a2)
{
  int **v2; // rbx
  __int64 v4; // r8
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  v2 = (int **)((char *)this + 16);
  **((_DWORD **)this + 2) = 0;
  v4 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = FastRegion::CRegion::Copy(v2, a2);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x17u, 0LL);
  return v7;
}
