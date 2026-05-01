/*
 * XREFs of ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802B5E50
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@TouchKeyboardExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1802B80A0 (-OnClientWindowReadyForPresentationChanged@TouchKeyboardExperienceManager@@AEAAJPEAUIClientWindo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180199084 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_KBViewInfo_________lambda_42a747e7d0186b6968b291f71e865691___ @ 0x1802B4028 (std--find_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_KBV.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::FindViewInfo(__int64 a1, __int64 a2, _QWORD *a3)
{
  RTL_SRWLOCK *v6; // rsi
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v10; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+58h] [rbp+10h]

  v6 = (RTL_SRWLOCK *)(a1 + 448);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 448));
  v11 = v6;
  std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_KBViewInfo_________lambda_42a747e7d0186b6968b291f71e865691___(
    &v10,
    *(_QWORD ***)(a1 + 456),
    *(_QWORD ***)(a1 + 464),
    a2);
  if ( v10 == *(_QWORD **)(a1 + 464) )
  {
    v7 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8AF,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80070490LL);
  }
  else
  {
    std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, v10);
    v7 = 0;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v7;
}
