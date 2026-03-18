/*
 * XREFs of ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x1800BD9C0
 * Callers:
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800A0000 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801A2E54 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?Create@?$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z @ 0x1801A56D0 (-Create@-$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1801A8D7C (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??0CWeakResourceReference@@AEAA@PEAVCResource@@@Z @ 0x1800BDA90 (--0CWeakResourceReference@@AEAA@PEAVCResource@@@Z.c)
 *     ??4?$com_ptr_t@VCWeakResourceReference@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCWeakResourceReference@@@Z @ 0x1800BDAF0 (--4-$com_ptr_t@VCWeakResourceReference@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCWeakRe.c)
 *     ??$_Try_emplace@AEBQEBVCResource@@$$V@?$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@4@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@_N@1@AEBQEBVCResource@@@Z @ 0x1800C4970 (--$_Try_emplace@AEBQEBVCResource@@$$V@-$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWeakResourceReference::Get(struct CResource *a1, struct CWeakResourceReference **a2)
{
  unsigned int v2; // ebx
  bool v4; // zf
  struct CWeakResourceReference *v5; // rdi
  CWeakResourceReference *v7; // rax
  CWeakResourceReference *v8; // rax
  unsigned int v9; // ecx
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  struct CResource *v11; // [rsp+50h] [rbp+8h] BYREF
  struct CWeakResourceReference *v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = a1;
  v2 = 0;
  v4 = (*((_BYTE *)a1 + 32) & 8) == 0;
  v12 = 0LL;
  if ( v4 )
  {
    v7 = (CWeakResourceReference *)WPF::ProcessHeapImpl::AllocClear(0x30uLL);
    if ( v7 )
      v8 = CWeakResourceReference::CWeakResourceReference(v7, v11);
    else
      v8 = 0LL;
    wil::com_ptr_t<CWeakResourceReference,wil::err_returncode_policy>::operator=(&v12, v8);
    v5 = v12;
    if ( !v12 )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x23u);
      return v2;
    }
  }
  else
  {
    std::unordered_map<CResource const *,CWeakResourceReference *>::_Try_emplace<CResource const * const &,>(
      a1,
      v10,
      &v11);
    v5 = *(struct CWeakResourceReference **)(v10[0] + 24LL);
    if ( v5 )
      (**(void (__fastcall ***)(_QWORD))v5)(*(_QWORD *)(v10[0] + 24LL));
  }
  *a2 = v5;
  return v2;
}
