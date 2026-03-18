/*
 * XREFs of ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A5FB0
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z @ 0x1801A6240 (-Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z @ 0x180049788 (-InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDisplayDevice@Core@Display@Devices@Windows@@@Z @ 0x18015AA10 (--4-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?GetPresentParameters@CRemoteAppRenderTarget@@IEBAXPEAURenderTargetPresentParameters@@@Z @ 0x1801A59EC (-GetPresentParameters@CRemoteAppRenderTarget@@IEBAXPEAURenderTargetPresentParameters@@@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A637C (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?GetIntersectingMonitorTargets@CDesktopRenderTarget@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@PEAV?$DynArray@PEAVCHwndRenderTarget@@$0A@@@@Z @ 0x1801A83AC (-GetIntersectingMonitorTargets@CDesktopRenderTarget@@QEAAJAEBV-$TMilRect_@HUtagRECT@@UMilPointAn.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::RailMultimonRenderAndPresent(CRemoteAppRenderTarget *this)
{
  char *v1; // rdx
  __int64 v3; // rcx
  signed int IntersectingMonitorTargets; // eax
  __int64 v5; // rcx
  _QWORD *v6; // r15
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rbp
  signed int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  signed int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // rbx
  __int128 v19; // [rsp+30h] [rbp-68h] BYREF
  int v20; // [rsp+40h] [rbp-58h]
  int v21; // [rsp+44h] [rbp-54h]
  unsigned int v22; // [rsp+48h] [rbp-50h]
  _BYTE v23[40]; // [rsp+50h] [rbp-48h] BYREF

  v20 = 0;
  v1 = (char *)this + 288;
  v21 = 0;
  v22 = 0;
  v3 = *((_QWORD *)this + 21);
  v19 = 0LL;
  IntersectingMonitorTargets = CDesktopRenderTarget::GetIntersectingMonitorTargets(v3, v1, &v19);
  v6 = (_QWORD *)v19;
  v7 = IntersectingMonitorTargets;
  if ( IntersectingMonitorTargets >= 0 )
  {
    v8 = 0LL;
    if ( !v22 )
      goto LABEL_11;
    while ( 1 )
    {
      v9 = v6[v8];
      wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>::operator=(
        (__int64 *)this + 22,
        *(_QWORD *)(v9 + 176));
      if ( *((_QWORD *)this + 22) )
      {
        *((_OWORD *)this + 13) = *(_OWORD *)(v9 + 220);
        *((_OWORD *)this + 14) = *(_OWORD *)(v9 + 236);
        *((_OWORD *)this + 15) = *(_OWORD *)(v9 + 252);
        *((_OWORD *)this + 16) = *(_OWORD *)(v9 + 268);
        *((_DWORD *)this + 68) = *(_DWORD *)(v9 + 284);
        v10 = CRemoteAppRenderTarget::RenderDirtyRegion(this);
        v7 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x222u, 0LL);
          goto LABEL_11;
        }
        CRemoteAppRenderTarget::GetPresentParameters(this, (struct RenderTargetPresentParameters *)v23);
        LOBYTE(v12) = 1;
        v13 = CHwndRenderTarget::InternalPresent(
                (CHwndRenderTarget *)v9,
                v12,
                (const struct RenderTargetPresentParameters *)v23);
        v7 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x227u, 0LL);
          goto LABEL_11;
        }
      }
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v22 )
        goto LABEL_11;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, IntersectingMonitorTargets, 0x212u, 0LL);
LABEL_11:
  v15 = *((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = v22 == 0;
  *((_OWORD *)this + 13) = _xmm;
  *((_WORD *)this + 136) = 32085;
  *((_OWORD *)this + 14) = _xmm;
  *((_OWORD *)this + 15) = _xmm;
  *((_OWORD *)this + 16) = _xmm;
  if ( !v16 )
  {
    v17 = v22;
    do
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 16LL))(*v6);
      ++v6;
      --v17;
    }
    while ( v17 );
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v19);
  return v7;
}
