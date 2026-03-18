/*
 * XREFs of GetImageName @ 0x1C0062508
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C004D2A0 (imp_WdfDriverCreate.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     WPP_IFR_SF_D @ 0x1C003A794 (WPP_IFR_SF_D.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C00444C0 (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 *     QueryAndAllocString @ 0x1C0062C78 (QueryAndAllocString.c)
 *     RtlUnicodeStringCopy @ 0x1C00632FC (RtlUnicodeStringCopy.c)
 *     GetNameFromPath @ 0x1C0063474 (GetNameFromPath.c)
 */

__int64 __fastcall GetImageName(_FX_DRIVER_GLOBALS *DriverGlobals, _UNICODE_STRING *ImageName)
{
  FxDriver *Driver; // rax
  NTSTATUS _a1; // ebx
  unsigned __int16 v6; // cx
  unsigned __int8 v7; // dl
  signed int v8; // eax
  unsigned __int8 v9; // dl
  unsigned __int16 v10; // bx
  size_t v11; // r15
  wchar_t *v12; // rax
  unsigned __int8 v13; // dl
  unsigned __int16 size; // [rsp+30h] [rbp-69h] BYREF
  wchar_t *stringBuffer; // [rsp+38h] [rbp-61h] BYREF
  FxAutoRegKey hKey; // [rsp+40h] [rbp-59h] BYREF
  _UNICODE_STRING valueName; // [rsp+48h] [rbp-51h] BYREF
  _UNICODE_STRING Name; // [rsp+58h] [rbp-41h] BYREF
  _UNICODE_STRING imagePath; // [rsp+68h] [rbp-31h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-21h] BYREF
  wchar_t valueName_buffer[10]; // [rsp+A8h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+F8h] [rbp+5Fh]

  wcscpy(&valueName_buffer[8], L"h");
  hKey.m_Key = 0LL;
  valueName.Buffer = valueName_buffer;
  *(_QWORD *)&valueName.Length = 1310738LL;
  *(_QWORD *)&ImageName->Length = 0LL;
  ImageName->Buffer = 0LL;
  *(_QWORD *)&imagePath.Length = 0LL;
  imagePath.Buffer = 0LL;
  *(_QWORD *)&Name.Length = 0LL;
  Name.Buffer = 0LL;
  Driver = DriverGlobals->Driver;
  *(_OWORD *)valueName_buffer = *(_OWORD *)L"ImagePath";
  stringBuffer = 0LL;
  ObjectAttributes.ObjectName = &Driver->m_RegistryPath;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  _a1 = ZwOpenKey(&hKey.m_Key, 0x20019u, &ObjectAttributes);
  if ( _a1 < 0 )
  {
    v6 = 21;
LABEL_5:
    WPP_IFR_SF_d(DriverGlobals, 2u, 0x11u, v6, WPP_FxTelemetryKm_cpp_Traceguids, _a1);
    goto LABEL_16;
  }
  _a1 = QueryAndAllocString(hKey.m_Key, DriverGlobals, &valueName, &stringBuffer);
  if ( _a1 < 0 )
  {
    v6 = 22;
    goto LABEL_5;
  }
  RtlInitUnicodeString(&imagePath, stringBuffer);
  GetNameFromPath(&imagePath, &Name);
  if ( Name.Length )
  {
    v8 = RtlUShortAdd(Name.Length, 2u, &size);
    _a1 = v8;
    if ( v8 >= 0 )
    {
      v10 = size;
      v11 = size;
      v12 = (wchar_t *)FxPoolAllocator(
                         DriverGlobals,
                         &DriverGlobals->FxPoolFrameworks,
                         1u,
                         size,
                         DriverGlobals->Tag,
                         retaddr);
      ImageName->Buffer = v12;
      if ( v12 )
      {
        memset(v12, 0, v11);
        ImageName->Length = 0;
        ImageName->MaximumLength = v10;
        _a1 = RtlUnicodeStringCopy(ImageName, &Name);
      }
      else
      {
        _a1 = -1073741670;
        WPP_IFR_SF_D(DriverGlobals, v13, 0x11u, 0x19u, WPP_FxTelemetryKm_cpp_Traceguids, 0xC000009A);
      }
    }
    else
    {
      WPP_IFR_SF_D(DriverGlobals, v9, 0x11u, 0x18u, WPP_FxTelemetryKm_cpp_Traceguids, v8);
    }
  }
  else
  {
    _a1 = -1073741811;
    WPP_IFR_SF_D(DriverGlobals, v7, 0x11u, 0x17u, WPP_FxTelemetryKm_cpp_Traceguids, 0xC000000D);
  }
  if ( stringBuffer )
    FxPoolFree((FX_POOL_TRACKER *)stringBuffer);
LABEL_16:
  if ( hKey.m_Key )
    ZwClose(hKey.m_Key);
  return (unsigned int)_a1;
}
