/*
 * XREFs of std::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceController_::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceController__Windows::Internal::SpatialInteractions::IHidDevice___&_unsigned_long_&_unsigned_long_&__lambda_be19193f882ced76eba7e08926344df0___ @ 0x1800DF8AC
 * Callers:
 *     ?OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKKPEAUIHidDevice@234@PEAUMPCSourceDeviceInfo@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E3200 (-OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@U.c)
 * Callees:
 *     ??0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@123@KKV?$function@$$A6AXXZ@std@@@Z @ 0x180162D4C (--0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceController_::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceController__Windows::Internal::SpatialInteractions::IHidDevice_____unsigned_long___unsigned_long____lambda_be19193f882ced76eba7e08926344df0___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5)
{
  __int64 (__fastcall **v7)(); // [rsp+38h] [rbp-50h] BYREF
  __int128 v8; // [rsp+40h] [rbp-48h]
  __int64 (__fastcall ***v9)(); // [rsp+70h] [rbp-18h]

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceController>::`vftable';
  v7 = off_180175FF0;
  v8 = *a5;
  v9 = &v7;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SpatialInteractionSourceController(
    (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)(a1 + 16),
    (__int64)&v7);
  return a1;
}
