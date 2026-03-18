/*
 * XREFs of GetDeviceParent @ 0x1C011FDD8
 * Callers:
 *     ?IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C011FBC4 (-IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     GetPointerDevicePDO @ 0x1C011FD04 (GetPointerDevicePDO.c)
 *     GetDeviceObjectPointer @ 0x1C011FF18 (GetDeviceObjectPointer.c)
 */

__int64 __fastcall GetDeviceParent(struct _DEVICE_OBJECT *Object, __int64 a2, int a3)
{
  struct _DEVICE_OBJECT *v5; // rsi
  int PointerDevicePDO; // eax
  void *v7; // r12
  void *v8; // r13
  unsigned int v9; // ebx
  struct _DEVICE_OBJECT *v11; // r15
  void *Data; // rax
  void *v13; // [rsp+40h] [rbp-20h] BYREF
  void *v14; // [rsp+48h] [rbp-18h] BYREF
  struct _DEVICE_OBJECT *v15; // [rsp+50h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+A8h] [rbp+48h] BYREF
  ULONG Type; // [rsp+B0h] [rbp+50h] BYREF
  PVOID Objecta; // [rsp+B8h] [rbp+58h] BYREF

  v5 = 0LL;
  PointerDevicePDO = 0;
  Objecta = 0LL;
  v7 = 0LL;
  v13 = 0LL;
  v8 = 0LL;
  v14 = 0LL;
  v9 = 0;
  v15 = 0LL;
  RequiredSize = 0;
  if ( *(_QWORD *)(a2 + 320) )
    return 1;
  if ( Object )
  {
    v11 = Object;
    goto LABEL_6;
  }
  if ( (int)GetDeviceObjectPointer((int)a2 + 208, 0, a3, (unsigned int)&v14, (__int64)&v13, (__int64)&Objecta) >= 0 )
  {
    v5 = (struct _DEVICE_OBJECT *)Objecta;
    ObfReferenceObject(Objecta);
    PointerDevicePDO = GetPointerDevicePDO(v5, &v15);
    v7 = v13;
    v8 = v14;
    v11 = v15;
LABEL_6:
    if ( PointerDevicePDO >= 0
      && IoGetDevicePropertyData(v11, &DEVPKEY_Device_Parent, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
    {
      Data = (void *)Win32AllocPool(RequiredSize, 1885893461LL);
      *(_QWORD *)(a2 + 320) = Data;
      if ( Data )
      {
        if ( IoGetDevicePropertyData(v11, &DEVPKEY_Device_Parent, 0, 0, RequiredSize, Data, &RequiredSize, &Type) < 0 )
        {
          Win32FreePool(*(_QWORD *)(a2 + 320));
          *(_QWORD *)(a2 + 320) = 0LL;
        }
        else
        {
          v9 = 1;
          *(_DWORD *)(a2 + 328) = RequiredSize;
        }
      }
    }
    if ( !Object )
    {
      ObfDereferenceObject(v11);
      ZwClose(v8);
      ObfDereferenceObject(v7);
      ObfDereferenceObject(v5);
    }
    return v9;
  }
  return 0LL;
}
