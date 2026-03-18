/*
 * XREFs of IsLegacyTouchPadDevice @ 0x1C012A240
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C012A394 (-IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     GetContainerId @ 0x1C012A5FC (GetContainerId.c)
 *     ?IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C012AA84 (-IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     GetDeviceObjectPointer @ 0x1C012AC88 (GetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C020F390 (-CheckLegacyPadControlledStatus@@YAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z @ 0x1C020F5FC (-IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z.c)
 */

__int64 __fastcall IsLegacyTouchPadDevice(struct DEVICEINFO *a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  int v5; // r14d
  BOOL v6; // ebp
  struct _DEVICE_OBJECT *v7; // rdi
  struct DEVICEINFO *v8; // rcx
  int v9; // eax
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  PVOID v12; // [rsp+38h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-30h] BYREF

  v3 = 0;
  v14[0] = 0LL;
  v14[1] = 0LL;
  v5 = 0;
  v6 = gPlatformRole == 2 || gPlatformRole == 8;
  if ( (int)GetDeviceObjectPointer((int)a1 + 208, 0, a3, (unsigned int)&Handle, (__int64)&v12, (__int64)&Object) >= 0 )
  {
    v7 = (struct _DEVICE_OBJECT *)Object;
    ObfReferenceObject(Object);
    if ( (int)GetContainerId(v7, v14, &Object) >= 0 )
    {
      v5 = IsHIDMouse(v8, v7);
      v9 = 0;
      if ( v5 )
        v9 = IsHIDMouseDeviceRelative(a1, (struct _FILE_OBJECT *)v12, v7);
      if ( !(_DWORD)Object )
      {
        if ( !v6 )
          goto LABEL_11;
        if ( !v5 || v9 )
        {
          EtwTraceLegacyTouchPadDetected();
          *((_WORD *)a1 + 442) |= 1u;
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
      *((_WORD *)a1 + 442) |= 1u;
    }
    if ( !v3 )
    {
LABEL_11:
      ZwClose(Handle);
      ObfDereferenceObject(v12);
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
