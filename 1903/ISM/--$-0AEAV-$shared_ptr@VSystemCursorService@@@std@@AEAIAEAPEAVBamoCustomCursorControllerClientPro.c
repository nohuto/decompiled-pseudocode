/*
 * XREFs of ??$?0AEAV?$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@?$_Ref_count_obj@VCustomCursorApplication@@@std@@QEAA@AEAV?$shared_ptr@VSystemCursorService@@@1@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x1800C8298
 * Callers:
 *     ??$make_shared@VCustomCursorApplication@@AEAV?$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@std@@YA?AV?$shared_ptr@VCustomCursorApplication@@@0@AEAV?$shared_ptr@VSystemCursorService@@@0@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x1800C8C90 (--$make_shared@VCustomCursorApplication@@AEAV-$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEA.c)
 * Callees:
 *     ??0CustomCursorApplication@@QEAA@V?$shared_ptr@VSystemCursorService@@@std@@IPEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x1800C8E34 (--0CustomCursorApplication@@QEAA@V-$shared_ptr@VSystemCursorService@@@std@@IPEAVBamoCustomCursor.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Ref_count_obj<CustomCursorApplication>::_Ref_count_obj<CustomCursorApplication>(
        __int64 a1,
        _QWORD *a2,
        unsigned int *a3,
        _QWORD *a4)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int128 v9; // [rsp+28h] [rbp-20h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<CustomCursorApplication>::`vftable';
  v6 = a1 + 16;
  v9 = 0LL;
  v7 = a2[1];
  if ( v7 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
    v7 = a2[1];
  }
  CustomCursorApplication::CustomCursorApplication(v6, &v9, *a3, *a4, -2LL, *a2, v7);
  return a1;
}
