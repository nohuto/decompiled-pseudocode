/*
 * XREFs of VrpCreateNamespaceNodePlaceholderKey @ 0x14080B2EC
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14080974C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140809AA4 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x14080C964 (VrpPreLoadKey.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall VrpCreateNamespaceNodePlaceholderKey(__int64 a1)
{
  NTSTATUS v2; // edi
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+90h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  if ( *(_WORD *)(a1 + 40) )
  {
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(a1 + 40);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v2 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( v2 >= 0 && Disposition == 1 )
      *(_DWORD *)(a1 + 56) |= 0x40000000u;
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v2;
}
