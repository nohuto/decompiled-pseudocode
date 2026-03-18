/*
 * XREFs of NtUserIsClipboardFormatAvailable @ 0x1C00F72D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     IsFmtBlocked @ 0x1C020E1D4 (IsFmtBlocked.c)
 */

__int64 __fastcall NtUserIsClipboardFormatAvailable(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbx
  int v5; // edx
  __int64 v6; // rcx
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v8; // r12
  __int64 v9; // rsi
  int v10; // r15d
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // r14
  __int64 v13; // rbx
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  NTSTATUS v22; // ecx
  __int64 v23; // rax
  struct _KTHREAD *v24; // r14
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 *v27; // rax
  __int64 v28; // rbx
  int v29; // eax
  __int64 CurrentProcessWin32Process; // rax
  _DWORD *v31; // r9
  unsigned int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rax
  ULONG v39; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v44; // [rsp+58h] [rbp+10h] BYREF
  __int64 v45; // [rsp+60h] [rbp+18h] BYREF

  EnterSharedCrit(0LL, 1LL);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v6, v5) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v8 = KeGetCurrentThread();
  v9 = 0LL;
  v10 = *(_DWORD *)(v4 + 480) & 8;
  ThreadProcess = PsGetThreadProcess(v8);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v13 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v14) )
  {
    v18 = (__int64 *)PsGetThreadWin32Thread(v8);
    if ( v18 )
      v13 = *v18;
  }
  if ( !ProcessWin32Process )
    goto LABEL_45;
  if ( !v10
    || !v13
    || (v19 = *(_QWORD *)(v13 + 448)) == 0
    || *(_QWORD *)(ProcessWin32Process + 664) == *(_QWORD *)(v19 + 40) )
  {
    v9 = *(_QWORD *)(ProcessWin32Process + 664);
    if ( v9 )
    {
      if ( !RtlAreAllAccessesGranted(*(_DWORD *)(ProcessWin32Process + 680), 4u) )
      {
        UserSetLastError(5LL, v16, v20, v21);
LABEL_15:
        v22 = -1073741790;
LABEL_46:
        v39 = RtlNtStatusToDosError(v22);
        UserSetLastError(v39, v40, v41, v42);
        goto LABEL_47;
      }
      goto LABEL_20;
    }
  }
  if ( v13 )
  {
    v23 = *(_QWORD *)(v13 + 448);
    if ( v23 )
    {
      v9 = *(_QWORD *)(v23 + 40);
      if ( !(unsigned int)AccessCheckObject(v9, 4LL, 0LL, WinStaMapping) )
        goto LABEL_15;
    }
  }
  if ( !v9 )
  {
LABEL_45:
    v22 = -1073741275;
    goto LABEL_46;
  }
LABEL_20:
  if ( !gbLockScreenActive )
  {
    v24 = KeGetCurrentThread();
    v25 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v17, v16) )
    {
      v27 = (__int64 *)PsGetThreadWin32Thread(v24);
      if ( v27 )
        v25 = *v27;
    }
    if ( *(PVOID *)(v25 + 448) != grpdeskLogon )
    {
      if ( a1 )
      {
        v28 = *(_QWORD *)(v9 + 96);
        if ( v28 )
        {
          v29 = *(_DWORD *)(v9 + 104);
          if ( v29 )
          {
            while ( 1 )
            {
              --v29;
              if ( *(_DWORD *)v28 == a1 )
                break;
              v28 += 32LL;
              if ( !v29 )
              {
                LOBYTE(v3) = 0;
                goto LABEL_47;
              }
            }
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17, v26);
            v44 = 0LL;
            v31 = &unk_1C0321068;
            v32 = 0;
            v33 = *(_QWORD *)(CurrentProcessWin32Process + 872);
            v34 = *(_QWORD *)(v28 + 20);
            v45 = v33;
            do
            {
              if ( (unsigned int)v34 >= *v31 && (unsigned int)v34 < *((_DWORD *)&gaClipILDef + 6 * v32 + 8) )
                break;
              ++v32;
              v31 += 6;
            }
            while ( v32 < 5 );
            if ( v32 > 4 )
            {
LABEL_38:
              LODWORD(v44) = dword_1C03210E0;
              v36 = dword_1C03210E4;
            }
            else
            {
              while ( 1 )
              {
                v35 = v32 + 1;
                if ( *((_DWORD *)&gaClipILDef + 6 * v35 + 5) )
                  break;
                ++v32;
                if ( (unsigned int)v35 >= 5 )
                  goto LABEL_38;
              }
              LODWORD(v44) = *((_DWORD *)&gaClipILDef + 6 * v32 + 2);
              v36 = *((_DWORD *)&gaClipILDef + 6 * v32 + 3);
            }
            HIDWORD(v44) = v36;
            if ( (unsigned __int8)CheckAccess(&v44, &v45) || !(unsigned int)IsFmtBlocked(a1) )
              goto LABEL_43;
            v38 = PsGetCurrentProcessWin32Process(v17, v37);
            EtwTraceUIPIClipboardError(0LL, v38, a1, *(_QWORD *)(v28 + 20));
          }
        }
      }
      v28 = 0LL;
LABEL_43:
      LOBYTE(v3) = v28 != 0;
    }
  }
LABEL_47:
  UserSessionSwitchLeaveCrit(v17);
  return v3;
}
