/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800231B0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B8D40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800B8D40.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B8D50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800B8D50.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B8D60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800B8D60.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *v15; // r9
  __int64 v16; // r10
  _QWORD *v17; // r11
  int v18; // ebx
  __int64 v19; // r10
  __int64 v21; // rcx

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046, a3, a2)
    || (unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v4, v5) )
  {
    *v4 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57, v4, v8) )
  {
    *v10 = v12;
    v18 = 0;
    v14 = v12;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v9, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, v12 + 8, v11)
      || (unsigned int)InlineIsEqualGUID(v13, &GUID_00000003_0000_0000_c000_000000000046, v14, v15) )
    {
      *v17 = v14;
      v18 = 0;
    }
    else
    {
      v18 = -2147467262;
      v14 = 0LL;
    }
    if ( v18 == -2147467262 )
    {
      v19 = v16 + 64;
      v21 = v14;
      if ( *v15 == 56
        && v15[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        && v15[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        && v15[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
      {
        *v17 = v19;
        v18 = 0;
        goto LABEL_9;
      }
      v14 = v19 + 8;
      if ( *v15 == 905982127
        && v15[1] == *(_DWORD *)&GUID_360030af_7930_47a7_a1dd_184464be39de.Data2
        && v15[2] == *(_DWORD *)GUID_360030af_7930_47a7_a1dd_184464be39de.Data4
        && v15[3] == *(_DWORD *)&GUID_360030af_7930_47a7_a1dd_184464be39de.Data4[4] )
      {
        *v17 = v14;
        v18 = 0;
      }
      else
      {
        v14 = v21;
        v18 = -2147467262;
      }
    }
  }
  v19 = v14;
  if ( v18 >= 0 )
LABEL_9:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  return (unsigned int)v18;
}
