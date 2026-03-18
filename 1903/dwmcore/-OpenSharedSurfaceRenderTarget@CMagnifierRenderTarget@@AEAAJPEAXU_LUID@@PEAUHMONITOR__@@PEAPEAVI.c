/*
 * XREFs of ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801AA328
 * Callers:
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x1801AA000 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180042588 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x1800A8990 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18015A804 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAX_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18015F380 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
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
  unsigned int v7; // eax
  CDisplayManager *v9; // rcx
  signed int CurrentDisplaySet; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  signed int DisplayIdFromMonitor; // eax
  __int64 v16; // rcx
  unsigned int v17; // edx
  signed int v18; // eax
  __int64 v19; // rcx
  unsigned int v21; // [rsp+50h] [rbp-30h] BYREF
  CDisplaySet *v22; // [rsp+58h] [rbp-28h] BYREF
  int v23[2]; // [rsp+60h] [rbp-20h]
  int v24[2]; // [rsp+68h] [rbp-18h] BYREF
  int v25; // [rsp+70h] [rbp-10h]

  v5 = *((_QWORD *)this + 45);
  v6 = 0LL;
  v7 = (unsigned int)DisplayId::None;
  v9 = (CDisplayManager *)*((unsigned int *)this + 92);
  v23[1] = 0;
  v22 = 0LL;
  v21 = (unsigned int)DisplayId::None;
  *a5 = 0LL;
  *(_QWORD *)v24 = v5;
  v25 = (int)v9;
  v23[0] = 2;
  if ( a4 )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v9, &v22);
    v14 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_1802E3D40, 1u, CurrentDisplaySet, 0x1F3u, 0LL);
      v6 = v22;
      goto LABEL_8;
    }
    v6 = v22;
    DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v22, a4, (struct DisplayId *)&v21);
    v14 = DisplayIdFromMonitor;
    if ( DisplayIdFromMonitor < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802E3D40, 1u, DisplayIdFromMonitor, 0x1F4u, 0LL);
      goto LABEL_8;
    }
    v7 = v21;
  }
  v18 = CD3DDeviceManager::OpenSharedHandleAsRenderTargetBitmap(
          (__int64)&qword_180340370,
          *(__int64 *)v23,
          0LL,
          (__int64)v24,
          a3,
          v7,
          a2,
          0,
          a5);
  v14 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_1802E3D40, 1u, v18, 0x203u, 0LL);
LABEL_8:
  if ( v6 )
    CDisplaySet::Release(v6, v17);
  return v14;
}
