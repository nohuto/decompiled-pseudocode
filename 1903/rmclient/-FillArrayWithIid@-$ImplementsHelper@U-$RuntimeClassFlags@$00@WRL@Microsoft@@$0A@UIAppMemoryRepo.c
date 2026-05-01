/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIAppMemoryReport@System@Windows@@UIWeakReferenceSource@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@IAEXPAKPAU_GUID@@@Z @ 0x100107F6
 * Callers:
 *     ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KGJPAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@123@PAKPAPAU_GUID@@@Z @ 0x10010102 (--$GetImplementedIIDS@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAp.c)
 * Callees:
 *     <none>
 */

int __stdcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Windows::System::IAppMemoryReport,IWeakReferenceSource,Windows::System::IAppMemoryReport2,IInspectable>::FillArrayWithIid(
        int *a1,
        int a2)
{
  int v2; // eax
  unsigned int *v3; // edi
  unsigned int *v4; // edi
  unsigned int *v5; // edi
  unsigned int *v6; // edi
  int result; // eax

  v2 = *a1;
  v3 = (unsigned int *)(a2 + 16 * *a1);
  *v3++ = _GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d.Data1;
  *v3++ = *(_DWORD *)&_GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d.Data2;
  *v3 = *(_DWORD *)_GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d.Data4;
  v3[1] = *(_DWORD *)&_GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d.Data4[4];
  v4 = (unsigned int *)(a2 + 16 * (v2 + 1));
  *v4++ = _GUID_00000038_0000_0000_c000_000000000046.Data1;
  *v4++ = *(_DWORD *)&_GUID_00000038_0000_0000_c000_000000000046.Data2;
  *v4 = *(_DWORD *)_GUID_00000038_0000_0000_c000_000000000046.Data4;
  v4[1] = *(_DWORD *)&_GUID_00000038_0000_0000_c000_000000000046.Data4[4];
  v5 = (unsigned int *)(a2 + 16 * (v2 + 2));
  *v5++ = _GUID_5f7f3738_51b7_42dc_b7ed_79ba46d28857.Data1;
  *v5++ = *(_DWORD *)&_GUID_5f7f3738_51b7_42dc_b7ed_79ba46d28857.Data2;
  *v5 = *(_DWORD *)_GUID_5f7f3738_51b7_42dc_b7ed_79ba46d28857.Data4;
  v5[1] = *(_DWORD *)&_GUID_5f7f3738_51b7_42dc_b7ed_79ba46d28857.Data4[4];
  v6 = (unsigned int *)(a2 + 16 * (v2 + 3));
  result = v2 + 4;
  *a1 = result;
  *v6++ = _GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
  *v6++ = *(_DWORD *)&_GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2;
  *v6 = *(_DWORD *)_GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
  v6[1] = *(_DWORD *)&_GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
  return result;
}
