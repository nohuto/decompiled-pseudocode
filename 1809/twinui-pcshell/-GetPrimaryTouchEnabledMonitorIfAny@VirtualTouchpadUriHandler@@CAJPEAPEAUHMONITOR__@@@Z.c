/*
 * XREFs of ?GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z @ 0x180298A94
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180298500 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??$make_unique_hlocal_nothrow@$$BY0A@UtagPOINTER_DEVICE_INFO@@@wil@@YA?AV?$unique_ptr@$$BY0A@UtagPOINTER_DEVICE_INFO@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@_K@Z @ 0x180297FB8 (--$make_unique_hlocal_nothrow@$$BY0A@UtagPOINTER_DEVICE_INFO@@@wil@@YA-AV-$unique_ptr@$$BY0A@Uta.c)
 */

__int64 __fastcall VirtualTouchpadUriHandler::GetPrimaryTouchEnabledMonitorIfAny(HMONITOR *a1)
{
  unsigned int LastError; // edi
  signed int Error; // ebx
  __int64 v4; // r8
  const char *v5; // r9
  _DWORD *v7; // rbx
  const char *v8; // r9
  int v9; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF
  HLOCAL hMem; // [rsp+38h] [rbp+10h] BYREF

  LastError = 0;
  *a1 = 0LL;
  v11 = 0;
  Error = 0;
  if ( ((unsigned int)GetPointerDevices(&v11, 0LL)
     || (Error = ResultFromKnownLastError(), (int)(Error + 0x80000000) < 0)
     || Error == -2147024774)
    && v11 )
  {
    wil::make_unique_hlocal_nothrow<tagPOINTER_DEVICE_INFO [0]>(&hMem, v11, v4, v5);
    v7 = hMem;
    if ( hMem )
    {
      if ( (unsigned int)GetPointerDevices(&v11, hMem) )
      {
        v9 = 0;
        if ( v11 )
        {
          while ( v7[270 * v9 + 4] != 3 )
          {
            if ( ++v9 >= v11 )
              goto LABEL_17;
          }
          *a1 = *(HMONITOR *)&v7[270 * v9 + 6];
        }
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x48,
                      (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
                      v8);
      }
    }
    else
    {
      LastError = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x46,
        (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)0x8007000ELL);
    }
LABEL_17:
    LocalFree(v7);
    return LastError;
  }
  else
  {
    if ( Error < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43,
        (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)(unsigned int)Error);
    return (unsigned int)Error;
  }
}
