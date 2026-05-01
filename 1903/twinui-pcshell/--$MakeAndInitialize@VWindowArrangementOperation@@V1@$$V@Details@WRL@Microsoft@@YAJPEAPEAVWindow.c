/*
 * XREFs of ??$MakeAndInitialize@VWindowArrangementOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVWindowArrangementOperation@@@Z @ 0x1803BCA44
 * Callers:
 *     ?WindowArrangementOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803BD494 (-WindowArrangementOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180113AF0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??0WindowArrangementOperation@@QEAA@XZ @ 0x1803BCB70 (--0WindowArrangementOperation@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<WindowArrangementOperation,WindowArrangementOperation,>(
        WindowArrangementOperation **a1)
{
  WindowArrangementOperation *v2; // rax
  int inited; // edi
  WindowArrangementOperation *v4; // rbx
  WindowArrangementOperation *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (WindowArrangementOperation *)operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = WindowArrangementOperation::WindowArrangementOperation(v2);
    v6 = v4;
    inited = CObjectWithThreadUseDetection::InitApartmentId((WindowArrangementOperation *)((char *)v4 + 192));
    if ( inited >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(WindowArrangementOperation *))(*(_QWORD *)v4 + 8LL))(v4);
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
