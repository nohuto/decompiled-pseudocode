/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_e38150da5853c9585d6e2ab0148a729e___ @ 0x180102B74
 * Callers:
 *     ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@@Z @ 0x180050310 (-_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOpti.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180104898 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::ForEachWindow__lambda_e38150da5853c9585d6e2ab0148a729e___(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 i; // rbx
  __int64 v6; // r14
  _QWORD *v7; // rax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 200);
  for ( i = 0LL; i < v4; ++i )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * i);
    v6 = v9;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
    if ( *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 96LL))(v6) == **(_QWORD **)a2 )
    {
      v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(****(_QWORD ****)(a2 + 8) + 96LL))(***(_QWORD ***)(a2 + 8));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 104LL))(v6, *v7);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
  return 1;
}
