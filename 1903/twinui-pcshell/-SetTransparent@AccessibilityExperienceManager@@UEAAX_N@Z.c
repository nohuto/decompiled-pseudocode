/*
 * XREFs of ?SetTransparent@AccessibilityExperienceManager@@UEAAX_N@Z @ 0x180333870
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     CreationThreadDispatcher::RunAsync__lambda_3811e63994a6acdbea5f41d0f15c3e3d___ @ 0x180331470 (CreationThreadDispatcher--RunAsync__lambda_3811e63994a6acdbea5f41d0f15c3e3d___.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AccessibilityExperienceManager::SetTransparent(AccessibilityExperienceManager *this, char a2)
{
  __int64 v4; // rbx
  LONG WindowLongW; // r8d
  unsigned int v6; // eax
  LONG v7; // r8d
  __int128 v8; // [rsp+30h] [rbp-10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+20h] BYREF
  HWND hWnd; // [rsp+70h] [rbp+30h] BYREF

  v9 = 0LL;
  v4 = *((_QWORD *)this + 29);
  if ( v4 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, &v9) >= 0
      && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v9 + 24LL))(v9, &hWnd) >= 0 )
    {
      WindowLongW = GetWindowLongW(hWnd, -20);
      v6 = WindowLongW & 0xFFF7FFDF;
      v7 = WindowLongW | 0x80020;
      if ( !a2 )
        v7 = v6;
      SetWindowLongW(hWnd, -20, v7);
      *(_QWORD *)&v8 = (char *)this - 152;
      BYTE8(v8) = a2;
      CreationThreadDispatcher::RunAsync__lambda_3811e63994a6acdbea5f41d0f15c3e3d___(*((_QWORD *)this + 18), &v8);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
}
