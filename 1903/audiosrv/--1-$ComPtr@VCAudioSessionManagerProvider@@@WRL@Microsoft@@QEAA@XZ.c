/*
 * XREFs of ??1?$ComPtr@VCAudioSessionManagerProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D8BC0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioSessionManagerProvider_CAudioSessionManagerProvider__::_1_::dtor$1 @ 0x180071CBC (_Microsoft--WRL--Details--MakeAndInitialize_CAudioSessionManagerProvider_CAudioSess_ea_180071CBC.c)
 *     _HandleAccessChangeNotification_::_1_::dtor$2 @ 0x1800D918D (_HandleAccessChangeNotification_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CAudioSessionManagerProvider>::~ComPtr<CAudioSessionManagerProvider>(
        volatile signed __int32 **a1)
{
  return Microsoft::WRL::ComPtr<CAudioSessionManagerProvider>::InternalRelease(a1);
}
