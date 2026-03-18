/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x18002BDF8
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18002AC64 (-ensure_extra_capacity@-$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
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
    JUMPOUT(0x18002BE6ELL);
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
