/*
 * XREFs of ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180015680
 * Callers:
 *     _lambda_fb48ef3a2c30e4b7127ba6e0ec514475_::operator() @ 0x18000D5D4 (_lambda_fb48ef3a2c30e4b7127ba6e0ec514475_--operator().c)
 *     _lambda_e2ad4dd96f48ff51f3e39c6a0eec3847_::operator() @ 0x180056554 (_lambda_e2ad4dd96f48ff51f3e39c6a0eec3847_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::IPackageManager>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  int v5; // edi
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *a2 = 0LL;
  v5 = RoActivateInstance(a1, &v7);
  if ( v5 >= 0 )
  {
    if ( *(_QWORD *)&GUID_9a7d4b65_5e8f_4fc7_a2e5_7f6925cb8b53.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_9a7d4b65_5e8f_4fc7_a2e5_7f6925cb8b53.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *a2 = v7;
    }
    else
    {
      v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
             v7,
             &GUID_9a7d4b65_5e8f_4fc7_a2e5_7f6925cb8b53,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return (unsigned int)v5;
}
