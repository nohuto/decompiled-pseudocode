/*
 * XREFs of ?SetNoActivate@AccessibilityExperienceManager@@UEAAX_N@Z @ 0x180352FE0
 * Callers:
 *     ?OnChromeOffsetsChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180352680 (-OnChromeOffsetsChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803528F0 (-OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x180353904 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AccessibilityExperienceManager::SetNoActivate(AccessibilityExperienceManager *this, char a2)
{
  __int64 v4; // rdi
  LONG WindowLongW; // eax
  LONG v6; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = *((_QWORD *)this + 29);
  if ( v4 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, &v7) >= 0
      && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v7 + 24LL))(v7, &hWnd) >= 0 )
    {
      WindowLongW = GetWindowLongW(hWnd, -20);
      if ( a2 )
      {
        v6 = WindowLongW | 0x8000000;
        *((_DWORD *)this + 81) = 0x8000000;
      }
      else
      {
        v6 = WindowLongW & 0xF7FFFFFF;
        *((_DWORD *)this + 81) = 0;
      }
      SetWindowLongW(hWnd, -20, v6);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
}
