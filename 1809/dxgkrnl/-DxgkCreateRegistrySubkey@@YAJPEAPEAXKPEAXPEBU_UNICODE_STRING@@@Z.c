/*
 * XREFs of ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C029448C
 * Callers:
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C0147060 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0294934 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 */

NTSTATUS __fastcall DxgkCreateRegistrySubkey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        void *a3,
        struct _UNICODE_STRING *a4)
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  ULONG Disposition; // [rsp+80h] [rbp+8h] BYREF

  if ( !KeyHandle )
    return -1073741811;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a3;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a4;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwCreateKey(KeyHandle, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, &Disposition);
}
