/*
 * XREFs of DpiIndirectCbSendMessage @ 0x1C026F980
 * Callers:
 *     <none>
 * Callees:
 *     ?DpiIndirectOpenDevice@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_FILE_OBJECT@@PEAPEAU1@@Z @ 0x1C026F0F8 (-DpiIndirectOpenDevice@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_FILE_OBJECT@@PEAPEAU1@@Z.c)
 *     ?DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU_IO_STATUS_BLOCK@@@Z2PEA_NPEAPEAU_IRP@@@Z @ 0x1C026F258 (-DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU.c)
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
  struct _DEVICE_OBJECT *v11; // rcx
  __int64 result; // rax
  __int64 v13; // r8
  unsigned int v14; // ebx
  size_t Size; // [rsp+20h] [rbp-58h]
  bool *v16; // [rsp+48h] [rbp-30h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-18h] BYREF
  PVOID Object; // [rsp+80h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 || *(_DWORD *)(v10 + 16) != 1953656900 || *(_DWORD *)(v10 + 20) != 2 || !*(_BYTE *)(v10 + 1151) )
    return 3221225485LL;
  v11 = *(struct _DEVICE_OBJECT **)(v10 + 24);
  Object = 0LL;
  DeviceObject = 0LL;
  result = DpiIndirectOpenDevice(v11, &Object, &DeviceObject);
  if ( (int)result >= 0 )
  {
    LODWORD(Size) = a2;
    v14 = DpiIndirectSendAsyncUserModeRequest(
            (struct _FILE_OBJECT *)Object,
            DeviceObject,
            v13,
            a3,
            Size,
            a5,
            a4,
            a6,
            a7,
            v16);
    ObfDereferenceObject(Object);
    return v14;
  }
  return result;
}
