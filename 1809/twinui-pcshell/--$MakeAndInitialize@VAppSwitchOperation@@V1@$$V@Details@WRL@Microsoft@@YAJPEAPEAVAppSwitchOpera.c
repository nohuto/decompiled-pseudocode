/*
 * XREFs of ??$MakeAndInitialize@VAppSwitchOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppSwitchOperation@@@Z @ 0x180355734
 * Callers:
 *     ?AppSwitchOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180355978 (-AppSwitchOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1800EF640 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??0AppSwitchOperation@@QEAA@XZ @ 0x180355860 (--0AppSwitchOperation@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppSwitchOperation,AppSwitchOperation,>(
        AppSwitchOperation **a1)
{
  AppSwitchOperation *v2; // rax
  int inited; // edi
  AppSwitchOperation *v4; // rbx
  AppSwitchOperation *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (AppSwitchOperation *)operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = AppSwitchOperation::AppSwitchOperation(v2);
    v6 = v4;
    inited = CObjectWithThreadUseDetection::InitApartmentId((AppSwitchOperation *)((char *)v4 + 192));
    if ( inited >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(AppSwitchOperation *))(*(_QWORD *)v4 + 8LL))(v4);
      *a1 = v4;
      inited = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)inited;
}
