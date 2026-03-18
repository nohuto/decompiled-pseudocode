/*
 * XREFs of IsLegacyTouchPadDevice @ 0x1C01016B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01017E4 (-IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     GetContainerId @ 0x1C0101A28 (GetContainerId.c)
 *     ?IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0101E20 (-IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     GetDeviceObjectPointer @ 0x1C0102130 (GetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C019A6B8 (-CheckLegacyPadControlledStatus@@YAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z @ 0x1C019A8D8 (-IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z.c)
 */

__int64 __fastcall IsLegacyTouchPadDevice(struct DEVICEINFO *a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  int v5; // r14d
  BOOL v6; // ebp
  struct _DEVICE_OBJECT *v7; // rsi
  int v8; // eax
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  PVOID v11; // [rsp+38h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v13[16]; // [rsp+48h] [rbp-30h] BYREF

  v3 = 0;
  v5 = 0;
  v6 = gPlatformRole == 2 || gPlatformRole == 8;
  if ( (int)GetDeviceObjectPointer((int)a1 + 208, 0, a3, (unsigned int)&Handle, (__int64)&v11, (__int64)&Object) >= 0 )
  {
    v7 = (struct _DEVICE_OBJECT *)Object;
    ObfReferenceObject(Object);
    if ( (int)GetContainerId(v7, v13, &Object) >= 0 )
    {
      v5 = IsHIDMouse(a1, v7);
      v8 = 0;
      if ( v5 )
        v8 = IsHIDMouseDeviceRelative(a1, (struct _FILE_OBJECT *)v11, v7);
      if ( !(_DWORD)Object )
      {
        if ( !v6 )
          goto LABEL_11;
        if ( !v5 || v8 )
        {
          EtwTraceLegacyTouchPadDetected();
          *((_WORD *)a1 + 370) |= 1u;
          v3 = 1;
        }
      }
    }
    if ( v6 )
    {
      if ( v3 )
        goto LABEL_21;
      v3 = IsMouseDeviceOnWhiteList(v7, v5);
      if ( !v3 )
        goto LABEL_11;
      EtwTraceTouchPadWhiteListDeviceDetected();
      *((_WORD *)a1 + 370) |= 1u;
    }
    if ( !v3 )
    {
LABEL_11:
      ZwClose(Handle);
      ObfDereferenceObject(v11);
      ObfDereferenceObject(v7);
      return v3;
    }
LABEL_21:
    if ( gPlatformRole != 8 )
      CheckLegacyPadControlledStatus(v7);
    goto LABEL_11;
  }
  return 0LL;
}
