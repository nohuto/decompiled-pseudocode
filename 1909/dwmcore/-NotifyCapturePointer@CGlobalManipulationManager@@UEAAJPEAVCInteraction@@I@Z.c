/*
 * XREFs of ?NotifyCapturePointer@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@I@Z @ 0x1802370C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1800C5288 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800C7A74 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ppq @ 0x1801A288C (McTemplateU0ppq.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18023673C (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CGlobalManipulationManager::NotifyCapturePointer(
        CGlobalManipulationManager *this,
        struct CInteraction *a2,
        int a3)
{
  __int64 v5; // rax
  __int64 v6; // r9
  void *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
  {
    v5 = *((_QWORD *)a2 + 13);
    v6 = 0LL;
    if ( v5 )
      v6 = *(_QWORD *)(v5 + 16);
    McTemplateU0ppq((__int64)this, &MIDMANIPULATION_UPDATE_CAPTURE_CONTACT, a2, v6, a3);
  }
  v7 = operator new(0x48uLL);
  v9 = (__int64)v7;
  if ( v7 )
    memset_0(v7, 0, 0x48uLL);
  else
    v9 = 0LL;
  if ( v9 )
  {
    *(_DWORD *)v9 = 5;
    v11 = *(_QWORD *)(v9 + 8);
    if ( v11 )
    {
      *(_QWORD *)(v9 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)(v9 + 16), (__int64)a2);
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_DWORD *)(v9 + 24) = a3;
    v14 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v13, v12, v9);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xD0u, 0LL);
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v9);
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x8007000E, 0xC1u, 0LL);
  }
  return v10;
}
