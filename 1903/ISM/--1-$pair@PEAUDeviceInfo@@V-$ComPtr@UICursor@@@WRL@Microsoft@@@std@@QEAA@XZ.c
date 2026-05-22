/*
 * XREFs of ??1?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@QEAA@XZ @ 0x180139FD8
 * Callers:
 *     _MPCMouseProcessor::AttachMouse_::_1_::dtor$2 @ 0x18003D0A1 (_MPCMouseProcessor--AttachMouse_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>::~pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)(a1 + 8));
}
