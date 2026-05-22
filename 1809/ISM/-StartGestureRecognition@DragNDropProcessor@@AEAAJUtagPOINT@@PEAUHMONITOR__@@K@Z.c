/*
 * XREFs of ?StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x1800235F4
 * Callers:
 *     ?OnHitTest@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180023520 (-OnHitTest@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInit.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180023BA0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetAndInitializeInteractionContext@MessageInfo@DragNDropProcessor@@QEAAJXZ @ 0x180022C10 (-ResetAndInitializeInteractionContext@MessageInfo@DragNDropProcessor@@QEAAJXZ.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@7@Z @ 0x180024AD0 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragS.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ??A?$unordered_map@KVMessageInfo@DragNDropProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@@std@@QEAAAEAVMessageInfo@DragNDropProcessor@@AEBK@Z @ 0x180025D98 (--A-$unordered_map@KVMessageInfo@DragNDropProcessor@@U-$hash@K@std@@U-$equal_to@K@4@V-$allocator.c)
 *     ??0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z @ 0x180054600 (--0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DragNDropProcessor::StartGestureRecognition(
        struct InputSite **this,
        struct tagPOINT a2,
        HMONITOR a3,
        int a4)
{
  char *v7; // r15
  struct InputSite *v8; // rbx
  struct InputSite *v9; // rdi
  struct BamoDragManagerClientProxy *v10; // rsi
  struct BamoDragSourceClientProxy *v11; // r14
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct InputSite *v15; // rcx
  struct InputSite *v16; // rcx
  int InteractionContext; // eax
  int v18; // eax
  PointerInfoAdapter *v19; // rax
  bool v20; // r8
  PointerInfoAdapter *v21; // r12
  PointerInfoAdapter *v22; // rax
  __int64 v23; // rcx
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rcx
  struct InputSite *v29; // [rsp+58h] [rbp-9h] BYREF
  struct BamoDragManagerClientProxy *v30; // [rsp+60h] [rbp-1h] BYREF
  struct BamoDragSourceClientProxy *v31; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v32[3]; // [rsp+70h] [rbp+Fh] BYREF
  struct _GUID v33; // [rsp+88h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  struct InputSite *v35; // [rsp+C8h] [rbp+67h] BYREF
  int v36; // [rsp+E0h] [rbp+7Fh] BYREF

  v36 = a4;
  v32[1] = -2LL;
  v7 = (char *)(this + 13);
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    this + 13,
    &v35,
    &v36);
  if ( v35 != this[14] )
    return 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v35 = 0LL;
  v29 = 0LL;
  v33 = DirectX::g_XMZero;
  DragNDropProcessor::HitTest((DragNDropProcessor *)this, a2, a3, &v33, 0LL, 0LL, &v31, &v30, &v35, &v29);
  v8 = v35;
  v9 = v29;
  v10 = v30;
  v11 = v31;
  if ( !v31 || !v30 )
  {
    v25 = std::unordered_map<unsigned long,DragNDropProcessor::MessageInfo>::operator[](v7, &v36);
    v26 = v25;
    v27 = *(_QWORD *)(v25 + 16);
    if ( v27 )
    {
      *(_QWORD *)(v25 + 16) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
    }
    v28 = *(_QWORD *)(v26 + 24);
    if ( v28 )
    {
      *(_QWORD *)(v26 + 24) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
    }
    goto LABEL_43;
  }
  v12 = std::unordered_map<unsigned long,DragNDropProcessor::MessageInfo>::operator[](v7, &v36);
  if ( *(struct BamoDragSourceClientProxy **)(v12 + 16) != v11 )
  {
    (**(void (__fastcall ***)(struct BamoDragSourceClientProxy *))v11)(v11);
    v13 = *(_QWORD *)(v12 + 16);
    *(_QWORD *)(v12 + 16) = v11;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  }
  if ( *(struct BamoDragManagerClientProxy **)(v12 + 24) != v10 )
  {
    (**(void (__fastcall ***)(struct BamoDragManagerClientProxy *))v10)(v10);
    v14 = *(_QWORD *)(v12 + 24);
    *(_QWORD *)(v12 + 24) = v10;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  }
  v15 = *(struct InputSite **)(v12 + 48);
  if ( v15 != v8 )
  {
    if ( v8 )
    {
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v8 + 8LL))(v8);
      v15 = *(struct InputSite **)(v12 + 48);
    }
    *(_QWORD *)(v12 + 48) = v8;
    if ( v15 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *(struct InputSite **)(v12 + 56);
  if ( v16 != v9 )
  {
    if ( v9 )
    {
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v9 + 8LL))(v9);
      v16 = *(struct InputSite **)(v12 + 56);
    }
    *(_QWORD *)(v12 + 56) = v9;
    if ( v16 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  InteractionContext = CreateInteractionContext(v32);
  if ( InteractionContext < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xEF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      (const char *)(unsigned int)InteractionContext);
    JUMPOUT(0x1800239C9LL);
  }
  if ( !v32[0] )
    goto LABEL_38;
  *(_QWORD *)(v12 + 40) = v32[0];
  v18 = DragNDropProcessor::MessageInfo::ResetAndInitializeInteractionContext((DragNDropProcessor::MessageInfo *)v12);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v19 = (PointerInfoAdapter *)malloc(0xB0uLL);
  v21 = v19;
  if ( v19 )
    memset_0(v19, 0, 0xB0uLL);
  *(_QWORD *)&v33.Data1 = v21;
  if ( v21 )
    v21 = PointerInfoAdapter::PointerInfoAdapter(v21, (struct IPointerInfoAdapterClient *)v12, v20);
  v22 = *(PointerInfoAdapter **)(v12 + 32);
  if ( v22 != v21 )
  {
    v23 = *(_QWORD *)(v12 + 32);
    if ( v21 )
    {
      (*(void (__fastcall **)(PointerInfoAdapter *))(*(_QWORD *)v21 + 8LL))(v21);
      v23 = *(_QWORD *)(v12 + 32);
    }
    *(_QWORD *)(v12 + 32) = v21;
    v22 = v21;
    if ( v23 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      v22 = *(PointerInfoAdapter **)(v12 + 32);
    }
  }
  if ( v22 )
  {
LABEL_38:
    *(_DWORD *)(v12 + 8) = 2;
LABEL_43:
    if ( v9 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v8 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v10 )
      (*(void (__fastcall **)(struct BamoDragManagerClientProxy *))(*(_QWORD *)v10 + 8LL))(v10);
    if ( v11 )
      (*(void (__fastcall **)(struct BamoDragSourceClientProxy *))(*(_QWORD *)v11 + 8LL))(v11);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF5,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragndropprocessor.cpp",
    (const char *)0x8007000ELL);
  if ( v9 )
    (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v8 )
    (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v8 + 16LL))(v8);
  (*(void (__fastcall **)(struct BamoDragManagerClientProxy *))(*(_QWORD *)v10 + 8LL))(v10);
  (*(void (__fastcall **)(struct BamoDragSourceClientProxy *))(*(_QWORD *)v11 + 8LL))(v11);
  return 2147942414LL;
}
