/*
 * XREFs of CiSchedulerWait @ 0x1C0001160
 * Callers:
 *     CiSchedulerThreadFunction @ 0x1C0002C80 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0001010 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSchedulerSleep @ 0x1C0001990 (CiSchedulerSleep.c)
 *     __security_check_cookie @ 0x1C0002EE0 (__security_check_cookie.c)
 *     CiLogSchedulerEvent @ 0x1C0003BC4 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C0003CBC (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0003D40 (CiLogSchedulerWakeup.c)
 *     WPP_SF_ @ 0x1C0004360 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C00045A8 (WPP_SF_d.c)
 */

char __fastcall CiSchedulerWait(__int64 a1, unsigned __int32 *a2)
{
  unsigned __int32 *v2; // r14
  __int64 DpcData_high; // rdx
  __int64 v4; // rcx
  unsigned int v5; // esi
  int v6; // ebp
  unsigned int v7; // ebx
  __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // esi
  struct _DEVICE_OBJECT *SystemArgument1; // r8
  struct _DEVICE_OBJECT *NextDevice; // rcx
  unsigned __int64 InterruptTimePrecise; // rbx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 DeviceObjectExtension; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned __int32 i; // ebx
  int v21; // r12d
  int v22; // edi
  __int64 v23; // rax
  unsigned __int64 v24; // r13
  __int64 v25; // rcx
  unsigned __int64 v26; // rbx
  bool v27; // zf
  __int64 v28; // r15
  __int64 *j; // rsi
  __int64 v30; // rax
  unsigned __int8 v31; // dl
  unsigned int v32; // ebp
  int v33; // eax
  int v34; // eax
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  int v40; // eax
  unsigned __int32 v41; // [rsp+30h] [rbp-88h]
  int v42; // [rsp+34h] [rbp-84h]
  int v43; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int32 *v44; // [rsp+40h] [rbp-78h]
  char v45[8]; // [rsp+48h] [rbp-70h] BYREF
  char v46[8]; // [rsp+50h] [rbp-68h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+68h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+78h] [rbp-40h] BYREF

  v2 = a2;
  v44 = a2;
  if ( CiThreadsMovedUp )
  {
    if ( CiSchedulerInLazyMode )
    {
      DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      v4 = 2LL;
    }
    else
    {
      DpcData_high = LODWORD(WPP_MAIN_CB.SecurityDescriptor);
      v4 = 1LL;
    }
    CiSchedulerSleep(v4, DpcData_high, v2);
    if ( (*v2 & 0xC) != 0 )
      return 0;
LABEL_5:
    if ( !CiSchedulerDisallowLazyMode )
    {
      v5 = byte_1C0007218;
      v6 = 0;
      v7 = 0;
      if ( !byte_1C0007218 )
        goto LABEL_12;
      v8 = 0LL;
      do
      {
        if ( !(unsigned __int8)PoCpuIdledSinceLastCallImprecise(v7, v8 + CiLastIdleTime) )
          ++v6;
        ++v7;
        v8 += 8LL;
      }
      while ( v7 < v5 );
      if ( v6 )
        v9 = 0;
      else
LABEL_12:
        v9 = (2 * CiProcessorIdleHistoryBits) | 1;
      CiProcessorIdleHistoryBits = CiSchedulerIdleCycleBitMask & v9;
    }
    if ( CiProcessorIdleHistoryBits )
    {
      if ( CiProcessorIdleHistoryBits == CiSchedulerIdleCycleBitMask )
      {
        if ( !CiSchedulerInLazyMode )
        {
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_d(
              WPP_GLOBAL_Control->AttachedDevice,
              13LL,
              &WPP_f6e0feba06a43c1af9cafb3cd5dad623_Traceguids,
              HIDWORD(WPP_MAIN_CB.Dpc.DpcData));
          CiSchedulerInLazyMode = 1;
        }
        v10 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
        v11 = 4;
      }
      else
      {
        v10 = *(&WPP_MAIN_CB.ActiveThreadCount + 1);
        v11 = 3;
      }
      if ( byte_1C00072D8 )
        CiLogSchedulerWakeup(*v2);
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
      if ( CiSchedulerInLazyMode )
      {
        SystemArgument1 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
        if ( WPP_MAIN_CB.Dpc.SystemArgument1 == &WPP_MAIN_CB.Dpc.SystemArgument1 )
        {
LABEL_135:
          *v2 |= 0x80u;
          WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
          return 0;
        }
        while ( 1 )
        {
          NextDevice = SystemArgument1->NextDevice;
          if ( NextDevice != (struct _DEVICE_OBJECT *)&SystemArgument1->NextDevice )
            break;
LABEL_142:
          SystemArgument1 = *(struct _DEVICE_OBJECT **)&SystemArgument1->Type;
          if ( SystemArgument1 == (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1 )
            goto LABEL_135;
        }
        while ( (BYTE4(NextDevice->DeviceExtension) & 1) != 0 )
        {
          NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type;
          if ( NextDevice == (struct _DEVICE_OBJECT *)&SystemArgument1->NextDevice )
            goto LABEL_142;
        }
      }
      if ( qword_1C00071B8 )
        RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
      if ( CiSchedulerWaitStatus == 257 )
        InterruptTimePrecise = KeQueryInterruptTimePrecise(v45);
      else
        InterruptTimePrecise = MEMORY[0xFFFFF78000000008];
      v15 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
      byte_1C00071C4 = 0;
      qword_1C00071B8 = InterruptTimePrecise + v10;
      if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
      {
        if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
          v15 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
        else
          v15 = 0LL;
      }
      LOBYTE(SystemArgument1) = 0;
      if ( v15 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(v15 + 24) > InterruptTimePrecise + v10 )
          {
            v16 = *(_QWORD *)v15;
            if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
            {
              if ( !v16 )
                goto LABEL_42;
              v16 ^= v15;
            }
            if ( !v16 )
            {
LABEL_42:
              LOBYTE(SystemArgument1) = 0;
              break;
            }
          }
          else
          {
            v16 = *(_QWORD *)(v15 + 8);
            if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
            {
              if ( !v16 )
                goto LABEL_43;
              v16 ^= v15;
            }
            if ( !v16 )
            {
LABEL_43:
              LOBYTE(SystemArgument1) = 1;
              break;
            }
          }
          v15 = v16;
        }
      }
      RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v15, SystemArgument1, &WPP_MAIN_CB.Reserved);
      if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
      {
        if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
          goto LABEL_146;
        DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                     + 1);
      }
      else
      {
        DeviceObjectExtension = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
      }
      if ( DeviceObjectExtension )
      {
        if ( DeviceObjectExtension != CiSchedulerTimerNode )
        {
          v18 = *(_QWORD *)(DeviceObjectExtension + 24);
          if ( InterruptTimePrecise > v18 )
          {
            v19 = 0LL;
          }
          else
          {
            v19 = InterruptTimePrecise - v18;
            if ( v19 < -2000 )
              v19 += 2000LL;
          }
          CiSchedulerTimerNode = DeviceObjectExtension;
          ExSetTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v19, 0LL, &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
        }
LABEL_52:
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
        if ( byte_1C00072D8 )
          CiLogSchedulerSleep(v11, v10);
        for ( i = _InterlockedExchange(&CiSchedulerWakeupReason, 0); ; i = 0 )
        {
          v41 = i;
          if ( !i )
            CiSchedulerWaitStatus = KeWaitForSingleObject(
                                      *(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
                                      Executive,
                                      0,
                                      1u,
                                      0LL);
          if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
            goto LABEL_101;
          v21 = 0;
          v22 = 0;
          v42 = 0;
          if ( CiSchedulerWaitStatus == 257 )
            v23 = KeQueryInterruptTimePrecise(v46);
          else
            v23 = MEMORY[0xFFFFF78000000008];
          v24 = v23 + 2000;
          KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
          CiSchedulerTimerNode = 2LL;
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
              goto LABEL_87;
            v26 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize + 1);
          }
          else
          {
            v26 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
          }
          if ( v26 )
          {
            while ( *(_QWORD *)(v26 + 24) <= v24 )
            {
              RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v26);
              v27 = *(_DWORD *)(v26 + 32) == 1;
              *(_QWORD *)(v26 + 24) = 0LL;
              if ( v27 )
              {
                if ( *(_BYTE *)(v26 + 36) )
                {
                  v28 = v26 - 96;
                }
                else
                {
                  v40 = *(_DWORD *)(v26 + 128);
                  v28 = v26 - 56;
                  if ( (v40 & 1) != 0 )
                  {
                    v42 = 1;
                    ++CiTotalTasksDeadlineExpired;
                    *(_DWORD *)(v28 + 184) = v40 | 4;
                  }
                }
                for ( j = *(__int64 **)(v28 + 32); j != (__int64 *)(v28 + 32); j = (__int64 *)*j )
                {
                  if ( (*((_BYTE *)j + 68) & 1) == 0 )
                  {
                    if ( CiThreadsMovedUp )
                    {
                      v30 = *(j - 1);
                      if ( *(_QWORD *)(v30 + 120) || !*(_BYTE *)(v30 + 132) && *(_QWORD *)(v30 + 80) )
                      {
                        v25 = *(unsigned __int8 *)(*(j - 2) + 40);
                        v31 = *(_BYTE *)(*(j - 2) + 40);
                        if ( (unsigned __int8)v25 > *((_BYTE *)j + 24) )
                          v31 = *((_BYTE *)j + 24);
                      }
                      else
                      {
                        v31 = *((_BYTE *)j + 24);
                      }
                    }
                    else
                    {
                      v31 = *((_BYTE *)j + 26);
                    }
                    v32 = v31;
                    if ( *((unsigned __int8 *)j + 27) != v31 )
                    {
                      *((_BYTE *)j + 27) = v31;
                      if ( byte_1C00072D8 )
                        CiLogSchedulerEvent(j - 10, v31);
                      KeSetActualBasePriorityThread(j[2], v32);
                    }
                  }
                }
                v33 = *(_DWORD *)(v28 + 184);
                if ( (v33 & 2) != 0 && (*(_BYTE *)(v26 + 36) || !*(_BYTE *)(v28 + 132)) )
                {
                  *(_DWORD *)(v28 + 184) = v33 & 0xFFFFFFFD;
                  CiSchedulerSetTaskIndexThreadTag(v28, 0);
                  --CiTotalTasksBuffering;
                }
                if ( byte_1C00072D8 )
                {
                  if ( *(_BYTE *)(v26 + 36) )
                  {
                    v48.Ptr = v28 + 144;
                    *(_QWORD *)&v48.Size = 4LL;
                    EtwWrite(RegHandle, &CiTaskIndexPreDeadlineExpiredEvent, 0LL, 1u, &v48);
                  }
                  else
                  {
                    UserData.Ptr = v28 + 144;
                    *(_QWORD *)&UserData.Size = 4LL;
                    EtwWrite(RegHandle, &CiTaskIndexDeadlineExpiredEvent, 0LL, 1u, &UserData);
                  }
                }
                v34 = 32;
              }
              else
              {
                v34 = 16;
              }
              v21 |= v34;
              if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
              {
                if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
                  break;
                v26 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                           + 1);
              }
              else
              {
                v26 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
              }
              if ( !v26 )
                break;
            }
            v22 = v42;
          }
          i = v41;
