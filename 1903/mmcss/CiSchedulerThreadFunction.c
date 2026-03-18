/*
 * XREFs of CiSchedulerThreadFunction @ 0x1C0002C80
 * Callers:
 *     <none>
 * Callees:
 *     CiSchedulerWait @ 0x1C0001160 (CiSchedulerWait.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0002B90 (CiSchedulerRemoveDeadline.c)
 *     CiSchedulerDeepSleep @ 0x1C0002BF0 (CiSchedulerDeepSleep.c)
 *     CiLogSchedulerEvent @ 0x1C0003BC4 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerWakeup @ 0x1C0003D40 (CiLogSchedulerWakeup.c)
 *     WPP_SF_ @ 0x1C0004360 (WPP_SF_.c)
 */

void __fastcall CiSchedulerThreadFunction(struct _KEVENT *StartContext)
{
  PVOID *p_Reserved; // r13
  struct _KTHREAD *CurrentThread; // rax
  char v4; // di
  int v5; // ebp
  __int64 v6; // rcx
  unsigned int v7; // r14d
  struct _DEVICE_OBJECT *SystemArgument1; // r12
  struct _DEVICE_OBJECT *NextDevice; // rdi
  __int64 i; // r15
  __int64 v11; // rax
  unsigned __int8 AttachedDevice; // dl
  unsigned int v13; // esi
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 **v16; // rdx
  char v17; // bl
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF

  p_Reserved = 0LL;
  if ( byte_1C00072D8 )
    CiLogSchedulerWakeup(1LL);
  CurrentThread = KeGetCurrentThread();
  v4 = 1;
  CiThreadsMovedUp = 1;
  CiSchedulerThread = CurrentThread;
  CiSchedulerInLazyMode = 0;
  KeSetActualBasePriorityThread(CurrentThread, 27LL);
  KeSetEvent(StartContext, 0, 0);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 15LL, &WPP_f6e0feba06a43c1af9cafb3cd5dad623_Traceguids);
  v18 = 0;
  do
  {
    v5 = 0;
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v7 = 0;
    SystemArgument1 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    for ( CiThreadsMovedUp = v4;
          SystemArgument1 != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1;
          SystemArgument1 = *(struct _DEVICE_OBJECT **)&SystemArgument1->Type )
    {
      p_Reserved = &SystemArgument1[-1].Reserved;
      NextDevice = SystemArgument1->NextDevice;
      for ( i = (__int64)&SystemArgument1->NextDevice;
            NextDevice != (struct _DEVICE_OBJECT *)i;
            NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type )
      {
        if ( (BYTE4(NextDevice->DeviceExtension) & 1) == 0 )
        {
          if ( CiThreadsMovedUp )
          {
            v11 = *((_QWORD *)&NextDevice[-1].Reserved + 1);
            if ( *(_QWORD *)(v11 + 120) || !*(_BYTE *)(v11 + 132) && *(_QWORD *)(v11 + 80) )
            {
              v6 = *((unsigned __int8 *)NextDevice[-1].Reserved + 40);
              AttachedDevice = *((_BYTE *)NextDevice[-1].Reserved + 40);
              if ( (unsigned __int8)v6 > LOBYTE(NextDevice->AttachedDevice) )
                AttachedDevice = (unsigned __int8)NextDevice->AttachedDevice;
            }
            else
            {
              AttachedDevice = (unsigned __int8)NextDevice->AttachedDevice;
            }
          }
          else
          {
            AttachedDevice = BYTE2(NextDevice->AttachedDevice);
          }
          v13 = AttachedDevice;
          if ( BYTE3(NextDevice->AttachedDevice) != AttachedDevice )
          {
            BYTE3(NextDevice->AttachedDevice) = AttachedDevice;
            if ( byte_1C00072D8 )
              CiLogSchedulerEvent(&NextDevice[-1].Dpc.DpcData, AttachedDevice);
            KeSetActualBasePriorityThread(NextDevice->NextDevice, v13);
          }
          ++v5;
          ++v7;
        }
      }
    }
    if ( CiThreadsMovedUp && v7 > 1 )
    {
      v14 = (__int64 *)p_Reserved[4];
      v6 = (__int64)(p_Reserved + 4);
      if ( (PVOID *)v14[1] != p_Reserved + 4
        || (v15 = *v14, *(__int64 **)(*v14 + 8) != v14)
        || (*(_QWORD *)v6 = v15, *(_QWORD *)(v15 + 8) = v6, v16 = (__int64 **)p_Reserved[5], *v16 != (__int64 *)v6) )
      {
        __fastfail(3u);
      }
      *v14 = v6;
      v14[1] = (__int64)v16;
      *v16 = v14;
      p_Reserved[5] = v14;
    }
    if ( v5 )
    {
      v4 = CiSchedulerWait(v6, &v18);
    }
    else
    {
      v4 = 1;
      CiThreadsMovedUp = 1;
      CiSchedulerInLazyMode = 1;
      CiSchedulerRemoveDeadline((__int64)&WPP_MAIN_CB.Reserved);
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
      CiSchedulerDeepSleep((__int32 *)&v18);
    }
    v17 = v18;
    if ( byte_1C00072D8 )
      CiLogSchedulerWakeup(v18);
  }
  while ( (v17 & 8) == 0 );
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_f6e0feba06a43c1af9cafb3cd5dad623_Traceguids);
  PsTerminateSystemThread(0);
}
