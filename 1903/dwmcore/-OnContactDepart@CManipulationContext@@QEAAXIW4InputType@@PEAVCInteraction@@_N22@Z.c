/*
 * XREFs of ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z @ 0x18023CD34
 * Callers:
 *     ?OnUp@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x180239280 (-OnUp@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CC07C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1802383A8 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x18023C3AC (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x18023D700 (-RemoveKey@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInte.c)
 */

void __fastcall CManipulationContext::OnContactDepart(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD),
        char a5,
        char a6,
        char a7)
{
  __int64 (__fastcall ***v10)(_QWORD); // rbx
  int Key; // eax
  __int64 (__fastcall ***v12)(_QWORD); // rsi
  __int64 (__fastcall ***v13)(_QWORD); // rcx
  char v14; // si
  __int64 (__fastcall ***v15)(_QWORD); // rcx
  __int64 (__fastcall ***v16)(_QWORD); // [rsp+60h] [rbp+30h] BYREF
  unsigned int v17; // [rsp+68h] [rbp+38h] BYREF
  __int64 (__fastcall ***v18)(_QWORD); // [rsp+78h] [rbp+48h] BYREF

  v17 = a2;
  v16 = a4;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v16);
  v10 = v16;
  if ( !v16 )
  {
    Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
            a1 + 64,
            (int *)&v17);
    if ( Key == -1 )
    {
      v18 = 0LL;
      v12 = 0LL;
    }
    else
    {
      v18 = *(__int64 (__fastcall ****)(_QWORD))(*(_QWORD *)(a1 + 72) + 8LL * Key);
      v10 = v18;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v18);
      v13 = v16;
      v12 = v10;
      if ( v16 )
      {
        v16 = 0LL;
        (*v13)[1](v13);
      }
    }
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v18);
    v16 = v10;
    if ( v12 )
    {
      (*v12)[1](v12);
      v10 = v16;
    }
  }
  v14 = a5;
  if ( a5 )
  {
    for ( ;
          v10;
          v10 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD)))(*(_QWORD *)a1 + 48LL))(
                                                    a1,
                                                    v10) )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))(*v10)[7])(v10, a3);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 56LL))(*(_QWORD *)(a1 + 144), a3);
  }
  CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveKey(
    a1 + 64,
    &v17);
  if ( !v14
    && ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))(*v16)[27])(v16, 0LL)
    && ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, _QWORD))(*v16)[28])(v16, a2, 0LL) )
  {
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))(*v16)[29])(v16, a2);
  }
  else if ( a7 )
  {
    NtDCompositionUpdatePointerCapture(0LL, a2);
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, a2, 0LL);
  CManipulationContext::CleanTreeState((__int64)v16, a1, *(RTL_SRWLOCK **)(a1 + 48), a6, a3);
  v15 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*v15)[1](v15);
  }
}
