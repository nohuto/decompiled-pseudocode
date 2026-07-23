/*
 * XREFs of PopGetSettingNotificationName @ 0x14069D2A4
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     PopSetNotificationWork @ 0x1400F0C44 (PopSetNotificationWork.c)
 *     PsGetProcessSessionIdEx @ 0x1400F17F0 (PsGetProcessSessionIdEx.c)
 *     MmIsSessionInCurrentServerSilo @ 0x140168FBC (MmIsSessionInCurrentServerSilo.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PopFindPowerSettingConfiguration @ 0x14069E2BC (PopFindPowerSettingConfiguration.c)
 *     PopStateIsSessionSpecific @ 0x14069E3B8 (PopStateIsSessionSpecific.c)
 *     PopCreateNotificationName @ 0x1406A1344 (PopCreateNotificationName.c)
 *     PsIsServiceSession @ 0x1406EFC70 (PsIsServiceSession.c)
 *     PopValidateContextMembership @ 0x1407491A8 (PopValidateContextMembership.c)
 */

__int64 __fastcall PopGetSettingNotificationName(__int64 a1, _WNF_STATE_NAME *a2)
{
  char v4; // r12
  char v5; // r14
  unsigned int v6; // edi
  _QWORD *v7; // r15
  __int64 PowerSettingConfiguration; // rax
  _WNF_STATE_NAME *v9; // rdi
  _WNF_STATE_NAME v10; // rax
  int v11; // ebx
  unsigned int ProcessSessionId; // eax
  unsigned int v14; // esi
  __int64 v15; // rax
  unsigned int v16; // ecx
  _WNF_STATE_NAME StateName; // [rsp+28h] [rbp-40h] BYREF

  StateName = 0LL;
  v4 = 0;
  ExAcquireFastMutex(&PopSettingLock);
  v5 = 1;
  v6 = -1;
  if ( a1 )
    v6 = *(_DWORD *)(a1 + 16);
  v7 = (_QWORD *)(a1 & -(__int64)(a1 != 0));
  if ( v7 )
  {
    if ( (unsigned __int8)PopStateIsSessionSpecific(a1 & -(__int64)(a1 != 0)) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v14 = ProcessSessionId;
      if ( v6 == -1 || v6 == ProcessSessionId )
      {
        if ( ProcessSessionId == -1 || (unsigned __int8)PsIsServiceSession(ProcessSessionId) )
        {
          v11 = -1073741811;
          goto LABEL_12;
        }
        v6 = v14;
      }
      else
      {
        v11 = PopValidateContextMembership(SeLocalSystemSid);
        if ( v11 < 0 )
        {
          if ( !(unsigned __int8)PsIsServiceSession(v14) )
            goto LABEL_12;
          if ( !MmIsSessionInCurrentServerSilo(v6) )
            goto LABEL_12;
          v11 = PopValidateContextMembership(SeExports->SeLocalServiceSid);
          if ( v11 < 0 )
            goto LABEL_12;
        }
      }
    }
    else
    {
      v6 = -1;
    }
    PowerSettingConfiguration = PopFindPowerSettingConfiguration(v7, v6);
    v9 = (_WNF_STATE_NAME *)PowerSettingConfiguration;
    if ( PowerSettingConfiguration )
    {
      if ( *(_DWORD *)(PowerSettingConfiguration + 56) || *(_DWORD *)(PowerSettingConfiguration + 60) )
      {
        v10 = *(_WNF_STATE_NAME *)(PowerSettingConfiguration + 56);
LABEL_10:
        StateName = v10;
LABEL_11:
        KeReleaseGuardedMutex(&PopSettingLock);
        v5 = 0;
        *a2 = StateName;
        v11 = 0;
        goto LABEL_12;
      }
      v11 = PopCreateNotificationName(&StateName);
      if ( v11 >= 0 )
      {
        v15 = *v7 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
        if ( *v7 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
          v15 = v7[1] - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
        if ( !v15 )
          v9[6].Data[1] |= 8u;
        v16 = v9[6].Data[1];
        v9[7] = StateName;
        v9[6].Data[1] = v16 | 1;
        v4 = 1;
        goto LABEL_11;
      }
    }
    else
    {
      v11 = -1073741275;
    }
  }
  else
  {
    v10 = PopPopPowerSettingSetChangeNotification;
    if ( PopPopPowerSettingSetChangeNotification != __PAIR64__(PopPopPowerSettingSetChangeNotification.Data[0], 0) )
      goto LABEL_10;
    v11 = PopCreateNotificationName(&StateName);
    if ( v11 >= 0 )
    {
      PopPopPowerSettingSetChangeNotification = StateName;
      goto LABEL_11;
    }
  }
LABEL_12:
  if ( v5 )
    KeReleaseGuardedMutex(&PopSettingLock);
  if ( v4 )
    PopSetNotificationWork(0x80u);
  return (unsigned int)v11;
}
