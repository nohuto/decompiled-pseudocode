/*
 * XREFs of ObpInitializeRootNamespace @ 0x14074F160
 * Callers:
 *     ObCreateSiloRootDirectory @ 0x140944520 (ObCreateSiloRootDirectory.c)
 *     ObInitSystem @ 0x140A04E20 (ObInitSystem.c)
 * Callees:
 *     PsIsHostSilo @ 0x14000A920 (PsIsHostSilo.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1401C0BD0 (ZwOpenDirectoryObject.c)
 *     ZwCreateDirectoryObject @ 0x1401C1510 (ZwCreateDirectoryObject.c)
 *     ZwCreateDirectoryObjectEx @ 0x1401C1530 (ZwCreateDirectoryObjectEx.c)
 *     ZwCreateSymbolicLinkObject @ 0x1401C1850 (ZwCreateSymbolicLinkObject.c)
 *     ZwSetInformationSymbolicLink @ 0x1401C3350 (ZwSetInformationSymbolicLink.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ObCleanupSecurityDescriptor @ 0x14074F438 (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x14074F478 (ObCreateKernelObjectsSD.c)
 *     ObpCreateDosDevicesDirectory @ 0x14074F5C4 (ObpCreateDosDevicesDirectory.c)
 */

__int64 __fastcall ObpInitializeRootNamespace(__int64 a1, void *a2, __int64 a3)
{
  bool IsHostSilo; // si
  NTSTATUS KernelObjectsSD; // ebx
  bool v8; // sf
  HANDLE DirectoryHandle; // [rsp+38h] [rbp-29h] BYREF
  HANDLE ShadowDirectoryHandle; // [rsp+40h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-19h] BYREF
  PVOID Object; // [rsp+78h] [rbp+17h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+80h] [rbp+1Fh] BYREF
  int SymbolicLinkInformation; // [rsp+E0h] [rbp+7Fh] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DirectoryHandle = 0LL;
  ShadowDirectoryHandle = 0LL;
  IsHostSilo = PsIsHostSilo(a1);
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  KernelObjectsSD = ObCreateKernelObjectsSD(SecurityDescriptor);
  if ( KernelObjectsSD >= 0 )
  {
    if ( IsHostSilo
      || (ObjectAttributes.RootDirectory = 0LL,
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpKernelObjectsPathString,
          ObjectAttributes.Length = 48,
          ObjectAttributes.Attributes = 592,
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
          KernelObjectsSD = ZwOpenDirectoryObject(&ShadowDirectoryHandle, 0xF000Fu, &ObjectAttributes),
          KernelObjectsSD >= 0) )
    {
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpKernelObjectsNameString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
      ObjectAttributes.RootDirectory = a2;
      ObjectAttributes.Attributes = 592;
      KernelObjectsSD = ZwCreateDirectoryObjectEx(
                          &DirectoryHandle,
                          0xF000Fu,
                          &ObjectAttributes,
                          ShadowDirectoryHandle,
                          0);
      if ( KernelObjectsSD >= 0 )
      {
        ZwClose(DirectoryHandle);
        DirectoryHandle = 0LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpObjectTypesNameString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = a2;
        ObjectAttributes.Attributes = 592;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( IsHostSilo )
        {
          KernelObjectsSD = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
          if ( KernelObjectsSD < 0 )
            goto LABEL_9;
          KernelObjectsSD = ObReferenceObjectByHandle(DirectoryHandle, 0, ObpDirectoryObjectType, 0, &Object, 0LL);
          ObpTypeDirectoryObject = Object;
          v8 = KernelObjectsSD < 0;
        }
        else
        {
          KernelObjectsSD = ZwCreateSymbolicLinkObject(
                              &DirectoryHandle,
                              0xF0001u,
                              &ObjectAttributes,
                              (PUNICODE_STRING)&ObpObjectTypesPathString);
          if ( KernelObjectsSD < 0 )
            goto LABEL_9;
          SymbolicLinkInformation = 0;
          KernelObjectsSD = ZwSetInformationSymbolicLink(
                              DirectoryHandle,
                              SymbolicLinkGlobalInformation,
                              &SymbolicLinkInformation,
                              4u);
          v8 = KernelObjectsSD < 0;
        }
        if ( !v8 )
          KernelObjectsSD = ObpCreateDosDevicesDirectory(a1, a2, a3);
      }
    }
  }
LABEL_9:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( ShadowDirectoryHandle )
    ZwClose(ShadowDirectoryHandle);
  ObCleanupSecurityDescriptor(SecurityDescriptor);
  return (unsigned int)KernelObjectsSD;
}
