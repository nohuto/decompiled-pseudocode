/*
 * XREFs of ??$MakeAndInitialize@VCPrivilegedTabletModeOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedTabletModeOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1801E9268
 * Callers:
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x1801EAC98 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperatio.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CPrivilegedTabletModeOperations@@QEAA@XZ @ 0x1801E9BB4 (--0CPrivilegedTabletModeOperations@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1801EB284 (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@?$PrivilegedOperationsBase@UIPrivilegedHotkeyOperations@@@@QEAAJPEAVIamAccess@@VWeakRef@WRL@Microsoft@@@Z @ 0x1801EC294 (-RuntimeClassInitialize@-$PrivilegedOperationsBase@UIPrivilegedHotkeyOperations@@@@QEAAJPEAVIamA.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPrivilegedTabletModeOperations,CPrivilegedTabletModeOperations,IamAccess *,Microsoft::WRL::WeakRef &>(
        CPrivilegedTabletModeOperations **a1,
        _QWORD *a2,
        __int64 *a3)
{
  CPrivilegedTabletModeOperations *v6; // rax
  int v7; // edi
  CPrivilegedTabletModeOperations *v8; // rax
  __int64 v9; // rcx
  CPrivilegedTabletModeOperations *v10; // rbx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  CPrivilegedTabletModeOperations *v13; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (CPrivilegedTabletModeOperations *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = CPrivilegedTabletModeOperations::CPrivilegedTabletModeOperations(v6);
    v9 = *a3;
    v10 = v8;
    v13 = v8;
    v12 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v7 = PrivilegedOperationsBase<IPrivilegedHotkeyOperations>::RuntimeClassInitialize(v10, *a2, &v12);
    if ( v7 >= 0 )
    {
      if ( v10 )
        _InterlockedIncrement((volatile signed __int32 *)v10 + 11);
      *a1 = v10;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
