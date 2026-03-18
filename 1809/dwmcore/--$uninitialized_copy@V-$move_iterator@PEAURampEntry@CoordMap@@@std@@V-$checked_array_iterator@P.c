/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x18022A7B0
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18000ADDC (-ensure_extra_capacity@-$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        _QWORD *a4)
{
  _OWORD *v5; // r9
  __int64 result; // rax
  __int64 v8; // xmm1_8

  v5 = (_OWORD *)(16LL * a4[2] + *a4);
  while ( a2 != a3 )
    *v5++ = *a2++;
  result = a1;
  a4[2] = ((__int64)v5 - *a4) >> 4;
  v8 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}
