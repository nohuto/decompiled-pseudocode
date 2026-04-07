/*
 * XREFs of ?Initialize@CapturedWindowSWRVisual@@AEAAJPEAUHWND__@@PEAUISecondaryWindowRepresentationChangedListener@@@Z @ 0x180086110
 * Callers:
 *     ?Create@CapturedWindowSWRVisual@@SAJPEAUHWND__@@PEAPEAV1@@Z @ 0x180085EE8 (-Create@CapturedWindowSWRVisual@@SAJPEAUHWND__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180002AC4 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800108E8 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18001606C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CapturedWindowSWRVisual::Initialize(
        CapturedWindowSWRVisual *this,
        HWND a2,
        struct ISecondaryWindowRepresentationChangedListener *a3)
{
  int SyncedWindowDataByHwnd; // ebx
  __int64 v6; // rdx
  CBaseObject **v8; // rdi
  void *v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CWindowData *v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                             a2,
                             &v11);
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v6 = 1196LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)SyncedWindowDataByHwnd);
    return (unsigned int)SyncedWindowDataByHwnd;
  }
  v8 = (CBaseObject **)((char *)this + 24);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(v8);
  LODWORD(v9) = 100;
  SyncedWindowDataByHwnd = CSecondaryWindowRepresentation::Create(160LL, (__int64)a3, (__int64)v11, 0, v9, v8);
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v6 = 1204LL;
    goto LABEL_3;
  }
  if ( !*((_QWORD *)*v8 + 6) )
    return 2147942487LL;
  *((_BYTE *)*v8 + 552) = 1;
  return 0LL;
}
