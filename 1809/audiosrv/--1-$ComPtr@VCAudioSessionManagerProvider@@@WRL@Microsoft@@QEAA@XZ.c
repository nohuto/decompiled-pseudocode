/*
 * XREFs of ??1?$ComPtr@VCAudioSessionManagerProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800CA210
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioSessionManagerProvider_CAudioSessionManagerProvider__::_1_::dtor$1 @ 0x18006FF04 (_Microsoft--WRL--Details--MakeAndInitialize_CAudioSessionManagerProvider_CAudioSess_ea_18006FF04.c)
 *     _HandleAccessChangeNotification_::_1_::dtor$2 @ 0x1800CA7DD (_HandleAccessChangeNotification_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CAudioSessionManagerProvider>::~ComPtr<CAudioSessionManagerProvider>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<CAudioSessionManagerProvider>::InternalRelease(a1);
}
