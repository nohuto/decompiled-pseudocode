/*
 * XREFs of ??1CConditionalExpression@@UEAA@XZ @ 0x180192900
 * Callers:
 *     ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x1801929C0 (--_ECConditionalExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?_Destroy@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@AEAAXPEAUConditionExpressionListEntry@CConditionalExpression@@0@Z @ 0x180193914 (-_Destroy@-$vector@UConditionExpressionListEntry@CConditionalExpression@@V-$allocator@UCondition.c)
 *     ?_Tidy@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@AEAAXXZ @ 0x180193968 (-_Tidy@-$vector@UConditionExpressionListEntry@CConditionalExpression@@V-$allocator@UConditionExp.c)
 */

void __fastcall CConditionalExpression::~CConditionalExpression(CConditionalExpression *this)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // r14

  v1 = (_QWORD *)((char *)this + 296);
  *(_QWORD *)this = &CConditionalExpression::`vftable';
  v3 = (_QWORD *)*((_QWORD *)this + 38);
  v4 = (_QWORD *)*((_QWORD *)this + 37);
  if ( v4 != v3 )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 184LL))(*v4, 0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v4[1] + 184LL))(v4[1], 0LL);
      v4 += 2;
    }
    while ( v4 != v3 );
    v3 = (_QWORD *)v1[1];
  }
  std::vector<CConditionalExpression::ConditionExpressionListEntry>::_Destroy(this, *v1, v3);
  v1[1] = *v1;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 40);
  std::vector<CConditionalExpression::ConditionExpressionListEntry>::_Tidy(v1);
  CBaseExpression::~CBaseExpression(this);
}
