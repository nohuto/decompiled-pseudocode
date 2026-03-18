/*
 * XREFs of ObQuerySecurityDescriptorInfo @ 0x1405C5F80
 * Callers:
 *     SeDefaultObjectMethod @ 0x1405C7AB0 (SeDefaultObjectMethod.c)
 *     WmipSecurityMethod @ 0x1406CE8F0 (WmipSecurityMethod.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x1405C7520 (ObDereferenceSecurityDescriptor.c)
 *     ObpReferenceSecurityDescriptor @ 0x1405C7850 (ObpReferenceSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x140661F50 (SeQuerySecurityDescriptorInfo.c)
 */

__int64 __fastcall ObQuerySecurityDescriptorInfo(__int64 a1, DWORD *a2, void *a3, ULONG *a4)
{
  PSECURITY_DESCRIPTOR v7; // rbp
  unsigned int v8; // ebx
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+30h] [rbp+8h] BYREF

  ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)ObpReferenceSecurityDescriptor(a1 - 48);
  v7 = ObjectsSecurityDescriptor;
  v8 = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
  if ( v7 )
    ObDereferenceSecurityDescriptor(v7, 1LL);
  return v8;
}
