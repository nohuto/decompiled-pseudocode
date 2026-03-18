/*
 * XREFs of ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18015D268
 * Callers:
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x18015CF6C (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800300E8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x1801E1D3C (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAX_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1801FAAF0 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
 */

__int64 __fastcall CMagnifierRenderTarget::OpenSharedSurfaceRenderTarget(
        CMagnifierRenderTarget *this,
        __int64 a2,
        struct _LUID a3,
        HMONITOR a4,
        struct IRenderTargetBitmap **a5)
{
  __int64 v5; // xmm0_8
  CDisplaySet *v6; // rsi
  int v7; // eax
  CDisplayManager *v9; // rcx
  int CurrentDisplaySet; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  int DisplayIdFromMonitor; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v20; // [rsp+50h] [rbp-30h] BYREF
  CDisplaySet *v21; // [rsp+58h] [rbp-28h] BYREF
  int v22[2]; // [rsp+60h] [rbp-20h]
  int v23[2]; // [rsp+68h] [rbp-18h] BYREF
  int v24; // [rsp+70h] [rbp-10h]

  v5 = *((_QWORD *)this + 46);
  v6 = 0LL;
  v7 = DisplayId::None;
  v9 = (CDisplayManager *)*((unsigned int *)this + 94);
  v22[1] = 0;
  v21 = 0LL;
  v20 = DisplayId::None;
  *a5 = 0LL;
  *(_QWORD *)v23 = v5;
  v24 = (int)v9;
  v22[0] = 2;
  if ( a4 )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v9, &v21);
    v14 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_1802BC238, 1u, CurrentDisplaySet, 0x1EFu);
      v6 = v21;
      goto LABEL_8;
    }
    v6 = v21;
    DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v21, a4, (struct DisplayId *)&v20);
    v14 = DisplayIdFromMonitor;
    if ( DisplayIdFromMonitor < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802BC238, 1u, DisplayIdFromMonitor, 0x1F0u);
      goto LABEL_8;
    }
    v7 = v20;
  }
  v17 = CD3DDeviceManager::OpenSharedHandleAsRenderTargetBitmap(
          (int)&qword_180308A50,
          v22[0],
          0,
          (int)v23,
          a3,
          v7,
          a2,
          0,
          (__int64)a5);
  v14 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_1802BC238, 1u, v17, 0x1FFu);
LABEL_8:
  if ( v6 )
    CDisplaySet::Release(v6);
  return v14;
}
