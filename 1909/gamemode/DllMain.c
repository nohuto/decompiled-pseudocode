/*
 * XREFs of DllMain @ 0x180003C2C
 * Callers:
 *     __DllMainCRTStartup @ 0x180005BF4 (__DllMainCRTStartup.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180005E60 (__security_check_cookie.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  const GUID *v3; // r9
  GUID v5; // xmm0
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v10; // [rsp+30h] [rbp-50h] BYREF
  GUID ProviderId; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-38h] BYREF
  int *v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+74h] [rbp-Ch]

  if ( fdwReason == 1 )
  {
    v5 = (GUID)*((_OWORD *)off_18000A008 - 1);
    xmmword_18000A028 = 0LL;
    ProviderId = v5;
    if ( !EventRegister(&ProviderId, TlgEnableCallback, &dword_18000A000, &RegHandle) )
      EventSetInformation(RegHandle, 2LL, off_18000A008, *(unsigned __int16 *)off_18000A008);
    if ( (unsigned int)dword_18000A000 > 4 )
    {
      v15 = 0;
      v13 = &v10;
      v10 = 1;
      v14 = 4;
      TlgWrite(v6, &unk_180007D49, v7, v8, 3u, &pData);
    }
    DisableThreadLibraryCalls(hinstDLL);
  }
  else if ( !fdwReason )
  {
    if ( (unsigned int)dword_18000A000 > 4 )
    {
      v10 = 0;
      v15 = 0;
      v13 = &v10;
      v14 = 4;
      TlgWrite((TraceLoggingHProvider)&pData, &unk_180007D49, (LPCGUID)lpvReserved, v3, 3u, &pData);
    }
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    dword_18000A000 = 0;
  }
  return 1;
}
