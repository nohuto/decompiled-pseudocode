/*
 * XREFs of ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01C20F0
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00602A4 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006E820 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall WindowArrangementHotKeyCallback(unsigned __int64 a1, __int64 a2)
{
  const struct tagWND *v4; // rcx
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v6; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v11[3]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v12[7]; // [rsp+58h] [rbp-50h] BYREF

  if ( gpqForeground )
  {
    v4 = *(const struct tagWND **)(gpqForeground + 120LL);
    if ( v4 )
    {
      CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v4);
      if ( (dword_1C02D93FC[4 * (unsigned int)(a1 - 15)] & 1) != 0
        || (v6 = *(_QWORD *)(*((_QWORD *)CompositeAppFrameWindowOrSelf + 3) + 328LL)) == 0 )
      {
        if ( a1 < 0x17 )
          PostEventMessageEx(
            *((struct tagTHREADINFO **)CompositeAppFrameWindowOrSelf + 2),
            *(_QWORD *)(*((_QWORD *)CompositeAppFrameWindowOrSelf + 2) + 424LL),
            0x11u,
            (__int64)CompositeAppFrameWindowOrSelf,
            0,
            0LL,
            a1,
            0LL);
      }
      else
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 2LL * (unsigned int)(a1 - 15));
        v11[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v11;
        v11[1] = v6;
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
        memset(v12, 0, sizeof(v12));
        v12[0] = 0LL;
        v12[2] = 0LL;
        LODWORD(v12[1]) = 3;
        v12[3] = a2;
        if ( (unsigned int)xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v12) )
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v6 + 16), 0);
        ThreadUnlock1(v9, v8, v10);
      }
    }
  }
}
