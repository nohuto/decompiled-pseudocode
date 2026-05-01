/*
 * XREFs of ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedForegroundOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@34@@Z @ 0x18012A7D8
 * Callers:
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedTabletModeOperations@@@23@V?$ComPtr@UIPrivilegedForegroundOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@34@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@34@@Z @ 0x18012A5C4 (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Micros.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@@Z @ 0x18012A644 (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microso.c)
 */

__int64 __fastcall InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedTabletModeOperations>,Microsoft::WRL::ComPtr<IPrivilegedForegroundOperations>>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 *a3,
        __int64 *a4)
{
  __int64 v5; // rax
  void (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx

  v5 = *a1 - *(_QWORD *)&GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data1;
  if ( *a1 == *(_QWORD *)&GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data1 )
    v5 = a1[1] - *(_QWORD *)GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data4;
  if ( v5 )
    return InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedForegroundOperations>,>(a1, a2, a4);
  v7 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a3);
  v7(a2, &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd, a3);
  return 0LL;
}
