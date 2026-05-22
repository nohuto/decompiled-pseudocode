/*
 * XREFs of ??$?0V?$shared_ptr@VSystemCursorService@@@std@@AEA_K@?$_Ref_count_obj@VSystemCursor@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService@@@1@AEA_K@Z @ 0x1800CB3B0
 * Callers:
 *     ?CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z @ 0x1800CC2D0 (-CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z.c)
 * Callees:
 *     ??0SystemCursor@@QEAA@V?$shared_ptr@VSystemCursorService@@@std@@_K@Z @ 0x1800CBB7C (--0SystemCursor@@QEAA@V-$shared_ptr@VSystemCursorService@@@std@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Ref_count_obj<SystemCursor>::_Ref_count_obj<SystemCursor>(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<SystemCursor>::`vftable';
  v5[0] = *a2;
  v5[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  SystemCursor::SystemCursor(a1 + 16, v5, *a3);
  return a1;
}
