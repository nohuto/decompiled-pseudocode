/*
 * XREFs of ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x1800D9140
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180072BAC (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x1800A1028 (--$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800D7DB8 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?IsStereoEnabled@CDisplayManager@@QEBA_NXZ @ 0x1800D894C (-IsStereoEnabled@CDisplayManager@@QEBA_NXZ.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x1800D89C4 (-UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?GetClipBox@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x1800D9074 (-GetClipBox@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRe.c)
 *     ?GetRotation@CHwndRenderTarget@@QEAA?AW4DXGI_MODE_ROTATION@@XZ @ 0x1800D90A0 (-GetRotation@CHwndRenderTarget@@QEAA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?GetDisplayRect@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x1800D90C8 (-GetDisplayRect@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfa.c)
 *     ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800D93C4 (-CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRE.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x180149D54 (McTemplateU0x.c)
 *     ?IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ @ 0x18015AFE0 (-IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureRenderTarget(CHwndRenderTarget *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r15
  __int64 v6; // rcx
  int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 *v11; // rdi
  enum DXGI_MODE_ROTATION Rotation; // eax
  unsigned int v14; // ebx
  enum DXGI_MODE_ROTATION v15; // eax
  CDisplayManager *v16; // rcx
  int v17; // eax
  __int64 v18; // r9
  int updated; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rcx
  _BYTE v25[4]; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+34h] [rbp-34h]
  int v27; // [rsp+38h] [rbp-30h]

  v4 = (__int64 *)((char *)this + 176);
  v6 = *((_QWORD *)this + 22);
  v7 = 0;
  if ( v6 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6) )
  {
    if ( !*((_BYTE *)this + 866) )
      goto LABEL_4;
    CHwndRenderTarget::GetDisplayRect(this);
    CHwndRenderTarget::GetClipBox(this);
    Rotation = (unsigned int)CHwndRenderTarget::GetRotation(this);
    CHwndRenderTarget::CalculateMonitorTransform(this, Rotation);
    *((_BYTE *)this + 866) = 0;
  }
  else
  {
    v14 = *((_DWORD *)this + 112);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0x(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DESKTOPRTCREATE_Start, 0LL, a4);
    if ( (v14 & 0x10) != 0 )
    {
      CHwndRenderTarget::GetDisplayRect(this);
      CHwndRenderTarget::GetClipBox(this);
      v15 = (unsigned int)CHwndRenderTarget::GetRotation(this);
      CHwndRenderTarget::CalculateMonitorTransform(this, v15);
      if ( *(_BYTE *)(*((_QWORD *)this + 21) + 323LL) )
        v14 |= 0x20000000u;
      if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 224LL))(this) )
      {
        v14 |= 0x4000u;
      }
      else if ( CDisplayManager::IsStereoEnabled(v16)
             && *(_DWORD *)(*((_QWORD *)this + 2) + 268LL)
             && CHwndRenderTarget::IsStereoSupported(this) )
      {
        v14 |= 0x2000u;
      }
    }
    v17 = (*(__int64 (__fastcall **)(CHwndRenderTarget *, _QWORD))(*(_QWORD *)this + 232LL))(this, v14);
    v7 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180292610, 2u, v17, 0x907u);
LABEL_38:
      if ( v7 < 0 )
      {
        ReleaseInterface<IBitmapLock>(v4);
        ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 23);
        (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 256LL))(this);
      }
      return (unsigned int)v7;
    }
    if ( (v14 & 0x2000) != 0 )
      (**(void (__fastcall ***)(__int64, GUID *, char *))*v4)(
        *v4,
        &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
        (char *)this + 184);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0x(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DESKTOPRTCREATE_Stop, 0LL, v18);
    *((_BYTE *)this + 857) = 1;
  }
  *((_BYTE *)this + 161) = 1;
LABEL_4:
  v9 = *((_QWORD *)this + 106);
  if ( !v9 )
    goto LABEL_38;
  v10 = *v4;
  v11 = (__int64 *)(v9 + 16);
  v7 = 0;
  if ( *(_QWORD *)(v9 + 16) != *v4 )
  {
    if ( *v11 )
      COverlayContext::Reset(*((COverlayContext **)this + 106));
    ReplaceInterface<IRenderTargetDisplay,IRenderTargetDisplay>(v11, v10);
    if ( *v11 )
    {
      updated = COverlayContext::UpdateMPOCaps((COverlayContext *)v9, 1, 0LL);
      v7 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, updated, 0x90u);
      }
      else
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v11 + 320LL))(*v11, v9 + 40);
        v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)*v11 + 120LL))(*v11, v9 + 80, 0LL);
        v7 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x96u);
        }
        else
        {
          v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v11 + 432LL))(*v11);
          v24 = *v11;
          *(_BYTE *)(v9 + 13413) = v23;
          (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24 + 24LL))(v24, v25);
          *(_DWORD *)(v9 + 100) = v27;
          *(_DWORD *)(v9 + 104) = v26;
        }
      }
    }
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180292610, 2u, v7, 0x940u);
    goto LABEL_38;
  }
  return (unsigned int)v7;
}
