/*
 * XREFs of ?AddUnoptimizedToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@AEAAJAEBVCDirtyRegion@@@Z @ 0x180207924
 * Callers:
 *     ?ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x180060130 (-ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18009004C (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::AddUnoptimizedToCurrentFrameInvalidRegion(
        CHwFullScreenRenderTarget *this,
        const struct CDirtyRegion *a2,
        double a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  gsl::details *v7; // rcx
  __int64 v8; // rdi
  __int64 i; // rbx
  _DWORD *v10; // rax
  int v11; // eax
  unsigned int v12; // ebp
  gsl::details *v13; // [rsp+28h] [rbp-40h]
  _DWORD v14[4]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v15[16]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *((_BYTE *)a2 + 2883) )
  {
    v4 = (*(__int64 (__fastcall **)(CHwFullScreenRenderTarget *, _QWORD))(*(_QWORD *)this + 168LL))(this, 0LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E5,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
  }
  else
  {
    v7 = (const struct CDirtyRegion *)((char *)a2 + 24);
    v8 = 0LL;
    v13 = (const struct CDirtyRegion *)((char *)a2 + 24);
    for ( i = 0LL; i != 128; i += 16LL )
    {
      if ( v8 == 8 )
        goto LABEL_11;
      v10 = (_DWORD *)PixelAlign((__int64)v15, (gsl::details *)((char *)v7 + i), a3);
      v14[0] = *v10;
      v14[1] = v10[1];
      v14[2] = v10[2];
      v14[3] = v10[3];
      v11 = (*(__int64 (__fastcall **)(CHwFullScreenRenderTarget *, _DWORD *))(*(_QWORD *)this + 168LL))(this, v14);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3ED,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
          (const char *)(unsigned int)v11);
        return v12;
      }
      if ( i < 0 )
      {
LABEL_11:
        gsl::details::terminate(v7);
        __debugbreak();
      }
      v7 = v13;
      ++v8;
    }
  }
  return 0LL;
}
