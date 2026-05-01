/*
 * XREFs of ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801C173C
 * Callers:
 *     ?TryGetInstalledPackage@CortanaStoreAppHelper@@YAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x1801CBA0C (-TryGetInstalledPackage@CortanaStoreAppHelper@@YAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::IPackageManager>>(
        __int64 a1,
        __int64 *a2)
{
  int v4; // edi
  __int64 v5; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  *a2 = 0LL;
  v4 = RoActivateInstance(a1, &v7);
  if ( v4 >= 0 )
  {
    v5 = *(_QWORD *)&GUID_9a7d4b65_5e8f_4fc7_a2e5_7f6925cb8b53.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_9a7d4b65_5e8f_4fc7_a2e5_7f6925cb8b53.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v5 = *(_QWORD *)GUID_9a7d4b65_5e8f_4fc7_a2e5_7f6925cb8b53.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v5 )
    {
      v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
             v7,
             &GUID_9a7d4b65_5e8f_4fc7_a2e5_7f6925cb8b53,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
      *a2 = v7;
    }
  }
  return (unsigned int)v4;
}
