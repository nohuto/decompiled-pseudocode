/*
 * XREFs of ?ProcessFrameInputPostTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1802393D4
 * Callers:
 *     ?ProcessManipulationInfo@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180239830 (-ProcessManipulationInfo@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x1800863D0 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CC07C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x180236F08 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x180237EA8 (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x1802385D0 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?OnUp@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x180239280 (-OnUp@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x18023CF08 (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 */

void __fastcall CGlobalManipulationManager::ProcessFrameInputPostTargeting(
        CGlobalManipulationManager *this,
        struct CManipulationFrame *a2)
{
  char v4; // r12
  unsigned int v5; // esi
  bool IsMousewheelFrame; // r13
  __int64 v7; // rdx
  __int64 v8; // r14
  int v9; // eax
  int *v10; // r15
  CManipulationContext *v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD); // rbx
  unsigned int v13; // eax
  char v14; // r8
  __int64 v15; // r10
  __int64 (__fastcall ***v16)(_QWORD); // [rsp+88h] [rbp+10h] BYREF
  __int64 (__fastcall ***v17)(_QWORD); // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  IsMousewheelFrame = CManipulationFrame::IsMousewheelFrame(a2);
  if ( *(_DWORD *)(v7 + 16) )
  {
    do
    {
      v8 = 248LL * v5;
      v9 = *(_DWORD *)((char *)a2 + v8 + 156);
      v10 = (int *)((char *)a2 + v8);
      if ( (v9 & 0x840000) != 0 || IsMousewheelFrame )
      {
        CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
          (__int64)this + 264,
          &v16,
          v10 + 37);
        v12 = v16;
        if ( v16 )
        {
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))(*v16)[3])(v16, (unsigned int)v10[37]);
          v13 = ConvertToInputType(*((_DWORD *)a2 + 36), *((_DWORD *)a2 + 39));
          CGlobalManipulationManager::OnUp((__int64)this, v15, v10[37], v13, v12, 0, 0, v14);
        }
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v16);
      }
      else if ( (v9 & 2) == 0 )
      {
        v11 = (CManipulationContext *)*((_QWORD *)this + 43);
        if ( v11 )
          CManipulationContext::OnContactHoverDepart(v11, v10[37]);
      }
      if ( !v4 && *(_QWORD *)((char *)a2 + v8 + 168) == -1LL )
      {
        v17 = (__int64 (__fastcall ***)(_QWORD))a2;
        v4 = 1;
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v17);
        CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
          (char **)this + 41,
          &v17);
        (*(void (__fastcall **)(struct CManipulationFrame *))(*(_QWORD *)a2 + 8LL))(a2);
      }
      ++v5;
    }
    while ( v5 < *((_DWORD *)a2 + 4) );
  }
}
