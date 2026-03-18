/*
 * XREFs of ?_Destroy@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@AEAAXPEAUConditionExpressionListEntry@CConditionalExpression@@0@Z @ 0x180193914
 * Callers:
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x180192900 (--1CConditionalExpression@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<CConditionalExpression::ConditionExpressionListEntry>::_Destroy(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 result; // rax
  __int64 v6; // rcx

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v4 + 1);
      v6 = *v4;
      if ( *v4 )
      {
        *v4 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      v4 += 2;
    }
    while ( v4 != a3 );
  }
  return result;
}
