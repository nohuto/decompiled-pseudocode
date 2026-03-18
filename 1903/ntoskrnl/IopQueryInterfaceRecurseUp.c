/*
 * XREFs of IopQueryInterfaceRecurseUp @ 0x14077B720
 * Callers:
 *     IoQueryInterface @ 0x14077B6D0 (IoQueryInterface.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400EBF7C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406A2C34 (PpDevNodeLockTree.c)
 *     PnpQueryInterface @ 0x1407146F0 (PnpQueryInterface.c)
 */

__int64 __fastcall IopQueryInterfaceRecurseUp(
        __int64 a1,
        ULONG_PTR a2,
        USHORT a3,
        USHORT a4,
        struct _NAMED_PIPE_CREATE_PARAMETERS *a5,
        USHORT *a6)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v11; // rsi
  __int64 v12; // rbx
  unsigned int Interface; // edi

  PpDevNodeLockTree(0);
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a1, 0x49706E50u);
  v11 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v12 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v12 = 0LL;
  if ( (PVOID)v12 == IopRootDeviceNode )
  {
LABEL_8:
    Interface = -1073741637;
  }
  else
  {
    while ( v12 && *(_DWORD *)(v12 + 300) != 788 )
    {
      Interface = PnpQueryInterface(*(PDEVICE_OBJECT *)(v12 + 32), a2, a4, a3, a5, a6);
      if ( Interface != -1073741637 )
        goto LABEL_9;
      v12 = *(_QWORD *)(v12 + 16);
      if ( (PVOID)v12 == IopRootDeviceNode )
        goto LABEL_8;
    }
    Interface = -1073741130;
  }
LABEL_9:
  ObfDereferenceObjectWithTag(v11, 0x49706E50u);
  PpDevNodeUnlockTree(0);
  return Interface;
}
