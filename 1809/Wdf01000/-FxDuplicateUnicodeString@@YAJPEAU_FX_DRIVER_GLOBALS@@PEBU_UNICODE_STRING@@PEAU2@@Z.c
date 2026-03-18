/*
 * XREFs of ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0063DE0
 * Callers:
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C0045FE0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C00479C0 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0047D20 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C0048030 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C0048160 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C0048290 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfDeviceRetrieveDeviceName @ 0x1C004A140 (imp_WdfDeviceRetrieveDeviceName.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x1C004AB80 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfDriverRetrieveVersionString @ 0x1C004E180 (imp_WdfDriverRetrieveVersionString.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0051C2C (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C0051D58 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0052120 (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C005F570 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C005F790 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C00609A0 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfRegistryQueryString @ 0x1C0060DA0 (imp_WdfRegistryQueryString.c)
 *     imp_WdfStringCreate @ 0x1C00618E0 (imp_WdfStringCreate.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C00691B4 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0007910 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C0044DE8 (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 */

__int64 __fastcall FxDuplicateUnicodeString(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Source,
        _UNICODE_STRING *Destination)
{
  unsigned __int16 Length; // bp
  int _a1; // ebx
  unsigned __int16 v8; // r9
  unsigned __int16 v9; // r9
  unsigned __int16 v11; // bx
  wchar_t *Buffer; // rcx
  wchar_t *v13; // rax
  wchar_t *v14; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int16 srcCbLengthAndNull; // [rsp+58h] [rbp+10h] BYREF

  Length = Source->Length;
  _a1 = RtlUShortAdd(Source->Length, 2u, &srcCbLengthAndNull);
  if ( _a1 < 0 )
  {
    v9 = 10;
LABEL_3:
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 2u, v9, WPP_stringutil_cpp_Traceguids, _a1);
    return (unsigned int)_a1;
  }
  v11 = srcCbLengthAndNull;
  if ( v8 < srcCbLengthAndNull )
  {
    Buffer = Destination->Buffer;
    if ( Buffer )
    {
      FxPoolFree((FX_POOL_TRACKER *)Buffer);
      *(_QWORD *)&Destination->Length = 0LL;
      Destination->Buffer = 0LL;
    }
    v13 = (wchar_t *)FxPoolAllocator(
                       FxDriverGlobals,
                       &FxDriverGlobals->FxPoolFrameworks,
                       1u,
                       v11,
                       FxDriverGlobals->Tag,
                       retaddr);
    Destination->Buffer = v13;
    if ( !v13 )
    {
      _a1 = -1073741670;
      v9 = 11;
      goto LABEL_3;
    }
    Destination->MaximumLength = v11;
  }
  memmove(Destination->Buffer, Source->Buffer, Length);
  v14 = Destination->Buffer;
  Destination->Length = Length;
  v14[(unsigned __int64)Length >> 1] = 0;
  return 0LL;
}
