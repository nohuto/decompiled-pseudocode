/*
 * XREFs of ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01FC1D0
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C008A4B4 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C012E190 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __fastcall WindowArrangementHotKeyCallback(unsigned __int64 a1)
{
  const struct tagWND *v2; // rcx
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-18h]

  if ( gpqForeground )
  {
    v2 = *(const struct tagWND **)(gpqForeground + 128LL);
    if ( v2 )
    {
      CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v2);
      if ( (dword_1C02DADDC[4 * (unsigned int)(a1 - 16)] & 1) != 0
        || (v6 = *(_QWORD *)(*((_QWORD *)CompositeAppFrameWindowOrSelf + 3) + 328LL)) == 0 )
      {
        if ( a1 < 0x18 )
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
        v11 = 0LL;
        v12 = 0LL;
        v13 = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread(
                              (__int64)KeGetCurrentThread(),
                              2LL * (unsigned int)(a1 - 16),
                              v4,
                              v5);
        v11 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
        v12 = v6;
        HMLockObject(v6);
        if ( anonymous_namespace_::NotifyShellSimplePayload() )
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v6 + 16), 0);
        ThreadUnlock1(v9, v8, v10);
      }
    }
  }
}
