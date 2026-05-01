/*
 * XREFs of ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x1801EAB50
 * Callers:
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x1801EA964 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCPrivilegedPresentationOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedPresentationOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1801E9110 (--$MakeAndInitialize@VCPrivilegedPresentationOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Micro.c)
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x1801EAAAC (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedNotificationOperat.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedPresentationOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1801EB23C (-InternalRelease@-$ComPtr@VCPrivilegedPresentationOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowGroupingOperations>::InitializePrivilegedOperations(
        __int64 a1,
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
  v5 = PrivilegedOperationsServiceBase<CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowGroupingOperations>::InitializePrivilegedOperations(
         a1,
         &v9);
  if ( v5 >= 0 )
  {
    v9 = *(_QWORD *)a1;
    Microsoft::WRL::ComPtr<CPrivilegedPresentationOperations>::InternalRelease(a1 + 72);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<CPrivilegedPresentationOperations,CPrivilegedPresentationOperations,IamAccess *,Microsoft::WRL::WeakRef &>(
           (CPrivilegedPresentationOperations **)(a1 + 72),
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
