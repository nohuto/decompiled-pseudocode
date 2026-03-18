/*
 * XREFs of ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x18021F8C4
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800846F0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180099040 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x1801D9B70 (-CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCReso.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x180207768 (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 *     ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x1802078D8 (-UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x18020798C (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x1802090C0 (-StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ.c)
 *     ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x180209700 (-StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ.c)
 *     ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x1802107C4 (-UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Bound.c)
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x18021E9E0 (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 * Callees:
 *     ??D?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEBAAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18021E6A4 (--D-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipulation@@Uer.c)
 */

struct CChainingHelper *__fastcall InteractionSourceManager::TryGetActiveChainingHelper(__int64 **this)
{
  __int64 v1; // r9
  __int64 *v2; // rax
  _QWORD *v3; // r10
  unsigned __int8 *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r11
  _QWORD *v10; // rdx
  __int64 v11; // r8
  _QWORD *i; // rax
  _QWORD *v13; // rcx
  __int64 *v15[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( this[4] && this[14] )
  {
    v15[2] = this[13];
    v15[0] = this[10];
    v15[1] = 0LL;
    v2 = (__int64 *)std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>::operator*(v15);
    v4 = (unsigned __int8 *)&v16;
    v5 = (unsigned int)(v1 + 8);
    v6 = *v2;
    v7 = 0xCBF29CE484222325uLL;
    v16 = v6;
    do
    {
      v8 = *v4++;
      v7 = 0x100000001B3LL * (v8 ^ v7);
      --v5;
    }
    while ( v5 );
    v9 = v3[5];
    v10 = (_QWORD *)v3[3];
    v11 = 2 * (v7 & v3[8]);
    for ( i = *(_QWORD **)(v9 + 16 * (v7 & v3[8])); ; i = (_QWORD *)*i )
    {
      v13 = *(_QWORD **)(v9 + 8 * v11) == v10 ? (_QWORD *)v3[3] : **(_QWORD ***)(v9 + 8 * v11 + 8);
      if ( i == v13 )
        break;
      if ( i[2] == v6 )
        goto LABEL_13;
    }
    i = (_QWORD *)v3[3];
LABEL_13:
    if ( i != v10 )
      return (struct CChainingHelper *)i[3];
  }
  return (struct CChainingHelper *)v1;
}
