/*
 * XREFs of ?GetSpatialInputActivationPolicyFromInputSites@DWMInputRouter@@AEAA?AW4SPATIAL_INPUT_ACTIVATION_POLICY@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800C357C
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1800C43D0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIActivationConfigurationInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIActivationConfigurationInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800665E4 (--$As@UIActivationConfigurationInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$Co.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::GetSpatialInputActivationPolicyFromInputSites(__int64 a1, __int64 **a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  int v4; // esi
  __int64 *v5; // r14
  __int64 *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 result; // rax
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = a1;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = *a2;
  v6 = a2[1];
  if ( *a2 == v6 )
    goto LABEL_17;
  while ( 1 )
  {
    v7 = *v5;
    v8 = 0LL;
    v12 = 0LL;
    v9 = *(_QWORD *)(v7 + 392);
    v10 = *(_QWORD *)(v7 + 400);
    if ( v9 != v10 )
    {
      do
      {
        if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IActivationConfigurationInputObjectProxy>(
                    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v9 + 8),
                    &v12) >= 0 )
          break;
        v9 += 16LL;
      }
      while ( v9 != v10 );
      v8 = v12;
    }
    if ( v8 )
    {
      if ( !v3 )
      {
        v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
        v8 = v12;
      }
      if ( !v4 )
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
      if ( v3 && v4 )
        break;
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v12);
    if ( ++v5 == v6 )
      goto LABEL_16;
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v12);
LABEL_16:
  if ( !v3 )
LABEL_17:
    v3 = 1;
  if ( !v4 )
    v4 = 2;
  if ( v3 == 2 )
  {
    v2 = 1;
  }
  else if ( v3 == 3 )
  {
    v2 = 2;
  }
  result = v2 | 4;
  if ( v4 != 1 )
    return v2;
  return result;
}
