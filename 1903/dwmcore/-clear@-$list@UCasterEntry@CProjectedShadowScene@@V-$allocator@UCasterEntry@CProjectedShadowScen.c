/*
 * XREFs of ?clear@?$list@UCasterEntry@CProjectedShadowScene@@V?$allocator@UCasterEntry@CProjectedShadowScene@@@std@@@std@@QEAAXXZ @ 0x180003EBC
 * Callers:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x1800039E0 (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x180003E2C (-ClearCasters@CProjectedShadowScene@@AEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

_QWORD **__fastcall std::list<CProjectedShadowScene::CasterEntry>::clear(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD **result; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rsi

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  result = *(_QWORD ***)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v4 = v2[2];
      v5 = (_QWORD *)*v2;
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      result = (_QWORD **)std::_Deallocate<16,0>(v2, 176LL);
      v2 = v5;
    }
    while ( v5 != *(_QWORD **)a1 );
  }
  return result;
}
