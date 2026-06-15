/*
 * XREFs of ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x180015338
 * Callers:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001518C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000C40C (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D67C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@Z @ 0x180017AD4 (-_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@.c)
 *     _o_wmemcpy_s_0 @ 0x1800351C0 (_o_wmemcpy_s_0.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        __int64 *a1,
        HMODULE a2,
        unsigned int a3)
{
  HRSRC Resource; // rax
  const struct ATL::ATLSTRINGRESOURCEIMAGE *StringResourceImage; // rax
  const struct ATL::ATLSTRINGRESOURCEIMAGE *v8; // rsi
  __int64 v9; // rbx
  wchar_t *v10; // r10
  unsigned __int16 v11; // dx
  errno_t v12; // eax
  __int64 result; // rax

  Resource = FindResourceExW(a2, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((a3 >> 4) + 1), 0);
  if ( Resource )
  {
    StringResourceImage = ATL::_AtlGetStringResourceImage(a2, Resource, a3);
    v8 = StringResourceImage;
    if ( StringResourceImage )
    {
      v9 = *(unsigned __int16 *)StringResourceImage;
      v10 = (wchar_t *)*a1;
      v11 = *(_WORD *)StringResourceImage;
      if ( (int)((*(_DWORD *)(*a1 - 12) - v9) | (1 - *(_DWORD *)(*a1 - 8))) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v9);
        v10 = (wchar_t *)*a1;
        v11 = *(_WORD *)v8;
      }
      v12 = o_wmemcpy_s_0(v10, (int)v9, (const wchar_t *)v8 + 1, v11);
      if ( v12 )
      {
        if ( v12 == 12 )
          ATL::AtlThrowImpl(-2147024882);
        if ( v12 == 22 || v12 == 34 )
          goto LABEL_15;
        if ( v12 != 80 )
          ATL::AtlThrowImpl(-2147467259);
      }
      if ( (int)v9 <= *(_DWORD *)(*a1 - 12) )
      {
        *(_DWORD *)(*a1 - 16) = v9;
        result = 1LL;
        *(_WORD *)(*a1 + 2 * v9) = 0;
        return result;
      }
LABEL_15:
      ATL::AtlThrowImpl(-2147024809);
    }
  }
  return 0LL;
}
