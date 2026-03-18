/*
 * XREFs of DpiIndirectCbSendMessage @ 0x1C02ABD20
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoGetDeviceFileObject @ 0x1C02A0470 (DpiFdoGetDeviceFileObject.c)
 *     ?DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU_IO_STATUS_BLOCK@@@Z2PEA_NPEAPEAU_IRP@@@Z @ 0x1C02AB618 (-DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU.c)
 */

__int64 __fastcall DpiIndirectCbSendMessage(
        __int64 a1,
        int a2,
        void *a3,
        unsigned int a4,
        void *a5,
        void (*a6)(void *, struct _IO_STATUS_BLOCK *),
        void *a7)
{
  __int64 v10; // rcx
  struct _FILE_OBJECT *DeviceFileObject; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _FILE_OBJECT *v15; // rdi
  __int64 v16; // rax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  __int64 v19; // r8
  unsigned int v20; // ebx
  size_t Size; // [rsp+20h] [rbp-48h]
  bool *v22; // [rsp+48h] [rbp-20h]

  if ( !a1 )
    return 3221225485LL;
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 || *(_DWORD *)(v10 + 16) != 1953656900 || *(_DWORD *)(v10 + 20) != 2 || !*(_BYTE *)(v10 + 1159) )
    return 3221225485LL;
  DeviceFileObject = (struct _FILE_OBJECT *)DpiFdoGetDeviceFileObject(v10);
  v15 = DeviceFileObject;
  if ( !DeviceFileObject )
  {
    v16 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(DeviceFileObject);
  LODWORD(Size) = a2;
  v20 = DpiIndirectSendAsyncUserModeRequest(v15, RelatedDeviceObject, v19, a3, Size, a5, a4, a6, a7, v22);
  ObfDereferenceObject(v15);
  return v20;
}
