/*
 * XREFs of ?ResetUserSettings@@YAXPEAVTSSession@@@Z @ 0x180023C40
 * Callers:
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x180023CBC (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800010A0 (_TlgWrite.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000499C (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800342C0 (__security_check_cookie.c)
 */

void __fastcall ResetUserSettings(struct TSSession *a1)
{
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct TSSession *v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]

  v2 = (const struct _TlgProvider_t *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v2 > 4u )
  {
    v8 = 0;
    v6 = a1;
    v7 = 4;
    TlgWrite(v2, &unk_180042FC2, v3, v4, 3u, &pData);
  }
  *((_DWORD *)a1 + 80) = 1;
}
