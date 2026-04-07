/*
 * XREFs of ??1CMagnifierControl@@EEAA@XZ @ 0x1800841C8
 * Callers:
 *     ??_ECMagnifierControl@@EEAAPEAXI@Z @ 0x180084320 (--_ECMagnifierControl@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180014A44 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4Repo.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHPEAVMagnifierTableElement@CMagnifierControl@@@Z @ 0x180084FE8 (-RemoveElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHP.c)
 *     ?reset@?$unique_ptr@VMagnifierExperienceHelper@@U?$default_delete@VMagnifierExperienceHelper@@@wistd@@@wistd@@QEAAXPEAVMagnifierExperienceHelper@@@Z @ 0x1800851E4 (-reset@-$unique_ptr@VMagnifierExperienceHelper@@U-$default_delete@VMagnifierExperienceHelper@@@w.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___ @ 0x18008E6F4 (CWindowList--ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___.c)
 */

void __fastcall CMagnifierControl::~CMagnifierControl(struct _RTL_GENERIC_TABLE *this)
{
  struct _LIST_ENTRY **p_Blink; // rbx
  __int64 v3; // rcx
  CBaseObject *OrderedPointer; // rcx
  CBaseObject *FreeRoutine; // rcx
  CBaseObject *TableContext; // rcx
  PRTL_GENERIC_COMPARE_ROUTINE CompareRoutine; // rcx
  __int64 v8; // rcx
  CMagnifierControl::MagnifierTableElement *v9; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF

  this->TableRoot = (PRTL_SPLAY_LINKS)&CMagnifierControl::`vftable'{for `CBaseObject'};
  p_Blink = &this->InsertOrderList.Blink;
  this->InsertOrderList.Blink = (struct _LIST_ENTRY *)&CMagnifierControl::`vftable'{for `ISoftwareCursorChangeListener'};
  wil::Feature<__WilFeatureTraits_Feature_MagnifierNoJitter>::ReportUsageToService();
  RestartKey = p_Blink;
  v3 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61);
  v10[0] = &RestartKey;
  v10[1] = v3;
  CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___(v3, v10);
  OrderedPointer = (CBaseObject *)this->OrderedPointer;
  if ( OrderedPointer )
  {
    CBaseObject::Release(OrderedPointer);
    this->OrderedPointer = 0LL;
  }
  FreeRoutine = (CBaseObject *)this->FreeRoutine;
  if ( FreeRoutine )
  {
    CBaseObject::Release(FreeRoutine);
    this->FreeRoutine = 0LL;
  }
  TableContext = (CBaseObject *)this->TableContext;
  if ( TableContext )
  {
    CBaseObject::Release(TableContext);
    this->TableContext = 0LL;
  }
  CompareRoutine = this->CompareRoutine;
  if ( CompareRoutine )
  {
    (*(void (__fastcall **)(PRTL_GENERIC_COMPARE_ROUTINE))(*(_QWORD *)CompareRoutine + 16LL))(CompareRoutine);
    this->CompareRoutine = 0LL;
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&this->WhichOrderedElement + 24LL))(*(_QWORD *)&this->WhichOrderedElement);
  v8 = *(_QWORD *)&this->WhichOrderedElement;
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *(_QWORD *)&this->WhichOrderedElement = 0LL;
  }
  wistd::unique_ptr<MagnifierExperienceHelper,wistd::default_delete<MagnifierExperienceHelper>>::reset(
    &this[2].WhichOrderedElement,
    0LL);
  while ( 1 )
  {
    RestartKey = 0LL;
    v9 = (CMagnifierControl::MagnifierTableElement *)RtlEnumerateGenericTableWithoutSplaying(this + 1, &RestartKey);
    if ( !v9 )
      break;
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::RemoveElement(this + 1, v9);
  }
  this->TableRoot = (PRTL_SPLAY_LINKS)&CGlassColorizationResources::`vftable';
}
