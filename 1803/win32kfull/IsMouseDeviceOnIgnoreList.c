/*
 * XREFs of IsMouseDeviceOnIgnoreList @ 0x1C0101B20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1C0101C50 (-IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z.c)
 *     GetPointerDeviceId @ 0x1C0101D54 (GetPointerDeviceId.c)
 *     ?IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0101E20 (-IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     GetDeviceObjectPointer @ 0x1C0102130 (GetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall IsMouseDeviceOnIgnoreList(struct DEVICEINFO *a1, __int64 a2, int a3)
{
  unsigned int v4; // esi
  int v5; // r14d
  int PointerDeviceId; // ebx
  PVOID Object[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v11[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  char v13; // [rsp+80h] [rbp-80h] BYREF

  v4 = 1;
  if ( (int)GetDeviceObjectPointer((int)a1 + 208, 0, a3, (unsigned int)Handle, (__int64)v11, (__int64)Object) < 0 )
    return 0LL;
  ObfReferenceObject(Object[0]);
  v5 = IsHIDMouse(a1, (struct _DEVICE_OBJECT *)Object[0]);
  *(_DWORD *)&Destination.Length = 13107200;
  Destination.Buffer = (PWSTR)&v13;
  PointerDeviceId = GetPointerDeviceId((PDEVICE_OBJECT)Object[0], &Destination);
  ZwClose(Handle[0]);
  ObfDereferenceObject(v11[0]);
  ObfDereferenceObject(Object[0]);
  if ( PointerDeviceId >= 0 )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\IgnoredExternalMice");
    *(struct _UNICODE_STRING *)v11 = Destination;
    *(struct _UNICODE_STRING *)Handle = DestinationString;
    return (unsigned int)IsDeviceOnRegistryList((struct _UNICODE_STRING *)Handle, (struct _UNICODE_STRING *)v11, v5);
  }
  return v4;
}
