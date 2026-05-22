/*
 * XREFs of ??$_Uninitialized_move@PEAUINPUT_SPACE_PAYLOAD@@PEAU1@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@YAPEAUINPUT_SPACE_PAYLOAD@@QEAU1@0PEAU1@AEAV?$allocator@UINPUT_SPACE_PAYLOAD@@@0@@Z @ 0x1800800F0
 * Callers:
 *     ??$_Emplace_reallocate@AEBUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@AEBU2@@Z @ 0x180011998 (--$_Emplace_reallocate@AEBUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UIN.c)
 *     ??$_Emplace_reallocate@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAPEAUPointData3D@@QEAU2@AEBU2@@Z @ 0x18007FEFC (--$_Emplace_reallocate@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@.c)
 * Callees:
 *     ??$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA?AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPointData3D@@AEBQEAU2@@Z @ 0x18000A2B4 (--$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA-AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPoint.c)
 *     memmove_0 @ 0x18003788B (memmove_0.c)
 */

char *std::_Uninitialized_move<INPUT_SPACE_PAYLOAD *,INPUT_SPACE_PAYLOAD *,std::allocator<INPUT_SPACE_PAYLOAD>>(
        __int64 a1,
        __int64 a2,
        char *a3,
        ...)
{
  const void *v5; // rdx
  size_t v6; // rbx
  va_list va; // [rsp+48h] [rbp+20h] BYREF

  va_start(va, a3);
  std::_Ptr_copy_cat<PointData3D const,PointData3D>((__int64 *)va);
  v6 = a2 - (_QWORD)v5;
  memmove_0(a3, v5, v6);
  return &a3[v6];
}
