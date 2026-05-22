/*
 * XREFs of ??$MakeAndInitialize@VViewHierarchy@@UIViewHierarchy@@W4TestMode@1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewHierarchy@@@WRL@Microsoft@@@012@$$QEAW4TestMode@ViewHierarchy@@@Z @ 0x18000F250
 * Callers:
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000C2CC (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 * Callees:
 *     ??0ViewHierarchy@@AEAA@XZ @ 0x18000D4B8 (--0ViewHierarchy@@AEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewHierarchy,IViewHierarchy,enum ViewHierarchy::TestMode>(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 v4; // rcx
  ViewHierarchy *v5; // rax
  int v6; // edi
  ViewHierarchy *v7; // rsi
  __int64 v8; // rax

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *a1 = 0LL;
  v5 = (ViewHierarchy *)operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v7 = ViewHierarchy::ViewHierarchy(v5);
    v6 = (*(__int64 (__fastcall **)(ViewHierarchy *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, *a2);
    v8 = *(_QWORD *)v7;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(ViewHierarchy *, GUID *, __int64 *))v8)(
             v7,
             &GUID_60285f40_b2da_4b48_b9fd_7550a7fff1b4,
             a1);
      (*(void (__fastcall **)(ViewHierarchy *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
      (*(void (__fastcall **)(ViewHierarchy *))(v8 + 16))(v7);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
