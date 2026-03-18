/*
 * XREFs of xxxSetInformationThread @ 0x1C00BB740
 * Callers:
 *     NtUserSetInformationThread @ 0x1C00BB620 (NtUserSetInformationThread.c)
 *     xxxSetInformationThread @ 0x1C00BB740 (xxxSetInformationThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     RtlInitLargeUnicodeString @ 0x1C00B068C (RtlInitLargeUnicodeString.c)
 *     PostShellHookMessagesEx @ 0x1C00B3938 (PostShellHookMessagesEx.c)
 *     xxxSetInformationThread @ 0x1C00BB740 (xxxSetInformationThread.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00BB8C0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00BC5C0 (xxxSetCsrssThreadDesktop.c)
 *     xxxBroadcastMessageEx @ 0x1C00D103C (xxxBroadcastMessageEx.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C012F3DC (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C012F5B4 (-EndShutdown@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z @ 0x1C01B978C (-TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z.c)
 *     QueueShutdownData @ 0x1C01C3A80 (QueueShutdownData.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __fastcall xxxSetInformationThread(void *a1, int a2, __int64 *a3, int a4)
{
  _BOOL8 v7; // r14
  NTSTATUS result; // eax
  __int64 v9; // rdx
  struct _KTHREAD *v10; // r12
  int v11; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // edi
  unsigned int v22; // r9d
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 i; // rax
  NTSTATUS v28; // eax
  __int64 v29; // rdx
  PVOID v30; // rdi
  __int64 v31; // rax
  void *v32; // rcx
  unsigned int v33; // eax
  int v34; // ecx
  int v35; // eax
  __int64 v36; // r8
  int v37; // edi
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rcx
  PVOID v41; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v42[2]; // [rsp+48h] [rbp-71h] BYREF
  __int64 v43; // [rsp+50h] [rbp-69h]
  __int64 v44; // [rsp+58h] [rbp-61h]
  PVOID Object; // [rsp+60h] [rbp-59h] BYREF
  int v46; // [rsp+68h] [rbp-51h]
  int v47; // [rsp+6Ch] [rbp-4Dh]
  PVOID *v48; // [rsp+70h] [rbp-49h]
  _BYTE v49[80]; // [rsp+80h] [rbp-39h] BYREF

  v7 = 1LL;
  result = ObReferenceObjectByHandle(a1, 0x20u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
  v10 = (struct _KTHREAD *)Object;
  v11 = result;
  if ( result >= 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object, v9);
    v16 = ThreadWin32Thread;
    if ( a2 == 10 )
    {
      v24 = SetCsrApiPortHandle(*a3, v13, ThreadWin32Thread);
      goto LABEL_14;
    }
    if ( a2 > 10 )
    {
      switch ( a2 )
      {
        case 12:
          v38 = ValidateHwnd(*a3);
          if ( !v38 )
            goto LABEL_35;
          v39 = *(_QWORD *)(v38 + 16);
          if ( !v39 || !*(_QWORD *)(v39 + 456) )
            goto LABEL_35;
          ghwndBlocking = *a3;
          PostWinlogonMessage(1031LL, 0LL);
          v40 = *(_QWORD *)(v39 + 456);
          if ( !*(_QWORD *)(*(_QWORD *)(v40 + 8) + 168LL) )
            v7 = *(_QWORD *)(v40 + 288) != 0LL;
          QueueShutdownData(0xFFFFLL, v7);
          break;
        case 13:
          v11 = -1073741790;
          v37 = 0;
          while ( !gspwndBSDR )
          {
            if ( gdwInAtomicOperation )
            {
              v14 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v14, gdwInAtomicOperation, v16, v15);
            v41 = (PVOID)-1000000LL;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&v41);
            EnterCrit(0LL, 1LL);
            v37 += 100;
            if ( v37 >= 10000 )
              goto LABEL_77;
          }
          gptiShutdownWaiter = gptiCurrent;
          QueueShutdownData(*a3, 1LL);
          v11 = 0;
LABEL_77:
          if ( v37 > 0 )
            TraceLoggingBSDRRaceConditionEvent(*(_DWORD *)*gpDispInfo, v37);
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
              *(_QWORD *)v42 = 0LL;
              v43 = 0LL;
              v44 = 0LL;
              v11 = xxxSetInformationThread(-2LL, 7LL, v42, 24LL);
              if ( v11 < 0 )
                goto LABEL_15;
              PostShellHookMessagesEx(0x37u, 0LL, 0LL);
              v24 = xxxSetInformationThread(-2LL, 9LL, v42, 24LL);
              goto LABEL_14;
            }
            goto LABEL_67;
          }
          v35 = *(_DWORD *)a3;
          if ( a2 == 15 )
          {
            if ( v35 )
              *(_DWORD *)(gpsi + 2236LL) |= 8u;
            else
              *(_DWORD *)(gpsi + 2236LL) &= ~8u;
            RtlLoadStringOrError(629LL, v49, 40LL, 0LL);
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
            EtwTraceConvertibleState(*(unsigned int *)a3);
          }
          else
          {
            if ( v35 )
              *(_DWORD *)(gpsi + 2236LL) |= 0x10u;
            else
              *(_DWORD *)(gpsi + 2236LL) &= ~0x10u;
            RtlLoadStringOrError(630LL, v49, 40LL, 0LL);
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
            EtwTraceDockState(*(unsigned int *)a3);
          }
          RtlInitLargeUnicodeString((__int64)v42, (__int64)v49);
          v36 = *(unsigned int *)a3;
          v48 = &v41;
          v46 = 0;
          v47 = 100;
          xxxBroadcastMessageEx(0LL, 26LL, v36);
          break;
      }
    }
    else
    {
      v17 = a2 - 1;
      if ( !v17 )
      {
        if ( ThreadWin32Thread )
        {
          if ( a4 == 8 && (*(_DWORD *)a3 & 0x20000) == *(_DWORD *)a3 )
          {
            v33 = *(_DWORD *)(ThreadWin32Thread + 488) & 0xFFFDFFFF;
            v34 = *(_DWORD *)(v16 + 488) | 0x20000;
            if ( !*(_DWORD *)a3 )
              v34 = v33;
            *(_DWORD *)(v16 + 488) = v34;
          }
          else
          {
            v11 = -1073741811;
          }
          goto LABEL_15;
        }
        goto LABEL_21;
      }
      v18 = v17 - 4;
      if ( !v18 )
      {
        v24 = InitiateShutdownW(v10, (unsigned int *)a3);
        goto LABEL_14;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( !v21 )
          {
            v28 = ObReferenceObjectByHandle((HANDLE)*a3, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &v41, 0LL);
            v30 = v41;
            v11 = v28;
            if ( v28 >= 0 )
            {
              v31 = W32GetThreadWin32Thread((__int64)v41, v29);
              if ( v31 && (v32 = *(void **)(v31 + 456)) != 0LL )
                v11 = xxxSetCsrssThreadDesktop(v32);
              else
                v11 = -1073741816;
              ObfDereferenceObject(v30);
            }
            goto LABEL_15;
          }
          if ( v21 == 1 )
          {
            if ( a4 == 32 )
              v22 = *((_DWORD *)a3 + 6);
            else
              v22 = 0;
            v23 = a3[1];
            if ( !v23 )
            {
LABEL_13:
              v24 = xxxRestoreCsrssThreadDesktop(a3 + 1, v22);
LABEL_14:
              v11 = v24;
LABEL_15:
              ObfDereferenceObject(v10);
              return v11;
            }
            v25 = 0LL;
            v26 = grpWinStaList;
            if ( grpWinStaList )
            {
              while ( !v25 )
              {
                for ( i = *(_QWORD *)(v26 + 16); i; i = *(_QWORD *)(i + 32) )
                {
                  if ( i == v23 )
                  {
                    v25 = i;
                    break;
                  }
                }
                v26 = *(_QWORD *)(v26 + 8);
                if ( !v26 )
                {
                  if ( v25 )
                    goto LABEL_13;
                  goto LABEL_35;
                }
              }
              goto LABEL_13;
            }
LABEL_35:
            v11 = -1073741823;
            goto LABEL_15;
          }
LABEL_67:
          v11 = -1073741821;
          goto LABEL_15;
        }
        if ( grpdeskRitInput )
        {
          v24 = xxxSetCsrssThreadDesktop(grpdeskRitInput);
          goto LABEL_14;
        }
LABEL_21:
        v11 = -1073741816;
        goto LABEL_15;
      }
      EndShutdown(*(_DWORD *)a3);
    }
    v11 = 0;
    goto LABEL_15;
  }
  return result;
}
