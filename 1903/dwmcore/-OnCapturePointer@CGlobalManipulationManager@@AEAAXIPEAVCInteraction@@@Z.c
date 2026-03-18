/*
 * XREFs of ?OnCapturePointer@CGlobalManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x180238B9C
 * Callers:
 *     ?OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ @ 0x1800C3440 (-OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CC07C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1802379B8 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180237CC0 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1802383A8 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?OnNewContact@CGlobalManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x180238EAC (-OnNewContact@CGlobalManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?OnUp@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x180239280 (-OnUp@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@.c)
 */

void __fastcall CGlobalManipulationManager::OnCapturePointer(
        CGlobalManipulationManager *this,
        unsigned int a2,
        struct CInteraction *a3)
{
  int Key; // eax
  unsigned int v6; // r12d
  __int64 *v7; // rax
  __int64 (__fastcall ***v8)(_QWORD); // rbx
  int v9; // r15d
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
          (__int64)this + 264,
          (int *)&v21);
  v6 = 2;
  if ( Key == -1 )
  {
    v7 = &v17;
    v8 = 0LL;
    v9 = 1;
    v10 = 0;
  }
  else
  {
    v8 = *(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 34) + 8LL * Key);
    v23 = v8;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v23);
    v7 = (__int64 *)&v23;
    v9 = 0;
    v10 = 2;
  }
  v19[0] = (__int64)v8;
  *v7 = 0LL;
  if ( v10 )
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v23);
  if ( v9 )
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v17);
  if ( v8 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))(*v8)[3])(v8, a2);
  v11 = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 304,
          (int *)&v21);
  if ( v11 != -1 )
    v6 = *(_DWORD *)(*((_QWORD *)this + 39) + 4LL * v11);
  CGlobalManipulationManager::OnUp(this, v12, a2, v6, v8, 1, 1, 1);
  v13 = v22;
  LOBYTE(v16) = 0;
  LOBYTE(v15) = 1;
  CGlobalManipulationManager::OnNewContact(this, v22, a2, v6, v15, v16);
  v20 = 0LL;
  v14 = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 264,
          (int *)&v21);
  if ( v14 != -1
    && *Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v20, (_QWORD *)(*((_QWORD *)this + 34) + 8LL * v14)) )
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
