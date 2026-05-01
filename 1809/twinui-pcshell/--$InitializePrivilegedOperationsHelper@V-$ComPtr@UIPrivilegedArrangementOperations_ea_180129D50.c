/*
 * XREFs of ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedTabletModeOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@34@@Z @ 0x180129D50
 * Callers:
 *     ?InitializePrivilegedOperations@CApplicationViewManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x18012D010 (-InitializePrivilegedOperations@CApplicationViewManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@@Z @ 0x180129DBC (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedTabletModeOperations@_ea_180129DBC.c)
 */

__int64 __fastcall InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedArrangementOperations>,Microsoft::WRL::ComPtr<IPrivilegedTabletModeOperations>>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 *a3,
        __int64 a4)
{
  __int64 v5; // rax

  v5 = *a1 - *(_QWORD *)&GUID_bf813bd9_98b6_45da_a60e_ac905433da90.Data1;
  if ( *a1 == *(_QWORD *)&GUID_bf813bd9_98b6_45da_a60e_ac905433da90.Data1 )
    v5 = a1[1] - *(_QWORD *)GUID_bf813bd9_98b6_45da_a60e_ac905433da90.Data4;
  if ( v5 )
    return InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedTabletModeOperations>,>(a1, a2, a4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a3);
  (**a2)(a2, &GUID_bf813bd9_98b6_45da_a60e_ac905433da90, a3);
  return 0LL;
}
