/*
 * XREFs of ?CIconLoader_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180346938
 * Callers:
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1803409F0 (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CIconLoader@@QEAA@XZ @ 0x180346404 (--0CIconLoader@@QEAA@XZ.c)
 */

__int64 __fastcall CIconLoader_CreateInstance(const struct _GUID *a1, void **a2)
{
  CIconLoader *v3; // rax
  CIconLoader *v4; // rax
  CIconLoader *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CIconLoader *v12; // [rsp+30h] [rbp+8h] BYREF
  CIconLoader *v13; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v12 = 0LL;
  v3 = (CIconLoader *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v3 )
  {
    v7 = -2147024882;
    v9 = 202LL;
    v8 = 2147942414LL;
    goto LABEL_7;
  }
  v4 = CIconLoader::CIconLoader(v3);
  v13 = v4;
  v5 = v4;
  if ( v4 )
    (*(void (__fastcall **)(CIconLoader *))(*(_QWORD *)v4 + 8LL))(v4);
  v12 = v5;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  v6 = (**(__int64 (__fastcall ***)(CIconLoader *, GUID *, void **))v12)(
         v12,
         &GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
         a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 203LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
      (const char *)v8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v7;
}
