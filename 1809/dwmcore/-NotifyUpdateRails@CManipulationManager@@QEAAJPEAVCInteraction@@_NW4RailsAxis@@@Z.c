/*
 * XREFs of ?NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z @ 0x18007F590
 * Callers:
 *     ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x18007F4FC (-SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x18006A9FC (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18007F830 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x1801E9F28 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CManipulationManager::NotifyUpdateRails(__int64 a1, __int64 a2, char a3, int a4)
{
  void *v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edi
  unsigned int v17; // edx

  v7 = operator new(0x48uLL);
  v9 = (__int64)v7;
  if ( v7 )
  {
    memset_0(v7, 0, 0x48uLL);
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    *(_DWORD *)v9 = 9;
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 )
    {
      *(_QWORD *)(v9 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    Microsoft::WRL::ComPtr<CInteraction>::operator=(v9 + 16, a2);
    *(_BYTE *)(v9 + 64) &= ~2u;
    *(_BYTE *)(v9 + 64) |= 2 * a3;
    *(_DWORD *)(v9 + 44) = a4;
    v13 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v12, v11, v9);
    v15 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1EFu);
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'(
        (CManipulationManager::InteractionUpdate *)v9,
        v17);
    }
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x1E0u);
  }
  return v15;
}
