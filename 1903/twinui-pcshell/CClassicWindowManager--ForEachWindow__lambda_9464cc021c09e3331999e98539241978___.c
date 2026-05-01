/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___ @ 0x180058CA4
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180056F90 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180057770 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1800588AC (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 * Callees:
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x180056E18 (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v4; // r14
  unsigned __int64 i; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  CClassicWindowManager *v8; // r12
  void (__fastcall *v10)(__int64, _QWORD); // rdi
  HWND v11; // rax
  _QWORD *ClassicWindowOwner; // rax
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 200);
  for ( i = 0LL; i < v4; ++i )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * i);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * i));
    if ( *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 96LL))(v6) == **(_QWORD **)a2 )
    {
      v7 = *(_QWORD *)(a2 + 8);
      if ( !**(_QWORD **)v7 || v6 != **(_QWORD **)v7 )
      {
        v8 = *(CClassicWindowManager **)(v7 + 8);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 160LL))(v6) )
        {
          v10 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 104LL);
          v11 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
          ClassicWindowOwner = CClassicWindowManager::GetClassicWindowOwner(v8, &v13, v11);
          v10(v6, *ClassicWindowOwner);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        }
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 1;
}
