/*
 * XREFs of ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01E68E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006F324 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C0157414 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __fastcall WindowArrangementHotKeyCallback(LARGE_INTEGER a1, __int64 a2)
{
  const struct tagWND *v4; // rcx
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v6; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF

  if ( gpqForeground )
  {
    v4 = *(const struct tagWND **)(gpqForeground + 120LL);
    if ( v4 )
    {
      CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v4);
      if ( (dword_1C02C9C2C[4 * (a1.LowPart - 15)] & 1) != 0
        || (v6 = *(_QWORD *)(*((_QWORD *)CompositeAppFrameWindowOrSelf + 3) + 328LL)) == 0 )
      {
        if ( a1.QuadPart < 0x17uLL )
          PostEventMessageEx(
            *((struct tagTHREADINFO **)CompositeAppFrameWindowOrSelf + 2),
            *(_QWORD *)(*((_QWORD *)CompositeAppFrameWindowOrSelf + 2) + 432LL),
            0x11u,
            CompositeAppFrameWindowOrSelf,
            0,
            0LL,
            a1,
            0LL);
      }
      else
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 2LL * (a1.LowPart - 15));
        v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v10;
        v10[1] = v6;
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
        if ( anonymous_namespace_::NotifyShellSimplePayload(0LL, 3, 0LL, a2) )
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v6 + 16), 0);
        ThreadUnlock1(v9, v8);
      }
    }
  }
}
