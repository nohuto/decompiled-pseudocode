/*
 * XREFs of ??$_Uninitialized_copy@PEAPEAUKeyboardEvent@@PEAPEAU1@V?$allocator@PEAUKeyboardEvent@@@std@@@std@@YAPEAPEAUKeyboardEvent@@QEAPEAU1@0PEAPEAU1@AEAV?$allocator@PEAUKeyboardEvent@@@0@@Z @ 0x1800C00E4
 * Callers:
 *     ?_Growmap@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@IEAAX_K@Z @ 0x1800C139C (-_Growmap@-$deque@UKeyboardEvent@@V-$allocator@UKeyboardEvent@@@std@@@std@@IEAAX_K@Z.c)
 *     ?_Growmap@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@IEAAX_K@Z @ 0x1800C14EC (-_Growmap@-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$allocator@U_MIT_KEYBOARD_OVERRIDER_.c)
 *     ?_Growmap@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEAAX_K@Z @ 0x18012DC7C (-_Growmap@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@IEA.c)
 * Callees:
 *     ??$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA?AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPointData3D@@AEBQEAU2@@Z @ 0x18000A244 (--$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA-AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPoint.c)
 *     memmove_0 @ 0x180037D7B (memmove_0.c)
 */

char *std::_Uninitialized_copy<KeyboardEvent * *,KeyboardEvent * *,std::allocator<KeyboardEvent *>>(
        const void *a1,
        __int64 a2,
        char *a3,
        ...)
{
  size_t v4; // rdi
  va_list va; // [rsp+48h] [rbp+20h] BYREF

  va_start(va, a3);
  std::_Ptr_copy_cat<PointData3D const,PointData3D>(va);
  v4 = a2 - (_QWORD)a1;
  memmove_0(a3, a1, v4);
  return &a3[v4];
}
