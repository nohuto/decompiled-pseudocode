/*
 * XREFs of UpdateMouseConnectionState @ 0x1C00538A4
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C0053740 (UpdateTPCurrentActiveState.c)
 * Callees:
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C007E680 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     GreLeaveCriticalRegionAndReleasePushLockShared @ 0x1C007FB80 (GreLeaveCriticalRegionAndReleasePushLockShared.c)
 *     ApiSetIsMouseDeviceOnIgnoreList @ 0x1C00A3488 (ApiSetIsMouseDeviceOnIgnoreList.c)
 *     WPP_RECORDER_SF_l @ 0x1C00BA078 (WPP_RECORDER_SF_l.c)
 */

__int64 UpdateMouseConnectionState()
{
  int v0; // ebx
  struct RIMDEV *i; // rdi
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int v6; // ebx
  __int64 result; // rax

  v0 = 0;
  NSInstrumentation::CPlatformReaderWriterLock::AcquireShared((NSInstrumentation::CPlatformReaderWriterLock *)&CBaseInput::_sLock);
  for ( i = CBaseInput::_spDevList; i; i = (struct RIMDEV *)*((_QWORD *)i + 7) )
  {
    if ( !*((_BYTE *)i + 48)
      && !*((_WORD *)i + 444)
      && (*((_DWORD *)i + 46) & 0x400) == 0
      && !(unsigned int)ApiSetIsMouseDeviceOnIgnoreList(i) )
    {
      v0 = 1;
      break;
    }
  }
  GreLeaveCriticalRegionAndReleasePushLockShared(&CBaseInput::_sLock);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_l(v3, v2, v4, v5);
  v6 = 16 * v0;
  result = v6 | *(&qword_1C0210A18 + 1) & 0xFFFFFFEF;
  *(&qword_1C0210A18 + 1) = v6 | *(&qword_1C0210A18 + 1) & 0xFFFFFFEF;
  return result;
}
