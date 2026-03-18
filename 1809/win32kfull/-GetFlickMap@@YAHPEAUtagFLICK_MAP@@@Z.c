/*
 * XREFs of ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x1C00ACBF8
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C00AA230 (ReadPointerDeviceSettings.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00AC468 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C012C780 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

_BOOL8 __fastcall GetFlickMap(struct tagFLICK_MAP *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  int PointerDeviceCfgStringSetting; // ebx
  __int128 *v8; // rsi
  GUID **v9; // r14
  const WCHAR *v10; // rdx
  HANDLE v11; // rcx
  GUID *v12; // r12
  __int128 v13; // xmm0
  __int64 v14; // rcx
  __int128 v15; // xmm0
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  GUID v18; // [rsp+50h] [rbp-B0h]
  _QWORD v19[15]; // [rsp+68h] [rbp-98h] BYREF
  WCHAR SourceString[128]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = 0;
  if ( gFlickMapMonitor )
    goto LABEL_2;
  v19[0] = a1;
  v19[2] = (char *)a1 + 16;
  v19[4] = (char *)a1 + 32;
  v19[6] = (char *)a1 + 48;
  v19[8] = (char *)a1 + 64;
  v19[10] = (char *)a1 + 80;
  v19[12] = (char *)a1 + 96;
  v19[14] = (char *)a1 + 112;
  if ( (unsigned int)RIMIsDefaultUILanguageRTL(a1, a2, a3, a4) != dword_1C030C02C )
  {
    v15 = xmmword_1C030C988;
    xmmword_1C030C988 = xmmword_1C030C928;
    dword_1C030C02C = dword_1C030C02C == 0;
    xmmword_1C030C928 = v15;
  }
  PointerDeviceCfgStringSetting = OpenDeviceCfgKey(
                                    0x7Cu,
                                    L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters\\FlickCommands",
                                    0x20019u,
                                    &Handle,
                                    0);
  if ( PointerDeviceCfgStringSetting >= 0 )
  {
    v8 = &xmmword_1C030C928;
    v9 = (GUID **)v19;
    while ( PointerDeviceCfgStringSetting >= 0 )
    {
      v10 = (const WCHAR *)*((_QWORD *)v8 - 1);
      v11 = Handle;
      *(v9 - 1) = (GUID *)SourceString;
      PointerDeviceCfgStringSetting = ReadPointerDeviceCfgStringSetting(v11, v10, SourceString, 0x7DuLL);
      if ( PointerDeviceCfgStringSetting >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        v12 = *v9;
        PointerDeviceCfgStringSetting = RtlGUIDFromString(&DestinationString, *v9);
        if ( PointerDeviceCfgStringSetting >= 0 )
        {
          v13 = (__int128)*v12;
          v18 = *v12;
          v14 = -*(_QWORD *)&v18.Data1;
          if ( !*(_QWORD *)&v18.Data1 )
            v14 = -*(_QWORD *)v18.Data4;
          if ( v14 )
            *v8 = v13;
        }
      }
      ++v4;
      v9 += 2;
      v8 = (__int128 *)((char *)v8 + 24);
      if ( v4 >= 8 )
      {
        if ( PointerDeviceCfgStringSetting >= 0 )
          gFlickMapMonitor = 1;
        break;
      }
    }
    ZwClose(Handle);
  }
  if ( gFlickMapMonitor )
  {
LABEL_2:
    PointerDeviceCfgStringSetting = 0;
    *(_OWORD *)a1 = xmmword_1C030C928;
    *((_OWORD *)a1 + 1) = xmmword_1C030C940;
    *((_OWORD *)a1 + 2) = xmmword_1C030C958;
    *((_OWORD *)a1 + 3) = xmmword_1C030C970;
    *((_OWORD *)a1 + 4) = xmmword_1C030C988;
    *((_OWORD *)a1 + 5) = xmmword_1C030C9A0;
    *((_OWORD *)a1 + 6) = xmmword_1C030C9B8;
    *((_OWORD *)a1 + 7) = xmmword_1C030C9D0;
  }
  return PointerDeviceCfgStringSetting >= 0;
}
