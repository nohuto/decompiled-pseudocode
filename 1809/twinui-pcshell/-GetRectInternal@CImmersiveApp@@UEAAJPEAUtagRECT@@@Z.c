/*
 * XREFs of ?GetRectInternal@CImmersiveApp@@UEAAJPEAUtagRECT@@@Z @ 0x18011C3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::GetRectInternal(CImmersiveApp *this, struct tagRECT *a2)
{
  char v4; // di
  signed int Error; // esi
  LONG left; // r8d
  LONG right; // ecx
  int v8; // edi
  LONG top; // ebx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  HWND hWnd[2]; // [rsp+28h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT rcDst; // [rsp+48h] [rbp-18h] BYREF

  hWnd[1] = (HWND)-2LL;
  SetRectEmpty(a2);
  *(_QWORD *)&rcDst.left = 0LL;
  *(_QWORD *)&rcDst.right = 0LL;
  v4 = *((_BYTE *)this + 592);
  Error = v4 != 0 ? 0x8007139F : 0;
  if ( !v4 )
    CopyRect(&rcDst, (const RECT *)((char *)this + 168));
  left = 0;
  *(_QWORD *)&Rect.left = 0LL;
  right = 0;
  *(_QWORD *)&Rect.right = 0LL;
  if ( !v4 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    Error = (*(__int64 (__fastcall **)(CImmersiveApp *, __int64 *))(*(_QWORD *)this + 496LL))(this, &v11);
    if ( Error >= 0 )
    {
      Error = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v11 + 24LL))(v11, hWnd);
      if ( Error >= 0 )
      {
        if ( GetWindowRect(hWnd[0], &Rect) )
          Error = 0;
        else
          Error = ResultFromKnownLastError();
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    right = Rect.right;
    left = Rect.left;
  }
  if ( Error >= 0 )
  {
    v8 = left + (right + rcDst.left - rcDst.right - left) / 2;
    top = Rect.top;
    CopyRect(a2, &rcDst);
    OffsetRect(a2, v8, top);
  }
  return (unsigned int)Error;
}
