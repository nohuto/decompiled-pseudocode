/*
 * XREFs of PipCheckSystemFirmwareUpdated @ 0x1409F6D98
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     memcmp @ 0x1401A1110 (memcmp.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1406DA724 (IopGetRegistryValue.c)
 *     _PnpCtxRegCloseKey @ 0x1406F4868 (_PnpCtxRegCloseKey.c)
 *     IopOpenRegistryKeyEx @ 0x14071DBA0 (IopOpenRegistryKeyEx.c)
 *     PipHardwareConfigOpenKey @ 0x140755338 (PipHardwareConfigOpenKey.c)
 */

void __fastcall PipCheckSystemFirmwareUpdated(_BYTE *a1)
{
  void *v2; // rdi
  ULONG *v3; // rbx
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
  *a1 = 0;
  v2 = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  v3 = 0LL;
  v13 = 0LL;
  v11 = 0LL;
  ValueName.Buffer = 0LL;
  if ( IopOpenRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineHardwareDescriptionSystemName, 0xF003Fu) >= 0 )
  {
    if ( IopGetRegistryValue(Handle, L"SystemBiosVersion", 0, &v11) < 0 )
    {
      v3 = v11;
    }
    else
    {
      v5 = PipHardwareConfigOpenKey(v4, 0xF003Fu, &KeyHandle);
      v3 = v11;
      if ( v5 >= 0 )
      {
        RegistryValue = IopGetRegistryValue(KeyHandle, L"SystemBiosVersion", 0, &v13);
        v2 = v13;
        if ( RegistryValue == -1073741772
          || RegistryValue >= 0
          && (v3[1] != v13[1]
           || (v8 = v3[3], v8 != v13[3])
           || memcmp((char *)v3 + v3[2], (char *)v13 + (unsigned int)v13[2], v8)) )
        {
          *(_DWORD *)&ValueName.Length = 2359330;
          ValueName.Buffer = (wchar_t *)L"SystemBiosVersion";
          if ( ZwSetValueKey(KeyHandle, &ValueName, 0, v3[1], (char *)v3 + v3[2], v3[3]) >= 0 )
            *a1 = 1;
        }
      }
      if ( KeyHandle )
        PnpCtxRegCloseKey(v6, KeyHandle);
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
