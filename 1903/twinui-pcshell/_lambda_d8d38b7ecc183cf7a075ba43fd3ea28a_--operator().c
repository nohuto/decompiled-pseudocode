/*
 * XREFs of _lambda_d8d38b7ecc183cf7a075ba43fd3ea28a_::operator() @ 0x1803791C0
 * Callers:
 *     GridLayoutFactory::_ForEachGridItem__lambda_d8d38b7ecc183cf7a075ba43fd3ea28a___ @ 0x180378F8C (GridLayoutFactory--_ForEachGridItem__lambda_d8d38b7ecc183cf7a075ba43fd3ea28a___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801226FC (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?SetHeight@LayoutItem@GridLayoutFactory@@QEAAXH@Z @ 0x180379B30 (-SetHeight@LayoutItem@GridLayoutFactory@@QEAAXH@Z.c)
 */

__int64 __fastcall lambda_d8d38b7ecc183cf7a075ba43fd3ea28a_::operator()(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // ebx
  void *v5; // r8
  _QWORD *v6; // rbx
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 8);
  v12 = a2;
  v4 = *(_DWORD *)(v2 + 4);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
  GridLayoutFactory::LayoutItem::SetHeight((GridLayoutFactory::LayoutItem *)&v12, v4);
  v6 = *(_QWORD **)a1;
  v7 = 0;
  v8 = v6[1];
  if ( v8 != v6[3]
    || (v7 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
               (__int64)v6,
               v8 + 1,
               v5),
        v7 >= 0) )
  {
    ++v6[1];
    v9 = 16LL * v6[1] + *v6 - 16LL;
    if ( v9 )
    {
      *(_QWORD *)v9 = 0LL;
      if ( (__int64 *)v9 != &v12 )
      {
        v10 = v12;
        v12 = 0LL;
        *(_QWORD *)v9 = v10;
      }
      *(_DWORD *)(v9 + 8) = v13;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return (unsigned int)v7;
}
