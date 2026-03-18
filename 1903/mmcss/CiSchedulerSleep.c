/*
 * XREFs of CiSchedulerSleep @ 0x1C0001990
 * Callers:
 *     CiSchedulerWait @ 0x1C0001160 (CiSchedulerWait.c)
 * Callees:
 *     CiSchedulerProcessDeadlines @ 0x1C0001B30 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerUpdateTimer @ 0x1C0001D30 (CiSchedulerUpdateTimer.c)
 *     CiLogSchedulerSleep @ 0x1C0003CBC (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0003D40 (CiLogSchedulerWakeup.c)
 */

__int64 __fastcall CiSchedulerSleep(unsigned int a1, unsigned int a2, unsigned __int32 *a3)
{
  unsigned __int32 *v3; // rdi
  __int64 v4; // rsi
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int32 i; // eax
  __int64 result; // rax
  unsigned __int32 v11; // [rsp+68h] [rbp+10h] BYREF
  char v12; // [rsp+70h] [rbp+18h] BYREF

  v3 = a3;
  v4 = a2;
  if ( qword_1C00071B8 )
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
  if ( CiSchedulerWaitStatus == 257 )
    v6 = KeQueryInterruptTimePrecise(&v12);
  else
    v6 = MEMORY[0xFFFFF78000000008];
  v7 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  qword_1C00071B8 = v6 + v4;
  byte_1C00071C4 = 0;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
      v7 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
    else
      v7 = 0LL;
  }
  LOBYTE(a3) = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v7 + 24) > (unsigned __int64)(v6 + v4) )
      {
        v8 = *(_QWORD *)v7;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_20;
          v8 ^= v7;
        }
        if ( !v8 )
        {
LABEL_20:
          LOBYTE(a3) = 0;
          break;
        }
      }
      else
      {
        v8 = *(_QWORD *)(v7 + 8);
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_21;
          v8 ^= v7;
        }
        if ( !v8 )
        {
LABEL_21:
          LOBYTE(a3) = 1;
          break;
        }
      }
      v7 = v8;
    }
  }
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v7, a3, &WPP_MAIN_CB.Reserved);
  CiSchedulerUpdateTimer(v6);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  if ( byte_1C00072D8 )
    CiLogSchedulerSleep(a1, (unsigned int)v4);
  for ( i = _InterlockedExchange(&CiSchedulerWakeupReason, 0); ; i = 0 )
  {
    v11 = i;
    if ( !i )
      CiSchedulerWaitStatus = KeWaitForSingleObject(
                                *(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
                                Executive,
                                0,
                                1u,
                                0LL);
    if ( (unsigned __int8)CiSchedulerProcessDeadlines(&v11) )
      break;
    if ( byte_1C00072D8 )
      CiLogSchedulerWakeup(v11);
  }
  result = v11;
  *v3 = v11;
  return result;
}
