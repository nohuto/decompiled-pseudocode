/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VDummyWindow@CExperienceManagerAnimationHelper@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x180075B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppSizeConstraintsCache@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180075C10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppSizeConstrai.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall CWRLImpWndProc<CExperienceManagerAnimationHelper::DummyWindow>::s_WndProcBase(
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LONG_PTR *lParam)
{
  LONG_PTR WindowLongPtrW; // rax
  LONG_PTR v9; // rbx
  __int64 v10; // rsi
  LONG_PTR v12; // rbx

  if ( Msg == 129 )
  {
    v12 = *lParam;
    if ( *lParam )
    {
      *(_QWORD *)(v12 + 24) = hWnd;
      SetWindowLongPtrW(hWnd, 0, v12);
      return (**(__int64 (__fastcall ***)(__int64, HWND, __int64, WPARAM, LONG_PTR *))(v12 + 16))(
               v12 + 16,
               hWnd,
               129LL,
               wParam,
               lParam);
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    WindowLongPtrW = GetWindowLongPtrW(hWnd, 0);
    v9 = WindowLongPtrW;
    if ( !WindowLongPtrW )
      return DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
    _InterlockedIncrement((volatile signed __int32 *)(WindowLongPtrW + 12));
    v10 = (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(WindowLongPtrW + 16))(
            WindowLongPtrW + 16,
            hWnd,
            Msg,
            wParam,
            lParam);
    if ( Msg == 130 )
    {
      SetWindowLongPtrW(hWnd, 0, 0LL);
      *(_QWORD *)(v9 + 24) = 0LL;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAppSizeConstraintsCache>::Release(v9);
    return v10;
  }
}
