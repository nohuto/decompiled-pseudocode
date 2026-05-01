/*
 * XREFs of ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1802C2554
 * Callers:
 *     ?OnCoreKeyboardClientRegistered@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerCoreKeyboardClientRegisteredEventArgs@45678@@Z @ 0x1802C3310 (-OnCoreKeyboardClientRegistered@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Cor.c)
 *     ?OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1802C3B3C (-OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1802C4814 (-OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@@Z @ 0x1802C51E4 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::ExecutePendingRequest(KeyboardHosting::TabTipAdapter *this)
{
  RTL_SRWLOCK *v1; // rdi
  __int128 v3; // xmm0
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (RTL_SRWLOCK *)((char *)this + 344);
  AcquireSRWLockExclusive((PSRWLOCK)this + 43);
  v3 = *(_OWORD *)((char *)this + 308);
  *((_WORD *)this + 154) = 0;
  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 79) = 9;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  if ( (_BYTE)v3 )
  {
    if ( BYTE1(v3) )
    {
      v4 = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(this, DWORD2(v3), DWORD1(v3));
      if ( v4 < 0 )
      {
        v5 = 769LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v4);
        return (unsigned int)v4;
      }
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this + 1) + 32LL))(
             (char *)this + 8,
             DWORD1(v3),
             DWORD2(v3));
      if ( v4 < 0 )
      {
        v5 = 773LL;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
