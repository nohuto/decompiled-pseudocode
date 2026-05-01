/*
 * XREFs of _lambda_6f5f86943447a9eee0358fb4a1366934_::__lambda_6f5f86943447a9eee0358fb4a1366934_ @ 0x1800A9B60
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f5f86943447a9eee0358fb4a1366934___::_scalar_deleting_destructor_ @ 0x1800AB300 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6f5f86943447a9eee0358fb4a1366934___--_scala.c)
 *     ?OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180331A14 (-OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@She.c)
 *     _TouchKeyboardExperienceManager::OnViewCreated_19H1_::_1_::dtor$5 @ 0x180331CB0 (_TouchKeyboardExperienceManager--OnViewCreated_19H1_--_1_--dtor$5.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180186898 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall lambda_6f5f86943447a9eee0358fb4a1366934_::__lambda_6f5f86943447a9eee0358fb4a1366934_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 32);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 8));
}
