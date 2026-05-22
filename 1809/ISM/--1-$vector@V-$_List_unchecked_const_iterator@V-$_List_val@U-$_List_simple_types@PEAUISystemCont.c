/*
 * XREFs of ??1?$vector@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@std@@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@std@@@2@@std@@QEAA@XZ @ 0x1800084FC
 * Callers:
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$17 @ 0x18012DF28 (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$17.c)
 *     _TouchProcessor::Initialize_::_1_::dtor$6 @ 0x18012E474 (_TouchProcessor--Initialize_--_1_--dtor$6.c)
 *     _PointerInfoAdapter::OnInputReport_::_1_::dtor$5 @ 0x18012F159 (_PointerInfoAdapter--OnInputReport_--_1_--dtor$5.c)
 *     __dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap___::_1_::dtor$2 @ 0x18012F1F9 (__dynamic_initializer_for__ControllerProcessor--s_controllerCurrentKeyMap___--_1_--dtor$2.c)
 *     _TestCommandHost::TestCommandHost_::_1_::dtor$6 @ 0x18012F3D6 (_TestCommandHost--TestCommandHost_--_1_--dtor$6.c)
 *     _std::_Callback_once_std::tuple__lambda_64a1b3f60083f412cbdb681d3efb1364__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::dtor$8 @ 0x180130EBD (_std--_Callback_once_std--tuple__lambda_64a1b3f60083f412cbdb681d3efb1364__--___ptr6_ea_180130EBD.c)
 *     _MobileButtonDeviceCollection::MobileButtonDeviceCollection_::_1_::dtor$11 @ 0x180131422 (_MobileButtonDeviceCollection--MobileButtonDeviceCollection_--_1_--dtor$11.c)
 *     _CameraControlDeviceCollection::Create_::_1_::dtor$6 @ 0x18013160B (_CameraControlDeviceCollection--Create_--_1_--dtor$6.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$4 @ 0x1801319B9 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$4.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$31 @ 0x180131D6F (_Win32kInterop--Win32kInterop_--_1_--dtor$31.c)
 *     _std::vector_void_____ptr64_std::allocator_void_____ptr64___::vector_void_____ptr64_std::allocator_void_____ptr64____::_1_::catch$0 @ 0x180132689 (_std--vector_void_____ptr64_std--allocator_void_____ptr64___--vector_void_____ptr64_std--allocat.c)
 *     _std::_Ref_count_obj_CustomCursorApplication_::_Ref_count_obj_CustomCursorApplication__std::shared_ptr_SystemCursorService__&___ptr64_unsigned_int_&___ptr64_BamoCustomCursorControllerClientProxy_____ptr64_&___ptr64__::_1_::dtor$9 @ 0x180132A3A (_std--_Ref_count_obj_CustomCursorApplication_--_Ref_count_obj_CustomCursorApplicati_ea_180132A3A.c)
 *     _KeyboardModifierState::Create_::_1_::dtor$5 @ 0x1801356D3 (_KeyboardModifierState--Create_--_1_--dtor$5.c)
 *     _InputInfoValidator::ValidatePointerInput_::_1_::dtor$3 @ 0x18013573D (_InputInfoValidator--ValidatePointerInput_--_1_--dtor$3.c)
 *     _std::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper_::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper__HSTRING_______ptr64_&___ptr64__GUID_const_&___ptr64_enum_Windows::Internal::Holographic::HandleWrapperDesiredAccess_&___ptr64_bool_&___ptr64_void_____ptr64_&___ptr64__::_1_::dtor$4 @ 0x180136169 (_std--_Ref_count_obj_Windows--Internal--Holographic--SpatialGraphDriverHandleWrappe_ea_180136169.c)
 *     _std::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper_::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper__HSTRING_______ptr64_&___ptr64__GUID_const_&___ptr64_enum_Windows::Internal::Holographic::HandleWrapperDesiredAccess_&___ptr64_bool_&___ptr64_void_____ptr64_&___ptr64__::_1_::dtor$5 @ 0x18013617F (_std--_Ref_count_obj_Windows--Internal--Holographic--SpatialGraphDriverHandleWrappe_ea_18013617F.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>::~vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>(
        __int64 a1)
{
  char *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  char *v4; // r8
  char *v5; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v4 = (char *)*((_QWORD *)v2 - 1);
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      v5 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v3);
        JUMPOUT(0x180008558LL);
      }
      v2 = v4;
    }
    operator delete(v2, v3);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
