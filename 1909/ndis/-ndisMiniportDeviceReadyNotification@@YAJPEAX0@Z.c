/*
 * XREFs of ?ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z @ 0x1C00FD250
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ?ndisFindMiniportByPdo@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C001A3D0 (-ndisFindMiniportByPdo@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00FD3E8 (ndisMSetMiniportReadyForBinding.c)
 *     ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z @ 0x1C00FF0B4 (--$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall ndisMiniportDeviceReadyNotification(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v3; // rax
  _UNICODE_STRING *v4; // rax
  PVOID v5; // rdi
  struct _NDIS_MINIPORT_BLOCK *MiniportByPdo; // rax
  int v7; // edx
  char v8; // bl
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  v3 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v3 )
  {
    CopyPartialStringToBuffer<64>(NotificationStructure, NotificationStructure[5]);
    v4 = (_UNICODE_STRING *)NotificationStructure[5];
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = 0LL;
    FileHandle = 0LL;
    ObjectAttributes.ObjectName = v4;
    IoStatusBlock.Pointer = 0LL;
    IoStatusBlock.Information = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenFile(&FileHandle, 0, &ObjectAttributes, &IoStatusBlock, 3u, 1u) >= 0 )
    {
      if ( ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL) >= 0 )
      {
        v5 = Object;
        MiniportByPdo = ndisFindMiniportByPdo(*((struct _DEVICE_OBJECT **)Object + 1));
        v8 = (char)MiniportByPdo;
        if ( MiniportByPdo )
        {
          if ( (MiniportByPdo->Flags & 0x80u) != 0 )
          {
            MiniportByPdo->DriverHandle->CxBlock->Chars.EvtCxDeviceStartComplete(MiniportByPdo->MiniportAdapterContext);
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v7) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v7,
                1,
                10,
                (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
                (char)MiniportByPdo);
            }
            ndisMSetMiniportReadyForBinding(v8);
          }
        }
        ObfDereferenceObject(v5);
      }
      ZwClose(FileHandle);
    }
  }
  return 0LL;
}
