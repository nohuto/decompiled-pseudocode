/*
 * XREFs of ?OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ @ 0x1800A8FC0
 * Callers:
 *     _lambda_53e4d08f85004fbfe19bb4d1e8c4a6f0_::_lambda_invoker_cdecl_ @ 0x1800D7DF0 (_lambda_53e4d08f85004fbfe19bb4d1e8c4a6f0_--_lambda_invoker_cdecl_.c)
 *     _lambda_35cedf73a04efee64cd2b082b9370e6e_::_lambda_invoker_cdecl_ @ 0x180236220 (_lambda_35cedf73a04efee64cd2b082b9370e6e_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18007897C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1800A9990 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1800A9A28 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z @ 0x1800A9EA0 (-InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z.c)
 *     ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800C3FBC (-SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateTy.c)
 *     ?Insert@?$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z @ 0x1800C79D4 (-Insert@-$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z.c)
 *     ?Remove@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAPEAUInteractionUpdate@CManipulationManager@@_NPEAI@Z @ 0x1800C846C (-Remove@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAPEAUInteractionUpdate@CManipu.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CA224 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetRailsEnabled@CInteractionProcessor@@QEAAX_NW4RailsAxis@@@Z @ 0x1800CB400 (-SetRailsEnabled@CInteractionProcessor@@QEAAX_NW4RailsAxis@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x180175E5C (-FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVis.c)
 *     ?SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x180231788 (-SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@Inte.c)
 *     ?OnCaptureManipulation@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@I_K@Z @ 0x1802373F4 (-OnCaptureManipulation@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@I_K@Z.c)
 *     ?OnCapturePointer@CGlobalManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x18023748C (-OnCapturePointer@CGlobalManipulationManager@@AEAAXIPEAVCInteraction@@@Z.c)
 *     ?FindMonitorAndWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAPEAUHMONITOR__@@PEAK@Z @ 0x18023AEB4 (-FindMonitorAndWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAPEAUHM.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x18023B39C (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x18023BC60 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x18023C1FC (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 */

void __fastcall CGlobalManipulationManager::OnInteractionUpdate(CGlobalManipulationManager *this)
{
  int *v2; // r13
  char v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  const struct CManipulationManager::InteractionUpdate *v6; // rax
  const struct CManipulationManager::InteractionUpdate *v7; // rdi
  __int64 v8; // rdx
  CVisual *v9; // r15
  struct CInteraction *v10; // r14
  int v11; // r9d
  void *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *v16; // rcx
  struct CInteraction *InteractionInternal; // rax
  CComposition *v18; // rbx
  int *v19; // [rsp+28h] [rbp-69h]
  int v20; // [rsp+38h] [rbp-59h] BYREF
  struct CVisualTree *v21; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v22; // [rsp+48h] [rbp-49h] BYREF
  int v23; // [rsp+4Ch] [rbp-45h] BYREF
  HMONITOR v24; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v25[48]; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v26[48]; // [rsp+88h] [rbp-9h] BYREF

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v25, L"GestureTargetingUpdate", 0LL);
  v2 = &v20;
  AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 568LL));
  v3 = 0;
  v23 = 0;
  do
  {
    InputTraceLogging::PerfRegion::PerfRegion(
      (InputTraceLogging::PerfRegion *)v26,
      L"GestureTargetingUpdateEvent",
      (const struct InputTraceLogging::PerfRegion *)v25);
    v6 = (const struct CManipulationManager::InteractionUpdate *)CQueue<CManipulationManager::InteractionUpdate *>::Remove(
                                                                   v5,
                                                                   v4,
                                                                   v2);
    v7 = v6;
    v2 = 0LL;
    if ( !v6 )
      goto LABEL_17;
    InputTraceLogging::GestureTargeting::InteractionUpdate(v6);
    v9 = (CVisual *)*((_QWORD *)v7 + 1);
    *((_QWORD *)v7 + 1) = 0LL;
    v10 = (struct CInteraction *)*((_QWORD *)v7 + 2);
    *((_QWORD *)v7 + 2) = 0LL;
    v11 = *(_DWORD *)v7;
    if ( *(int *)v7 >= 0 )
    {
      if ( v11 <= 3 )
      {
        v19 = &v23;
        CManipulationContext::InvalidateMCs((char *)this + 264, v9, v10);
      }
      else
      {
        if ( v11 == 7 )
        {
          LODWORD(v19) = *((_DWORD *)v7 + 12);
          CInteractionProcessor::SetInteractionConfiguration(
            (char *)v10 + 344,
            *((unsigned int *)v7 + 10),
            *((unsigned int *)v7 + 11),
            *((_QWORD *)v7 + 7),
            v19);
          v12 = (void *)*((_QWORD *)v7 + 7);
          if ( v12 )
            operator delete(v12);
          goto LABEL_8;
        }
        if ( v11 == 4 )
        {
          v21 = 0LL;
          InteractionInternal = CVisual::GetInteractionInternal(v9);
          CManipulationContext::FindMonitorAndWorkspace(
            (CGlobalManipulationManager *)((char *)this + 264),
            InteractionInternal,
            &v24,
            &v22);
          v18 = (CComposition *)*((_QWORD *)this + 2);
          Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v21);
          CComposition::FindTreeWithWorkspaceOrMonitorAssociationNoLock(v18, v24, v22, &v21);
          if ( v21 )
            CManipulationContext::OnVisualPropertyChange(v9, v21);
          v3 = 1;
          Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v21);
          goto LABEL_8;
        }
        if ( v11 != 5 )
        {
          switch ( v11 )
          {
            case 6:
              CGlobalManipulationManager::OnCaptureManipulation(this, v10, *((_DWORD *)v7 + 6), *((_QWORD *)v7 + 4));
              break;
            case 8:
              CInteractionProcessor::SetTemporaryConfiguration(
                (_DWORD)v10 + 344,
                *((_DWORD *)v7 + 11),
                *((_DWORD *)v7 + 10),
                *((_BYTE *)v7 + 64) & 1,
                **((_DWORD **)v7 + 7));
              v16 = (void *)*((_QWORD *)v7 + 7);
              if ( v16 )
                operator delete(v16);
              break;
            case 9:
              LOBYTE(v8) = (*((_BYTE *)v7 + 64) & 2) != 0;
              CInteractionProcessor::SetRailsEnabled((char *)v10 + 344, v8, *((unsigned int *)v7 + 11));
              break;
          }
          goto LABEL_8;
        }
        CGlobalManipulationManager::OnCapturePointer(this, *((_DWORD *)v7 + 6), v10);
      }
      v3 = 1;
    }
LABEL_8:
    if ( v9 )
      CQueue<CResource *>::Insert((char *)this + 104, v8, v9);
    if ( v10 )
      CQueue<CResource *>::Insert((char *)this + 104, v8, (char *)v10 + 8);
    v13 = *((_QWORD *)v7 + 2);
    if ( v13 )
    {
      *((_QWORD *)v7 + 2) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    }
    v14 = *((_QWORD *)v7 + 1);
    if ( v14 )
    {
      *((_QWORD *)v7 + 1) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    operator delete(v7);
LABEL_17:
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v26);
  }
  while ( v20-- );
  if ( v3 )
    CManipulationContext::Revalidate((CGlobalManipulationManager *)((char *)this + 264));
  ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 568LL));
  if ( *((_DWORD *)this + 30) )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 552LL) + 96LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
      0LL,
      0x4000LL);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v25);
}
