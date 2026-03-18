/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAPEAVCDrawListEntry@@@std@@V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@V?$move_iterator@PEAPEAVCDrawListEntry@@@0@0V12@@Z @ 0x1800C8FD0
 * Callers:
 *     ?Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800760D0 (-Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18009AE40 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801AFF90 (-ensure_extra_capacity@-$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<CDrawListEntry * *>,stdext::checked_array_iterator<CDrawListEntry * *>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 v5; // r10
  bool v6; // cc
  __int64 v7; // r10
  _QWORD *v8; // rcx
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v5 = a3 - a2;
  v6 = v5 <= 0;
  if ( v5 < 0 )
  {
    if ( a4[2] < (unsigned __int64)-v5 )
      goto LABEL_8;
    v6 = v5 <= 0;
  }
  if ( !v6 && a4[1] - a4[2] < (unsigned __int64)v5 )
  {
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1, a2, a3, a4);
    JUMPOUT(0x1800C9046LL);
  }
  v7 = *a4;
  v8 = (_QWORD *)(*a4 + 8 * a4[2]);
  while ( a2 != a3 )
    *v8++ = *a2++;
  result = a1;
  a4[2] = ((__int64)v8 - v7) >> 3;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
