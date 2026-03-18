/*
 * XREFs of ?_Tidy@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@AEAAXXZ @ 0x180193968
 * Callers:
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x180192900 (--1CConditionalExpression@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<CConditionalExpression::ConditionExpressionListEntry>::_Tidy(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v1 + 1);
        v4 = *v1;
        if ( *v1 )
        {
          *v1 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        v1 += 2;
      }
      while ( v1 != v3 );
      v1 = *(__int64 **)a1;
    }
    std::_Deallocate<16,0>(v1, (*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
