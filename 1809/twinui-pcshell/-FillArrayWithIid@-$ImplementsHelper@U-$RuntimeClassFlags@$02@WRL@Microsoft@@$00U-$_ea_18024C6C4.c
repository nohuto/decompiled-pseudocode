/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VWindowWrapperBase@@@Details@23@UIWeakReferenceSource@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18024C6C4
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18024C7D0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_18024C7D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<WindowWrapperBase>,IWeakReferenceSource,ILegacyViewWrapper>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_d6ecd9bf_13b0_4264_955c_6e96d28a37ae;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_175d1cfe_6fbc_42ba_81e5_e3bc56d5aae9;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_3bf22d51_7679_4ce2_8bae_8b78613e83cc;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 4)) = GUID_7ae7a925_240e_4f93_9f3b_87d346eb1835;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 5)) = GUID_35f1648c_265f_402c_b575_c9a325451df5;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 6)) = GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 7)) = GUID_71a3f425_a716_4859_b1a4_1d9044e6a055;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 8)) = GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 9)) = GUID_00000038_0000_0000_c000_000000000046;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 10)) = GUID_2dd4e662_f456_4daf_aeff_84a1c012e15f;
  result = (unsigned int)(v3 + 11);
  *a2 = result;
  return result;
}
