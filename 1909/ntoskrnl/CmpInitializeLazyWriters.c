/*
 * XREFs of CmpInitializeLazyWriters @ 0x1407591D4
 * Callers:
 *     CmpCmdInit @ 0x140758A30 (CmpCmdInit.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x1400820A0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     PsCreateSystemThreadEx @ 0x1406725D0 (PsCreateSystemThreadEx.c)
 *     PoRegisterPowerSettingCallback @ 0x1406A0AF0 (PoRegisterPowerSettingCallback.c)
 */

NTSTATUS CmpInitializeLazyWriters()
{
  _QWORD *v0; // r14
  __int64 v1; // rsi
  ULONG_PTR v2; // r9
  __int128 v4; // [rsp+50h] [rbp-48h] BYREF
  __int64 v5; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  int v7; // [rsp+6Ch] [rbp-2Ch]
  __int128 v8; // [rsp+70h] [rbp-28h]
  HANDLE Handle; // [rsp+A0h] [rbp+8h] BYREF

  v0 = &unk_1404248D8;
  dword_1404248F0 = CmpLazyFlushIntervalInSeconds;
  v1 = 0LL;
  dword_1404249B0 = CmpLazyReconcileIntervalInSeconds;
  dword_140424A70 = CmpLazyLocalizeIntervalInSeconds;
  do
  {
    KeInitializeTimerEx(&CmpLazyWriterData + 3 * v1, NotificationTimer);
    KeInitializeEvent((PRKEVENT)(&CmpLazyWriterData + 3 * v1 + 2), SynchronizationEvent, 0);
    KeInitializeDpc(
      (PRKDPC)&CmpLazyWriterData + 3 * v1 + 1,
      (PKDEFERRED_ROUTINE)CmpLazyFlushDpcRoutine,
      &CmpLazyWriterData + 3 * v1);
    v2 = CmpRegistryProcess;
    *v0 = 0LL;
    v7 = 0;
    v5 = 0LL;
    v4 = 0x30uLL;
    v6 = 512;
    v8 = 0LL;
    if ( (int)PsCreateSystemThreadEx(
                (__int64)&Handle,
                0x1FFFFF,
                &v4,
                v2,
                0LL,
                (__int64)CmpLazyWriteWorker,
                (__int64)(&CmpLazyWriterData + 3 * v1),
                0LL,
                0LL) < 0 )
      KeBugCheckEx(0x51u, 0x18uLL, (unsigned int)v1, 0LL, 0LL);
    NtClose(Handle);
    v1 = (unsigned int)(v1 + 1);
    v0 += 24;
  }
  while ( (unsigned int)v1 < 3 );
  CmpUserPresent = 1;
  return PoRegisterPowerSettingCallback(
           0LL,
           &GUID_GLOBAL_USER_PRESENCE,
           (PPOWER_SETTING_CALLBACK)CmpUserPresenceCallback,
           0LL,
           0LL);
}
