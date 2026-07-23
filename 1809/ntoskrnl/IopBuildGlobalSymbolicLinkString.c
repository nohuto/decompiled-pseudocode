/*
 * XREFs of IopBuildGlobalSymbolicLinkString @ 0x14071106C
 * Callers:
 *     IopProcessSetInterfaceState @ 0x140710B98 (IopProcessSetInterfaceState.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405990AC (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14059ACA8 (PnpUnicodeStringToWstr.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     IopAllocateUnicodeString @ 0x140711194 (IopAllocateUnicodeString.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140711208 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 */

__int64 __fastcall IopBuildGlobalSymbolicLinkString(unsigned __int16 *a1, UNICODE_STRING *a2)
{
  PVOID PoolWithTag; // rdi
  signed int DeviceInterfaceSymbolicLinkName; // ebx
  __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned __int16 v8; // cx
  UNICODE_STRING *v9; // rcx
  __int64 v11; // rcx
  unsigned int v12; // [rsp+60h] [rbp+18h] BYREF
  __int16 *v13; // [rsp+68h] [rbp+20h] BYREF

  PoolWithTag = 0LL;
  v13 = 0LL;
  DeviceInterfaceSymbolicLinkName = PnpUnicodeStringToWstr(&v13, 0LL, a1);
  if ( DeviceInterfaceSymbolicLinkName < 0 )
    goto LABEL_11;
  v12 = 512;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
  if ( !PoolWithTag )
    goto LABEL_16;
  DeviceInterfaceSymbolicLinkName = CmGetDeviceInterfaceSymbolicLinkName(v6, v13, PoolWithTag, 512LL, &v12);
  if ( DeviceInterfaceSymbolicLinkName != -1073741789 )
    goto LABEL_4;
  ExFreePoolWithTag(PoolWithTag, 0);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v12, 0x20207050u);
  if ( !PoolWithTag )
  {
LABEL_16:
    DeviceInterfaceSymbolicLinkName = -1073741670;
    goto LABEL_11;
  }
  DeviceInterfaceSymbolicLinkName = CmGetDeviceInterfaceSymbolicLinkName(v11, v13, PoolWithTag, v12, &v12);
LABEL_4:
  if ( DeviceInterfaceSymbolicLinkName < 0 )
  {
    if ( DeviceInterfaceSymbolicLinkName == -1073741773 )
      DeviceInterfaceSymbolicLinkName = -1073741811;
  }
  else
  {
    v7 = 2 * v12 + 20;
    if ( v7 > 0xFFFF )
      v8 = -1;
    else
      v8 = 2 * v12 + 20;
    DeviceInterfaceSymbolicLinkName = v7 > 0xFFFF ? 0xC0000095 : 0;
    if ( v7 > 0xFFFF )
      goto LABEL_11;
    DeviceInterfaceSymbolicLinkName = IopAllocateUnicodeString(a2, v8);
    if ( DeviceInterfaceSymbolicLinkName < 0 )
      goto LABEL_11;
    DeviceInterfaceSymbolicLinkName = RtlAppendUnicodeToString(a2, L"\\GLOBAL??\\");
    v9 = a2;
    if ( DeviceInterfaceSymbolicLinkName >= 0 )
    {
      DeviceInterfaceSymbolicLinkName = RtlAppendUnicodeToString(a2, (PCWSTR)PoolWithTag);
      if ( DeviceInterfaceSymbolicLinkName >= 0 )
        goto LABEL_11;
      v9 = a2;
    }
    RtlFreeAnsiString(v9);
  }
LABEL_11:
  PnpUnicodeStringToWstrFree(v13, (__int64)a1);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceInterfaceSymbolicLinkName;
}
