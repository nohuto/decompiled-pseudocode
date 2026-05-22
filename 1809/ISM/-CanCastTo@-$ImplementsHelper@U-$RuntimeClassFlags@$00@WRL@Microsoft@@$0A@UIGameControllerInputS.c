/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIWeakReferenceSource@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18006FC3C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006F490 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameContr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,IWeakReferenceSource,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == 536279330
    && a2[1] == *(_DWORD *)&GUID_1ff6f922_c640_4c78_a820_9a715c558bcb.Data2
    && a2[2] == *(_DWORD *)GUID_1ff6f922_c640_4c78_a820_9a715c558bcb.Data4
    && a2[3] == *(_DWORD *)&GUID_1ff6f922_c640_4c78_a820_9a715c558bcb.Data4[4]
    || (a1 += 8LL, *a2 == 56)
    && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4]
    || (a1 += 8LL, *a2 == -1575974209)
    && a2[1] == *(_DWORD *)&GUID_a2108abf_09f1_43bc_a140_80f899ec36fb.Data2
    && a2[2] == *(_DWORD *)GUID_a2108abf_09f1_43bc_a140_80f899ec36fb.Data4
    && a2[3] == *(_DWORD *)&GUID_a2108abf_09f1_43bc_a140_80f899ec36fb.Data4[4]
    || (a1 += 8LL, *a2 == -1125933722)
    && a2[1] == *(_DWORD *)&GUID_bce39d66_51af_4b1f_818a_74b934239653.Data2
    && a2[2] == *(_DWORD *)GUID_bce39d66_51af_4b1f_818a_74b934239653.Data4
    && a2[3] == *(_DWORD *)&GUID_bce39d66_51af_4b1f_818a_74b934239653.Data4[4]
    || (a1 += 8LL, *a2 == -145439966)
    && a2[1] == *(_DWORD *)&GUID_f754c322_182d_40e4_a126_fcee4ffa1e31.Data2
    && a2[2] == *(_DWORD *)GUID_f754c322_182d_40e4_a126_fcee4ffa1e31.Data4
    && a2[3] == *(_DWORD *)&GUID_f754c322_182d_40e4_a126_fcee4ffa1e31.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == -1297343083
    && a2[1] == *(_DWORD *)&GUID_b2ac1d95_6ecb_42b3_8aab_025401ca4712.Data2
    && a2[2] == *(_DWORD *)GUID_b2ac1d95_6ecb_42b3_8aab_025401ca4712.Data4
    && a2[3] == *(_DWORD *)&GUID_b2ac1d95_6ecb_42b3_8aab_025401ca4712.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}
