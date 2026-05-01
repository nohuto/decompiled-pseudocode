/*
 * XREFs of ?MsixvcRemediateMutablePackagesForVolumeAsync@@YAJPEAUIPackageVolume@Deployment@Management@Windows@@PEAPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@4@@Z @ 0x180004530
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002764 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800049F0 (--$ActivateInstance@V-$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004B18 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180005E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180006730 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MsixvcRemediateMutablePackagesForVolumeAsync(__int64 a1, __int64 a2)
{
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER v13; // [rsp+30h] [rbp-38h] BYREF
  HSTRING v14; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v12[1] = -2LL;
  v12[0] = 0LL;
  v14 = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Management.Deployment.Internal.PackageManagerInternal", 0x3Du, &v13, &v14);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
    JUMPOUT(0x180004628LL);
  }
  v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>>(
         v14,
         v12);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 131LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_8;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v12[0] + 456LL))(v12[0], a1, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 134LL;
    goto LABEL_6;
  }
  v8 = 0;
LABEL_8:
  v10 = (_QWORD *)v12[0];
  if ( v12[0] )
  {
    v12[0] = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v10 + 16LL))(v10, *v10);
  }
  return v8;
}
