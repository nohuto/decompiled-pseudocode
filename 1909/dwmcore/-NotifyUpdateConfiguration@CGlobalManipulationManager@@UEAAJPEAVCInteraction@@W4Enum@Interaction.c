/*
 * XREFs of ?NotifyUpdateConfiguration@CGlobalManipulationManager@@UEAAJPEAVCInteraction@@W4Enum@InteractionConfigurationUpdateType@@W43InteractionInputType@@IPEBXI@Z @ 0x1800C51A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1800C5288 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800C7A74 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18023673C (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CGlobalManipulationManager::NotifyUpdateConfiguration(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        void *Src,
        unsigned int Size)
{
  void *v7; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  void *v17; // rax
  __int64 v18; // rcx
  signed int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // edi
  unsigned int v23; // edx

  v7 = 0LL;
  v11 = operator new(0x48uLL);
  v13 = v11;
  if ( v11 )
    memset_0(v11, 0, 0x48uLL);
  else
    v13 = 0LL;
  if ( !v13 )
  {
    v21 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x8007000E, 0x11Du, 0LL);
    return v21;
  }
  *(_DWORD *)v13 = 7;
  v14 = v13[1];
  if ( v14 )
  {
    v13[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  Microsoft::WRL::ComPtr<CInteraction>::operator=(v13 + 2, a2);
  v13[7] = 0LL;
  *((_DWORD *)v13 + 12) = a5;
  *((_DWORD *)v13 + 10) = a3;
  *((_DWORD *)v13 + 11) = a4;
  if ( Size )
  {
    v17 = operator new(Size);
    v7 = v17;
    if ( !v17 )
    {
      v21 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, 0x8007000E, 0x12Au, 0LL);
      goto LABEL_15;
    }
    memcpy_0(v17, Src, Size);
    v13[7] = v7;
  }
  v19 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v16, v15, v13);
  v21 = v19;
  if ( v19 >= 0 )
    return v21;
  MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x136u, 0LL);
LABEL_15:
  CManipulationManager::InteractionUpdate::`scalar deleting destructor'(
    (CManipulationManager::InteractionUpdate *)v13,
    v23);
  if ( v7 )
    operator delete(v7);
  return v21;
}
