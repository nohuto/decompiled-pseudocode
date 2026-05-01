/*
 * XREFs of ?SetTitlebarConfiguration@ApplicationViewOperation@@UEAAJPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18018D720
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800153D8 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 */

__int64 __fastcall ApplicationViewOperation::SetTitlebarConfiguration(
        ApplicationViewOperation *this,
        struct IApplicationViewTitlebarConfiguration *a2)
{
  Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((__int64 *)this + 24, (__int64)a2);
  return 0LL;
}
