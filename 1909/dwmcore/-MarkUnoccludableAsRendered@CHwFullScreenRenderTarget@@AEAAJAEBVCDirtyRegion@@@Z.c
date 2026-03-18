/*
 * XREFs of ?MarkUnoccludableAsRendered@CHwFullScreenRenderTarget@@AEAAJAEBVCDirtyRegion@@@Z @ 0x180166354
 * Callers:
 *     ?ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x1800BE170 (-ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180022AA8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::MarkUnoccludableAsRendered(
        CHwFullScreenRenderTarget *this,
        const struct CDirtyRegion *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  char *v6; // rbx
  char *v7; // rdi
  int *v8; // rax
  int v9; // eax
  unsigned int v10; // ebp
  int v11[4]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_BYTE *)a2 + 2883) )
  {
    v3 = (*(__int64 (__fastcall **)(CHwFullScreenRenderTarget *, _QWORD))(*(_QWORD *)this + 168LL))(this, 0LL);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42E,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
        (const char *)(unsigned int)v3);
      return v4;
    }
  }
  else
  {
    v6 = (char *)a2 + 152;
    v7 = (char *)a2 + 280;
    while ( v6 != v7 )
    {
      v8 = (int *)PixelAlign((__int64)v12, (__int64)v6);
      v11[0] = *v8;
      v11[1] = v8[1];
      v11[2] = v8[2];
      v11[3] = v8[3];
      v9 = (*(__int64 (__fastcall **)(CHwFullScreenRenderTarget *, int *))(*(_QWORD *)this + 168LL))(this, v11);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x436,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
          (const char *)(unsigned int)v9);
        return v10;
      }
      v6 += 16;
    }
  }
  return 0LL;
}
