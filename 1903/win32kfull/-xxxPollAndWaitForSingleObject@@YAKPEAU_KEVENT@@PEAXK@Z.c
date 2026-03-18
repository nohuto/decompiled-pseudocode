/*
 * XREFs of ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C013310C
 * Callers:
 *     xxxWaitForInputIdle @ 0x1C0132FA0 (xxxWaitForInputIdle.c)
 * Callees:
 *     xxxRemoveQueueCompletion @ 0x1C000E76C (xxxRemoveQueueCompletion.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     xxxReceiveMessage @ 0x1C009E8D0 (xxxReceiveMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     ClientDeliverUserApc @ 0x1C01306F4 (ClientDeliverUserApc.c)
 */

__int64 __fastcall xxxPollAndWaitForSingleObject(PVOID Object, void *a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  int v9; // ebx
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned int v18; // eax
  _QWORD v19[4]; // [rsp+40h] [rbp-48h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+20h] BYREF

  memset(v19, 0, 24);
  Timeout.QuadPart = 0LL;
  if ( !*(_QWORD *)(gptiCurrent + 880LL) )
  {
    v7 = Win32AllocPoolNonPaged(40LL, 1819308885LL);
    *(_QWORD *)(gptiCurrent + 880LL) = v7;
    if ( !v7 )
      return 0xFFFFFFFFLL;
  }
  PushW32ThreadLock((__int64)Object, v19, UserDereferenceObject, a4);
  if ( Object )
    ObfReferenceObject(Object);
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) = 64;
  KeClearEvent(*(PRKEVENT *)(gptiCurrent + 728LL));
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
        v18 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v8;
        LODWORD(v8) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( v18 >= a3 )
          a3 = 0;
        else
          a3 -= v18;
      }
    }
    Timeout.QuadPart = -10000LL * v9;
    **(_QWORD **)(gptiCurrent + 880LL) = Object;
    v10 = *(_QWORD *)(gptiCurrent + 880LL);
    *(_QWORD *)(v10 + 8) = *(_QWORD *)(gptiCurrent + 1416LL);
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 880LL) + 16LL) = a2;
    if ( gdwInAtomicOperation )
    {
      v10 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v10);
    v11 = KeWaitForMultipleObjects(
            (a2 != 0LL) + 2,
            *(PVOID **)(gptiCurrent + 880LL),
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
      goto LABEL_30;
    if ( v11 == 192 )
    {
      ClientDeliverUserApc(v13);
LABEL_30:
      v11 = -1;
    }
    v16 = *(_QWORD *)(gptiCurrent + 440LL);
    if ( (*(_BYTE *)(v16 + 4) & 0x40) != 0 && (*(_BYTE *)(v16 + 6) & 0x40) != 0 )
    {
      do
        xxxReceiveMessage(gptiCurrent);
      while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 0x40) != 0 );
    }
    if ( v11 != 258 && v11 != 1 )
      goto LABEL_18;
    v14 = 0LL;
  }
  while ( a3 );
  if ( v11 == 1 )
    v11 = 258;
LABEL_18:
  PopAndFreeW32ThreadLock((__int64)v19, v12, v14, v15);
  return (unsigned int)v11;
}
