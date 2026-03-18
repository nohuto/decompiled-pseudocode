/*
 * XREFs of ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x1800B00C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180026628 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x18002AB40 (--$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z.c)
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x18003DFF0 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1@Z @ 0x1800B0320 (-CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRE.c)
 *     ?GetRotation@CHwndRenderTarget@@QEAA?AW4DXGI_MODE_ROTATION@@XZ @ 0x1800B06C8 (-GetRotation@CHwndRenderTarget@@QEAA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?GetClipBox@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x1800B06F0 (-GetClipBox@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRe.c)
 *     ?GetDisplayRect@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x1800B071C (-GetDisplayRect@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfa.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x1800B07E4 (-UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800B0BE0 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ @ 0x1800B0DA4 (-IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?IsStereoEnabled@CDisplaySet@@QEBA_NXZ @ 0x18015A66C (-IsStereoEnabled@CDisplaySet@@QEBA_NXZ.c)
 *     McTemplateU0x @ 0x18015ECCC (McTemplateU0x.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureRenderTarget(CHwndRenderTarget *this)
{
  __int64 *v1; // r15
  __int64 v3; // rcx
  signed int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 *v8; // rdi
  enum DXGI_MODE_ROTATION Rotation; // eax
  unsigned int v11; // ebx
  enum DXGI_MODE_ROTATION v12; // eax
  signed int v13; // eax
  signed int updated; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rcx
  _BYTE v20[4]; // [rsp+30h] [rbp-38h] BYREF
  int v21; // [rsp+34h] [rbp-34h]
  int v22; // [rsp+38h] [rbp-30h]

  v1 = (__int64 *)((char *)this + 176);
  v3 = *((_QWORD *)this + 22);
  v4 = 0;
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3) )
  {
    if ( !*((_BYTE *)this + 866) )
      goto LABEL_4;
    CHwndRenderTarget::GetDisplayRect(this);
    CHwndRenderTarget::GetClipBox(this);
    Rotation = CHwndRenderTarget::GetRotation(this);
    CHwndRenderTarget::CalculateMonitorTransform(this, Rotation);
    *((_BYTE *)this + 866) = 0;
  }
  else
  {
    v11 = *((_DWORD *)this + 112);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0x(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DESKTOPRTCREATE_Start, 0LL);
    if ( (v11 & 0x10) != 0 )
    {
      CHwndRenderTarget::GetDisplayRect(this);
      CHwndRenderTarget::GetClipBox(this);
      v12 = CHwndRenderTarget::GetRotation(this);
      CHwndRenderTarget::CalculateMonitorTransform(this, v12);
      if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 248LL))(this) )
      {
        v11 |= 0x4000u;
      }
      else if ( CHwndRenderTarget::IsStereoSupported(this)
             && *(_DWORD *)(*((_QWORD *)this + 2) + 284LL)
             && g_DisplayManager
             && CDisplaySet::IsStereoEnabled(g_DisplayManager) )
      {
        v11 |= 0x2000u;
      }
    }
    v13 = (*(__int64 (__fastcall **)(CHwndRenderTarget *, _QWORD))(*(_QWORD *)this + 360LL))(this, v11);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802BFF28, 2u, v13, 0x902u, 0LL);
LABEL_36:
      if ( v4 < 0 )
      {
        ReleaseInterface<ID2D1Geometry>(v1);
        ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 23);
        (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 384LL))(this);
      }
      return (unsigned int)v4;
    }
    if ( (v11 & 0x2000) != 0 )
      (**(void (__fastcall ***)(__int64, GUID *, char *))*v1)(
        *v1,
        &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
        (char *)this + 184);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0x(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DESKTOPRTCREATE_Stop, 0LL);
    *((_BYTE *)this + 857) = 1;
  }
  *((_BYTE *)this + 161) = 1;
LABEL_4:
  v6 = *((_QWORD *)this + 106);
  if ( !v6 )
    goto LABEL_36;
  v7 = *v1;
  v8 = (__int64 *)(v6 + 16);
  v4 = 0;
  if ( *(_QWORD *)(v6 + 16) != *v1 )
  {
    if ( *v8 )
      COverlayContext::Reset(*((COverlayContext **)this + 106));
    ReplaceInterface<IRenderTargetDisplay,IRenderTargetDisplay>(v8, v7);
    if ( *v8 )
    {
      updated = COverlayContext::UpdateMPOCaps((COverlayContext *)v6, 1, 0LL);
      v4 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, updated, 0x83u, 0LL);
      }
      else
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v8 + 320LL))(*v8, v6 + 40);
        v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)*v8 + 120LL))(*v8, v6 + 80, 0LL);
        v4 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x89u, 0LL);
        }
        else
        {
          v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v8 + 440LL))(*v8);
          v19 = *v8;
          *(_BYTE *)(v6 + 13429) = v18;
          (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v19 + 24LL))(v19, v20);
          *(_DWORD *)(v6 + 100) = v22;
          *(_DWORD *)(v6 + 104) = v21;
        }
      }
    }
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802BFF28, 2u, v4, 0x933u, 0LL);
    goto LABEL_36;
  }
  return (unsigned int)v4;
}
