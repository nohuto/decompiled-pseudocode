/*
 * XREFs of NtSetInformationWorkerFactory @ 0x140045C90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140044850 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140045A30 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14005BA80 (ExpWorkerFactoryCheckCreate.c)
 *     ExpWorkerFactoryCreateThread @ 0x1400835A4 (ExpWorkerFactoryCreateThread.c)
 *     KeSetTimer2 @ 0x14009C070 (KeSetTimer2.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140113E98 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KiValidateCpuSetMasks @ 0x14011F620 (KiValidateCpuSetMasks.c)
 *     KeTimeOutQueueWaiters @ 0x140123E00 (KeTimeOutQueueWaiters.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x14012B80C (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ExSystemExceptionFilter @ 0x140749ED0 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall NtSetInformationWorkerFactory(HANDLE Handle, int a2, unsigned __int64 a3, unsigned int a4)
{
  KPROCESSOR_MODE PreviousMode; // si
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rax
  NTSTATUS result; // eax
  int Thread; // r15d
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
  if ( a2 == 9 )
  {
LABEL_2:
    v9 = 4;
LABEL_3:
    if ( a4 != v9 )
      return -1073741820;
    if ( a2 == 9 )
    {
      if ( PreviousMode )
      {
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( a3 + 4 > 0x7FFFFFFF0000LL || a3 + 4 < a3 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
LABEL_9:
      v10 = *(_DWORD *)a3;
      LODWORD(Src[0]) = *(_DWORD *)a3;
      v11 = Src[0];
    }
    else
    {
      switch ( a2 )
      {
        case 2:
          if ( PreviousMode && (a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v11 = *(_QWORD *)a3;
          Src[0] = *(_QWORD *)a3;
          v10 = Src[0];
          break;
        case 3:
        case 4:
        case 5:
          if ( !PreviousMode )
            goto LABEL_9;
          v12 = a3;
          if ( a3 >= 0x7FFFFFFF0000LL )
            v12 = 0x7FFFFFFF0000LL;
          v10 = *(_DWORD *)v12;
          LODWORD(Src[0]) = *(_DWORD *)v12;
          v11 = Src[0];
          break;
        default:
          __fastfail(0x25u);
      }
    }
    result = ObReferenceObjectByHandle(Handle, 4u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
    if ( result >= 0 )
    {
      if ( a2 != 8 )
      {
        Thread = 0;
        v33 = 0;
        v15 = 0;
        v16 = (char *)Object;
        KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
        if ( a2 != 9 )
        {
          switch ( a2 )
          {
            case 2:
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
            case 3:
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
            case 4:
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
            case 5:
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
    switch ( a2 )
    {
      case 2:
        v9 = 8;
        goto LABEL_3;
      case 3:
      case 4:
      case 5:
      case 8:
      case 11:
      case 12:
      case 13:
      case 14:
        goto LABEL_2;
      case 6:
        result = -1073741822;
        break;
      case 10:
        v9 = 16;
        goto LABEL_3;
      case 15:
        if ( a4 >= 0xA0 )
          v9 = 160;
        else
          v9 = a4 + (a4 & 7);
        goto LABEL_3;
      default:
        result = -1073741821;
        break;
    }
  }
  return result;
}
