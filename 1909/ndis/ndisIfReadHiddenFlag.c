/*
 * XREFs of ndisIfReadHiddenFlag @ 0x1C01073E0
 * Callers:
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C01070B8 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0113F9C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C0023C1C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0100980 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 */

NTSTATUS __fastcall ndisIfReadHiddenFlag(void ***this, PDEVICE_OBJECT DeviceObject, bool *a3)
{
  NTSTATUS result; // eax
  char v6; // si
  const wchar_t *v7; // rax
  __int64 v8; // rdx
  NTSTATUS v9; // edi
  __int16 v10; // cx
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-38h] BYREF
  HANDLE DeviceRegKey; // [rsp+50h] [rbp-30h] BYREF
  __int64 KeyValueInformation; // [rsp+58h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+68h] [rbp-18h]

  if ( !DeviceObject )
    return NetSetupPropertyBag::ReadBoolean(this, (const struct _NETSETUPPROPKEY *)&unk_1C00D31A8, a3);
  result = IoOpenDeviceRegistryKey(DeviceObject, 2u, 0x80000000, &DeviceRegKey);
  if ( result < 0 )
    return result;
  KeyHandle = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &KeyHandle,
    DeviceRegKey);
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  v6 = 0;
  v7 = L"Characteristics";
  v8 = 0x7FFFLL;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v8;
  }
  while ( v8 );
  v9 = v8 == 0 ? 0xC000000D : 0;
  if ( v8 )
    v10 = 0x7FFF - v8;
  else
    v10 = 0;
  if ( v8 )
  {
    ValueName.Buffer = L"Characteristics";
    ValueName.Length = 2 * v10;
    ValueName.MaximumLength = 2 * v10 + 2;
    KeyValueInformation = 0LL;
    v16 = 0LL;
    v17 = 0;
    v9 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
    if ( v9 >= 0 )
    {
      if ( HIDWORD(KeyValueInformation) == 4 )
      {
        if ( (_DWORD)v16 == 4 )
        {
          v6 = BYTE4(v16);
          v9 = 0;
        }
        else
        {
          v9 = -1073741789;
        }
      }
      else
      {
        v9 = -1073741788;
      }
    }
  }
  if ( v9 == -1073741772 )
  {
    if ( KeyHandle )
      ZwClose(KeyHandle);
    return NetSetupPropertyBag::ReadBoolean(this, (const struct _NETSETUPPROPKEY *)&unk_1C00D31A8, a3);
  }
  if ( !v9 )
  {
    v9 = 0;
    *a3 = (v6 & 8) != 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v9;
}
