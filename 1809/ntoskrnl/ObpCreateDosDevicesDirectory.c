/*
 * XREFs of ObpCreateDosDevicesDirectory @ 0x14072D298
 * Callers:
 *     ObpInitializeRootNamespace @ 0x14072CE5C (ObpInitializeRootNamespace.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140092270 (RtlGetDaclSecurityDescriptor.c)
 *     PsIsHostSilo @ 0x1400B89C0 (PsIsHostSilo.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateDirectoryObjectEx @ 0x1401B9730 (ZwCreateDirectoryObjectEx.c)
 *     ZwCreateSymbolicLinkObject @ 0x1401B9A50 (ZwCreateSymbolicLinkObject.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObpSetSiloDeviceMap @ 0x14072D4A8 (ObpSetSiloDeviceMap.c)
 *     ObpGetDosDevicesProtection @ 0x14072D510 (ObpGetDosDevicesProtection.c)
 */

__int64 __fastcall ObpCreateDosDevicesDirectory(__int64 a1, void *a2, void *a3)
{
  __int64 result; // rax
  NTSTATUS v7; // ebx
  BOOLEAN DaclPresent[8]; // [rsp+38h] [rbp-39h] BYREF
  HANDLE SymbolicLinkHandle; // [rsp+40h] [rbp-31h] BYREF
  HANDLE DirectoryHandle; // [rsp+48h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-21h] BYREF
  PACL Dacl; // [rsp+80h] [rbp+Fh] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+88h] [rbp+17h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp+3Fh] BYREF
  BOOLEAN DaclDefaulted; // [rsp+F0h] [rbp+7Fh] BYREF

  if ( PsIsHostSilo(a1) && a3 )
    return 3221225485LL;
  result = ObpGetDosDevicesProtection(SecurityDescriptor);
  if ( (int)result >= 0 )
  {
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpGlobalDirectoryName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 528;
    v7 = ZwCreateDirectoryObjectEx(&DirectoryHandle, 0xF000Fu, &ObjectAttributes, a3, 0);
    if ( v7 < 0 )
    {
      DirectoryHandle = 0LL;
    }
    else
    {
      v7 = ObpSetSiloDeviceMap(a1, DirectoryHandle);
      if ( v7 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, &word_140767740);
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.RootDirectory = DirectoryHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpGlobalRootNameString;
        ObjectAttributes.Attributes = 528;
        ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
        v7 = ZwCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, &DestinationString);
        if ( v7 >= 0 )
        {
          ZwClose(SymbolicLinkHandle);
          ObjectAttributes.SecurityQualityOfService = 0LL;
          ObjectAttributes.RootDirectory = DirectoryHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpGlobalNameString;
          ObjectAttributes.Attributes = 528;
          ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
          v7 = ZwCreateSymbolicLinkObject(
                 &SymbolicLinkHandle,
                 0xF0001u,
                 &ObjectAttributes,
                 (PUNICODE_STRING)&ObpGlobalDosDevicesShortName);
          if ( v7 >= 0 )
          {
            ZwClose(SymbolicLinkHandle);
            ObjectAttributes.SecurityQualityOfService = 0LL;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpDosDevicesNameString;
            ObjectAttributes.Length = 48;
            ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
            ObjectAttributes.RootDirectory = a2;
            ObjectAttributes.Attributes = 528;
            v7 = ZwCreateSymbolicLinkObject(
                   &SymbolicLinkHandle,
                   0xF0001u,
                   &ObjectAttributes,
                   (PUNICODE_STRING)&ObpDosDevicesShortNameRootString);
            if ( v7 >= 0 )
              ZwClose(SymbolicLinkHandle);
          }
        }
      }
    }
    Dacl = 0LL;
    RtlGetDaclSecurityDescriptor(SecurityDescriptor, DaclPresent, &Dacl, &DaclDefaulted);
    ExFreePoolWithTag(Dacl, 0x6C636144u);
    if ( DirectoryHandle )
      ZwClose(DirectoryHandle);
    return (unsigned int)v7;
  }
  return result;
}
