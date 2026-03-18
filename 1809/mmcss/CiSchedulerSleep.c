/*
 * XREFs of CiSchedulerSleep @ 0x1C0001C90
 * Callers:
 *     CiSchedulerWait @ 0x1C00020D0 (CiSchedulerWait.c)
 * Callees:
 *     CiSchedulerProcessDeadlines @ 0x1C0001E30 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerUpdateTimer @ 0x1C0002950 (CiSchedulerUpdateTimer.c)
 *     CiSchedulerQueryCurrentTime @ 0x1C0002A10 (CiSchedulerQueryCurrentTime.c)
 *     CiLogSchedulerSleep @ 0x1C0003EC4 (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0003F48 (CiLogSchedulerWakeup.c)
 */

__int64 __fastcall CiSchedulerSleep(unsigned int a1, unsigned int a2, unsigned __int32 *a3)
{
  __int64 v4; // rbx
  __int64 CurrentTime; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int32 i; // eax
  __int64 result; // rax
  unsigned __int32 v14; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2;
  if ( qword_1C00071B8 )
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
  CurrentTime = CiSchedulerQueryCurrentTime();
  v8 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  v9 = CurrentTime;
  byte_1C00071C4 = 0;
  v10 = CurrentTime + v4;
  qword_1C00071B8 = CurrentTime + v4;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
      v8 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
    else
      v8 = 0LL;
  }
  LOBYTE(v7) = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v8 + 24) > v10 )
      {
        v11 = *(_QWORD *)v8;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_19;
          v11 ^= v8;
        }
        if ( !v11 )
        {
LABEL_19:
          LOBYTE(v7) = 0;
          break;
        }
      }
      else
      {
        v11 = *(_QWORD *)(v8 + 8);
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_13;
          v11 ^= v8;
        }
        if ( !v11 )
        {
LABEL_13:
          LOBYTE(v7) = 1;
          break;
        }
      }
      v8 = v11;
    }
  }
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v8, v7, &WPP_MAIN_CB.Reserved);
  CiSchedulerUpdateTimer(v9);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  if ( byte_1C00072E8 )
    CiLogSchedulerSleep(a1, (unsigned int)v4);
  for ( i = _InterlockedExchange(&CiSchedulerWakeupReason, 0); ; i = 0 )
  {
    v14 = i;
    if ( !i )
      CiSchedulerWaitStatus = KeWaitForSingleObject(
                                *(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
                                Executive,
                                0,
                                1u,
                                0LL);
    if ( (unsigned __int8)CiSchedulerProcessDeadlines(&v14) )
      break;
    if ( byte_1C00072E8 )
      CiLogSchedulerWakeup(v14);
  }
  result = v14;
  *a3 = v14;
  return result;
}
