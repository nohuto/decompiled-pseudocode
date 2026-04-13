/*
 * XREFs of ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180003854
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180002C98 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x1800039A8 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180007B94 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z @ 0x180009BE0 (-ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z.c)
 *     _lambda_9bbec43bd3c841ff596242732b4f01fa_::_lambda_invoker_cdecl_ @ 0x180042EC0 (_lambda_9bbec43bd3c841ff596242732b4f01fa_--_lambda_invoker_cdecl_.c)
 *     ??$AdaptFixedSizeToAllocatedResult@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$0BAE@@wil@@YAJAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$function@$$A6AJPEA_W_KPEA_K@Z@wistd@@@Z @ 0x1800967D4 (--$AdaptFixedSizeToAllocatedResult@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@s.c)
 *     _wil::details::RunFunctorWithExceptionFilter_::_1_::catch$0 @ 0x1800C80C2 (_wil--details--RunFunctorWithExceptionFilter_--_1_--catch$0.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn wil::details::in1diag3::FailFastImmediate_Unexpected(wil::details::in1diag3 *this)
{
  __fastfail(7u);
}
