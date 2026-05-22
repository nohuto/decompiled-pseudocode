/*
 * XREFs of ??$_Construct_from_weak@VSystemCursorService@@@?$_Ptr_base@VSystemCursorService@@@std@@IEAA_NAEBV?$weak_ptr@VSystemCursorService@@@1@@Z @ 0x1800CB38C
 * Callers:
 *     ?shared_from_this@?$enable_shared_from_this@VSystemCursorService@@@std@@QEAA?AV?$shared_ptr@VSystemCursorService@@@2@XZ @ 0x1800355B4 (-shared_from_this@-$enable_shared_from_this@VSystemCursorService@@@std@@QEAA-AV-$shared_ptr@VSys.c)
 *     ?lock@?$weak_ptr@VSystemCursorService@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService@@@2@XZ @ 0x1800CE0E4 (-lock@-$weak_ptr@VSystemCursorService@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService@@@2@XZ.c)
 * Callees:
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x1800CABA8 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 */

char __fastcall std::_Ptr_base<SystemCursorService>::_Construct_from_weak<SystemCursorService>(__int64 a1, __int64 a2)
{
  std::_Ref_count_base *v2; // rcx
  _QWORD *v3; // r8
  _QWORD *v4; // r9

  v2 = *(std::_Ref_count_base **)(a2 + 8);
  if ( !v2 || !std::_Ref_count_base::_Incref_nz(v2) )
    return 0;
  *v4 = *v3;
  v4[1] = v3[1];
  return 1;
}
