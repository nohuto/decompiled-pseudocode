/*
 * XREFs of ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x1800DB120
 * Callers:
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800DC604 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800451FC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x180065CBA (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18006C96F (memmove_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x1800DB268 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
        __int64 *a1,
        int a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  int v5; // ebp
  int v6; // esi
  int v7; // r14d
  int v8; // ebp
  __int64 Buffer; // rdx
  __int64 v10; // rax
  void *v11; // rcx
  size_t v12; // r8

  v2 = 0;
  if ( a2 >= 0 )
    v2 = a2;
  v4 = *a1;
  v5 = *(_DWORD *)(*a1 - 16);
  if ( v2 == 0x7FFFFFFF )
    ATL::AtlThrowImpl(-2147024809);
  v6 = v5 - v2;
  v7 = 1;
  if ( v2 + 1 > v5 )
    v7 = v5 - v2;
  if ( v7 > 0 )
  {
    v8 = v5 - v7;
    Buffer = ATL::CSimpleStringT<unsigned short,0>::GetBuffer();
    v10 = v2 + (__int64)v7;
    v11 = (void *)(Buffer + 2LL * v2);
    v12 = 2LL * (v6 - v7 + 1);
    if ( v12 )
    {
      if ( !v11 || !(Buffer + 2 * v10) )
      {
        *(_DWORD *)_o__errno(v11) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove_0(v11, (const void *)(Buffer + 2 * v10), v12);
    }
    ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v8);
    v4 = *a1;
  }
  return *(unsigned int *)(v4 - 16);
}
