/*
 * XREFs of ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C0149A00
 * Callers:
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C0149B40 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C014CF80 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::IsInjectionDeviceFromKernelHandle(CBaseInput *this, void *a2, __int64 a3)
{
  unsigned int v3; // ebx
  struct DEVICEINFO *i; // rax

  v3 = 0;
  if ( (struct _KTHREAD *)qword_1C01D0C68 == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  RIMLockExclusive((__int64)&CBaseInput::_sLock);
  for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( *((void **)i + 3) == a2 )
    {
      v3 = -__CFSHR__(*((_DWORD *)i + 46), 14);
      break;
    }
  }
  qword_1C01D0C68 = 0LL;
  ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
