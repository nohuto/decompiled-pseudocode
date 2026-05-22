/*
 * XREFs of ??1?$list@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@XZ @ 0x1800379D4
 * Callers:
 *     __dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap___::_1_::dtor$1 @ 0x18012F1E3 (__dynamic_initializer_for__ControllerProcessor--s_controllerCurrentKeyMap___--_1_--dtor$1.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$18 @ 0x18012F3C0 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$18.c)
 *     _InputConfigContextProvider::InputConfigContextProvider_::_1_::dtor$8 @ 0x18012F57D (_InputConfigContextProvider--InputConfigContextProvider_--_1_--dtor$8.c)
 *     _PointerInfoAdapter::OnInputReport_::_1_::dtor$4 @ 0x180130879 (_PointerInfoAdapter--OnInputReport_--_1_--dtor$4.c)
 *     _MobileButtonDeviceCollection::MobileButtonDeviceCollection_::_1_::dtor$10 @ 0x180131438 (_MobileButtonDeviceCollection--MobileButtonDeviceCollection_--_1_--dtor$10.c)
 *     _std::_Ref_count_obj_CustomCursorApplication_::_Ref_count_obj_CustomCursorApplication__std::shared_ptr_SystemCursorService__&___ptr64_unsigned_int_&___ptr64_BamoCustomCursorControllerClientProxy_____ptr64_&___ptr64__::_1_::dtor$8 @ 0x180132A24 (_std--_Ref_count_obj_CustomCursorApplication_--_Ref_count_obj_CustomCursorApplicati_ea_180132A24.c)
 *     _KeyboardModifierState::Create_::_1_::dtor$4 @ 0x1801356BD (_KeyboardModifierState--Create_--_1_--dtor$4.c)
 *     _TouchInfoAdapter::TouchInfoAdapter_::_1_::dtor$3 @ 0x1801356E9 (_TouchInfoAdapter--TouchInfoAdapter_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::list<enum _Button>::~list<enum _Button>(__int64 a1)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *(_QWORD **)a1;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)*v2;
      operator delete(v2, (const struct std::nothrow_t *)0x18);
      v3 = *(_QWORD **)a1;
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  operator delete(v3, (const struct std::nothrow_t *)0x18);
}
