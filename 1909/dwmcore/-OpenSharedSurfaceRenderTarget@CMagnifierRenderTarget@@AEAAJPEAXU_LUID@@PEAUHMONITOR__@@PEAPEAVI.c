/*
 * XREFs of ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801A8A68
 * Callers:
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x1801A8740 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180053E64 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x180159124 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAX_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18015DCA0 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
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
  signed int v17; // eax
  __int64 v18; // rcx
  unsigned int v20; // [rsp+50h] [rbp-30h] BYREF
  CDisplaySet *v21; // [rsp+58h] [rbp-28h] BYREF
  int v22[2]; // [rsp+60h] [rbp-20h]
  int v23[2]; // [rsp+68h] [rbp-18h] BYREF
  int v24; // [rsp+70h] [rbp-10h]

  v5 = *((_QWORD *)this + 45);
  v6 = 0LL;
  v7 = (unsigned int)DisplayId::None;
  v9 = (CDisplayManager *)*((unsigned int *)this + 92);
  v22[1] = 0;
  v21 = 0LL;
  v20 = (unsigned int)DisplayId::None;
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
      MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_1802E1E90, 1u, CurrentDisplaySet, 0x1F3u, 0LL);
      v6 = v21;
      goto LABEL_8;
    }
    v6 = v21;
    DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v21, a4, (struct DisplayId *)&v20);
    v14 = DisplayIdFromMonitor;
    if ( DisplayIdFromMonitor < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802E1E90, 1u, DisplayIdFromMonitor, 0x1F4u, 0LL);
      goto LABEL_8;
    }
    v7 = v20;
  }
  v17 = CD3DDeviceManager::OpenSharedHandleAsRenderTargetBitmap(
          (__int64)&qword_18033D450,
          *(__int64 *)v22,
          0LL,
          (__int64)v23,
          a3,
          v7,
          a2,
          0,
          a5);
  v14 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_1802E1E90, 1u, v17, 0x203u, 0LL);
LABEL_8:
  if ( v6 )
    CDisplaySet::Release(v6);
  return v14;
}
