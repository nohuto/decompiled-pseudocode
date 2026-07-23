/*
 * XREFs of PipCheckSystemFirmwareUpdated @ 0x1409CB088
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     memcmp @ 0x140196340 (memcmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     _PnpCtxRegCloseKey @ 0x14073D52C (_PnpCtxRegCloseKey.c)
 *     PipHardwareConfigOpenKey @ 0x14073D5A8 (PipHardwareConfigOpenKey.c)
 *     IopOpenRegistryKeyEx @ 0x14073D664 (IopOpenRegistryKeyEx.c)
 */

void __fastcall PipCheckSystemFirmwareUpdated(_BYTE *a1)
{
  ULONG *v1; // rbx
  void *v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  NTSTATUS RegistryValue; // eax
  ULONG v8; // eax
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+30h] BYREF
  ULONG *v11; // [rsp+78h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF
  _DWORD *v13; // [rsp+88h] [rbp+48h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  v1 = 0LL;
  *a1 = 0;
  v3 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  if ( IopOpenRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineHardwareDescriptionSystemName, 0xF003Fu) >= 0 )
  {
    if ( IopGetRegistryValue(Handle, L"SystemBiosVersion", 0, &v11) < 0 )
    {
      v1 = v11;
    }
    else
    {
      v5 = PipHardwareConfigOpenKey(v4, 0xF003Fu, &KeyHandle);
      v1 = v11;
      if ( v5 >= 0 )
      {
        RegistryValue = IopGetRegistryValue(KeyHandle, L"SystemBiosVersion", 0, &v13);
        v3 = v13;
        if ( RegistryValue == -1073741772
          || RegistryValue >= 0
          && (v1[1] != v13[1]
           || (v8 = v1[3], v8 != v13[3])
           || memcmp((char *)v1 + v1[2], (char *)v13 + (unsigned int)v13[2], v8)) )
        {
          *(_DWORD *)&ValueName.Length = 2359330;
          ValueName.Buffer = (wchar_t *)L"SystemBiosVersion";
          if ( ZwSetValueKey(KeyHandle, &ValueName, 0, v1[1], (char *)v1 + v1[2], v1[3]) >= 0 )
            *a1 = 1;
        }
      }
      if ( KeyHandle )
        PnpCtxRegCloseKey(v6, KeyHandle);
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
