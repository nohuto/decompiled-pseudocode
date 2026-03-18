/*
 * XREFs of bSetDeviceSessionUsage @ 0x1C00D68C0
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0042270 (DrvUpdateGraphicsDeviceList.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C00D3A50 (DrvCleanupOneGraphicsDevice.c)
 *     DrvCloseLocalGraphicsDevices @ 0x1C00D3BA0 (DrvCloseLocalGraphicsDevices.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0052BF4 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 */

__int64 __fastcall bSetDeviceSessionUsage(__int64 a1, int a2)
{
  struct _DEVICE_OBJECT *v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // eax
  const CHAR *v8; // rcx
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v12; // [rsp+74h] [rbp+1Ch]

  if ( a1 == -4 || (*(_DWORD *)(a1 + 160) & 0x6000008) != 0 )
  {
    return 1;
  }
  else
  {
    v4 = *(struct _DEVICE_OBJECT **)(a1 + 136);
    v12 = 0;
    v5 = 1;
    v11 = a2;
    if ( (int)GreDeviceIoControlImpl(v4, 0x23202Bu, &v11, 8u, &v11, 8u, &v10, 1u, 1) >= 0 )
    {
      if ( v12 )
      {
        v6 = *(_DWORD *)(a1 + 164);
        if ( a2 )
          v7 = v6 | 2;
        else
          v7 = v6 & 0xFFFFFFFD;
        *(_DWORD *)(a1 + 164) = v7;
      }
      else
      {
        v8 = "Trying to enable physical device already in use.\n";
        if ( !a2 )
          v8 = "Trying to disable physical device not enabled in this session.\n";
        DbgPrint(v8);
      }
      return v12;
    }
  }
  return v5;
}
