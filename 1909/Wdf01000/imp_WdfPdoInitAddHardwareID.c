/*
 * XREFs of imp_WdfPdoInitAddHardwareID @ 0x1C00473F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000BA00 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0017908 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0018C1C (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0064278 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0064474 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

__int64 __fastcall imp_WdfPdoInitAddHardwareID(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *HardwareID)
{
  _FX_DRIVER_GLOBALS *v5; // rbx
  _FX_DRIVER_GLOBALS *v6; // rcx
  __int64 result; // rax
  unsigned int _a1; // edi
  unsigned __int16 v9; // r9
  FxString *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  signed int v13; // esi
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v5 = DeviceInit->DriverGlobals;
  v6 = DeviceInit->DriverGlobals;
  if ( !HardwareID )
    FxVerifierNullBugCheck(v6, retaddr);
  result = FxVerifierCheckIrqlLevel(v6, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(v5, HardwareID);
    if ( (int)result >= 0 )
    {
      if ( DeviceInit->InitType != FxDeviceInitTypePdo )
      {
        _a1 = -1073741808;
        v9 = 59;
LABEL_9:
        WPP_IFR_SF_d(v5, 2u, 0x12u, v9, WPP_FxDeviceInitApi_cpp_Traceguids, _a1);
        return _a1;
      }
      v10 = (FxString *)FxObjectHandleAlloc(v5, ExDefaultNonPagedPoolType, 0x78uLL, 0, 0LL, 0, FxObjectTypeExternal);
      if ( v10 )
      {
        FxString::FxString(v10, v5);
        v12 = v11;
      }
      else
      {
        v12 = 0LL;
      }
      if ( !v12 )
      {
        _a1 = -1073741670;
        v9 = 60;
        goto LABEL_9;
      }
      v13 = FxDuplicateUnicodeString(*(_FX_DRIVER_GLOBALS **)(v12 + 16), HardwareID, (_UNICODE_STRING *)(v12 + 104));
      if ( v13 >= 0 )
        v13 = (unsigned __int8)FxCollectionInternal::Add(&DeviceInit->Pdo.HardwareIDs, v5, (FxObject *)v12) == 0
            ? 0xC0000001
            : 0;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v12 + 16LL))(v12, 0LL, 0LL, 0LL);
      return (unsigned int)v13;
    }
  }
  return result;
}
