/*
 * XREFs of EnablePTPDevices @ 0x1C0109E50
 * Callers:
 *     NtUserEnableTouchPad @ 0x1C01173E0 (NtUserEnableTouchPad.c)
 * Callees:
 *     AccessPTPEnabledStatus @ 0x1C0062070 (AccessPTPEnabledStatus.c)
 *     EtwTraceTouchPadEnabledStatusChangeStart @ 0x1C010E7D0 (EtwTraceTouchPadEnabledStatusChangeStart.c)
 *     EtwTraceTouchPadEnabledStatusChangeStop @ 0x1C010E800 (EtwTraceTouchPadEnabledStatusChangeStop.c)
 *     RIMDeliverConfigRequest @ 0x1C014312C (RIMDeliverConfigRequest.c)
 *     ApiSetTelemPTPConfigUpdate @ 0x1C01A1098 (ApiSetTelemPTPConfigUpdate.c)
 */

__int64 __fastcall EnablePTPDevices(int a1)
{
  struct RIMDEV *i; // rbx
  __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned int v5; // ebx

  EtwTraceTouchPadEnabledStatusChangeStart();
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  for ( i = CBaseInput::_spDevList; i; i = (struct RIMDEV *)*((_QWORD *)i + 7) )
  {
    if ( *((_BYTE *)i + 48) == 3 && (v3 = *((_QWORD *)i + 58), *(_WORD *)(v3 + 42) == 13) && *(_WORD *)(v3 + 40) == 14 )
    {
      RIMDeliverConfigRequest(i);
    }
    else if ( (*((_DWORD *)i + 50) & 0x80u) != 0 )
    {
      v4 = *((_QWORD *)i + 60);
      if ( *(_DWORD *)(v4 + 24) == 7 )
        *(_DWORD *)(v4 + 312) ^= (*(_DWORD *)(v4 + 312) ^ (a1 << 11)) & 0x800;
    }
  }
  ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  gPTPEnabled = a1;
  v5 = AccessPTPEnabledStatus(a1, 0, 0LL);
  if ( v5 )
    ApiSetTelemPTPConfigUpdate();
  EtwTraceTouchPadEnabledStatusChangeStop();
  return v5;
}
