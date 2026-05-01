/*
 * XREFs of ?SetHeight@LayoutItem@GridLayoutFactory@@QEAAXH@Z @ 0x180319594
 * Callers:
 *     _lambda_d8d38b7ecc183cf7a075ba43fd3ea28a_::operator() @ 0x180318C20 (_lambda_d8d38b7ecc183cf7a075ba43fd3ea28a_--operator().c)
 *     ?_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@@Z @ 0x180319DDC (-_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV-$CCoSimpleArray@VLayoutRow@GridLayoutFactory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GridLayoutFactory::LayoutItem::SetHeight(GridLayoutFactory::LayoutItem *this, int a2)
{
  int v3; // ebx

  v3 = a2;
  if ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) < a2 )
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this);
  *((_DWORD *)this + 2) = v3;
}
