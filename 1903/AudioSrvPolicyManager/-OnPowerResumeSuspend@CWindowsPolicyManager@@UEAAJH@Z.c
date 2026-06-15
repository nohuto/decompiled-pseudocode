/*
 * XREFs of ?OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z @ 0x1800075E0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800010A0 (_TlgWrite.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000499C (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?TsSessionOnApmResumeSuspendStateChanged@@YAXXZ @ 0x180026DD8 (-TsSessionOnApmResumeSuspendStateChanged@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800343C0 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnPowerResumeSuspend(CWindowsPolicyManager *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int v4; // eax
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v10; // [rsp+50h] [rbp-38h]
  int v11; // [rsp+58h] [rbp-30h]
  int v12; // [rsp+5Ch] [rbp-2Ch]
  int *v13; // [rsp+60h] [rbp-28h]
  int v14; // [rsp+68h] [rbp-20h]
  int v15; // [rsp+6Ch] [rbp-1Ch]

  if ( a2 != g_bApmSuspended )
  {
    v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    v4 = g_bIsSystemAsleep;
    g_bApmSuspended = a2;
    if ( !a2 )
      v4 = 1;
    g_bIsSystemAsleep = v4;
    v5 = (const struct _TlgProvider_t *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
    if ( *(_DWORD *)v5 > 4u )
    {
      v12 = 0;
      v15 = 0;
      v10 = &g_bApmSuspended;
      v13 = &g_bIsSystemAsleep;
      v11 = 4;
      v14 = 4;
      TlgWrite(v5, &unk_1800429A1, v6, v7, 4u, &pData);
    }
    TsSessionOnApmResumeSuspendStateChanged();
    if ( v3 )
      LeaveCriticalSection(v3);
  }
  return 0LL;
}
