/*
 * XREFs of NtUserGetProp @ 0x1C00F5E70
 * Callers:
 *     <none>
 * Callees:
 *     GetSharedPropForFilteredProcesses @ 0x1C00F5FE0 (GetSharedPropForFilteredProcesses.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall NtUserGetProp(HWND a1, unsigned __int16 a2)
{
  __int64 v4; // rbx
  struct tagWND *v5; // rsi
  __int64 Prop; // rdi
  __int64 v7; // rcx
  _BYTE v9[16]; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-58h] BYREF

  v4 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v9, a1, 1, 0, 0, 0);
  if ( CHMRefHwndByHandle::bValid((CHMRefHwndByHandle *)v9) )
  {
    v5 = CHMRefHwndByHandle::rpwnd((CHMRefHwndByHandle *)v9);
    Prop = RealGetProp(*((_QWORD *)v5 + 18), a2, 0LL);
    if ( !Prop && (*((_DWORD *)v5 + 82) & 0x10) != 0 )
    {
      if ( a2 == 0xA914 )
        goto LABEL_4;
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)v5 + 2) + 416LL), &ApcState);
      Prop = GetSharedPropForFilteredProcesses(v5, a2);
      KeUnstackDetachProcess(&ApcState);
    }
    v4 = Prop;
  }
LABEL_4:
  CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v9);
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
