/*
 * XREFs of ?CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z @ 0x1C024F17C
 * Callers:
 *     ?Initialize@LPMDisplayCtrl@@QEAAJXZ @ 0x1C024F6FC (-Initialize@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?LPMStart@LPMDisplayCtrl@@QEAAJXZ @ 0x1C024FBA0 (-LPMStart@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C024FC34 (-LPMStop@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z @ 0x1C024FCD4 (-SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z.c)
 *     ?SetIlluminance@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_ILLUMINANCE_ARGS@@@Z @ 0x1C024FE78 (-SetIlluminance@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_ILLUMINANCE_ARGS@@@Z.c)
 *     ?Update@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_PRESENT_ARGS@@@Z @ 0x1C024FED4 (-Update@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_PRESENT_ARGS@@@Z.c)
 * Callees:
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C016F4B8 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 */

NTSTATUS __fastcall LPMDisplayCtrl::CallDriver(
        PFILE_OBJECT *FileObject,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID a5,
        ULONG a6,
        unsigned __int64 *SymbolicLinkList)
{
  unsigned __int64 *v7; // rdi
  PDEVICE_OBJECT *v12; // rbx
  struct _DEVICE_OBJECT *v13; // rcx
  NTSTATUS result; // eax
  NTSTATUS DeviceObjectPointer; // esi
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF

  v7 = SymbolicLinkList;
  if ( SymbolicLinkList )
    *SymbolicLinkList = 0LL;
  v12 = (PDEVICE_OBJECT *)(FileObject + 1);
  v13 = (struct _DEVICE_OBJECT *)FileObject[1];
  if ( !v13 )
  {
    result = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_NOKIA_PANEL_DRIVER, 0LL, 0, (PZZWSTR *)&SymbolicLinkList);
    if ( result < 0 )
      return result;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)SymbolicLinkList);
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x80000000, FileObject, v12);
    ExFreePoolWithTag(SymbolicLinkList, 0);
    if ( DeviceObjectPointer < 0 )
      return DeviceObjectPointer;
    v13 = *v12;
  }
  return DxgkCallDriverIoControl(v13, IoControlCode, InputBuffer, InputBufferLength, a5, a6, 0, v7);
}
