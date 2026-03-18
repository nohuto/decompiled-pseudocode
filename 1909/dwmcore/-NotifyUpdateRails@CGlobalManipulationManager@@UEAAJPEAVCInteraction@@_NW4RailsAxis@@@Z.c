/*
 * XREFs of ?NotifyUpdateRails@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z @ 0x1800C50F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1800C5288 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800C7A74 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18023673C (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CGlobalManipulationManager::NotifyUpdateRails(__int64 a1, __int64 a2, char a3, int a4)
{
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi
  unsigned int v17; // edx

  v7 = operator new(0x48uLL);
  v9 = v7;
  if ( v7 )
    memset_0(v7, 0, 0x48uLL);
  else
    v9 = 0LL;
  if ( v9 )
  {
    *(_DWORD *)v9 = 9;
    v10 = v9[1];
    if ( v10 )
    {
      v9[1] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    Microsoft::WRL::ComPtr<CInteraction>::operator=(v9 + 2, a2);
    *((_BYTE *)v9 + 64) &= ~2u;
    *((_BYTE *)v9 + 64) |= 2 * a3;
    *((_DWORD *)v9 + 11) = a4;
    v13 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v12, v11, v9);
    v15 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x165u, 0LL);
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'(
        (CManipulationManager::InteractionUpdate *)v9,
        v17);
    }
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x8007000E, 0x156u, 0LL);
  }
  return v15;
}
