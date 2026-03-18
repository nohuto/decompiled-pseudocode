/*
 * XREFs of ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z @ 0x1801F7910
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1801EB0C0 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070160 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18007F830 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1801F6418 (-Add@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInteractio.c)
 *     ?CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinks@@@Z @ 0x1801F68F8 (-CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinks@@@Z.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x1801F90E8 (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 */

__int64 __fastcall CManipulationContext::OnNewContact(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  __int64 (__fastcall ***v5)(_QWORD); // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  bool v12; // r14
  _BYTE *v13; // rcx
  __int64 v14; // rcx
  char v15; // si
  _QWORD *i; // rdi
  __int64 (__fastcall ***v18)(_QWORD); // [rsp+60h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = a3;
  v18 = *(__int64 (__fastcall ****)(_QWORD))(a2 + 8);
  v5 = v18;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v18);
  v12 = (unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
                        a1 + 64,
                        &v19,
                        &v18) == 0;
  if ( v5 )
    (*v5)[1](v5);
  if ( !v12 )
  {
    InputTraceLogging::GestureTargeting::SetInteractionChain(a3, *(const struct CInteraction **)(a2 + 8));
    v13 = *(_BYTE **)(a2 + 8);
    if ( (v13[184] & 4) != 0
      && (*(unsigned int (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v13 + 80LL))(v13, a4, 0LL) )
    {
      *(_BYTE *)(a1 + 28) |= 2u;
    }
    NtDCompositionUpdatePointerCapture(*(unsigned int *)(*(_QWORD *)(a2 + 8) + 180LL), a3);
    v14 = *(_QWORD *)(a1 + 56);
    if ( !v14 )
    {
      Microsoft::WRL::ComPtr<CInteraction>::operator=((_QWORD *)(a1 + 56), *(__int64 (__fastcall ****)(_QWORD))a2);
      v14 = *(_QWORD *)(a1 + 56);
    }
    *(_BYTE *)(a1 + 28) = *(_BYTE *)(a1 + 28) & 0xF7 | (8
                                                      * CManipulationContext::CheckForSingleTarget(
                                                          (const struct CInteraction *)v14,
                                                          (const struct InputSinks *)(v14 + 64)));
  }
  v15 = a5;
  if ( !a5 || (*(_BYTE *)(a1 + 28) & 1) != 0 )
  {
    for ( i = *(_QWORD **)(a2 + 8); i; i = (_QWORD *)i[26] )
    {
      LOBYTE(v10) = v15 ^ 1;
      LOBYTE(v11) = *(_BYTE *)(a1 + 28) & 1;
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*i + 40LL))(i, v10, v11, a4);
    }
    LOBYTE(v10) = v15 ^ 1;
    LOBYTE(v11) = *(_BYTE *)(a1 + 28) & 1;
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 40LL))(
      *(_QWORD *)(a1 + 144),
      v10,
      v11,
      a4);
  }
  return v12 ? 0x8007000E : 0;
}
