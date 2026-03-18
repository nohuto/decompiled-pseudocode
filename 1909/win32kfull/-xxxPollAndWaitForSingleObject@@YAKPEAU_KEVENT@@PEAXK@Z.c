/*
 * XREFs of ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C010DC0C
 * Callers:
 *     xxxWaitForInputIdle @ 0x1C010DAA0 (xxxWaitForInputIdle.c)
 * Callees:
 *     xxxRemoveQueueCompletion @ 0x1C000DEEC (xxxRemoveQueueCompletion.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     xxxReceiveMessage @ 0x1C003F6A0 (xxxReceiveMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     ClientDeliverUserApc @ 0x1C010B244 (ClientDeliverUserApc.c)
 */

__int64 __fastcall xxxPollAndWaitForSingleObject(PVOID Object, void *a2, unsigned int a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  int v8; // ebx
  __int64 v9; // rcx
  NTSTATUS v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v16; // eax
  _QWORD v17[4]; // [rsp+40h] [rbp-48h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+20h] BYREF

  memset(v17, 0, 24);
  Timeout.QuadPart = 0LL;
  if ( !*(_QWORD *)(gptiCurrent + 880LL) )
  {
    v6 = Win32AllocPoolNonPaged(40LL, 1819308885LL);
    *(_QWORD *)(gptiCurrent + 880LL) = v6;
    if ( !v6 )
      return 0xFFFFFFFFLL;
  }
  PushW32ThreadLock((__int64)Object, v17, UserDereferenceObject);
  if ( Object )
    ObfReferenceObject(Object);
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) = 64;
  KeClearEvent(*(PRKEVENT *)(gptiCurrent + 728LL));
  v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  do
  {
    if ( a3 <= 0x1F4 )
    {
      v8 = a3;
      a3 = 0;
    }
    else
    {
      v8 = 500;
      if ( a3 != -1 )
      {
        v16 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v7;
        LODWORD(v7) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( v16 >= a3 )
          a3 = 0;
        else
          a3 -= v16;
      }
    }
    Timeout.QuadPart = -10000LL * v8;
    **(_QWORD **)(gptiCurrent + 880LL) = Object;
    v9 = *(_QWORD *)(gptiCurrent + 880LL);
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(gptiCurrent + 1416LL);
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 880LL) + 16LL) = a2;
    if ( gdwInAtomicOperation )
    {
      v9 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v9);
    v10 = KeWaitForMultipleObjects(
            (a2 != 0LL) + 2,
            *(PVOID **)(gptiCurrent + 880LL),
            WaitAny,
            WrUserRequest,
            1,
            0,
            &Timeout,
            0LL);
    EnterCrit(0LL, 1LL);
    if ( v10 == 1 )
      xxxRemoveQueueCompletion();
    if ( v10 < 0 )
      goto LABEL_30;
    if ( v10 == 192 )
    {
      ClientDeliverUserApc(v12);
LABEL_30:
      v10 = -1;
    }
    v14 = *(_QWORD *)(gptiCurrent + 440LL);
    if ( (*(_BYTE *)(v14 + 4) & 0x40) != 0 && (*(_BYTE *)(v14 + 6) & 0x40) != 0 )
    {
      do
        xxxReceiveMessage(gptiCurrent);
      while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 0x40) != 0 );
    }
    if ( v10 != 258 && v10 != 1 )
      goto LABEL_18;
    v13 = 0LL;
  }
  while ( a3 );
  if ( v10 == 1 )
    v10 = 258;
LABEL_18:
  PopAndFreeW32ThreadLock((__int64)v17, v11, v13);
  return (unsigned int)v10;
}
