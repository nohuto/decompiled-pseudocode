/*
 * XREFs of PopIdleGlobalUserPresenceCallback @ 0x140726210
 * Callers:
 *     <none>
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14015E1F8 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleGlobalUserPresenceCallback(LPCGUID SettingGuid, int *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rax
  int v5; // ebx

  v4 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1 )
    v4 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_GLOBAL_USER_PRESENCE.Data4;
  if ( !v4 && Value && ValueLength == 4 )
  {
    v5 = *Value;
    PopAcquirePolicyLock();
    if ( !v5 )
    {
      PopIdleCancelAoAcDozeS4Timer(2u);
      qword_140443018 = 0LL;
      qword_140443080 = 0LL;
      dword_140442F30 = 0;
    }
    PopReleasePolicyLock();
  }
  return 0LL;
}
