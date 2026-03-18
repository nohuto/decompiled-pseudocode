/*
 * XREFs of ?ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_CAPTUREPOINTER@@@Z @ 0x1801D5DA4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800A833C (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteraction::ProcessCapturePointer(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTION_CAPTUREPOINTER *a3)
{
  CComposition *v3; // rbx
  signed int ManipulationManager; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  signed int v9; // eax
  __int64 v10; // rcx
  struct CManipulationManager *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v3 = (CComposition *)*((_QWORD *)this + 3);
  v12 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v12);
  ManipulationManager = CComposition::GetManipulationManager(v3, &v12);
  v8 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, ManipulationManager, 0x1B5u, 0LL);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(struct CManipulationManager *, CInteraction *, _QWORD))(*(_QWORD *)v12 + 56LL))(
           v12,
           this,
           *((unsigned int *)a3 + 2));
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1B7u, 0LL);
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v12);
  return v8;
}
