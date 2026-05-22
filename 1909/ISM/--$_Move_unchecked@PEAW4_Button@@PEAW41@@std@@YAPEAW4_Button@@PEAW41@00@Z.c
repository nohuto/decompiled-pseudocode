/*
 * XREFs of ??$_Move_unchecked@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18000A240
 * Callers:
 *     ??$_Assign_range@PEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXPEAUINPUT_SPACE_PAYLOAD@@0Uforward_iterator_tag@1@@Z @ 0x180011ACC (--$_Assign_range@PEAUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SP.c)
 *     ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAUSystemContextMessage@@@Z @ 0x180027980 (-OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAUSystemContextMessage@@@Z.c)
 *     ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x180094A34 (-RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z.c)
 *     ?erase@?$vector@UCursorDeviceInfo@@V?$allocator@UCursorDeviceInfo@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorDeviceInfo@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorDeviceInfo@@@std@@@std@@@2@0@Z @ 0x1800CE098 (-erase@-$vector@UCursorDeviceInfo@@V-$allocator@UCursorDeviceInfo@@@std@@@std@@QEAA-AV-$_Vector_.c)
 *     ??$_Assign_range@PEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXPEAW4_Button@@0Uforward_iterator_tag@1@@Z @ 0x1800FBE10 (--$_Assign_range@PEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAXPEA.c)
 * Callees:
 *     ??$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA?AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPointData3D@@AEBQEAU2@@Z @ 0x18000A2B4 (--$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA-AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPoint.c)
 *     memmove_0 @ 0x18003788B (memmove_0.c)
 */

char *__fastcall std::_Move_unchecked<enum _Button *,enum _Button *>(void *a1, __int64 a2, void *a3)
{
  char *v4; // rbx
  size_t v5; // rdi
  void *Src; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  Src = a1;
  std::_Ptr_copy_cat<PointData3D const,PointData3D>(&v8, &Src, &v9);
  v4 = (char *)v9;
  v5 = a2 - (_QWORD)Src;
  memmove_0(v9, Src, v5);
  return &v4[v5];
}
