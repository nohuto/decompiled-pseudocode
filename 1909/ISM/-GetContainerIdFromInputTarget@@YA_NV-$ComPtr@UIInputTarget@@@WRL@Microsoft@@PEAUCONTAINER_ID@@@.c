/*
 * XREFs of ?GetContainerIdFromInputTarget@@YA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAUCONTAINER_ID@@@Z @ 0x180107CB0
 * Callers:
 *     ?OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180107FB0 (-OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRes.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$GetAttachedObject@UIContainerInfoInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1800C1978 (--$GetAttachedObject@UIContainerInfoInputObjectProxy@@@InputSite@@QEAA-AV-$ComPtr@UIContainerInf.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall GetContainerIdFromInputTarget(int (__fastcall ****a1)(_QWORD, GUID *, __int64 *), _DWORD *a2)
{
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v11; // [rsp+68h] [rbp+38h] BYREF
  __int64 v12; // [rsp+70h] [rbp+40h] BYREF
  __int64 v13; // [rsp+78h] [rbp+48h] BYREF

  *a2 = 0;
  v12 = 0LL;
  v4 = *a1;
  v5 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v12);
  if ( v5(v4, &GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea, &v12) >= 0 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v11);
    v6 = v11;
    if ( v11 )
    {
      InputSite::GetAttachedObject<IContainerInfoInputObjectProxy>(v11, &v13);
      if ( v13 )
      {
        *a2 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v13);
        v7 = v11;
        if ( v11 )
        {
          v11 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v12);
        v8 = *a1;
        if ( *a1 )
        {
          *a1 = 0LL;
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v8)[2])(v8);
        }
        return 1;
      }
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v13);
      v6 = v11;
    }
    if ( v6 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v12);
  v10 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v10)[2])(v10);
  }
  return 0;
}
