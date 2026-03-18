/*
 * XREFs of ??1CTreeData@@UEAA@XZ @ 0x180021BEC
 * Callers:
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x180021890 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECDesktopTreeData@@UEAAPEAXI@Z @ 0x1801B5DE0 (--_ECDesktopTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECTreeData@@UEAAPEAXI@Z @ 0x1801B5E30 (--_ECTreeData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x180021CEC (--$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTreeData::~CTreeData(CTreeData *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &CTreeData::`vftable';
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 4);
  if ( v2 )
  {
    (**v2)(v2, 1LL);
    *((_QWORD *)this + 4) = 0LL;
  }
  SAFE_DELETE<CMILMatrix>((char *)this + 112);
  SAFE_DELETE<CMILMatrix>((char *)this + 152);
  SAFE_DELETE<CMILMatrix>((char *)this + 160);
  CDrawListCacheSet::~CDrawListCacheSet((CTreeData *)((char *)this + 128));
}
