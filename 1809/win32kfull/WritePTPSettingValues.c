/*
 * XREFs of WritePTPSettingValues @ 0x1C01F68B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00AC468 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z @ 0x1C01F6630 (-WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z.c)
 */

_BOOL8 __fastcall WritePTPSettingValues(const unsigned __int16 **a1)
{
  unsigned int v1; // edi
  int v3; // ebx
  const unsigned __int16 **v4; // rsi
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  v3 = OpenDeviceCfgKey(
         0x7Au,
         L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad",
         0x20006u,
         &Handle,
         0);
  if ( v3 >= 0 )
  {
    v4 = a1;
    do
    {
      v3 = WritePointerDeviceCfgSetting(Handle, *v4, 4u, (unsigned __int8 *)&a1[2 * v1 + 1] + 4, 4u);
      if ( v3 < 0 )
        break;
      ++v1;
      v4 += 2;
    }
    while ( v1 < 0xD );
    ZwClose(Handle);
  }
  return v3 >= 0;
}
