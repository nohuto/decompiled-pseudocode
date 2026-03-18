/*
 * XREFs of UpdateMouseConnectionState @ 0x1C0012E94
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C0012E20 (UpdateTPCurrentActiveState.c)
 * Callees:
 *     ApiSetIsMouseDeviceOnIgnoreList @ 0x1C0012F2C (ApiSetIsMouseDeviceOnIgnoreList.c)
 */

__int64 UpdateMouseConnectionState()
{
  int v0; // ebx
  struct DEVICEINFO *i; // rdi
  int v2; // ebx
  __int64 result; // rax

  v0 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( !*((_BYTE *)i + 48)
      && !*((_WORD *)i + 370)
      && (*((_DWORD *)i + 46) & 0x200) == 0
      && !(unsigned int)ApiSetIsMouseDeviceOnIgnoreList(i) )
    {
      v0 = 1;
      break;
    }
  }
  ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  v2 = 16 * v0;
  result = v2 | HIDWORD(qword_1C01A02B8) & 0xFFFFFFEF;
  HIDWORD(qword_1C01A02B8) = v2 | HIDWORD(qword_1C01A02B8) & 0xFFFFFFEF;
  return result;
}
