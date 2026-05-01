/*
 * XREFs of ??$MakeAndInitialize@VPrivilegedWindowGroupingOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedWindowGroupingOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1801E9558
 * Callers:
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x1801EADE0 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowGroupingOpera.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0PrivilegedWindowGroupingOperations@@QEAA@XZ @ 0x1801E9D80 (--0PrivilegedWindowGroupingOperations@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowGroupingOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1801EB2A8 (-InternalRelease@-$ComPtr@VPrivilegedWindowGroupingOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@?$PrivilegedOperationsBase@UIPrivilegedHotkeyOperations@@@@QEAAJPEAVIamAccess@@VWeakRef@WRL@Microsoft@@@Z @ 0x1801EC294 (-RuntimeClassInitialize@-$PrivilegedOperationsBase@UIPrivilegedHotkeyOperations@@@@QEAAJPEAVIamA.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PrivilegedWindowGroupingOperations,PrivilegedWindowGroupingOperations,IamAccess *,Microsoft::WRL::WeakRef &>(
        PrivilegedWindowGroupingOperations **a1,
        _QWORD *a2,
        __int64 *a3)
{
  PrivilegedWindowGroupingOperations *v6; // rax
  int v7; // edi
  PrivilegedWindowGroupingOperations *v8; // rax
  __int64 v9; // rcx
  PrivilegedWindowGroupingOperations *v10; // rbx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  PrivilegedWindowGroupingOperations *v13; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (PrivilegedWindowGroupingOperations *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = PrivilegedWindowGroupingOperations::PrivilegedWindowGroupingOperations(v6);
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
    Microsoft::WRL::ComPtr<PrivilegedWindowGroupingOperations>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
