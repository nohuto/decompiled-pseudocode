/*
 * XREFs of ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z @ 0x18023BAE0
 * Callers:
 *     ?OnNewContact@CGlobalManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x18023779C (-OnNewContact@CGlobalManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1800C5288 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CBA2C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x18023A5EC (-Add@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInteractio.c)
 *     ?CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinks@@@Z @ 0x18023AAA8 (-CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinks@@@Z.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x18023D2C8 (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 */

__int64 __fastcall CManipulationContext::OnNewContact(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  __int64 (__fastcall ***v5)(_QWORD); // rdi
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // r8
  bool v13; // r15
  _BYTE *v14; // rcx
  __int64 v15; // rcx
  char v16; // di
  _QWORD *i; // rsi
  __int64 (__fastcall ***v19)(_QWORD); // [rsp+60h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+18h] BYREF

  v20 = a3;
  v19 = *(__int64 (__fastcall ****)(_QWORD))(a2 + 8);
  v5 = v19;
  v10 = 0;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v19);
  v13 = (unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
                        a1 + 64,
                        &v20,
                        &v19) == 0;
  if ( v5 )
    (*v5)[1](v5);
  if ( v13 )
  {
    v10 = -2147024882;
  }
  else
  {
    InputTraceLogging::GestureTargeting::SetInteractionChain(a3, *(const struct CInteraction **)(a2 + 8));
    v14 = *(_BYTE **)(a2 + 8);
    if ( (v14[184] & 0x10) != 0
      && (*(unsigned int (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v14 + 80LL))(v14, a4, 0LL) )
    {
      *(_BYTE *)(a1 + 28) |= 2u;
    }
    NtDCompositionUpdatePointerCapture(*(unsigned int *)(*(_QWORD *)(a2 + 8) + 180LL), a3);
    v15 = *(_QWORD *)(a1 + 56);
    if ( !v15 )
    {
      Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)(a1 + 56), *(_QWORD *)a2);
      v15 = *(_QWORD *)(a1 + 56);
    }
    *(_BYTE *)(a1 + 28) = *(_BYTE *)(a1 + 28) & 0xF7 | (8
                                                      * CManipulationContext::CheckForSingleTarget(
                                                          (const struct CInteraction *)v15,
                                                          (const struct InputSinks *)(v15 + 64)));
  }
  v16 = a5;
  if ( !a5 || (*(_BYTE *)(a1 + 28) & 1) != 0 )
  {
    for ( i = *(_QWORD **)(a2 + 8); i; i = (_QWORD *)i[26] )
    {
      LOBYTE(v11) = v16 ^ 1;
      LOBYTE(v12) = *(_BYTE *)(a1 + 28) & 1;
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*i + 40LL))(i, v11, v12, a4);
    }
    LOBYTE(v11) = v16 ^ 1;
    LOBYTE(v12) = *(_BYTE *)(a1 + 28) & 1;
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 40LL))(
      *(_QWORD *)(a1 + 144),
      v11,
      v12,
      a4);
  }
  return v10;
}
