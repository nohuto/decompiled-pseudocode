/*
 * XREFs of NtSetInformationWorkerFactory @ 0x140045BF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400447B0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140045990 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14005B9E0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpWorkerFactoryCreateThread @ 0x1400831A4 (ExpWorkerFactoryCreateThread.c)
 *     KeSetTimer2 @ 0x1400BC1F0 (KeSetTimer2.c)
 *     KiValidateCpuSetMasks @ 0x1400F9F0C (KiValidateCpuSetMasks.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140114608 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeTimeOutQueueWaiters @ 0x140122CF0 (KeTimeOutQueueWaiters.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x14012ADEC (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ExSystemExceptionFilter @ 0x140747FD0 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // si
  ULONG v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rax
  NTSTATUS result; // eax
  NTSTATUS Thread; // r15d
  bool v15; // r12
  char *v16; // rsi
  unsigned int v17; // edi
  unsigned int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  char v22; // bl
  char v23; // r14
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // eax
  int v29; // ecx
  __int64 v30; // rax
  PVOID v31; // rcx
  PVOID Object; // [rsp+38h] [rbp-120h] BYREF
  int v33; // [rsp+40h] [rbp-118h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-110h] BYREF
  __int64 v35; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v36; // [rsp+68h] [rbp-F0h]
  _QWORD Src[20]; // [rsp+70h] [rbp-E8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v35 = 0LL;
  v36 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(Src, 0, sizeof(Src));
  if ( WorkerFactoryInformationClass == WorkerFactoryCallbackType )
  {
LABEL_2:
    v9 = 4;
LABEL_3:
    if ( WorkerFactoryInformationLength != v9 )
      return -1073741820;
    if ( WorkerFactoryInformationClass == WorkerFactoryCallbackType )
    {
      if ( PreviousMode )
      {
        if ( ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)WorkerFactoryInformation + 4 > 0x7FFFFFFF0000LL
          || (char *)WorkerFactoryInformation + 4 < WorkerFactoryInformation )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
LABEL_9:
      v10 = *(_DWORD *)WorkerFactoryInformation;
      LODWORD(Src[0]) = *(_DWORD *)WorkerFactoryInformation;
      v11 = Src[0];
    }
    else
    {
      switch ( WorkerFactoryInformationClass )
      {
        case WorkerFactoryIdleTimeout:
          if ( PreviousMode && ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v11 = *(_QWORD *)WorkerFactoryInformation;
          Src[0] = *(_QWORD *)WorkerFactoryInformation;
          v10 = Src[0];
          break;
        case WorkerFactoryBindingCount:
        case WorkerFactoryThreadMinimum:
        case WorkerFactoryThreadMaximum:
          if ( !PreviousMode )
            goto LABEL_9;
          v12 = (__int64)WorkerFactoryInformation;
          if ( (unsigned __int64)WorkerFactoryInformation >= 0x7FFFFFFF0000LL )
            v12 = 0x7FFFFFFF0000LL;
          v10 = *(_DWORD *)v12;
          LODWORD(Src[0]) = *(_DWORD *)v12;
          v11 = Src[0];
          break;
        default:
          __fastfail(0x25u);
      }
    }
    result = ObReferenceObjectByHandle(WorkerFactoryHandle, 4u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
    if ( result >= 0 )
    {
      if ( WorkerFactoryInformationClass != WorkerFactoryAdjustThreadGoal )
      {
        Thread = 0;
        v33 = 0;
        v15 = 0;
        v16 = (char *)Object;
        KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
        if ( WorkerFactoryInformationClass != WorkerFactoryCallbackType )
        {
          switch ( WorkerFactoryInformationClass )
          {
            case WorkerFactoryIdleTimeout:
              if ( v11 >= 0 )
                goto LABEL_110;
              if ( v11 > -10000000 )
              {
                v11 = -10000000LL;
              }
              else if ( v11 < -6000000000LL )
              {
                v11 = -6000000000LL;
              }
              *((_QWORD *)v16 + 14) = v11;
              v36 = -1LL;
              KeSetTimer2(v16 + 328, v11, -v11, &v35);
              goto LABEL_32;
            case WorkerFactoryBindingCount:
              v24 = *((_DWORD *)v16 + 77);
              if ( (v10 & 0x80000000) != 0 )
              {
                if ( v24 > -v10 )
                {
                  v25 = v24 + v10;
                  *((_DWORD *)v16 + 77) = v24 + v10;
                }
                else
                {
                  *((_DWORD *)v16 + 77) = 0;
                  v25 = 0;
                }
              }
              else
              {
                v25 = v24 + v10;
                if ( v24 >= v24 + v10 )
                {
                  *((_DWORD *)v16 + 77) = -1;
                  v25 = -1;
                }
                else
                {
                  *((_DWORD *)v16 + 77) = v25;
                }
              }
              if ( v24 )
              {
                if ( !v25 && (*((_DWORD *)v16 + 78) & 0x200) != 0 )
                  ExpLeaveWorkerFactoryAwayMode(v16);
              }
              else if ( v25 && ExpTryEnterWorkerFactoryAwayMode(v16) )
              {
                ExpWorkerFactoryCheckCreate(v16, &LockHandle);
                v22 = 0;
                goto LABEL_33;
              }
              goto LABEL_32;
            case WorkerFactoryThreadMinimum:
              if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 33LL) )
              {
                Thread = 128;
              }
              else
              {
                v15 = v10 > *((_DWORD *)v16 + 70);
                *((_DWORD *)v16 + 70) = v10;
                if ( *((_DWORD *)v16 + 71) < v10 )
                  *((_DWORD *)v16 + 71) = v10;
                if ( !v15 )
                {
                  v23 = 0;
                  goto LABEL_62;
                }
                v15 = 0;
                if ( (*((_DWORD *)v16 + 78) & 0x200) != 0 )
                  ExpLeaveWorkerFactoryAwayMode(v16);
                if ( (unsigned int)(*((_DWORD *)v16 + 72) + *((_DWORD *)v16 + 74)) < *((_DWORD *)v16 + 70) )
                {
                  while ( 1 )
                  {
                    ++*((_DWORD *)v16 + 76);
                    KeReleaseInStackQueuedSpinLock(&LockHandle);
                    Thread = ExpWorkerFactoryCreateThread(v16);
                    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v16 + 2), &LockHandle);
                    if ( Thread < 0 )
                      break;
                    if ( (unsigned int)(*((_DWORD *)v16 + 72) + *((_DWORD *)v16 + 74)) >= *((_DWORD *)v16 + 70) )
                      goto LABEL_32;
                  }
                  --*((_DWORD *)v16 + 76);
                }
              }
              goto LABEL_32;
            case WorkerFactoryThreadMaximum:
              v30 = *((_QWORD *)v16 + 2);
              if ( *(_BYTE *)(v30 + 33) )
              {
                Thread = 128;
                goto LABEL_32;
              }
              v23 = 1;
              if ( v10 && (!*((_DWORD *)v16 + 71) && *(_DWORD *)(v30 + 24) || *(int *)(*(_QWORD *)(v30 + 8) + 4LL) > 0) )
                v15 = 1;
              *((_DWORD *)v16 + 71) = v10;
              if ( v10 < *((_DWORD *)v16 + 70) )
              {
                *((_DWORD *)v16 + 70) = v10;
                v22 = 1;
              }
              else
              {
LABEL_62:
                v22 = 1;
              }
              break;
            default:
              __fastfail(0x25u);
          }
          goto LABEL_34;
        }
        if ( v10 )
        {
          v17 = v10 - 1;
          if ( !v17 )
          {
            v15 = 1;
            v22 = 1;
            goto LABEL_33;
          }
          v18 = v17 - 1;
          if ( v18 )
          {
            if ( v18 == 1 )
            {
              if ( *((_DWORD *)v16 + 72) )
              {
                ExpRemoveCurrentThreadFromThreadHistory(v16);
                --*((_DWORD *)v16 + 72);
                --*((_DWORD *)v16 + 73);
                v15 = *((_DWORD *)v16 + 72) == 0;
              }
              else
              {
                Thread = -1073741823;
              }
            }
            else
            {
LABEL_110:
              Thread = -1073741811;
            }
          }
          else
          {
            v19 = *((_DWORD *)v16 + 72);
            if ( v19 )
            {
              v20 = v19 - 1;
              *((_DWORD *)v16 + 72) = v20;
              v15 = v20 == 0;
            }
            else
            {
              Thread = -1073741823;
            }
          }
        }
        else
        {
          v21 = *((_DWORD *)v16 + 72);
          if ( v21 == *((_DWORD *)v16 + 73) )
            Thread = -1073741823;
          else
            *((_DWORD *)v16 + 72) = v21 + 1;
        }
LABEL_32:
        v22 = 1;
LABEL_33:
        v23 = 0;
LABEL_34:
        if ( v15 )
        {
          v26 = *((_DWORD *)v16 + 72);
          v27 = v26 + *((_DWORD *)v16 + 74);
          if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 33LL) )
          {
            Thread = 128;
          }
          else
          {
            v28 = *((_DWORD *)v16 + 71);
            if ( v26 >= v28 )
            {
              if ( !v23 )
                Thread = -1073741527;
            }
            else
            {
              v29 = *((_DWORD *)v16 + 76);
              if ( v29 || v27 >= v28 )
                goto LABEL_63;
              if ( (*((_DWORD *)v16 + 78) & 0x200) != 0 )
              {
                ExpLeaveWorkerFactoryAwayMode(v16);
                v29 = *((_DWORD *)v16 + 76);
              }
              *((_DWORD *)v16 + 76) = v29 + 1;
              KeReleaseInStackQueuedSpinLock(&LockHandle);
              v22 = 0;
              Thread = ExpWorkerFactoryCreateThread(v16);
              if ( Thread < 0 )
              {
                v22 = 1;
                KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v16 + 2), &LockHandle);
                --*((_DWORD *)v16 + 76);
                if ( v23 )
LABEL_63:
                  Thread = 0;
              }
            }
          }
        }
        if ( v22 )
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        ObfDereferenceObject(v16);
        return Thread;
      }
      v31 = Object;
      if ( !v10 )
      {
        v10 = KeNumberProcessors_0;
        v31 = Object;
      }
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL) + 44LL) = v10;
      ObfDereferenceObject(v31);
      return 0;
    }
  }
  else
  {
    switch ( WorkerFactoryInformationClass )
    {
      case WorkerFactoryIdleTimeout:
        v9 = 8;
        goto LABEL_3;
      case WorkerFactoryBindingCount:
      case WorkerFactoryThreadMinimum:
      case WorkerFactoryThreadMaximum:
      case WorkerFactoryAdjustThreadGoal:
      case WorkerFactoryThreadBasePriority:
      case WorkerFactoryTimeoutWaiters:
      case WorkerFactoryFlags:
      case WorkerFactoryThreadSoftMaximum:
        goto LABEL_2;
      case WorkerFactoryPaused:
        result = -1073741822;
        break;
      case WorkerFactoryStackInformation:
        v9 = 16;
        goto LABEL_3;
      case WorkerFactoryThreadCpuSets:
        if ( WorkerFactoryInformationLength >= 0xA0 )
          v9 = 160;
        else
          v9 = WorkerFactoryInformationLength + (WorkerFactoryInformationLength & 7);
        goto LABEL_3;
      default:
        result = -1073741821;
        break;
    }
  }
  return result;
}
