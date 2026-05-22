/*
 * XREFs of ?Create@DragNDropProcessorLegacy@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x1800C8E64
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180087644 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0DragNDropProcessorLegacy@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z @ 0x1800C8930 (--0DragNDropProcessorLegacy@@AEAA@AEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z.c)
 *     ?Initialize@DragNDropProcessorLegacy@@AEAAJXZ @ 0x1800C8BB0 (-Initialize@DragNDropProcessorLegacy@@AEAAJXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragNDropProcessorLegacy::Create(__int64 *a1, DragNDropProcessorLegacy **a2)
{
  DragNDropProcessorLegacy *v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // r9
  __int64 v7; // rdx
  void *v8; // rax
  __int64 v9; // rbx
  DragNDropProcessorLegacy *v10; // rsi
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0LL;
  if ( !a2 )
  {
    v5 = -2147024809;
    v6 = 2147942487LL;
    v7 = 111LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)v6);
    goto LABEL_14;
  }
  v8 = malloc(0xD0uLL);
  v9 = (__int64)v8;
  if ( v8 )
    memset_0(v8, 0, 0xD0uLL);
  if ( v9 )
    v10 = (DragNDropProcessorLegacy *)DragNDropProcessorLegacy::DragNDropProcessorLegacy(v9, a1);
  else
    v10 = 0LL;
  v4 = v10;
  if ( !v10 )
  {
    v5 = -2147024882;
    v6 = 2147942414LL;
    v7 = 118LL;
    goto LABEL_12;
  }
  v11 = DragNDropProcessorLegacy::Initialize(v10);
  v5 = v11;
  if ( v11 < 0 )
  {
    v6 = (unsigned int)v11;
    v7 = 121LL;
    goto LABEL_12;
  }
  v4 = 0LL;
  *a2 = v10;
  v5 = 0;
LABEL_14:
  if ( v4 )
    (*(void (__fastcall **)(DragNDropProcessorLegacy *))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
