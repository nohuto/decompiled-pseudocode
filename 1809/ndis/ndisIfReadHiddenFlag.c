/*
 * XREFs of ndisIfReadHiddenFlag @ 0x1C00C93F0
 * Callers:
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00C7CB4 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C00E262C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C001CA9C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C00C71E4 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 */

NTSTATUS __fastcall ndisIfReadHiddenFlag(void ***this, PDEVICE_OBJECT DeviceObject, bool *a3)
{
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  char v7; // si
  const wchar_t *v8; // rax
  __int64 v9; // rcx
  HANDLE v10; // rbx
  NTSTATUS v11; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-78h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-70h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-60h] BYREF
  HANDLE DeviceRegKey; // [rsp+50h] [rbp-58h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+58h] [rbp-50h] BYREF
  int v17; // [rsp+5Ch] [rbp-4Ch]
  int v18; // [rsp+60h] [rbp-48h]
  int v19; // [rsp+64h] [rbp-44h]

  if ( !DeviceObject )
    return NetSetupPropertyBag::ReadBoolean(this, (const struct _NETSETUPPROPKEY *)&unk_1C008E298, a3);
  result = IoOpenDeviceRegistryKey(DeviceObject, 2u, 0x80000000, &DeviceRegKey);
  if ( result >= 0 )
  {
    v6 = 0;
    KeyHandle = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      &KeyHandle,
      DeviceRegKey);
    *(_QWORD *)&ValueName.Length = 0LL;
    ValueName.Buffer = 0LL;
    v7 = 0;
    v8 = L"Characteristics";
    v9 = 0x7FFFLL;
    while ( *v8 )
    {
      ++v8;
      if ( !--v9 )
      {
        v10 = KeyHandle;
        v11 = -1073741811;
        goto LABEL_22;
      }
    }
    v10 = KeyHandle;
    ValueName.Buffer = L"Characteristics";
    ValueName.Length = 2 * (0x7FFF - v9);
    ValueName.MaximumLength = ValueName.Length + 2;
    v11 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
    if ( v11 >= 0 )
    {
      if ( v17 == 4 )
      {
        if ( v18 == 4 )
        {
          v7 = v19;
          v11 = 0;
        }
        else
        {
          v11 = -1073741789;
        }
      }
      else
      {
        v11 = -1073741788;
      }
    }
    if ( v11 != -1073741772 )
    {
      if ( v11 )
      {
LABEL_22:
        v6 = v11;
      }
      else
      {
        if ( (v7 & 8) != 0 )
          LOBYTE(v11) = 1;
        *a3 = v11;
      }
      if ( v10 )
        ZwClose(v10);
      return v6;
    }
    if ( v10 )
      ZwClose(v10);
    return NetSetupPropertyBag::ReadBoolean(this, (const struct _NETSETUPPROPKEY *)&unk_1C008E298, a3);
  }
  return result;
}
