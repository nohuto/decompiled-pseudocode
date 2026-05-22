/*
 * XREFs of ?GetContainerIdFromInputSitesList@@YA_NAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@PEAUCONTAINER_ID@@@Z @ 0x1800C330C
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1800C43D0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$GetAttachedObject@UIContainerInfoInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1800C1978 (--$GetAttachedObject@UIContainerInfoInputObjectProxy@@@InputSite@@QEAA-AV-$ComPtr@UIContainerInf.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall GetContainerIdFromInputSitesList(__int64 **a1, _DWORD *a2)
{
  int v3; // ebx
  char v4; // si
  __int64 *v5; // rdi
  __int64 *v6; // rbp
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = *a1;
  v6 = a1[1];
  while ( v5 != v6 )
  {
    InputSite::GetAttachedObject<IContainerInfoInputObjectProxy>(*v5, &v8);
    if ( v8 )
    {
      v3 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
      v4 = 1;
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v8);
    ++v5;
  }
  *a2 = v3;
  return v4;
}
