/*
 * XREFs of ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01D1810
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C0069000 (ReadPointerDeviceSettings.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00694D8 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C0069C7C (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C010B870 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     ?GetCustomFlickPath@@YAHAEBU_GUID@@PEAU_UNICODE_STRING@@@Z @ 0x1C01D192C (-GetCustomFlickPath@@YAHAEBU_GUID@@PEAU_UNICODE_STRING@@@Z.c)
 */

_BOOL8 __fastcall GetCustomFlick(struct tagCUSTOM_FLICK *a1)
{
  int PointerDeviceCfgStringSetting; // ebx
  HANDLE v3; // rcx
  HANDLE v4; // rcx
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-30h] BYREF
  PCWSTR v7; // [rsp+40h] [rbp-20h] BYREF
  __int64 v8; // [rsp+48h] [rbp-18h]
  PCWSTR v9; // [rsp+50h] [rbp-10h] BYREF
  __int64 v10; // [rsp+58h] [rbp-8h]
  HANDLE Handle; // [rsp+70h] [rbp+10h] BYREF

  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  Handle = 0LL;
  PointerDeviceCfgStringSetting = -1073741595;
  if ( (unsigned int)GetCustomFlickPath((GUID *)a1, &Destination) )
  {
    Destination.Buffer[(unsigned __int64)Destination.Length >> 1] = 0;
    PointerDeviceCfgStringSetting = OpenDeviceCfgKey(
                                      Destination.MaximumLength,
                                      Destination.Buffer,
                                      0x20019u,
                                      &Handle,
                                      0);
    if ( PointerDeviceCfgStringSetting >= 0 )
    {
      v7 = L"ModifierKeys";
      v8 = 0LL;
      v9 = L"KeyCode";
      v10 = 0LL;
      PointerDeviceCfgStringSetting = ReadPointerDeviceCfgDWORDSetting(Handle, &v7);
      if ( PointerDeviceCfgStringSetting >= 0 )
      {
        v3 = Handle;
        *((_DWORD *)a1 + 4) = HIDWORD(v8);
        PointerDeviceCfgStringSetting = ReadPointerDeviceCfgDWORDSetting(v3, &v9);
        if ( PointerDeviceCfgStringSetting >= 0 )
        {
          v4 = Handle;
          *((_DWORD *)a1 + 5) = HIDWORD(v10);
          PointerDeviceCfgStringSetting = ReadPointerDeviceCfgStringSetting(
                                            v4,
                                            L"FriendlyName",
                                            (NTSTRSAFE_PWSTR)a1 + 14,
                                            0x104uLL);
        }
      }
    }
    if ( Handle )
      ZwClose(Handle);
    Win32FreePool(Destination.Buffer);
  }
  return PointerDeviceCfgStringSetting >= 0;
}
