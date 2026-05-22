/*
 * XREFs of ?lock@?$weak_ptr@VSystemCursor@@@std@@QEBA?AV?$shared_ptr@VSystemCursor@@@2@XZ @ 0x1800CB12C
 * Callers:
 *     ?DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x1800C9F70 (-DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerSt.c)
 *     ?Cleanup@CustomCursorApplication@@QEAAXXZ @ 0x1800CBE00 (-Cleanup@CustomCursorApplication@@QEAAXXZ.c)
 *     ?CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z @ 0x1800CC090 (-CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z.c)
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x1800CC6AC (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 *     ?OnCursorParametersChanged@SystemCursorService@@UEAAJUCursorId@@UCursorParametersData@@@Z @ 0x1800CD780 (-OnCursorParametersChanged@SystemCursorService@@UEAAJUCursorId@@UCursorParametersData@@@Z.c)
 * Callees:
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x1800CABA8 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 */

_QWORD *__fastcall std::weak_ptr<SystemCursor>::lock(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  std::_Ref_count_base *v3; // rcx
  _QWORD *v4; // r9

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = a2;
  v3 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v3 && std::_Ref_count_base::_Incref_nz(v3) )
  {
    *v2 = *v4;
    v2[1] = v4[1];
  }
  return v2;
}
