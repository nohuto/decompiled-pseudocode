/*
 * XREFs of ?_OnLButtonDown@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1803DA058
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803DB1E8 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x1803DA6FC (-_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 */

void __fastcall CDragVisual::_OnLButtonDown(CDragVisual *this, struct tagPOINT a2)
{
  IUnknown *v4; // rcx
  void *v5; // rcx
  void *ppvOut; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 37) != 6 || *((_DWORD *)this + 82) )
  {
    if ( *((_QWORD *)this + 21) )
    {
      v4 = (IUnknown *)*((_QWORD *)this + 2);
      ppvOut = 0LL;
      if ( IUnknown_QueryService(
             v4,
             &GUID_b849acb5_8ac5_4fb8_88b6_55c749d25a44,
             &GUID_b849acb5_8ac5_4fb8_88b6_55c749d25a44,
             &ppvOut) >= 0 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 48LL))(ppvOut);
      v5 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
  }
  else
  {
    SetCapture(*((HWND *)this + 19));
    *(struct tagPOINT *)((char *)this + 300) = a2;
    CDragVisual::_OnPressDown(this, a2);
  }
}
