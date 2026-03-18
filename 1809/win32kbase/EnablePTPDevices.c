/*
 * XREFs of EnablePTPDevices @ 0x1C00E51B0
 * Callers:
 *     NtUserEnableTouchPad @ 0x1C00EE7F0 (NtUserEnableTouchPad.c)
 * Callees:
 *     EtwTraceTouchPadEnabledStatusChangeStart @ 0x1C00E8210 (EtwTraceTouchPadEnabledStatusChangeStart.c)
 *     EtwTraceTouchPadEnabledStatusChangeStop @ 0x1C00E8240 (EtwTraceTouchPadEnabledStatusChangeStop.c)
 *     RIMDeliverConfigRequest @ 0x1C011A884 (RIMDeliverConfigRequest.c)
 *     ApiSetAccessPTPEnabledStatus @ 0x1C0160C7C (ApiSetAccessPTPEnabledStatus.c)
 *     ApiSetTelemPTPConfigUpdate @ 0x1C01651D0 (ApiSetTelemPTPConfigUpdate.c)
 */

__int64 __fastcall EnablePTPDevices(unsigned int a1)
{
  unsigned int v1; // ebx
  int v3; // ebp
  int v4; // r14d
  struct DEVICEINFO *i; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v8; // eax

  v1 = 0;
  v3 = 0;
  v4 = -1073741668;
  EtwTraceTouchPadEnabledStatusChangeStart();
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( *((_BYTE *)i + 48) == 3 && (v6 = *((_QWORD *)i + 58), *(_WORD *)(v6 + 42) == 13) && *(_WORD *)(v6 + 40) == 14 )
    {
      v4 = RIMDeliverConfigRequest(i);
      if ( v4 < 0 )
        v3 = 1;
    }
    else if ( (*((_DWORD *)i + 50) & 0x80u) != 0 )
    {
      v7 = *((_QWORD *)i + 60);
      if ( *(_DWORD *)(v7 + 24) == 7 )
        *(_DWORD *)(v7 + 308) ^= (*(_DWORD *)(v7 + 308) ^ (a1 << 13)) & 0x2000;
    }
  }
  ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  gPTPEnabled = a1;
  v8 = ApiSetAccessPTPEnabledStatus(a1);
  if ( v4 >= 0 && v8 && !v3 )
  {
    v1 = 1;
    ApiSetTelemPTPConfigUpdate();
  }
  EtwTraceTouchPadEnabledStatusChangeStop();
  return v1;
}
