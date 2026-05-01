/*
 * XREFs of ?InitializePrivilegedOperations@CApplicationViewManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1801758F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedTabletModeOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@34@@Z @ 0x1801726B4 (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedArrangementOperations_ea_1801726B4.c)
 */

__int64 __fastcall CApplicationViewManager::InitializePrivilegedOperations(
        CApplicationViewManager *this,
        struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  char *v5; // rbx
  unsigned int v6; // ebx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_1258a377_0646_40fd_b5fc_b642b81befba.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1258a377_0646_40fd_b5fc_b642b81befba.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_1258a377_0646_40fd_b5fc_b642b81befba.Data4;
  if ( v4 )
  {
    v7 = InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedArrangementOperations>,Microsoft::WRL::ComPtr<IPrivilegedTabletModeOperations>>(
           a2,
           a3,
           (__int64 *)this + 76,
           (__int64)this + 616);
    v6 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30F,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    v5 = (char *)this + 600;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 75);
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))a3->lpVtbl->QueryInterface)(
      a3,
      &GUID_1258a377_0646_40fd_b5fc_b642b81befba,
      v5);
    return 0;
  }
  return v6;
}
