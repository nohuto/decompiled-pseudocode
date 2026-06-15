/*
 * XREFs of ?LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z @ 0x180023B80
 * Callers:
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x1800241D0 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800010A0 (_TlgWrite.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000499C (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800343C0 (__security_check_cookie.c)
 */

void __fastcall LoadUserSettings(struct TSSession *a1, HKEY a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v7; // ebx
  unsigned int pvData; // [rsp+40h] [rbp-48h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-44h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-40h] BYREF
  struct TSSession *v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+70h] [rbp-18h]
  int v13; // [rsp+74h] [rbp-14h]

  v4 = (const struct _TlgProvider_t *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v4 > 4u )
  {
    v13 = 0;
    v11 = a1;
    v12 = 4;
    TlgWrite(v4, &unk_18004300E, v5, v6, 3u, &pData);
  }
  v7 = 1;
  pcbData = 4;
  *((_DWORD *)a1 + 80) = 1;
  if ( !RegGetValueW(a2, 0LL, L"UserDuckingPreference", 0x10u, 0LL, &pvData, &pcbData) )
  {
    if ( pvData <= 3 )
      v7 = pvData;
    *((_DWORD *)a1 + 80) = v7;
  }
}
