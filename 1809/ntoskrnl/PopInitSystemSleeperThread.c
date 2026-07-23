/*
 * XREFs of PopInitSystemSleeperThread @ 0x1406DE104
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x14066BC80 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall PopInitSystemSleeperThread(LONG a1, struct _KEVENT *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+50h] [rbp-38h] BYREF
  __int64 v5; // [rsp+60h] [rbp-28h]
  int v6; // [rsp+68h] [rbp-20h]
  __int128 v7; // [rsp+70h] [rbp-18h]
  HANDLE Handle; // [rsp+98h] [rbp+10h] BYREF

  a2[3].Header.LockNV = a1;
  KeInitializeEvent(a2, SynchronizationEvent, 0);
  KeInitializeEvent(a2 + 1, SynchronizationEvent, 0);
  KeInitializeEvent(a2 + 2, SynchronizationEvent, 0);
  *((_QWORD *)&v4 + 1) = 0LL;
  v5 = 0LL;
  LODWORD(v4) = 48;
  v6 = 512;
  v7 = 0LL;
  result = PsCreateSystemThreadEx(
             (__int64)&Handle,
             0,
             &v4,
             0LL,
             0LL,
             (__int64)PopTransitionToSleep,
             (__int64)a2,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    ZwClose(Handle);
    KeWaitForSingleObject(a2, Executive, 0, 0, 0LL);
    return 0LL;
  }
  return result;
}
