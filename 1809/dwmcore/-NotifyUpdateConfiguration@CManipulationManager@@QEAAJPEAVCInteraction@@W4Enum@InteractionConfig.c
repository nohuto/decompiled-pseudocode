/*
 * XREFs of ?NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfigurationUpdateType@@W43InteractionInputType@@IPEBXI@Z @ 0x18007F740
 * Callers:
 *     ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x18007F640 (-ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATE.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x18006A9FC (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18007F830 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x1801E9F28 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CManipulationManager::NotifyUpdateConfiguration(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        void *Src,
        unsigned int Size)
{
  void *v7; // rsi
  void *v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  void *v17; // rax
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // edi
  unsigned int v23; // edx

  v7 = 0LL;
  v11 = operator new(0x48uLL);
  v13 = (__int64)v11;
  if ( v11 )
  {
    memset_0(v11, 0, 0x48uLL);
    *(_QWORD *)(v13 + 8) = 0LL;
    *(_QWORD *)(v13 + 16) = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
    v21 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x1A7u);
    return v21;
  }
  *(_DWORD *)v13 = 7;
  v14 = *(_QWORD *)(v13 + 8);
  if ( v14 )
  {
    *(_QWORD *)(v13 + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  Microsoft::WRL::ComPtr<CInteraction>::operator=(v13 + 16, a2);
  *(_QWORD *)(v13 + 56) = 0LL;
  *(_DWORD *)(v13 + 48) = a5;
  *(_DWORD *)(v13 + 40) = a3;
  *(_DWORD *)(v13 + 44) = a4;
  if ( Size )
  {
    v17 = operator new(Size);
    v7 = v17;
    if ( !v17 )
    {
      v21 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x1B4u);
      goto LABEL_15;
    }
    memcpy_0(v17, Src, Size);
    *(_QWORD *)(v13 + 56) = v7;
  }
  v19 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v16, v15, v13);
  v21 = v19;
  if ( v19 >= 0 )
    return v21;
  MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x1C0u);
LABEL_15:
  CManipulationManager::InteractionUpdate::`scalar deleting destructor'(
    (CManipulationManager::InteractionUpdate *)v13,
    v23);
  if ( v7 )
    WPF::ProcessHeapImpl::Free(v7);
  return v21;
}
