/*
 * XREFs of ??1CMagnifierControl@@EEAA@XZ @ 0x18007E36C
 * Callers:
 *     ??_ECMagnifierControl@@EEAAPEAXI@Z @ 0x18007E480 (--_ECMagnifierControl@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHPEAVMagnifierTableElement@CMagnifierControl@@@Z @ 0x18007EDC4 (-RemoveElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHP.c)
 */

void __fastcall CMagnifierControl::~CMagnifierControl(struct _RTL_GENERIC_TABLE *this)
{
  CBaseObject *OrderedPointer; // rcx
  CBaseObject *FreeRoutine; // rcx
  CBaseObject *TableContext; // rcx
  PRTL_GENERIC_COMPARE_ROUTINE CompareRoutine; // rcx
  __int64 v6; // rcx
  CMagnifierControl::MagnifierTableElement *v7; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  this->TableRoot = (PRTL_SPLAY_LINKS)&CMagnifierControl::`vftable';
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
  v6 = *(_QWORD *)&this->WhichOrderedElement;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *(_QWORD *)&this->WhichOrderedElement = 0LL;
  }
  this->InsertOrderList.Blink = 0LL;
  while ( 1 )
  {
    RestartKey = 0LL;
    v7 = (CMagnifierControl::MagnifierTableElement *)RtlEnumerateGenericTableWithoutSplaying(this + 1, &RestartKey);
    if ( !v7 )
      break;
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::RemoveElement(this + 1, v7);
  }
  this->TableRoot = (PRTL_SPLAY_LINKS)&CGlassColorizationResources::`vftable';
}
