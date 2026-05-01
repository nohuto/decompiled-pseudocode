/*
 * XREFs of ??$As@UISnapAssistViewController@@@?$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISnapAssistViewController@@@WRL@Microsoft@@@Details@12@@Z @ 0x18036F268
 * Callers:
 *     ?SetCallback@CSnapAssistViewHost@@UEAAJPEAUISnapAssistCallback@@@Z @ 0x1803700D0 (-SetCallback@CSnapAssistViewHost@@UEAAJPEAUISnapAssistCallback@@@Z.c)
 *     ?Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180370150 (-Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMultitaskingViewController>::As<ISnapAssistViewController>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_9077d385_77f1_4949_802c_435022613a8c,
           a2);
}
