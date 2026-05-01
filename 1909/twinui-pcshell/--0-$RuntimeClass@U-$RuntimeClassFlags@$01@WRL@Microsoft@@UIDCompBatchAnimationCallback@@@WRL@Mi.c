/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDCompBatchAnimationCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180391704
 * Callers:
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89_____lambda_55e0f220ed6030f2589a6e9858a32f89__&_ @ 0x180391500 (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb_____lambda_d996df4ae651642ba189a9f5cbef4ddb__&_ @ 0x1803DF734 (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc_____lambda_eb168a4251134b138c4e1a8a58dc23dc__&_ @ 0x1803DF7CC (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArrayChanged@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18035EE38 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArray.c)
 */

IApplicationViewChangeListener *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDCompBatchAnimationCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDCompBatchAnimationCallback>(
        IApplicationViewChangeListener *a1)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>(a1);
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDCompBatchAnimationCallback>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
