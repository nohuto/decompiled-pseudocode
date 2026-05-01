/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@56@UIMemoryManagerStatics3@56@UIMemoryManagerStatics4@56@@Details@WRL@Microsoft@@IAEXPAKPAU_GUID@@@Z @ 0x1000F19F
 * Callers:
 *     ??$GetImplementedIIDS@V?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@@?$RuntimeClassBaseT@$0N@@Details@WRL@Microsoft@@KGJPAV?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@23@PAKPAPAU_GUID@@@Z @ 0x1000EF64 (--$GetImplementedIIDS@V-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implements@U.c)
 * Callees:
 *     <none>
 */

int __stdcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>::FillArrayWithIid(
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
  *v3++ = _GUID_5c6c279c_d7ca_4779_9188_4057219ce64c.Data1;
  *v3++ = *(_DWORD *)&_GUID_5c6c279c_d7ca_4779_9188_4057219ce64c.Data2;
  *v3 = *(_DWORD *)_GUID_5c6c279c_d7ca_4779_9188_4057219ce64c.Data4;
  v3[1] = *(_DWORD *)&_GUID_5c6c279c_d7ca_4779_9188_4057219ce64c.Data4[4];
  v4 = (unsigned int *)(a2 + 16 * (v2 + 1));
  *v4++ = _GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data1;
  *v4++ = *(_DWORD *)&_GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data2;
  *v4 = *(_DWORD *)_GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4;
  v4[1] = *(_DWORD *)&_GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4[4];
  v5 = (unsigned int *)(a2 + 16 * (v2 + 2));
  *v5++ = _GUID_149b59ce_92ad_4e35_89eb_50dfb4c0d91c.Data1;
  *v5++ = *(_DWORD *)&_GUID_149b59ce_92ad_4e35_89eb_50dfb4c0d91c.Data2;
  *v5 = *(_DWORD *)_GUID_149b59ce_92ad_4e35_89eb_50dfb4c0d91c.Data4;
  v5[1] = *(_DWORD *)&_GUID_149b59ce_92ad_4e35_89eb_50dfb4c0d91c.Data4[4];
  v6 = (unsigned int *)(a2 + 16 * (v2 + 3));
  result = v2 + 4;
  *a1 = result;
  *v6++ = _GUID_c5a94828_e84e_4886_8a0d_44b3190e3b72.Data1;
  *v6++ = *(_DWORD *)&_GUID_c5a94828_e84e_4886_8a0d_44b3190e3b72.Data2;
  *v6 = *(_DWORD *)_GUID_c5a94828_e84e_4886_8a0d_44b3190e3b72.Data4;
  v6[1] = *(_DWORD *)&_GUID_c5a94828_e84e_4886_8a0d_44b3190e3b72.Data4[4];
  return result;
}
