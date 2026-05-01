/*
 * XREFs of ?s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x1803BDE0C
 * Callers:
 *     ?GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@PEAPEAUIAppLayout@@@Z @ 0x1803510B8 (-GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARR.c)
 *     ?AddViewToNewLayout@TabletModePositionerOperation@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x180358638 (-AddViewToNewLayout@TabletModePositionerOperation@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4APP.c)
 *     ?AddView@CAppLayout@@UEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@0@Z @ 0x1803BA270 (-AddView@CAppLayout@@UEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@W4APP_LAYOUT_ITEM_.c)
 *     ?_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1803BCACC (-_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1800E5FEC (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ??0CAppLayoutItem@@QEAA@PEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1803BCEC0 (--0CAppLayoutItem@@QEAA@PEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 */

__int64 __fastcall CAppLayoutItem::s_CreateInstance_View(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rbx
  void *v9; // rax
  __int64 v10; // rax
  bool v11; // cl
  unsigned int v12; // edi
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  v14 = 0LL;
  v9 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = 0;
  if ( v9 )
  {
    v10 = CAppLayoutItem::CAppLayoutItem((__int64)v9, a1, a2);
    Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach(&v14, v10);
    v6 = v14;
    if ( v14 )
      v11 = 1;
  }
  v12 = !v11 ? 0x8007000E : 0;
  if ( v11 )
    v12 = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v6)(v6, a3, a4);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v12;
}
