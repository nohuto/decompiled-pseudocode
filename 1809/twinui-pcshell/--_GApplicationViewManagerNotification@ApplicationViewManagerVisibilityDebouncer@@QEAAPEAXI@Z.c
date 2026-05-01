/*
 * XREFs of ??_GApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAAPEAXI@Z @ 0x18012EE88
 * Callers:
 *     ??1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ @ 0x18012EC64 (--1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ.c)
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x18012F498 (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *__fastcall ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::`scalar deleting destructor'(
        ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
  return this;
}
