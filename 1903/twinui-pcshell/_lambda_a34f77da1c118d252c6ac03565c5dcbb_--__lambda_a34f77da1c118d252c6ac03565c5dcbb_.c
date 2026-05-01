/*
 * XREFs of _lambda_a34f77da1c118d252c6ac03565c5dcbb_::__lambda_a34f77da1c118d252c6ac03565c5dcbb_ @ 0x18009C9E8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a34f77da1c118d252c6ac03565c5dcbb___::_scalar_deleting_destructor_ @ 0x18009E070 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a34f77da1c118d252c6ac03565c5dcbb___--_scala.c)
 *     ?OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180312504 (-OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@She.c)
 *     _TouchKeyboardExperienceManager::OnViewCreated_19H1_::_1_::dtor$5 @ 0x1803127A0 (_TouchKeyboardExperienceManager--OnViewCreated_19H1_--_1_--dtor$5.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180167508 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall lambda_a34f77da1c118d252c6ac03565c5dcbb_::__lambda_a34f77da1c118d252c6ac03565c5dcbb_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 32);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 8));
}
