/*
 * XREFs of ?ClampRegionToBounds@CHwFullScreenRenderTarget@@AEBAJPEAVCRegion@@@Z @ 0x1801675F0
 * Callers:
 *     ?ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x1800BCD30 (-ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z.c)
 *     ?CalculateRerenderDirtyFromScribble@CHwFullScreenRenderTarget@@AEBAJAEBVCRegion@@PEAV2@@Z @ 0x180167004 (-CalculateRerenderDirtyFromScribble@CHwFullScreenRenderTarget@@AEBAJAEBVCRegion@@PEAV2@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7CD8 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AppendRects@UMilRectF@@@CRegion@@QEAAJPEBUMilRectF@@I@Z @ 0x180166DBC (--$AppendRects@UMilRectF@@@CRegion@@QEAAJPEBUMilRectF@@I@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::ClampRegionToBounds(
        CHwFullScreenRenderTarget *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  int appended; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  float v7[4]; // [rsp+20h] [rbp-78h] BYREF
  int *v8; // [rsp+30h] [rbp-68h] BYREF
  int v9; // [rsp+38h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  (*(void (__fastcall **)(char *, float *))(*((_QWORD *)this + 18) + 328LL))((char *)this + 144, v7);
  v9 = 0;
  v8 = &v9;
  appended = CRegion::AppendRects<MilRectF>((void **)&v8, v7);
  v4 = appended;
  if ( appended >= 0 )
  {
    appended = FastRegion::CRegion::Intersect(a2, (const struct FastRegion::Internal::CRgnData **)&v8);
    v4 = appended;
    if ( appended >= 0 )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v5 = 1094LL;
  }
  else
  {
    v5 = 1092LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
    (const char *)(unsigned int)appended);
LABEL_7:
  FastRegion::CRegion::FreeMemory((void **)&v8);
  return v4;
}
