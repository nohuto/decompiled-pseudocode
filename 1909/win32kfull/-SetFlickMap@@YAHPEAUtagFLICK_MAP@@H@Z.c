/*
 * XREFs of ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C01F89BC
 * Callers:
 *     WritePointerDeviceSettings @ 0x1C01F8DA4 (WritePointerDeviceSettings.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C005B28C (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z @ 0x1C01F8B34 (-WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z.c)
 */

_BOOL8 __fastcall SetFlickMap(struct tagFLICK_MAP *a1, int a2)
{
  unsigned int v4; // r14d
  int v5; // ebx
  __int128 *v6; // rsi
  const GUID *const *v7; // rdi
  const GUID *v8; // rax
  struct _UNICODE_STRING GuidString; // [rsp+38h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v12[15]; // [rsp+60h] [rbp-41h] BYREF

  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v4 = 0;
  v5 = OpenDeviceCfgKey(
         0x7Cu,
         L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters\\FlickCommands",
         0x20006u,
         &Handle,
         0);
  if ( v5 >= 0 )
  {
    v12[0] = a1;
    v12[2] = (char *)a1 + 16;
    v12[12] = (char *)a1 + 96;
    v12[4] = (char *)a1 + 32;
    v12[14] = (char *)a1 + 112;
    v12[6] = (char *)a1 + 48;
    v6 = &xmmword_1C031F6C8;
    v12[8] = (char *)a1 + 64;
    v12[10] = (char *)a1 + 80;
    v7 = (const GUID *const *)v12;
    do
    {
      if ( v5 < 0 )
        break;
      if ( a2 )
      {
        v5 = RtlStringFromGUID(*v7, &GuidString);
        if ( v5 >= 0 )
        {
          v5 = WritePointerDeviceCfgSetting(
                 Handle,
                 *((const unsigned __int16 **)v6 - 1),
                 1u,
                 (unsigned __int8 *)GuidString.Buffer,
                 GuidString.MaximumLength);
          RtlFreeUnicodeString(&GuidString);
          GuidString.Buffer = 0LL;
        }
      }
      v8 = *v7;
      ++v4;
      v7 += 2;
      *v6 = (__int128)*v8;
      v6 = (__int128 *)((char *)v6 + 24);
    }
    while ( v4 < 8 );
    ZwClose(Handle);
    if ( v5 >= 0 )
      gFlickMapMonitor = 1;
  }
  return v5 >= 0;
}
