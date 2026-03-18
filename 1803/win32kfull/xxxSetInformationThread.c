/*
 * XREFs of xxxSetInformationThread @ 0x1C000E040
 * Callers:
 *     NtUserSetInformationThread @ 0x1C000DF40 (NtUserSetInformationThread.c)
 *     xxxSetInformationThread @ 0x1C000E040 (xxxSetInformationThread.c)
 * Callees:
 *     xxxSetInformationThread @ 0x1C000E040 (xxxSetInformationThread.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C000E570 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C000E7C0 (xxxSetCsrssThreadDesktop.c)
 *     RtlInitLargeUnicodeString @ 0x1C0022154 (RtlInitLargeUnicodeString.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxBroadcastMessageEx @ 0x1C0060914 (xxxBroadcastMessageEx.c)
 *     PostShellHookMessagesEx @ 0x1C006E9A8 (PostShellHookMessagesEx.c)
 *     xxxRefreshDisplayOrientation @ 0x1C00BDA20 (xxxRefreshDisplayOrientation.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C010D800 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C010DA6C (-EndShutdown@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z @ 0x1C01986F8 (-TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z.c)
 *     QueueShutdownData @ 0x1C01A2190 (QueueShutdownData.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetInformationThread(void *a1, int a2, __int64 *a3, int a4)
{
  NTSTATUS v6; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  unsigned int v17; // r9d
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 i; // rax
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  PVOID v24; // rdi
  __int64 v25; // rax
  void *v26; // rcx
  struct _KTHREAD *v27; // rdi
  int v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  __int64 v31; // r8
  int v32; // edi
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rax
  struct _KTHREAD *v38; // [rsp+40h] [rbp-69h]
  PVOID v39; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v40[2]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v41; // [rsp+58h] [rbp-51h]
  __int64 v42; // [rsp+60h] [rbp-49h]
  PVOID Object; // [rsp+68h] [rbp-41h] BYREF
  _DWORD v44[2]; // [rsp+70h] [rbp-39h] BYREF
  PVOID *v45; // [rsp+78h] [rbp-31h]
  _BYTE v46[80]; // [rsp+90h] [rbp-19h] BYREF

  LODWORD(v39) = a4;
  v6 = ObReferenceObjectByHandle(a1, 0x20u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
  v38 = (struct _KTHREAD *)Object;
  if ( v6 >= 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(Object);
    v11 = ThreadWin32Thread;
    if ( a2 > 10 )
    {
      switch ( a2 )
      {
        case 12:
          v33 = ValidateHwnd(*a3);
          if ( v33 )
          {
            v34 = *(_QWORD *)(v33 + 16);
            if ( v34 )
            {
              if ( *(_QWORD *)(v34 + 448) )
              {
                ghwndBlocking = *a3;
                PostWinlogonMessage(1031LL, 0LL);
                v35 = *(_QWORD *)(v34 + 448);
                if ( *(_QWORD *)(*(_QWORD *)(v35 + 8) + 168LL) || (v36 = 0LL, *(_QWORD *)(v35 + 288)) )
                  v36 = 1LL;
                QueueShutdownData(0xFFFFLL, v36);
                v6 = 0;
                goto LABEL_85;
              }
            }
          }
          goto LABEL_84;
        case 13:
          v6 = -1073741790;
          v32 = 0;
          while ( !gspwndBSDR )
          {
            if ( gdwInAtomicOperation )
            {
              v8 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v8, gdwInAtomicOperation, v9, v10);
            v39 = (PVOID)-1000000LL;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&v39);
            EnterCrit(0LL, 1LL);
            v32 += 100;
            if ( v32 >= 10000 )
              goto LABEL_75;
          }
          gptiShutdownWaiter = gptiCurrent;
          QueueShutdownData(*a3, 1LL);
          v6 = 0;
LABEL_75:
          if ( v32 > 0 )
            TraceLoggingBSDRRaceConditionEvent(*(_DWORD *)*gpDispInfo, v32);
          goto LABEL_85;
        case 14:
          QueueShutdownData(*a3, 0LL);
          gptiShutdownWaiter = 0LL;
          ghwndBlocking = 0LL;
          break;
        default:
          if ( a2 <= 14 )
            goto LABEL_65;
          if ( a2 > 16 )
          {
            if ( a2 == 17 )
            {
              *(_QWORD *)v40 = 0LL;
              v41 = 0LL;
              v42 = 0LL;
              v6 = xxxSetInformationThread(-2LL, 7LL, v40, 24LL);
              if ( v6 < 0 )
                goto LABEL_85;
              PostShellHookMessagesEx(0x37uLL, 0LL, 0LL);
              v22 = xxxSetInformationThread(-2LL, 9LL, v40, 24LL);
              goto LABEL_25;
            }
            goto LABEL_65;
          }
          v30 = *(_DWORD *)a3;
          if ( a2 == 15 )
          {
            if ( v30 )
              *(_DWORD *)(gpsi + 2236LL) |= 8u;
            else
              *(_DWORD *)(gpsi + 2236LL) &= ~8u;
            RtlLoadStringOrError(629LL, v46, 40LL);
            xxxRefreshDisplayOrientation();
            EtwTraceConvertibleState(*(unsigned int *)a3);
          }
          else
          {
            if ( v30 )
              *(_DWORD *)(gpsi + 2236LL) |= 0x10u;
            else
              *(_DWORD *)(gpsi + 2236LL) &= ~0x10u;
            RtlLoadStringOrError(630LL, v46, 40LL);
            xxxRefreshDisplayOrientation();
            EtwTraceDockState(*(unsigned int *)a3);
          }
          RtlInitLargeUnicodeString(v40, v46);
          v44[0] = 0;
          v31 = *(unsigned int *)a3;
          v45 = &v39;
          v44[1] = 100;
          xxxBroadcastMessageEx(0LL, 26LL, v31, v40, 6, v44, 1, 0);
          break;
      }
    }
    else
    {
      if ( a2 == 10 )
      {
        v22 = SetCsrApiPortHandle(*a3, ThreadWin32Thread);
        goto LABEL_25;
      }
      v12 = a2 - 1;
      if ( !v12 )
      {
        if ( ThreadWin32Thread )
        {
          if ( (_DWORD)v39 == 8 && (*(_DWORD *)a3 & 0x20000) == *(_DWORD *)a3 )
          {
            v28 = *(_DWORD *)(ThreadWin32Thread + 480);
            if ( *(_DWORD *)a3 )
              v29 = v28 | 0x20000;
            else
              v29 = v28 & 0xFFFDFFFF;
            *(_DWORD *)(v11 + 480) = v29;
          }
          else
          {
            v6 = -1073741811;
          }
          goto LABEL_85;
        }
        goto LABEL_33;
      }
      v13 = v12 - 4;
      if ( !v13 )
      {
        v27 = v38;
        v6 = InitiateShutdownW(v38, (unsigned int *)a3);
LABEL_86:
        ObfDereferenceObject(v27);
        return (unsigned int)v6;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( !v16 )
          {
            v23 = ObReferenceObjectByHandle((HANDLE)*a3, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &v39, 0LL);
            v24 = v39;
            v6 = v23;
            if ( v23 >= 0 )
            {
              v25 = W32GetThreadWin32Thread(v39);
              if ( v25 && (v26 = *(void **)(v25 + 448)) != 0LL )
                v6 = xxxSetCsrssThreadDesktop(v26);
              else
                v6 = -1073741816;
              ObfDereferenceObject(v24);
            }
            goto LABEL_85;
          }
          if ( v16 == 1 )
          {
            if ( (_DWORD)v39 == 32 )
              v17 = *((_DWORD *)a3 + 6);
            else
              v17 = 0;
            v18 = a3[1];
            if ( !v18 )
            {
LABEL_24:
              v22 = xxxRestoreCsrssThreadDesktop(a3 + 1, v17);
LABEL_25:
              v6 = v22;
LABEL_85:
              v27 = v38;
              goto LABEL_86;
            }
            v19 = 0LL;
            v20 = grpWinStaList;
            if ( grpWinStaList )
            {
              while ( !v19 )
              {
                for ( i = *(_QWORD *)(v20 + 16); i; i = *(_QWORD *)(i + 32) )
                {
                  if ( i == v18 )
                  {
                    v19 = i;
                    break;
                  }
                }
                v20 = *(_QWORD *)(v20 + 8);
                if ( !v20 )
                {
                  if ( !v19 )
                    goto LABEL_84;
                  goto LABEL_24;
                }
              }
              goto LABEL_24;
            }
LABEL_84:
            v6 = -1073741823;
            goto LABEL_85;
          }
LABEL_65:
          v6 = -1073741821;
          goto LABEL_85;
        }
        if ( grpdeskRitInput )
        {
          v22 = xxxSetCsrssThreadDesktop(grpdeskRitInput);
          goto LABEL_25;
        }
LABEL_33:
        v6 = -1073741816;
        goto LABEL_85;
      }
      EndShutdown(*(_DWORD *)a3);
    }
    v6 = 0;
    goto LABEL_85;
  }
  return (unsigned int)v6;
}
