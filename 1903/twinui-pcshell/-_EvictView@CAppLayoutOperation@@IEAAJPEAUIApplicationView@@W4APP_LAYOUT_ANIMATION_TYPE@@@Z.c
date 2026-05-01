/*
 * XREFs of ?_EvictView@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18041BB2C
 * Callers:
 *     ?QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x1803BCD74 (-QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@P.c)
 *     ?_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA_N@Z @ 0x18041B750 (-_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA.c)
 *     ?_EvictItem@CAppLayoutOperation@@IEAAJIW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18041B9F0 (-_EvictItem@CAppLayoutOperation@@IEAAJIW4APP_LAYOUT_ANIMATION_TYPE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18041A7B8 (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 */

__int64 __fastcall CAppLayoutOperation::_EvictView(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 280LL))(*(_QWORD *)(a1 + 40));
  if ( (int)result >= 0 )
    return CAppLayoutOperation::_AddAnimationData((_QWORD *)a1, a2, a3);
  return result;
}
