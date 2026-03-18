/*
 * XREFs of ?NotifyUpdateTemporaryConfiguration@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1802371E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1800C5288 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800C7A74 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18023673C (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CGlobalManipulationManager::NotifyUpdateTemporaryConfiguration(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        int a6)
{
  void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _DWORD *v16; // rsi
  signed int v17; // eax
  __int64 v18; // rcx

  v9 = operator new(0x48uLL);
  v11 = (__int64)v9;
  if ( v9 )
    memset_0(v9, 0, 0x48uLL);
  else
    v11 = 0LL;
  if ( v11 )
  {
    *(_DWORD *)v11 = 8;
    v13 = *(_QWORD *)(v11 + 8);
    if ( v13 )
    {
      *(_QWORD *)(v11 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)(v11 + 16), a2);
    *(_BYTE *)(v11 + 64) &= ~1u;
    *(_BYTE *)(v11 + 64) |= a5;
    *(_DWORD *)(v11 + 40) = a4;
    *(_DWORD *)(v11 + 44) = a3;
    *(_DWORD *)(v11 + 48) = 1;
    v16 = operator new(4uLL);
    if ( v16 )
    {
      *v16 = a6;
      *(_QWORD *)(v11 + 56) = v16;
      v17 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v15, v14, v11);
      v12 = v17;
      if ( v17 >= 0 )
        return v12;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x199u, 0LL);
    }
    else
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, 0x8007000E, 0x18Eu, 0LL);
    }
    CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v11);
    if ( v16 )
      operator delete(v16);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x8007000E, 0x182u, 0LL);
  }
  return v12;
}
