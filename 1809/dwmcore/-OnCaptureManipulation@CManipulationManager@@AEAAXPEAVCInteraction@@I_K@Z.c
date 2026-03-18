/*
 * XREFs of ?OnCaptureManipulation@CManipulationManager@@AEAAXPEAVCInteraction@@I_K@Z @ 0x1801EAD24
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18002B4B4 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1801EA4A8 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 */

void __fastcall CManipulationManager::OnCaptureManipulation(
        CManipulationManager *this,
        struct CInteraction *a2,
        unsigned int a3,
        __int64 a4)
{
  int Key; // eax
  __int64 v8; // r11
  __int64 v9; // rcx
  struct CInteraction *v10; // rcx
  unsigned int v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = a3;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 120,
          (int *)&v11);
  if ( Key != -1 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 128) + 8LL * Key);
    v10 = (struct CInteraction *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, a3);
    if ( v10 )
    {
      while ( v10 != a2 )
      {
        v10 = (struct CInteraction *)*((_QWORD *)v10 + 26);
        if ( !v10 )
          return;
      }
      (*(void (__fastcall **)(struct CInteraction *, _QWORD, __int64))(*(_QWORD *)v10 + 192LL))(v10, a3, a4);
    }
  }
}
