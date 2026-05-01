/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036F20
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A1E10 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800A1E10.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A1E20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800A1E20.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A1E30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800A1E30.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r10
  __int64 v10; // rcx
  _DWORD *v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  int v14; // ebx
  __int64 v16; // r10

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57) )
  {
    *v8 = v9;
    goto LABEL_18;
  }
  if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90)
    || (unsigned int)InlineIsEqualGUID(v10, &GUID_00000003_0000_0000_c000_000000000046) )
  {
    *v8 = v13;
    v14 = 0;
  }
  else
  {
    v14 = -2147467262;
  }
  if ( v14 == -2147467262 )
  {
    v16 = v12 + 64;
    if ( *v11 == 56
      && v11[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      && v11[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      && v11[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
    {
      *v8 = v16;
      v14 = 0;
      goto LABEL_9;
    }
    if ( *v11 != 905982127
      || v11[1] != *(_DWORD *)&GUID_360030af_7930_47a7_a1dd_184464be39de.Data2
      || v11[2] != *(_DWORD *)GUID_360030af_7930_47a7_a1dd_184464be39de.Data4
      || v11[3] != *(_DWORD *)&GUID_360030af_7930_47a7_a1dd_184464be39de.Data4[4] )
    {
      v14 = -2147467262;
      goto LABEL_8;
    }
    *v8 = v16 + 8;
LABEL_18:
    v14 = 0;
  }
LABEL_8:
  if ( v14 >= 0 )
LABEL_9:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  return (unsigned int)v14;
}
