/*
 * XREFs of CiSchedulerThreadFunction @ 0x1C0002FB0
 * Callers:
 *     <none>
 * Callees:
 *     CiSchedulerWait @ 0x1C00020D0 (CiSchedulerWait.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0002D00 (CiSchedulerRemoveDeadline.c)
 *     CiSchedulerDeepSleep @ 0x1C0002D60 (CiSchedulerDeepSleep.c)
 *     CiLogSchedulerEvent @ 0x1C0003DD8 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerWakeup @ 0x1C0003F48 (CiLogSchedulerWakeup.c)
 *     WPP_SF_ @ 0x1C0004568 (WPP_SF_.c)
 */

void __fastcall CiSchedulerThreadFunction(struct _KEVENT *StartContext)
{
  PVOID *p_Reserved; // r13
  struct _KTHREAD *CurrentThread; // rax
  char v4; // di
  int v5; // ebp
  __int64 AttachedDevice_low; // rcx
  unsigned int v7; // esi
  struct _DEVICE_OBJECT *SystemArgument1; // r15
  struct _DEVICE_OBJECT *NextDevice; // rdi
  __int64 i; // r14
  unsigned int v11; // eax
  int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rdx
  char v16; // bl
  __int64 v17; // rax
  unsigned int v18; // r12d
  unsigned __int8 AttachedDevice; // al
  unsigned int v20; // [rsp+50h] [rbp+8h] BYREF

  p_Reserved = 0LL;
  if ( byte_1C00072E8 )
    CiLogSchedulerWakeup(1LL);
  CurrentThread = KeGetCurrentThread();
  v4 = 1;
  CiThreadsMovedUp = 1;
  CiSchedulerThread = CurrentThread;
  CiSchedulerInLazyMode = 0;
  KeSetActualBasePriorityThread(CurrentThread, 27LL);
  KeSetEvent(StartContext, 0, 0);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 15LL, &WPP_8825f9f1018b3a0c8bc97e34548ca364_Traceguids);
  v20 = 0;
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
      for ( i = (__int64)&SystemArgument1->NextDevice; NextDevice != (struct _DEVICE_OBJECT *)i; v5 = v12 )
      {
        if ( (BYTE4(NextDevice->DeviceExtension) & 1) != 0 )
        {
          LOBYTE(AttachedDevice_low) = 0;
        }
        else
        {
          if ( CiThreadsMovedUp )
          {
            v17 = *((_QWORD *)&NextDevice[-1].Reserved + 1);
            if ( *(_QWORD *)(v17 + 120) || !*(_BYTE *)(v17 + 132) && *(_QWORD *)(v17 + 80) )
            {
              AttachedDevice_low = *((unsigned __int8 *)NextDevice[-1].Reserved + 40);
              AttachedDevice = (unsigned __int8)NextDevice->AttachedDevice;
              if ( (unsigned __int8)AttachedDevice_low > AttachedDevice )
                AttachedDevice_low = AttachedDevice;
            }
            else
            {
              AttachedDevice_low = LOBYTE(NextDevice->AttachedDevice);
            }
          }
          else
          {
            AttachedDevice_low = BYTE2(NextDevice->AttachedDevice);
          }
          v18 = (unsigned __int8)AttachedDevice_low;
          if ( BYTE3(NextDevice->AttachedDevice) != (unsigned __int8)AttachedDevice_low )
          {
            BYTE3(NextDevice->AttachedDevice) = AttachedDevice_low;
            if ( byte_1C00072E8 )
              CiLogSchedulerEvent(&NextDevice[-1].Dpc.DpcData, (unsigned __int8)AttachedDevice_low);
            KeSetActualBasePriorityThread(NextDevice->NextDevice, v18);
          }
          LOBYTE(AttachedDevice_low) = 1;
        }
        NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type;
        v11 = v7 + 1;
        if ( !(_BYTE)AttachedDevice_low )
          v11 = v7;
        v7 = v11;
        v12 = v5 + 1;
        if ( !(_BYTE)AttachedDevice_low )
          v12 = v5;
      }
    }
    if ( CiThreadsMovedUp && v7 > 1 )
    {
      AttachedDevice_low = (__int64)p_Reserved[4];
      v13 = p_Reserved + 4;
      if ( *(PVOID **)(AttachedDevice_low + 8) != p_Reserved + 4
        || (v14 = *(_QWORD *)AttachedDevice_low, *(_QWORD *)(*(_QWORD *)AttachedDevice_low + 8LL) != AttachedDevice_low)
        || (*v13 = v14, *(_QWORD *)(v14 + 8) = v13, v15 = (__int64 *)p_Reserved[5], (_QWORD *)*v15 != v13) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)AttachedDevice_low = v13;
      *(_QWORD *)(AttachedDevice_low + 8) = v15;
      *v15 = AttachedDevice_low;
      p_Reserved[5] = (PVOID)AttachedDevice_low;
    }
    if ( v5 )
    {
      v4 = CiSchedulerWait(AttachedDevice_low, &v20);
    }
    else
    {
      v4 = 1;
      CiThreadsMovedUp = 1;
      CiSchedulerInLazyMode = 1;
      CiSchedulerRemoveDeadline((__int64)&WPP_MAIN_CB.Reserved);
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
      CiSchedulerDeepSleep((__int32 *)&v20);
    }
    v16 = v20;
    if ( byte_1C00072E8 )
      CiLogSchedulerWakeup(v20);
  }
  while ( (v16 & 8) == 0 );
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_8825f9f1018b3a0c8bc97e34548ca364_Traceguids);
  PsTerminateSystemThread(0);
}
