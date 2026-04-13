/*
 * XREFs of ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180003764
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180002BB8 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x1800038B8 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180007E7C (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z @ 0x180009F60 (-ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z.c)
 *     _lambda_d93655bd33d44513d4ad201382c30aa7_::_lambda_invoker_cdecl_ @ 0x180044100 (_lambda_d93655bd33d44513d4ad201382c30aa7_--_lambda_invoker_cdecl_.c)
 *     ??R?$function@$$A6AJPEA_W_KPEA_K@Z@wistd@@QEBAJPEA_W_KPEA_K@Z @ 0x18009A80C (--R-$function@$$A6AJPEA_W_KPEA_K@Z@wistd@@QEBAJPEA_W_KPEA_K@Z.c)
 *     _wil::details::RunFunctorWithExceptionFilter_::_1_::catch$0 @ 0x1800CC172 (_wil--details--RunFunctorWithExceptionFilter_--_1_--catch$0.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn wil::details::in1diag3::FailFastImmediate_Unexpected(wil::details::in1diag3 *this)
{
  __fastfail(7u);
}
