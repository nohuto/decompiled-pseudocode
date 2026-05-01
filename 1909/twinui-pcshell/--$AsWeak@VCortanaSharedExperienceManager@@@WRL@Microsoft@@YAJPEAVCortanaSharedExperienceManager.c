/*
 * XREFs of ??$AsWeak@VCortanaSharedExperienceManager@@@WRL@Microsoft@@YAJPEAVCortanaSharedExperienceManager@@PEAVWeakRef@01@@Z @ 0x18019AE60
 * Callers:
 *     ??$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVCortanaSharedExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x18019BA2C (--$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationH.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIClosable@Foundation@Windows@@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18019CA44 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18019CA44.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<CortanaSharedExperienceManager>(__int64 a1, __int64 *a2)
{
  _DWORD *v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // r9
  int v7; // edi
  int CanCastTo; // eax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF
  __int64 v14; // [rsp+68h] [rbp+38h] BYREF

  v13 = 0LL;
  if ( InlineIsEqualGUID(&GUID_00000038_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v7 = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v5, &GUID_3b810852_511f_4404_89ae_347bc2e8b561) )
    {
      v7 = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::CanCastTo(
                    a1 + 8,
                    v6);
      a1 = v13;
      v7 = CanCastTo;
      if ( CanCastTo < 0 )
        goto LABEL_8;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
LABEL_8:
  if ( v7 >= 0 )
  {
    v13 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, &v13);
    if ( v7 >= 0 )
    {
      v9 = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v10 = *a2;
      v12 = 0LL;
      v14 = v10;
      *a2 = v9;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  }
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return (unsigned int)v7;
}
