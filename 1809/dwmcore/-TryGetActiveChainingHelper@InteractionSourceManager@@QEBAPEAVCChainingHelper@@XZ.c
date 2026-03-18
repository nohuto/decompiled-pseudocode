/*
 * XREFs of ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x1801E5E88
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18004F550 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800BF370 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x18019EEF8 (-CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCReso.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x1801D65B0 (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 *     ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x1801D671C (-UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1801D67D0 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x1801D7F80 (-StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ.c)
 *     ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x1801D85B0 (-StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ.c)
 *     ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x1801E06B4 (-UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Bound.c)
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x1801E4FC8 (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18005E3D8 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ??D?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEBAAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1801E4C80 (--D-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipulation@@Uer.c)
 */

struct CChainingHelper *__fastcall InteractionSourceManager::TryGetActiveChainingHelper(__int64 **this)
{
  __int64 v1; // r11
  int v3; // r11d
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 *v6; // r8
  unsigned __int64 v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // r9
  __int64 *i; // rax
  __int64 *v11; // rcx
  __int64 *v13[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( this[4] && this[14] )
  {
    v13[2] = this[13];
    v13[0] = this[10];
    v13[1] = 0LL;
    v4 = *(_QWORD *)std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>::operator*(v13);
    v14 = v4;
    v5 = std::_Hash_bytes((const unsigned __int8 *)&v14, (unsigned int)(v3 + 8));
    v6 = this[5];
    v8 = this[3];
    v7 = (unsigned __int64)this[8] & v5;
    v9 = 2 * v7;
    for ( i = (__int64 *)v6[2 * v7]; ; i = (__int64 *)*i )
    {
      v11 = (__int64 *)v6[v9] == v8 ? this[3] : *(__int64 **)v6[v9 + 1];
      if ( i == v11 )
        break;
      if ( i[2] == v4 )
        goto LABEL_11;
    }
    i = this[3];
LABEL_11:
    if ( i != v8 )
      return (struct CChainingHelper *)i[3];
  }
  return (struct CChainingHelper *)v1;
}
