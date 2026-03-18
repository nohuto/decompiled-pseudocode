/*
 * XREFs of CmpInitializeLazyWriters @ 0x1407485D4
 * Callers:
 *     CmpCmdInit @ 0x140747E28 (CmpCmdInit.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140089FF0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A56D0 (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x1400B8E50 (KeInitializeEvent.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     PoRegisterPowerSettingCallback @ 0x140589EE0 (PoRegisterPowerSettingCallback.c)
 *     NtClose @ 0x1405E89E0 (NtClose.c)
 *     PsCreateSystemThreadEx @ 0x14066AAE0 (PsCreateSystemThreadEx.c)
 */

NTSTATUS CmpInitializeLazyWriters()
{
  _QWORD *v0; // r14
  __int64 v1; // rsi
  ULONG_PTR v2; // r9
  __int128 v4; // [rsp+50h] [rbp-48h] BYREF
  __int64 v5; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  __int128 v7; // [rsp+70h] [rbp-28h]
  HANDLE Handle; // [rsp+A0h] [rbp+8h] BYREF

  v0 = &unk_1403FE8D8;
  dword_1403FE8F0 = CmpLazyFlushIntervalInSeconds;
  v1 = 0LL;
  dword_1403FE9B0 = CmpLazyReconcileIntervalInSeconds;
  dword_1403FEA70 = CmpLazyLocalizeIntervalInSeconds;
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
    *((_QWORD *)&v4 + 1) = 0LL;
    v5 = 0LL;
    LODWORD(v4) = 48;
    v6 = 512;
    v7 = 0LL;
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
