/*
 * XREFs of ?s_CreateInstance_Gutter@CAppLayoutItem@@SAJPEAUtagRECT@@0AEBU_GUID@@PEAPEAX@Z @ 0x1803BDD3C
 * Callers:
 *     ?_CommitGutters@CAppLayout@@AEAAJXZ @ 0x1803BC3BC (-_CommitGutters@CAppLayout@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1800E5FEC (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ??0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@PEAUtagRECT@@1@Z @ 0x1803BCF68 (--0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@PEAUtagRECT@@1@Z.c)
 */

__int64 __fastcall CAppLayoutItem::s_CreateInstance_Gutter(
        struct tagRECT *a1,
        struct tagRECT *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v6; // rbx
  void *v8; // rax
  __int64 v9; // rax
  bool v10; // cl
  unsigned int v11; // edi
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  v13 = 0LL;
  v8 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = 0;
  if ( v8 )
  {
    v9 = CAppLayoutItem::CAppLayoutItem((__int64)v8, 2, a1, a2);
    Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach(&v13, v9);
    v6 = v13;
    if ( v13 )
      v10 = 1;
  }
  v11 = !v10 ? 0x8007000E : 0;
  if ( v10 )
    v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, void **))v6)(v6, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, a4);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v11;
}
