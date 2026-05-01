/*
 * XREFs of ?RuntimeClassInitialize@ViewEventArgsForShowAsViewMode@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ApplicationViewMode@ViewManagement@UI@6@W4ViewSizePreference@896@2USize@Foundation@6@W4ViewGrouping@896@PEAUIAsyncCallback@@@Z @ 0x180217E54
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ApplicationViewMode@ViewManagement@UI@6@AEAW4ViewSizePreference@9UI@6@AEAW4ViewSizePreference@9UI@6@AEAUSize@Foundation@6@W4ViewGrouping@9UI@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ApplicationViewMode@ViewManagement@UI@7@AEAW4ViewSizePreference@ViewManagement@UI@7@3AEAUSize@Foundation@7@$$QEAW4ViewGrouping@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@@Z @ 0x18020F980 (--$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@I.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall ViewEventArgsForShowAsViewMode::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  *(_DWORD *)(a1 + 48) = 14;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 56), 0LL);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 96), a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 104), a3);
  *(_DWORD *)(a1 + 116) = a5;
  *(_DWORD *)(a1 + 120) = a6;
  *(_DWORD *)(a1 + 124) = a8;
  *(_DWORD *)(a1 + 112) = a4;
  *(_QWORD *)(a1 + 128) = a7;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 136), a9);
  return 0LL;
}
