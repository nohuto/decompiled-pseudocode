/*
 * XREFs of PpRegStateReadCreateClassCreationSettings @ 0x1C00C927C
 * Callers:
 *     IoDevObjCreateDeviceSecure @ 0x1C00C8240 (IoDevObjCreateDeviceSecure.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C00932CC (WdmlibRtlInitUnicodeStringEx.c)
 *     PiRegStateOpenClassKey @ 0x1C00C8F00 (PiRegStateOpenClassKey.c)
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C00C9090 (PiRegStateReadStackCreationSettingsFromKey.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x1C00C9758 (CmRegUtilOpenExistingWstrKey.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C00C9958 (CmRegUtilUcValueSetUcString.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C00C9B0C (CmRegUtilWstrValueSetWstrString.c)
 */

int __fastcall PpRegStateReadCreateClassCreationSettings(
        const _GUID *DeviceClassGuid,
        _DRIVER_OBJECT *DriverObject,
        STACK_CREATION_SETTINGS *StackCreationSettings)
{
  int result; // eax
  int inited; // ebx
  int StackCreationSettingsFromKey; // eax
  void *v8; // rcx
  void *v9; // rdi
  _UNICODE_STRING *v10; // r9
  void *classPropertyKey[2]; // [rsp+30h] [rbp-10h] BYREF
  wchar_t value[2]; // [rsp+60h] [rbp+20h] BYREF
  void *classKey; // [rsp+68h] [rbp+28h] BYREF

  StackCreationSettings->Flags = 0;
  StackCreationSettings->SecurityDescriptor = 0LL;
  StackCreationSettings->DeviceType = 0;
  StackCreationSettings->Characteristics = 0;
  StackCreationSettings->Exclusivity = 0;
  classKey = 0LL;
  classPropertyKey[0] = 0LL;
  result = PiRegStateOpenClassKey(DeviceClassGuid, (unsigned int)DriverObject, 1u, (unsigned int *)value, &classKey);
  if ( result >= 0 )
  {
    if ( *(_DWORD *)value == 2 )
    {
      inited = CmRegUtilOpenExistingWstrKey(classKey, (wchar_t *)L"Properties", 0x20019u, classPropertyKey);
      ZwClose(classKey);
      if ( inited < 0 )
      {
        if ( inited == -1073741772 )
          return 0;
        return inited;
      }
      StackCreationSettingsFromKey = PiRegStateReadStackCreationSettingsFromKey(
                                       classPropertyKey[0],
                                       StackCreationSettings);
      v8 = classPropertyKey[0];
      inited = StackCreationSettingsFromKey;
    }
    else
    {
      v9 = classKey;
      if ( DriverObject->DriverExtension == (_DRIVER_EXTENSION *)-24LL )
      {
        inited = -1073741670;
      }
      else
      {
        classPropertyKey[0] = 0LL;
        classPropertyKey[1] = 0LL;
        inited = WdmlibRtlInitUnicodeStringEx((_UNICODE_STRING *)classPropertyKey, (wchar_t *)L"Class");
        if ( inited >= 0 )
          inited = CmRegUtilUcValueSetUcString(v9, (_UNICODE_STRING *)classPropertyKey, v10);
        if ( inited >= 0 )
        {
          wcscpy(value, L"1");
          inited = CmRegUtilWstrValueSetWstrString(v9, (wchar_t *)L"NoDisplayClass", value);
          if ( inited >= 0 )
            inited = CmRegUtilWstrValueSetWstrString(v9, (wchar_t *)L"NoUseClass", value);
        }
      }
      v8 = v9;
    }
    ZwClose(v8);
    return inited;
  }
  return result;
}