LABEL_87:
          if ( (v21 & 0x20) == 0 )
            goto LABEL_90;
          if ( v22 )
          {
            if ( !CiCurrentMediaBufferingState )
              goto LABEL_90;
            CiCurrentMediaBufferingState = 0;
            v25 = 0LL;
            goto LABEL_131;
          }
          LOBYTE(v25) = CiTotalTasksBuffering != 0;
          if ( (CiTotalTasksBuffering != 0) != CiCurrentMediaBufferingState
            && (!CiTotalTasksBuffering || !CiTotalTasksDeadlineExpired) )
          {
            CiCurrentMediaBufferingState = CiTotalTasksBuffering != 0;
LABEL_131:
            PoNotifyMediaBuffering(v25);
          }
LABEL_90:
          if ( (v21 & 0x10) != 0 )
            goto LABEL_99;
          v35 = v24 - 2000;
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
              goto LABEL_160;
            v36 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize + 1);
          }
          else
          {
            v36 = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
          }
          if ( v36 )
          {
            if ( v36 != CiSchedulerTimerNode )
            {
              v37 = *(_QWORD *)(v36 + 24);
              if ( v35 > v37 )
              {
                v38 = 0LL;
              }
              else
              {
                v38 = v35 - v37;
                if ( v38 < -2000 )
                  v38 += 2000LL;
              }
              CiSchedulerTimerNode = v36;
              ExSetTimer(
                *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
                v38,
                0LL,
                &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
            }
            goto LABEL_99;
          }
LABEL_160:
          if ( CiSchedulerTimerNode != 1 )
          {
            CiSchedulerTimerNode = 1LL;
            ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
          }
LABEL_99:
          WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
          if ( v22 )
          {
            if ( byte_1C00072D8 )
            {
              v49.Ptr = (ULONGLONG)&v43;
              v43 = 1;
              *(_QWORD *)&v49.Size = 4LL;
              EtwWrite(RegHandle, &CiTurboEngagedEvent, 0LL, 1u, &v49);
            }
            PoLatencySensitivityHint(4LL);
          }
          i |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v21;
          if ( (i & 0xFFFFFFDF) != 0 )
          {
            v2 = v44;
            *v44 = i;
            if ( (i & 0xC) != 0 )
              return 0;
            goto LABEL_5;
          }
LABEL_101:
          if ( byte_1C00072D8 )
            CiLogSchedulerWakeup(i);
        }
      }
LABEL_146:
      if ( CiSchedulerTimerNode != 1 )
      {
        CiSchedulerTimerNode = 1LL;
        ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
      }
      goto LABEL_52;
    }
    if ( CiSchedulerInLazyMode )
    {
      CiSchedulerInLazyMode = 0;
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 12LL, &WPP_f6e0feba06a43c1af9cafb3cd5dad623_Traceguids);
    }
    return 0;
  }
  else
  {
    CiSchedulerSleep(0LL, HIDWORD(WPP_MAIN_CB.SecurityDescriptor), a2);
    return 1;
  }
}
