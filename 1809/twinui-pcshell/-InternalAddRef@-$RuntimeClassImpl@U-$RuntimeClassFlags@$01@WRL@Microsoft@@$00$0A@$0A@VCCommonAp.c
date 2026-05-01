/*
 * XREFs of ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801236A4
 * Callers:
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x18003CE00 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180123320 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_180123320.c)
 *     ??$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewManagerVisibilityDebouncer@@AEAPEAUIApplicationViewCollection@@@Z @ 0x18012E918 (--$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewColle.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___::Run @ 0x18012F520 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___--Run.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb_____lambda_d996df4ae651642ba189a9f5cbef4ddb__&___ptr64_ @ 0x18035A3DC (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc_____lambda_eb168a4251134b138c4e1a8a58dc23dc__&___ptr64_ @ 0x18035A474 (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc2.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_382fa76d9980bbd2846dd440d3c3bc97__&___ptr64_ @ 0x18035A5B4 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_382fa76d9980bbd2846dd440d3c3bc97__-__.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_adf88bafc3ef94521e0755b235cf6fdc__&___ptr64_ @ 0x18035A65C (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_adf88bafc3ef94521e0755b235cf6fdc__-__.c)
 *     ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x18035B400 (-CancelPlacement@WindowArrangementView@@UEAAJXZ.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x18035BF60 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?ResetPlaceModeIdleTimer@WindowArrangementView@@AEAAXXZ @ 0x18035D358 (-ResetPlaceModeIdleTimer@WindowArrangementView@@AEAAXXZ.c)
 *     ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x18035D498 (-SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z.c)
 *     ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18035D720 (-Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18035DA38 (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x18035E6D8 (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 *     ?WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18035F348 (-WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback @ 0x18035F61C (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_InvokeCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 68), a2);
}
