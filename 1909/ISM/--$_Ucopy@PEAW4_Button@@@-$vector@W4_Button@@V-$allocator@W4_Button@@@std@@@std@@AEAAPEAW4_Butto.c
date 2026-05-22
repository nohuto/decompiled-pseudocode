/*
 * XREFs of ??$_Ucopy@PEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAPEAW4_Button@@PEAW42@00@Z @ 0x18006647C
 * Callers:
 *     ??$_Emplace_reallocate@PEAVInputSite@@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAAPEAPEAVInputSite@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x180006088 (--$_Emplace_reallocate@PEAVInputSite@@@-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@.c)
 *     ??$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@?$vector@W4GamepadButtons@Input@Gaming@Windows@@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@QEAAPEAW4GamepadButtons@Input@Gaming@Windows@@QEAW42345@AEBW42345@@Z @ 0x18007947C (--$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@-$vector@W4GamepadButtons@Inpu.c)
 *     ??$_Emplace_reallocate@AEBG@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAGAEBG@Z @ 0x1800A0670 (--$_Emplace_reallocate@AEBG@-$vector@GV-$allocator@G@std@@@std@@QEAAPEAGQEAGAEBG@Z.c)
 *     ??$_Emplace_reallocate@AEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAAPEAUColor@UI@Windows@@QEAU234@AEBU234@@Z @ 0x1800ADCC0 (--$_Emplace_reallocate@AEBUColor@UI@Windows@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI.c)
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x1800ADDF0 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     ??$_Emplace_reallocate@AEBUCursorDeviceInfo@@@?$vector@UCursorDeviceInfo@@V?$allocator@UCursorDeviceInfo@@@std@@@std@@QEAAPEAUCursorDeviceInfo@@QEAU2@AEBU2@@Z @ 0x1800CB3C8 (--$_Emplace_reallocate@AEBUCursorDeviceInfo@@@-$vector@UCursorDeviceInfo@@V-$allocator@UCursorDe.c)
 *     ??$_Assign_range@PEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXPEAW4_Button@@0Uforward_iterator_tag@1@@Z @ 0x1800FBE10 (--$_Assign_range@PEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAXPEA.c)
 *     ??$_Range_construct_or_tidy@PEBW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXPEBW4_Button@@0Uforward_iterator_tag@1@@Z @ 0x1800FC7C4 (--$_Range_construct_or_tidy@PEBW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@st.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800FCC24 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ??$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA?AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPointData3D@@AEBQEAU2@@Z @ 0x18000A2B4 (--$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA-AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPoint.c)
 *     memmove_0 @ 0x18003788B (memmove_0.c)
 */

char *__fastcall std::vector<enum _Button>::_Ucopy<enum _Button *>(__int64 a1, void *a2, __int64 a3, void *a4)
{
  char *v5; // rbx
  size_t v6; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+38h] [rbp+10h]
  void *Src; // [rsp+40h] [rbp+18h]

  v8 = a1;
  Src = a2;
  v9 = a4;
  std::_Ptr_copy_cat<PointData3D const,PointData3D>(&v8);
  v5 = (char *)v9;
  v6 = a3 - (_QWORD)Src;
  memmove_0(v9, Src, v6);
  return &v5[v6];
}
