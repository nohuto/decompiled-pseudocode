/*
 * XREFs of ??$MakeAndInitialize@VPPILayoutOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPPILayoutOperation@@@Z @ 0x1803DEE60
 * Callers:
 *     ?PPILayoutOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803DF460 (-PPILayoutOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180132F80 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??0PPILayoutOperation@@QEAA@XZ @ 0x1803DEF8C (--0PPILayoutOperation@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PPILayoutOperation,PPILayoutOperation,>(
        PPILayoutOperation **a1)
{
  PPILayoutOperation *v2; // rax
  int inited; // edi
  PPILayoutOperation *v4; // rbx
  PPILayoutOperation *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (PPILayoutOperation *)operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = PPILayoutOperation::PPILayoutOperation(v2);
    v6 = v4;
    inited = CObjectWithThreadUseDetection::InitApartmentId((PPILayoutOperation *)((char *)v4 + 192));
    if ( inited >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(PPILayoutOperation *))(*(_QWORD *)v4 + 8LL))(v4);
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
