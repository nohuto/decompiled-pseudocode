/*
 * XREFs of ?ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x1800BCD30
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7904 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_580f0a00adc947519c271a5e102e8e8a_::operator() @ 0x180166F5C (_lambda_580f0a00adc947519c271a5e102e8e8a_--operator().c)
 *     ?CalculateRerenderDirtyFromScribble@CHwFullScreenRenderTarget@@AEBAJAEBVCRegion@@PEAV2@@Z @ 0x180167004 (-CalculateRerenderDirtyFromScribble@CHwFullScreenRenderTarget@@AEBAJAEBVCRegion@@PEAV2@@Z.c)
 *     ?ClampRegionToBounds@CHwFullScreenRenderTarget@@AEBAJPEAVCRegion@@@Z @ 0x1801675F0 (-ClampRegionToBounds@CHwFullScreenRenderTarget@@AEBAJPEAVCRegion@@@Z.c)
 *     ?ContributeRegionToDirty@CHwFullScreenRenderTarget@@CAJAEBVCRegion@@AEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x1801676C0 (-ContributeRegionToDirty@CHwFullScreenRenderTarget@@CAJAEBVCRegion@@AEBVCMILMatrix@@PEAVCDirtyRe.c)
 *     ?MarkUnoccludableAsRendered@CHwFullScreenRenderTarget@@AEAAJAEBVCDirtyRegion@@@Z @ 0x180167A44 (-MarkUnoccludableAsRendered@CHwFullScreenRenderTarget@@AEAAJAEBVCDirtyRegion@@@Z.c)
 *     ?NeedsCopyFrontToBack@CHwFullScreenRenderTarget@@IEAA_NXZ @ 0x180167B50 (-NeedsCopyFrontToBack@CHwFullScreenRenderTarget@@IEAA_NXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x180167F84 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?FenceRenderAfterScribble@CComputeScribbleRenderer@@QEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1801AD804 (-FenceRenderAfterScribble@CComputeScribbleRenderer@@QEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z @ 0x1801ADE38 (-PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z.c)
 *     ?HasScribbleStarted@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEA_NPEAVCRegion@@@Z @ 0x1801B5DE4 (-HasScribbleStarted@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEA_NPEAVCRegion@@@Z.c)
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
  __int64 v16; // rax
  int HasScribbleStarted; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  int v26; // [rsp+20h] [rbp-E0h] BYREF
  RTL_SRWLOCK *v27; // [rsp+28h] [rbp-D8h] BYREF
  char *v28; // [rsp+30h] [rbp-D0h] BYREF
  char v29; // [rsp+38h] [rbp-C8h]
  int *v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  int *v32; // [rsp+90h] [rbp-70h] BYREF
  int v33; // [rsp+98h] [rbp-68h] BYREF
  int *v34; // [rsp+E0h] [rbp-20h] BYREF
  int v35; // [rsp+E8h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  *((_BYTE *)this + 355) = 0;
  v4 = (CComputeScribbleRenderer *)*((_QWORD *)this + 43);
  if ( !v4 )
    return 0LL;
  v33 = 0;
  v32 = &v33;
  v8 = CComputeScribbleRenderer::PreRender(v4, (struct CRegion *)&v32);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v8 = CHwFullScreenRenderTarget::ClampRegionToBounds(
           (CHwFullScreenRenderTarget *)((char *)this - 144),
           (struct CRegion *)&v32);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 221LL;
      goto LABEL_11;
    }
    v11 = 272LL;
    if ( *((_DWORD *)this + 20) != 3 )
      v11 = 200LL;
    v8 = FastRegion::CRegion::Union((void **)((char *)this + v11), (const struct FastRegion::Internal::CRgnData **)&v32);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 225LL;
      goto LABEL_11;
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
    if ( CHwFullScreenRenderTarget::NeedsCopyFrontToBack((CHwFullScreenRenderTarget *)((char *)this - 144))
      && *((_BYTE *)this + 355) )
    {
      v15 = (RTL_SRWLOCK *)(*(_QWORD *)(*((_QWORD *)this + 43) + 32LL) + 232LL);
      AcquireSRWLockExclusive(v15);
      v35 = 0;
      v34 = &v35;
      v16 = *((_QWORD *)this + 43);
      v27 = v15;
      HasScribbleStarted = CComputeScribbleRenderer::CFramebuffer::HasScribbleStarted(
                             *(CComputeScribbleRenderer::CFramebuffer **)(v16 + 32),
                             (bool *)&v26,
                             (struct CRegion *)&v34);
      v9 = HasScribbleStarted;
      if ( HasScribbleStarted < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x112,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
          (const char *)(unsigned int)HasScribbleStarted,
          v26);
        v18 = v9;
        v19 = 236LL;
LABEL_31:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
          (const char *)v18,
          v26);
        goto LABEL_40;
      }
      if ( (_BYTE)v26 )
      {
        v31 = 0;
        v30 = &v31;
        v20 = CHwFullScreenRenderTarget::CalculateRerenderDirtyFromScribble(
                (CHwFullScreenRenderTarget *)((char *)this - 144),
                (const struct CRegion *)&v34,
                (struct CRegion *)&v30);
        v9 = v20;
        if ( v20 < 0 )
        {
          v21 = 243LL;
LABEL_27:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
            (const char *)(unsigned int)v20,
            v26);
          FastRegion::CRegion::FreeMemory((void **)&v30);
          goto LABEL_40;
        }
        if ( *v30 )
        {
          v20 = CHwFullScreenRenderTarget::ContributeRegionToDirty((const struct CRegion *)&v30, a2, a3);
          v9 = v20;
          if ( v20 < 0 )
          {
            v21 = 248LL;
            goto LABEL_27;
          }
        }
        FastRegion::CRegion::FreeMemory((void **)&v30);
      }
      v22 = CHwFullScreenRenderTarget::MarkUnoccludableAsRendered((CHwFullScreenRenderTarget *)((char *)this - 144), a3);
      v9 = v22;
      if ( v22 < 0 )
      {
        v18 = (unsigned int)v22;
        v19 = 256LL;
        goto LABEL_31;
      }
      if ( **((_DWORD **)this + 25) || **((_DWORD **)this + 34) )
      {
        v23 = *((_QWORD *)this + 43);
        v28 = (char *)this - 144;
        *(_BYTE *)(*(_QWORD *)(v23 + 32) + 240LL) = 1;
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
          &v27,
          0LL);
        if ( (_BYTE)v26 )
        {
          v24 = CComputeScribbleRenderer::FenceRenderAfterScribble(
                  *((CComputeScribbleRenderer **)this + 43),
                  *((struct CD3DDeviceLevel1 **)this + 1));
          v9 = v24;
          if ( v24 < 0 )
          {
            v25 = 276LL;
LABEL_39:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v25,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
              (const char *)(unsigned int)v24,
              v26);
            v29 = 0;
            lambda_580f0a00adc947519c271a5e102e8e8a_::operator()(&v28);
            v15 = v27;
LABEL_40:
            FastRegion::CRegion::FreeMemory((void **)&v34);
            if ( v15 )
              ReleaseSRWLockExclusive(v15);
            goto LABEL_42;
          }
        }
        v24 = (*(__int64 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)this + 248LL))(this);
        v9 = v24;
        if ( v24 < 0 )
        {
          v25 = 284LL;
          goto LABEL_39;
        }
        v29 = 0;
        lambda_580f0a00adc947519c271a5e102e8e8a_::operator()(&v28);
        v15 = v27;
      }
      FastRegion::CRegion::FreeMemory((void **)&v34);
      if ( v15 )
        ReleaseSRWLockExclusive(v15);
    }
    FastRegion::CRegion::FreeMemory((void **)&v32);
    return 0LL;
  }
  v10 = 218LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
    (const char *)(unsigned int)v8,
    v26);
LABEL_42:
  FastRegion::CRegion::FreeMemory((void **)&v32);
  return v9;
}
