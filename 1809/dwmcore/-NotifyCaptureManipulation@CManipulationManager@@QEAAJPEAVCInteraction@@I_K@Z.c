/*
 * XREFs of ?NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@I_K@Z @ 0x1801EA8F8
 * Callers:
 *     ?ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR@@@Z @ 0x18019C594 (-ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x18006A9FC (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18007F830 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x1801E9F28 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     McTemplateU0ppqx @ 0x1801EDB80 (McTemplateU0ppqx.c)
 */

__int64 __fastcall CManipulationManager::NotifyCaptureManipulation(
        CManipulationManager *this,
        struct CInteraction *a2,
        int a3,
        __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r9
  void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
  {
    v7 = *((_QWORD *)a2 + 13);
    LODWORD(v8) = 0;
    if ( v7 )
      v8 = *(_QWORD *)(v7 + 16);
    McTemplateU0ppqx((_DWORD)a2 + 8, (_DWORD)a2, a2 != 0LL ? (_DWORD)a2 + 8 : 0, v8, a3, a4);
  }
  v9 = operator new(0x48uLL);
  v11 = (__int64)v9;
  if ( v9 )
  {
    memset_0(v9, 0, 0x48uLL);
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 16) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    *(_DWORD *)v11 = 6;
    v13 = *(_QWORD *)(v11 + 8);
    if ( v13 )
    {
      *(_QWORD *)(v11 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    Microsoft::WRL::ComPtr<CInteraction>::operator=((_QWORD *)(v11 + 16), (__int64 (__fastcall ***)(_QWORD))a2);
    *(_DWORD *)(v11 + 24) = a3;
    *(_QWORD *)(v11 + 32) = a4;
    v16 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v15, v14, v11);
    v12 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x18Cu);
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v11);
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x17Du);
  }
  return v12;
}
