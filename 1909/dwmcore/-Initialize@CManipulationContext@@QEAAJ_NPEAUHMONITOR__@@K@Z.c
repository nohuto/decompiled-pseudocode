/*
 * XREFs of ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z @ 0x18023B240
 * Callers:
 *     ?OnNewContact@CGlobalManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x18023779C (-OnNewContact@CGlobalManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?ProcessFrameInputPreTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180237E48 (-ProcessFrameInputPreTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x18023C290 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180017B68 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1800AC188 (--0CInteractionProcessor@@QEAA@XZ.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1801D5A74 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 */

__int64 __fastcall CManipulationContext::Initialize(CManipulationContext *this, char a2, HMONITOR a3, int a4)
{
  CInteractionRoot *v8; // rax
  CInteractionRoot *v9; // rbx
  CInteractionRoot *v10; // rcx
  __int64 v11; // rdx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 28) = 0;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 15);
  *((_DWORD *)this + 32) = 0;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 17);
  *((_BYTE *)this + 28) &= ~1u;
  *((_BYTE *)this + 28) |= a2;
  *((_DWORD *)this + 10) = a4;
  *((_QWORD *)this + 4) = a3;
  v8 = (CInteractionRoot *)DefaultHeap::AllocClear(0x570uLL);
  v9 = v8;
  if ( !v8 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  memset_0(v8, 0, 0x570uLL);
  *((_DWORD *)v9 + 4) = 0;
  *(_QWORD *)v9 = &CInteractionRoot::`vftable'{for `IInteractionResource'};
  *((_QWORD *)v9 + 1) = &CInteractionRoot::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)v9 + 3) = 0LL;
  CInteractionProcessor::CInteractionProcessor((CInteractionRoot *)((char *)v9 + 32));
  v10 = (CInteractionRoot *)*((_QWORD *)this + 18);
  if ( v10 != v9 )
  {
    (**(void (__fastcall ***)(void *))v9)(v9);
    v11 = *((_QWORD *)this + 18);
    v10 = v9;
    *((_QWORD *)this + 18) = v9;
    if ( v11 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      v10 = (CInteractionRoot *)*((_QWORD *)this + 18);
    }
  }
  if ( v10 )
    return CInteractionRoot::Initialize(v10, this, a2);
  else
    return 2147942414LL;
}
