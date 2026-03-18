/*
 * XREFs of ?MarkUnoccludableAsRendered@CHwFullScreenRenderTarget@@AEAAJAEBVCDirtyRegion@@@Z @ 0x180167A44
 * Callers:
 *     ?ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x1800BCD30 (-ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800B130C (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::MarkUnoccludableAsRendered(
        CHwFullScreenRenderTarget *this,
        const struct CDirtyRegion *a2,
        double a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  char *v7; // rbx
  char *v8; // rdi
  int *v9; // rax
  int v10; // eax
  unsigned int v11; // ebp
  int v12[4]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_BYTE *)a2 + 2883) )
  {
    v4 = (*(__int64 (__fastcall **)(CHwFullScreenRenderTarget *, _QWORD))(*(_QWORD *)this + 168LL))(this, 0LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42E,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
  }
  else
  {
    v7 = (char *)a2 + 152;
    v8 = (char *)a2 + 280;
    while ( v7 != v8 )
    {
      v9 = (int *)PixelAlign((__int64)v13, v7, a3);
      v12[0] = *v9;
      v12[1] = v9[1];
      v12[2] = v9[2];
      v12[3] = v9[3];
      v10 = (*(__int64 (__fastcall **)(CHwFullScreenRenderTarget *, int *))(*(_QWORD *)this + 168LL))(this, v12);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x436,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
          (const char *)(unsigned int)v10);
        return v11;
      }
      v7 += 16;
    }
  }
  return 0LL;
}
