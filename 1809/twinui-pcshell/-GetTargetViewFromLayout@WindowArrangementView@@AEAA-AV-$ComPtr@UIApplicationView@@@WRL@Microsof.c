/*
 * XREFs of ?GetTargetViewFromLayout@WindowArrangementView@@AEAA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@W4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18035BE98
 * Callers:
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18035B6BC (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall WindowArrangementView::GetTargetViewFromLayout(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rbx
  int v5; // r8d
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v9 = 0LL;
  v5 = a3 - 2;
  if ( v5 )
  {
    if ( v5 != 1 )
      goto LABEL_6;
    v6 = *(_QWORD *)(a1 + 120);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    v7 = 1LL;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 120);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    v7 = 0LL;
  }
  (*(void (__fastcall **)(__int64, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v6 + 104LL))(
    v6,
    v7,
    5LL,
    &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
    &v9);
  v3 = v9;
LABEL_6:
  *a2 = 0LL;
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
    (*(void (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 48LL))(
      v3,
      &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
      a2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return a2;
}
