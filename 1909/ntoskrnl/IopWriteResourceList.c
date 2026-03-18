/*
 * XREFs of IopWriteResourceList @ 0x140754424
 * Callers:
 *     PnpBuildCmResourceList @ 0x140753050 (PnpBuildCmResourceList.c)
 *     IoReportHalResourceUsage @ 0x1409F4A00 (IoReportHalResourceUsage.c)
 *     IopInitializeResourceMap @ 0x1409F4BC8 (IopInitializeResourceMap.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401C2690 (ZwDeleteValueKey.c)
 *     IopCreateRegistryKeyEx @ 0x1406E96F0 (IopCreateRegistryKeyEx.c)
 */

__int64 __fastcall IopWriteResourceList(
        void *a1,
        UNICODE_STRING *a2,
        UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        _DWORD *Data,
        ULONG DataSize)
{
  int RegistryKey; // edi
  UNICODE_STRING *v9; // rdx
  HANDLE v10; // rbx
  NTSTATUS v11; // eax
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF
  HANDLE KeyHandle[2]; // [rsp+38h] [rbp-10h] BYREF

  RegistryKey = IopCreateRegistryKeyEx(&Handle, a1, a2, 0x2001Fu, 1u, 0LL);
  if ( RegistryKey >= 0 )
  {
    RegistryKey = IopCreateRegistryKeyEx(KeyHandle, Handle, a3, 0x2001Fu, 1u, 0LL);
    ZwClose(Handle);
    if ( RegistryKey >= 0 )
    {
      v9 = a4;
      v10 = KeyHandle[0];
      if ( *Data )
        v11 = ZwSetValueKey(KeyHandle[0], v9, 0, 8u, Data, DataSize);
      else
        v11 = ZwDeleteValueKey(KeyHandle[0], v9);
      RegistryKey = v11;
      ZwClose(v10);
    }
  }
  return (unsigned int)RegistryKey;
}
