/*
 * XREFs of ??$MakeAndInitialize@VTabletModeInputHandler@@V1@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPEAUITabletModeInputCallback@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeInputHandler@@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPEAUITabletModeInputCallback@@@Z @ 0x1803C7AD0
 * Callers:
 *     ?TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@AEBU_GUID@@PEAPEAX@Z @ 0x1803C7F50 (-TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletMod.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TabletModeInputHandler@@QEAA@XZ @ 0x1803C7B6C (--0TabletModeInputHandler@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VTabletModeInputHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1803C7C38 (-InternalRelease@-$ComPtr@VTabletModeInputHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@TabletModeInputHandler@@QEAAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@@Z @ 0x1803C7DD0 (-RuntimeClassInitialize@TabletModeInputHandler@@QEAAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAU.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModeInputHandler,TabletModeInputHandler,enum SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE &,ITabletModeInputCallback * &>(
        TabletModeInputHandler **a1,
        unsigned int *a2,
        __int64 *a3)
{
  TabletModeInputHandler *v6; // rax
  int v7; // edi
  TabletModeInputHandler *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  TabletModeInputHandler *v11; // rbx
  TabletModeInputHandler *v13; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (TabletModeInputHandler *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = TabletModeInputHandler::TabletModeInputHandler(v6);
    v9 = *a3;
    v10 = *a2;
    v11 = v8;
    v13 = v8;
    v7 = TabletModeInputHandler::RuntimeClassInitialize(v8, v10, v9);
    if ( v7 >= 0 )
    {
      if ( v11 )
        _InterlockedIncrement((volatile signed __int32 *)v11 + 3);
      *a1 = v11;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<TabletModeInputHandler>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
