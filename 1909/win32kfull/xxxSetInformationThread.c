/*
 * XREFs of xxxSetInformationThread @ 0x1C000D040
 * Callers:
 *     NtUserSetInformationThread @ 0x1C000CF20 (NtUserSetInformationThread.c)
 *     xxxSetInformationThread @ 0x1C000D040 (xxxSetInformationThread.c)
 * Callees:
 *     xxxSetInformationThread @ 0x1C000D040 (xxxSetInformationThread.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C000D1C0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C000D2E0 (xxxSetCsrssThreadDesktop.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C000EB68 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C000ED40 (-EndShutdown@@YAXJ@Z.c)
 *     PostShellHookMessagesEx @ 0x1C0017B24 (PostShellHookMessagesEx.c)
 *     RtlInitLargeUnicodeString @ 0x1C001BF88 (RtlInitLargeUnicodeString.c)
 *     xxxBroadcastMessageEx @ 0x1C001F5D4 (xxxBroadcastMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ?TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z @ 0x1C01CD654 (-TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z.c)
 *     QueueShutdownData @ 0x1C01D6C00 (QueueShutdownData.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __fastcall xxxSetInformationThread(void *a1, int a2, __int64 *a3, int a4)
{
  _BOOL8 v7; // r14
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // r12
  int v10; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  unsigned int v20; // r9d
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 i; // rax
  NTSTATUS v26; // eax
  PVOID v27; // rdi
  __int64 v28; // rax
  void *v29; // rcx
  unsigned int v30; // eax
  int v31; // ecx
  int v32; // eax
  __int64 v33; // r8
  int v34; // edi
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rcx
  PVOID v38; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v39[2]; // [rsp+48h] [rbp-71h] BYREF
  __int64 v40; // [rsp+50h] [rbp-69h]
  __int64 v41; // [rsp+58h] [rbp-61h]
  PVOID Object; // [rsp+60h] [rbp-59h] BYREF
  _DWORD v43[2]; // [rsp+68h] [rbp-51h] BYREF
  PVOID *v44; // [rsp+70h] [rbp-49h]
  __int64 v45; // [rsp+78h] [rbp-41h]
  _BYTE v46[80]; // [rsp+80h] [rbp-39h] BYREF

  v7 = 1LL;
  result = ObReferenceObjectByHandle(a1, 0x20u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
  v9 = (struct _KTHREAD *)Object;
  v10 = result;
  if ( result >= 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(Object);
    v14 = ThreadWin32Thread;
    if ( a2 == 10 )
    {
      v22 = SetCsrApiPortHandle(*a3, v12, ThreadWin32Thread);
      goto LABEL_14;
    }
    if ( a2 > 10 )
    {
      switch ( a2 )
      {
        case 12:
          v35 = ValidateHwnd(*a3);
          if ( !v35 )
            goto LABEL_35;
          v36 = *(_QWORD *)(v35 + 16);
          if ( !v36 || !*(_QWORD *)(v36 + 448) )
            goto LABEL_35;
          ghwndBlocking = *a3;
          PostWinlogonMessage(1031LL, 0LL);
          v37 = *(_QWORD *)(v36 + 448);
          if ( !*(_QWORD *)(*(_QWORD *)(v37 + 8) + 168LL) )
            v7 = *(_QWORD *)(v37 + 288) != 0LL;
          QueueShutdownData(0xFFFFLL, v7);
          break;
        case 13:
          v10 = -1073741790;
          v38 = 0LL;
          v34 = 0;
          while ( !gspwndBSDR )
          {
            if ( gdwInAtomicOperation )
            {
              v13 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v13);
            v38 = (PVOID)-1000000LL;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&v38);
            EnterCrit(0LL, 1LL);
            v34 += 100;
            if ( v34 >= 10000 )
              goto LABEL_77;
          }
          gptiShutdownWaiter = gptiCurrent;
          QueueShutdownData(*a3, 1LL);
          v10 = 0;
LABEL_77:
          if ( v34 > 0 )
            TraceLoggingBSDRRaceConditionEvent(*(_DWORD *)*gpDispInfo, v34);
          goto LABEL_15;
        case 14:
          QueueShutdownData(*a3, 0LL);
          ghwndBlocking = 0LL;
          gptiShutdownWaiter = 0LL;
          break;
        default:
          if ( a2 <= 14 )
            goto LABEL_67;
          if ( a2 > 16 )
          {
            if ( a2 == 17 )
            {
              *(_QWORD *)v39 = 0LL;
              v40 = 0LL;
              v41 = 0LL;
              v10 = xxxSetInformationThread(-2LL, 7LL, v39, 24LL);
              if ( v10 < 0 )
                goto LABEL_15;
              PostShellHookMessagesEx(0x37uLL, 0LL, 0LL);
              v22 = xxxSetInformationThread(-2LL, 9LL, v39, 24LL);
              goto LABEL_14;
            }
            goto LABEL_67;
          }
          v45 = 0LL;
          *(_QWORD *)v39 = 0LL;
          v40 = 0LL;
          v32 = *(_DWORD *)a3;
          if ( a2 == 15 )
          {
            if ( v32 )
              *(_DWORD *)(gpsi + 2236LL) |= 8u;
            else
              *(_DWORD *)(gpsi + 2236LL) &= ~8u;
            RtlLoadStringOrError(629LL, v46, 40LL);
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
            EtwTraceConvertibleState(*(unsigned int *)a3);
          }
          else
          {
            if ( v32 )
              *(_DWORD *)(gpsi + 2236LL) |= 0x10u;
            else
              *(_DWORD *)(gpsi + 2236LL) &= ~0x10u;
            RtlLoadStringOrError(630LL, v46, 40LL);
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
            EtwTraceDockState(*(unsigned int *)a3);
          }
          RtlInitLargeUnicodeString(v39, v46);
          v33 = *(unsigned int *)a3;
          v44 = &v38;
          v43[0] = 0;
          v43[1] = 100;
          xxxBroadcastMessageEx(0LL, 26LL, v33, v39, 6, v43, 1, 0);
          break;
      }
    }
    else
    {
      v15 = a2 - 1;
      if ( !v15 )
      {
        if ( ThreadWin32Thread )
        {
          if ( a4 == 8 && (*(_DWORD *)a3 & 0x20000) == *(_DWORD *)a3 )
          {
            v30 = *(_DWORD *)(ThreadWin32Thread + 480) & 0xFFFDFFFF;
            v31 = *(_DWORD *)(v14 + 480) | 0x20000;
            if ( !*(_DWORD *)a3 )
              v31 = v30;
            *(_DWORD *)(v14 + 480) = v31;
          }
          else
          {
            v10 = -1073741811;
          }
          goto LABEL_15;
        }
        goto LABEL_21;
      }
      v16 = v15 - 4;
      if ( !v16 )
      {
        v22 = InitiateShutdownW(v9, (unsigned int *)a3);
        goto LABEL_14;
      }
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( !v19 )
          {
            v26 = ObReferenceObjectByHandle((HANDLE)*a3, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &v38, 0LL);
            v27 = v38;
            v10 = v26;
            if ( v26 >= 0 )
            {
              v28 = W32GetThreadWin32Thread(v38);
              if ( v28 && (v29 = *(void **)(v28 + 448)) != 0LL )
                v10 = xxxSetCsrssThreadDesktop(v29);
              else
                v10 = -1073741816;
              ObfDereferenceObject(v27);
            }
            goto LABEL_15;
          }
          if ( v19 == 1 )
          {
            if ( a4 == 32 )
              v20 = *((_DWORD *)a3 + 6);
            else
              v20 = 0;
            v21 = a3[1];
            if ( !v21 )
            {
LABEL_13:
              v22 = xxxRestoreCsrssThreadDesktop(a3 + 1, v20);
LABEL_14:
              v10 = v22;
LABEL_15:
              ObfDereferenceObject(v9);
              return v10;
            }
            v23 = 0LL;
            v24 = grpWinStaList;
            if ( grpWinStaList )
            {
              while ( !v23 )
              {
                for ( i = *(_QWORD *)(v24 + 16); i; i = *(_QWORD *)(i + 32) )
                {
                  if ( i == v21 )
                  {
                    v23 = i;
                    break;
                  }
                }
                v24 = *(_QWORD *)(v24 + 8);
                if ( !v24 )
                {
                  if ( v23 )
                    goto LABEL_13;
                  goto LABEL_35;
                }
              }
              goto LABEL_13;
            }
LABEL_35:
            v10 = -1073741823;
            goto LABEL_15;
          }
LABEL_67:
          v10 = -1073741821;
          goto LABEL_15;
        }
        if ( grpdeskRitInput )
        {
          v22 = xxxSetCsrssThreadDesktop(grpdeskRitInput);
          goto LABEL_14;
        }
LABEL_21:
        v10 = -1073741816;
        goto LABEL_15;
      }
      EndShutdown(*(_DWORD *)a3);
    }
    v10 = 0;
    goto LABEL_15;
  }
  return result;
}
