/*
 * XREFs of imp_WdfPdoInitAssignDeviceID @ 0x1C0047830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000BA00 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0017908 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0064278 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0064474 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

int __fastcall imp_WdfPdoInitAssignDeviceID(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *DeviceID)
{
  _FX_DRIVER_GLOBALS *v5; // rbx
  _FX_DRIVER_GLOBALS *v6; // rcx
  int result; // eax
  int _a1; // edi
  unsigned __int16 v9; // r9
  FxString *v10; // rax
  FxString *v11; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v5 = DeviceInit->DriverGlobals;
  v6 = DeviceInit->DriverGlobals;
  if ( !DeviceID )
    FxVerifierNullBugCheck(v6, retaddr);
  result = FxVerifierCheckIrqlLevel(v6, 0);
  if ( result >= 0 )
  {
    result = FxValidateUnicodeString(v5, DeviceID);
    if ( result >= 0 )
    {
      if ( DeviceInit->InitType != FxDeviceInitTypePdo )
      {
        _a1 = -1073741808;
        v9 = 55;
LABEL_9:
        WPP_IFR_SF_d(v5, 2u, 0x12u, v9, WPP_FxDeviceInitApi_cpp_Traceguids, _a1);
        return _a1;
      }
      v10 = DeviceInit->Pdo.DeviceID;
      if ( !v10 )
      {
        v11 = (FxString *)FxObjectHandleAlloc(v5, ExDefaultNonPagedPoolType, 0x78uLL, 0, 0LL, 0, FxObjectTypeExternal);
        if ( v11 )
          FxString::FxString(v11, v5);
        else
          v10 = 0LL;
        DeviceInit->Pdo.DeviceID = v10;
        if ( !v10 )
        {
          _a1 = -1073741670;
          v9 = 56;
          goto LABEL_9;
        }
      }
      return FxDuplicateUnicodeString(v10->m_Globals, DeviceID, &v10->m_UnicodeString);
    }
  }
  return result;
}
