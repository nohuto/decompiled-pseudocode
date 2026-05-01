/*
 * XREFs of ?GetNextMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ @ 0x180318E3C
 * Callers:
 *     ?_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@@Z @ 0x180319DDC (-_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV-$CCoSimpleArray@VLayoutRow@GridLayoutFactory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ @ 0x180318DBC (-GetMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ.c)
 */

__int64 __fastcall GridLayoutFactory::LayoutRow::GetNextMaxHeight(GridLayoutFactory::LayoutRow *this)
{
  int MaxHeight; // ebp
  _QWORD *v3; // rbx
  __int64 v4; // rdi

  MaxHeight = GridLayoutFactory::LayoutRow::GetMaxHeight(this);
  if ( MaxHeight > *((_DWORD *)this + 8) )
  {
    v3 = *(_QWORD **)this;
    v4 = *(_QWORD *)this + 16LL * *((_QWORD *)this + 1);
    while ( v3 != (_QWORD *)v4 )
    {
      if ( (*(int (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 56LL))(*v3) > *((_DWORD *)this + 8)
        && MaxHeight >= (*(int (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 56LL))(*v3) )
      {
        MaxHeight = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 56LL))(*v3);
      }
      v3 += 2;
    }
  }
  return (unsigned int)MaxHeight;
}
