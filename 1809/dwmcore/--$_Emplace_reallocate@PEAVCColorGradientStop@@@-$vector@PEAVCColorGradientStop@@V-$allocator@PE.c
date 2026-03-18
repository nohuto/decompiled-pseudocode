/*
 * XREFs of ??$_Emplace_reallocate@PEAVCColorGradientStop@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAAPEAPEAVCColorGradientStop@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x180006074
 * Callers:
 *     ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x180005F34 (-ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETCOLOR.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1801C306C (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 * Callees:
 *     ?_Change_array@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@AEAAXQEAPEAVCColorGradientStop@@_K1@Z @ 0x18000614C (-_Change_array@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@std@@@std@.c)
 *     ?_Calculate_growth@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1800061B4 (-_Calculate_growth@-$vector@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@F.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::vector<CColorGradientStop *>::_Emplace_reallocate<CColorGradientStop *>(
        const void **a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  SIZE_T v10; // rcx
  unsigned __int64 v11; // r9
  char *v12; // rsi
  char *v13; // rcx
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  size_t v16; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (a2 - (_BYTE *)*a1) >> 3;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v8 = v6 + 1;
  v9 = std::vector<Windows::Foundation::Numerics::float2>::_Calculate_growth(a1, v6 + 1);
  v10 = 8 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  *(_QWORD *)&v12[8 * v4] = *a3;
  v13 = v12;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 == v14 )
  {
    v16 = v14 - v15;
  }
  else
  {
    memmove_0(v12, v15, a2 - (_BYTE *)*a1);
    v16 = (_BYTE *)a1[1] - a2;
    v13 = &v12[8 * v4 + 8];
    v15 = a2;
  }
  memmove_0(v13, v15, v16);
  std::vector<CColorGradientStop *>::_Change_array(a1, v12, v8, v9);
  return (__int64)*a1 + 8 * v4;
}
