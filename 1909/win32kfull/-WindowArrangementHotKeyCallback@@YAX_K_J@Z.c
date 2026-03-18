/*
 * XREFs of ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01FBF20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0027734 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C01090CC (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __fastcall WindowArrangementHotKeyCallback(unsigned __int64 a1, __int64 a2)
{
  const struct tagWND *v4; // rcx
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp-18h]

  if ( gpqForeground )
  {
    v4 = *(const struct tagWND **)(gpqForeground + 128LL);
    if ( v4 )
    {
      CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v4);
      if ( (dword_1C02D861C[4 * (unsigned int)(a1 - 16)] & 1) != 0
        || (v7 = *(_QWORD *)(*((_QWORD *)CompositeAppFrameWindowOrSelf + 3) + 328LL)) == 0 )
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
        v12 = 0LL;
        v13 = 0LL;
        v14 = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 2LL * (unsigned int)(a1 - 16), v6);
        v12 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v12;
        v13 = v7;
        HMLockObject(v7);
        if ( anonymous_namespace_::NotifyShellSimplePayload(0LL, 3, 0LL, a2) )
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v7 + 16), 0);
        ThreadUnlock1(v10, v9, v11);
      }
    }
  }
}
