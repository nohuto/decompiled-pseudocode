/*
 * XREFs of ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x1801EADBC
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18002B4B4 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070160 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1801E9B78 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801E9E6C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1801EA4A8 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1801EB0C0 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1801EB414 (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 */

void __fastcall CManipulationManager::OnCapturePointer(
        CManipulationManager *this,
        unsigned int a2,
        struct CInteraction *a3)
{
  int Key; // eax
  unsigned int v6; // r12d
  __int64 *v7; // rax
  int v8; // r15d
  __int64 (__fastcall ***v9)(_QWORD); // rbx
  int v10; // ecx
  int v11; // eax
  __int64 v12; // r10
  struct CInteraction *v13; // rbx
  int v14; // eax
  int v15; // [rsp+20h] [rbp-48h]
  int v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 (__fastcall ***v18)(_QWORD); // [rsp+48h] [rbp-20h] BYREF
  __int64 v19[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 (__fastcall ***v20)(_QWORD); // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v21; // [rsp+B8h] [rbp+50h] BYREF
  struct CInteraction *v22; // [rsp+C0h] [rbp+58h]
  __int64 (__fastcall ***v23)(_QWORD); // [rsp+C8h] [rbp+60h] BYREF

  v22 = a3;
  v21 = a2;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 120,
          (int *)&v21);
  v6 = 2;
  if ( Key == -1 )
  {
    v7 = &v17;
    v17 = 0LL;
    v8 = 1;
    v9 = 0LL;
    v10 = 0;
  }
  else
  {
    v9 = *(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 16) + 8LL * Key);
    v23 = v9;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v23);
    v7 = (__int64 *)&v23;
    v8 = 0;
    v10 = 2;
  }
  v19[0] = (__int64)v9;
  *v7 = 0LL;
  if ( v10 )
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v23);
  if ( v8 )
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v17);
  if ( v9 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))(*v9)[3])(v9, a2);
  v11 = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 160,
          (int *)&v21);
  if ( v11 != -1 )
    v6 = *(_DWORD *)(*((_QWORD *)this + 21) + 4LL * v11);
  CManipulationManager::OnUp(this, v12, a2, v6, v9, 1, 1, 1, v17);
  v13 = v22;
  LOBYTE(v16) = 0;
  LOBYTE(v15) = 1;
  CManipulationManager::OnNewContact(this, v22, a2, v6, v15, v16);
  v20 = 0LL;
  v14 = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 120,
          (int *)&v21);
  if ( v14 != -1
    && *Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v20, (_QWORD *)(*((_QWORD *)this + 16) + 8LL * v14)) )
  {
    v18 = 0LL;
    LODWORD(v17) = 1;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v18);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, __int64 *))(*v20)[9])(v20, a2, &v17);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(&v18, (__int64 (__fastcall ***)(_QWORD))v13);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), __int64 *))(*v20)[11])(v20, &v17);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v18);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v19);
}
