/*
 * XREFs of ?ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x180060130
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6FB4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_8d1d22669522f9efa5acd9767be63994_::operator() @ 0x18020787C (_lambda_8d1d22669522f9efa5acd9767be63994_--operator().c)
 *     ?AddUnoptimizedToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@AEAAJAEBVCDirtyRegion@@@Z @ 0x180207924 (-AddUnoptimizedToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@AEAAJAEBVCDirtyRegion@@@Z.c)
 *     ?CalculateRerenderDirtyFromScribble@CHwFullScreenRenderTarget@@AEBAJAEBVCRegion@@PEAV2@@Z @ 0x180207A70 (-CalculateRerenderDirtyFromScribble@CHwFullScreenRenderTarget@@AEBAJAEBVCRegion@@PEAV2@@Z.c)
 *     ?ClampRegionToBounds@CHwFullScreenRenderTarget@@AEBAJPEAVCRegion@@@Z @ 0x180207FB8 (-ClampRegionToBounds@CHwFullScreenRenderTarget@@AEBAJPEAVCRegion@@@Z.c)
 *     ?ContributeRegionToDirty@CHwFullScreenRenderTarget@@CAJAEBVCRegion@@AEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x180208088 (-ContributeRegionToDirty@CHwFullScreenRenderTarget@@CAJAEBVCRegion@@AEBVCMILMatrix@@PEAVCDirtyRe.c)
 *     ?NeedsCopyFrontToBack@CHwFullScreenRenderTarget@@IEAA_NXZ @ 0x180208414 (-NeedsCopyFrontToBack@CHwFullScreenRenderTarget@@IEAA_NXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x180208790 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?FenceRenderAfterScribble@CComputeScribbleRenderer@@QEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18022C544 (-FenceRenderAfterScribble@CComputeScribbleRenderer@@QEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z @ 0x18022CB84 (-PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z.c)
 *     ?HasScribbleStarted@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEA_NPEAVCRegion@@@Z @ 0x18022DEA8 (-HasScribbleStarted@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEA_NPEAVCRegion@@@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::ContributeToDirtyRegion(
        CHwFullScreenRenderTarget *this,
        const struct CMILMatrix *a2,
        struct CDirtyRegion *a3)
{
  CComputeScribbleRenderer *v4; // rcx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  bool v14; // al
  RTL_SRWLOCK *v15; // rbx
  __int64 v16; // rcx
  int HasScribbleStarted; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  int v23; // [rsp+20h] [rbp-E0h] BYREF
  RTL_SRWLOCK *v24; // [rsp+28h] [rbp-D8h] BYREF
  char *v25; // [rsp+30h] [rbp-D0h] BYREF
  char v26; // [rsp+38h] [rbp-C8h]
  int *v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  int *v29; // [rsp+90h] [rbp-70h] BYREF
  int v30; // [rsp+98h] [rbp-68h] BYREF
  int *v31; // [rsp+E0h] [rbp-20h] BYREF
  int v32; // [rsp+E8h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  *((_BYTE *)this + 355) = 0;
  v4 = (CComputeScribbleRenderer *)*((_QWORD *)this + 43);
  if ( !v4 )
    return 0LL;
  v30 = 0;
  v29 = &v30;
  v8 = CComputeScribbleRenderer::PreRender(v4, (struct CRegion *)&v29);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v8 = CHwFullScreenRenderTarget::ClampRegionToBounds(
           (CHwFullScreenRenderTarget *)((char *)this - 208),
           (struct CRegion *)&v29);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 186LL;
      goto LABEL_20;
    }
    v11 = 272LL;
    if ( *((_DWORD *)this + 20) != 3 )
      v11 = 200LL;
    v8 = FastRegion::CRegion::Union((CHwFullScreenRenderTarget *)((char *)this + v11), (const struct CRegion *)&v29);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 190LL;
      goto LABEL_20;
    }
    v12 = *((_QWORD *)this + 43);
    v14 = 0;
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 32);
      if ( v13 )
      {
        if ( *(_BYTE *)(v13 + 208) )
          v14 = 1;
      }
    }
    *((_BYTE *)this + 355) = v14;
    if ( CHwFullScreenRenderTarget::NeedsCopyFrontToBack((CHwFullScreenRenderTarget *)((char *)this - 208))
      && *((_BYTE *)this + 355) )
    {
      v8 = CHwFullScreenRenderTarget::AddUnoptimizedToCurrentFrameInvalidRegion(
             (CHwFullScreenRenderTarget *)((char *)this - 208),
             a3);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 198LL;
        goto LABEL_20;
      }
      v15 = (RTL_SRWLOCK *)(*(_QWORD *)(*((_QWORD *)this + 43) + 32LL) + 232LL);
      AcquireSRWLockExclusive(v15);
      v16 = *((_QWORD *)this + 43);
      v32 = 0;
      v31 = &v32;
      v24 = v15;
      HasScribbleStarted = CComputeScribbleRenderer::CFramebuffer::HasScribbleStarted(
                             *(CComputeScribbleRenderer::CFramebuffer **)(v16 + 32),
                             (bool *)&v23,
                             (struct CRegion *)&v31);
      v9 = HasScribbleStarted;
      if ( HasScribbleStarted < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xEE,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
          (const char *)(unsigned int)HasScribbleStarted,
          v23);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xCD,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
          (const char *)v9,
          v23);
        goto LABEL_41;
      }
      if ( (_BYTE)v23 )
      {
        v28 = 0;
        v27 = &v28;
        v18 = CHwFullScreenRenderTarget::CalculateRerenderDirtyFromScribble(
                (CHwFullScreenRenderTarget *)((char *)this - 208),
                (const struct CRegion *)&v31,
                (struct CRegion *)&v27);
        v9 = v18;
        if ( v18 < 0 )
        {
          v19 = 212LL;
LABEL_31:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
            (const char *)(unsigned int)v18,
            v23);
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v27);
          goto LABEL_41;
        }
        if ( *v27 )
        {
          v18 = CHwFullScreenRenderTarget::ContributeRegionToDirty((const struct CRegion *)&v27, a2, a3);
          v9 = v18;
          if ( v18 < 0 )
          {
            v19 = 217LL;
            goto LABEL_31;
          }
          v18 = (*(__int64 (__fastcall **)(char *, int **))(*((_QWORD *)this - 26) + 280LL))((char *)this - 208, &v27);
          v9 = v18;
          if ( v18 < 0 )
          {
            v19 = 218LL;
            goto LABEL_31;
          }
        }
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v27);
      }
      if ( **((_DWORD **)this + 25) || **((_DWORD **)this + 34) )
      {
        v20 = *((_QWORD *)this + 43);
        v25 = (char *)this - 208;
        *(_BYTE *)(*(_QWORD *)(v20 + 32) + 240LL) = 1;
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
          &v24,
          0LL);
        if ( (_BYTE)v23 )
        {
          v21 = CComputeScribbleRenderer::FenceRenderAfterScribble(
                  *((CComputeScribbleRenderer **)this + 43),
                  *((struct CD3DDeviceLevel1 **)this + 1));
          v9 = v21;
          if ( v21 < 0 )
          {
            v22 = 240LL;
LABEL_40:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v22,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
              (const char *)(unsigned int)v21,
              v23);
            v26 = 0;
            lambda_8d1d22669522f9efa5acd9767be63994_::operator()(&v25);
            v15 = v24;
LABEL_41:
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v31);
            if ( v15 )
              ReleaseSRWLockExclusive(v15);
            goto LABEL_43;
          }
        }
        v21 = (*(__int64 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)this + 248LL))(this);
        v9 = v21;
        if ( v21 < 0 )
        {
          v22 = 251LL;
          goto LABEL_40;
        }
        v26 = 0;
        lambda_8d1d22669522f9efa5acd9767be63994_::operator()(&v25);
        v15 = v24;
      }
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v31);
      if ( v15 )
        ReleaseSRWLockExclusive(v15);
    }
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v29);
    return 0LL;
  }
  v10 = 183LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
    (const char *)(unsigned int)v8,
    v23);
LABEL_43:
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v29);
  return v9;
}
