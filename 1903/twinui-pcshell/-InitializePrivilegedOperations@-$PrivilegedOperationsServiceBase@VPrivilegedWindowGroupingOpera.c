/*
 * XREFs of ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x1801EADE0
 * Callers:
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x1801EAD3C (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@V.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800801DC (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VIamAccess@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIamAccess@@@Z @ 0x1801E9314 (--$MakeAndInitialize@VIamAccess@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIamAccess@@@Z.c)
 *     ??$MakeAndInitialize@VPrivilegedWindowGroupingOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedWindowGroupingOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1801E9558 (--$MakeAndInitialize@VPrivilegedWindowGroupingOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Micr.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowGroupingOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1801EB2A8 (-InternalRelease@-$ComPtr@VPrivilegedWindowGroupingOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<PrivilegedWindowGroupingOperations>::InitializePrivilegedOperations(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a2;
  v10 = (volatile signed __int32 *)v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((volatile signed __int32 **)a1);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<IamAccess,IamAccess,>((volatile signed __int32 **)a1);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x266,
      (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v5);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  if ( v6 >= 0 )
  {
    v10 = *(volatile signed __int32 **)a1;
    Microsoft::WRL::ComPtr<PrivilegedWindowGroupingOperations>::InternalRelease(a1 + 8);
    v7 = Microsoft::WRL::Details::MakeAndInitialize<PrivilegedWindowGroupingOperations,PrivilegedWindowGroupingOperations,IamAccess *,Microsoft::WRL::WeakRef &>(
           (PrivilegedWindowGroupingOperations **)(a1 + 8),
           &v10,
           a2);
    v6 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28E,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return (unsigned int)v6;
}
