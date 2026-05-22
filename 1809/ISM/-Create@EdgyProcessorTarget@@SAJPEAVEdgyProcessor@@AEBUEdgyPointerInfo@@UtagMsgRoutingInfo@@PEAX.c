/*
 * XREFs of ?Create@EdgyProcessorTarget@@SAJPEAVEdgyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAXPEAPEAV1@@Z @ 0x1800CCE08
 * Callers:
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800CA970 (-OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialSt.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0EdgyProcessorTarget@@IEAA@PEAVEdgyProcessor@@@Z @ 0x1800CC938 (--0EdgyProcessorTarget@@IEAA@PEAVEdgyProcessor@@@Z.c)
 *     ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x1800CCB48 (-Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EdgyProcessorTarget::Create(
        struct EdgyProcessor *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        EdgyProcessorTarget **a5)
{
  EdgyProcessorTarget *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  EdgyProcessorTarget *v13; // rax
  EdgyProcessorTarget *v14; // rbx
  EdgyProcessorTarget *v15; // rsi
  int v16; // eax
  _OWORD v18[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v9 = 0LL;
  if ( !a1 )
  {
    v10 = -2147024809;
    v11 = 2147942487LL;
    v12 = 59LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
      (const char *)v11);
    goto LABEL_16;
  }
  if ( !a5 )
  {
    v10 = -2147024809;
    v11 = 2147942487LL;
    v12 = 60LL;
    goto LABEL_14;
  }
  v13 = (EdgyProcessorTarget *)malloc(0xC8uLL);
  v14 = v13;
  if ( v13 )
    memset_0(v13, 0, 0xC8uLL);
  if ( v14 )
    v15 = EdgyProcessorTarget::EdgyProcessorTarget(v14, a1);
  else
    v15 = 0LL;
  v9 = v15;
  if ( !v15 )
  {
    v10 = -2147024882;
    v11 = 2147942414LL;
    v12 = 63LL;
    goto LABEL_14;
  }
  v18[0] = *(_OWORD *)a3;
  v18[1] = *(_OWORD *)(a3 + 16);
  v19 = *(_QWORD *)(a3 + 32);
  v16 = EdgyProcessorTarget::Initialize(v15, a2, (__int64)v18, a4);
  v10 = v16;
  if ( v16 < 0 )
  {
    v11 = (unsigned int)v16;
    v12 = 65LL;
    goto LABEL_14;
  }
  v9 = 0LL;
  *a5 = v15;
  v10 = 0;
LABEL_16:
  if ( v9 )
    (*(void (__fastcall **)(EdgyProcessorTarget *))(*(_QWORD *)v9 + 16LL))(v9);
  return v10;
}
