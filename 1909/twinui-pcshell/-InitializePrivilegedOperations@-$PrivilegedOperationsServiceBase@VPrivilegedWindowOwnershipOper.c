/*
 * XREFs of ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x18020A0D0
 * Callers:
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x180209E14 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedSizeConstraintsOpe.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VPrivilegedWindowOwnershipOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedWindowOwnershipOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x180208850 (--$MakeAndInitialize@VPrivilegedWindowOwnershipOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Mic.c)
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x180209F5C (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@V.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x18020A47C (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowGroupingOperations>::InitializePrivilegedOperations(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = *a2;
  v9 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = PrivilegedOperationsServiceBase<PrivilegedHotkeyOperations,PrivilegedWindowGroupingOperations>::InitializePrivilegedOperations(
         a1,
         &v9);
  if ( v5 >= 0 )
  {
    v9 = *a1;
    Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(a1 + 3);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<PrivilegedWindowOwnershipOperations,PrivilegedWindowOwnershipOperations,IamAccess *,Microsoft::WRL::WeakRef &>(
           a1 + 3,
           &v9,
           a2);
    v5 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28E,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return (unsigned int)v5;
}
