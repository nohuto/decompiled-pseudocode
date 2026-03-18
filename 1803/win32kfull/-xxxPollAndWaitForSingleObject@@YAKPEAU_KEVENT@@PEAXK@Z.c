/*
 * XREFs of ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C010BB84
 * Callers:
 *     xxxWaitForInputIdle @ 0x1C010B9B4 (xxxWaitForInputIdle.c)
 * Callees:
 *     xxxRemoveQueueCompletion @ 0x1C000DE4C (xxxRemoveQueueCompletion.c)
 *     xxxReceiveMessage @ 0x1C0049610 (xxxReceiveMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     ClientDeliverUserApc @ 0x1C0105234 (ClientDeliverUserApc.c)
 */

__int64 __fastcall xxxPollAndWaitForSingleObject(PVOID Object, void *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // r12
  int v9; // ebx
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v17; // eax
  _QWORD v18[4]; // [rsp+40h] [rbp-48h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(gptiCurrent + 872LL) )
  {
    v6 = Win32AllocPoolNonPaged(40LL, 1819308885LL);
    *(_QWORD *)(gptiCurrent + 872LL) = v6;
    if ( !v6 )
      return 0xFFFFFFFFLL;
  }
  PushW32ThreadLock((__int64)Object, v18, UserDereferenceObject);
  if ( Object )
    ObfReferenceObject(Object);
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) = 64;
  KeClearEvent(*(PRKEVENT *)(gptiCurrent + 720LL));
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  do
  {
    if ( a3 <= 0x1F4 )
    {
      v9 = a3;
      a3 = 0;
    }
    else
    {
      v9 = 500;
      if ( a3 != -1 )
      {
        v17 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v8;
        LODWORD(v8) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( v17 >= a3 )
          a3 = 0;
        else
          a3 -= v17;
      }
    }
    Timeout.QuadPart = -10000LL * v9;
    **(_QWORD **)(gptiCurrent + 872LL) = Object;
    v10 = *(_QWORD *)(gptiCurrent + 872LL);
    *(_QWORD *)(v10 + 8) = *(_QWORD *)(gptiCurrent + 1400LL);
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 872LL) + 16LL) = a2;
    if ( gdwInAtomicOperation )
    {
      v10 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v10, gdwInAtomicOperation, 0LL, v7);
    v11 = KeWaitForMultipleObjects(
            (a2 != 0LL) + 2,
            *(PVOID **)(gptiCurrent + 872LL),
            WaitAny,
            WrUserRequest,
            1,
            0,
            &Timeout,
            0LL);
    EnterCrit(0LL, 1LL);
    if ( v11 == 1 )
      xxxRemoveQueueCompletion();
    if ( v11 < 0 )
      goto LABEL_20;
    if ( v11 == 192 )
    {
      ClientDeliverUserApc(v13, v12, v14, v7);
LABEL_20:
      v11 = -1;
    }
    v15 = *(_QWORD *)(gptiCurrent + 440LL);
    if ( (*(_BYTE *)(v15 + 4) & 0x40) != 0 && (*(_BYTE *)(v15 + 6) & 0x40) != 0 )
    {
      do
        xxxReceiveMessage(gptiCurrent);
      while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 0x40) != 0 );
    }
    if ( v11 != 258 && v11 != 1 )
      goto LABEL_18;
  }
  while ( a3 );
  if ( v11 == 1 )
    v11 = 258;
LABEL_18:
  PopAndFreeW32ThreadLock((__int64)v18, v12);
  return (unsigned int)v11;
}
