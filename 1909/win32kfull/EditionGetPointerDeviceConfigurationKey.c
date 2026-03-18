/*
 * XREFs of EditionGetPointerDeviceConfigurationKey @ 0x1C005B1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C005B28C (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 */

void *__fastcall EditionGetPointerDeviceConfigurationKey(int a1, unsigned int a2, int a3)
{
  unsigned __int16 *v4; // rdx
  unsigned int v5; // r10d
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  v5 = 0;
  if ( !a1 )
  {
    v4 = L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad";
    v5 = 122;
    goto LABEL_9;
  }
  v6 = a1 - 1;
  if ( !v6 )
  {
    v4 = L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\Status";
    v5 = 136;
    goto LABEL_9;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v4 = L"\\Software\\Microsoft\\Wisp\\Touch";
    v5 = 62;
    goto LABEL_9;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v4 = L"\\Software\\Microsoft\\Wisp\\MultiTouch";
    v5 = 72;
    goto LABEL_9;
  }
  v9 = v8 - 1;
  if ( !v9 )
    goto LABEL_11;
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
        goto LABEL_9;
LABEL_11:
      v4 = L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters";
      v5 = 96;
      goto LABEL_9;
    }
  }
  v4 = L"\\Software\\Policies\\Microsoft\\TabletPC";
  v5 = 76;
LABEL_9:
  OpenDeviceCfgKey(v5, v4, a2, &v13, a3);
  return v13;
}
