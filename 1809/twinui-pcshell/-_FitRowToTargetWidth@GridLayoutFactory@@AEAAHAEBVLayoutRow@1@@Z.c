/*
 * XREFs of ?_FitRowToTargetWidth@GridLayoutFactory@@AEAAHAEBVLayoutRow@1@@Z @ 0x180319CCC
 * Callers:
 *     ?_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@@Z @ 0x180319DDC (-_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV-$CCoSimpleArray@VLayoutRow@GridLayoutFactory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@HHH@Z @ 0x18031A464 (-s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 */

__int64 __fastcall GridLayoutFactory::_FitRowToTargetWidth(
        GridLayoutFactory *this,
        const struct GridLayoutFactory::LayoutRow *a2)
{
  _QWORD *v3; // rdi
  __int64 v5; // rsi
  double v6; // xmm6_8
  int v7; // ebx
  int v8; // ebx
  unsigned int v9; // ebx
  int TotalWidthForHeight; // eax
  int v11; // edx

  v3 = *(_QWORD **)a2;
  v5 = *(_QWORD *)a2 + 16LL * *((_QWORD *)a2 + 1);
  v6 = 0.0;
  while ( v3 != (_QWORD *)v5 )
  {
    v7 = *((_DWORD *)v3 + 2);
    if ( v7 < (*(int (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 56LL))(*v3) )
      v6 = v6 + (*(double (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 64LL))(*v3);
    v3 += 2;
  }
  v8 = *((_DWORD *)this + 132) - *((_DWORD *)this + 130);
  v9 = *((_DWORD *)a2 + 8)
     + (int)((double)(int)(v8
                         - GridLayoutFactory::s_GetTotalWidthForHeight(
                             a2,
                             *((unsigned int *)a2 + 10),
                             *((unsigned int *)a2 + 8),
                             0LL))
           / v6);
  TotalWidthForHeight = GridLayoutFactory::s_GetTotalWidthForHeight(a2, *((unsigned int *)a2 + 10), v9, 0LL);
  v11 = *((_DWORD *)this + 130);
  if ( TotalWidthForHeight > *((_DWORD *)this + 132) - v11 )
    return (unsigned int)(int)((double)(int)v9 - (double)(TotalWidthForHeight + v11 - *((_DWORD *)this + 132)) / v6);
  return v9;
}
