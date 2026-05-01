/*
 * XREFs of ?VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z @ 0x18032CC90
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x180321B30 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ??$_Try_emplace@AEBI$$V@?$unordered_map@IUViewState@KeyboardHosting@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18032A6AC (--$_Try_emplace@AEBI$$V@-$unordered_map@IUViewState@KeyboardHosting@@U-$hash@I@std@@U-$equal_to@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedHide(
        KeyboardHosting::TabTipAdapterPolicy *this,
        int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  RTL_SRWLOCK *v5; // rdi
  __int64 v6; // rax
  __int64 v8; // [rsp+28h] [rbp-50h] BYREF
  _OWORD v9[4]; // [rsp+38h] [rbp-40h] BYREF
  int v10; // [rsp+88h] [rbp+10h] BYREF

  v10 = a2;
  *a4 = 1;
  *((_BYTE *)this + 432) = 0;
  v5 = (RTL_SRWLOCK *)((char *)this + 424);
  AcquireSRWLockExclusive((PSRWLOCK)this + 53);
  LOBYTE(v9[0]) = 0;
  memset_0((char *)v9 + 4, 0, 0x2CuLL);
  std::unordered_map<unsigned int,KeyboardHosting::ViewState>::_Try_emplace<unsigned int const &,>(
    (_QWORD *)this + 45,
    (__int64)&v8,
    (unsigned __int8 *)&v10);
  v6 = v8;
  *(_OWORD *)(v8 + 20) = v9[0];
  *(_OWORD *)(v6 + 36) = v9[1];
  *(_OWORD *)(v6 + 52) = v9[2];
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  return 0LL;
}
