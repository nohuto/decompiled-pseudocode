/*
 * XREFs of NtUserGetPointerInfoList @ 0x1C00B69F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C003025C (EtwTraceAcquiredSharedUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     GetPointerInfoSize @ 0x1C00B3058 (GetPointerInfoSize.c)
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C01152F0 (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C0115768 (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0115808 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerInfoList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        ULONG64 a6,
        ULONG64 a7,
        _OWORD *Address)
{
  unsigned int v8; // r15d
  int v9; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v11; // rsi
  int v12; // ebx
  int v13; // edi
  __int64 *v14; // rax
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  _BOOL8 v19; // rdx
  int v20; // r11d
  int PointerInfoSize; // eax
  __int64 v22; // rdx
  _DWORD *v23; // r12
  _DWORD *v24; // r13
  int v25; // r10d
  int v26; // r9d
  _OWORD *v27; // rdi
  int v28; // ecx
  unsigned int *v29; // rax
  __int64 v30; // r8
  unsigned int *v31; // rax
  CTouchProcessor *v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned int v35; // r15d
  __int64 CurrentProcessWow64Process; // rax
  _DWORD *v37; // rcx
  __int64 v38; // rdx
  int PointerFrameInfoInternal; // eax
  ULONG64 v40; // rcx
  unsigned int v42; // [rsp+50h] [rbp-98h]
  unsigned int v43[15]; // [rsp+54h] [rbp-94h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-58h]
  unsigned int v45; // [rsp+F0h] [rbp+8h] BYREF
  unsigned int v46; // [rsp+F8h] [rbp+10h]
  int v47; // [rsp+100h] [rbp+18h]
  int v48; // [rsp+108h] [rbp+20h]

  v48 = a4;
  v47 = a3;
  v46 = a2;
  v8 = a2;
  v9 = a1;
  v42 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v11 = 0LL;
  v12 = 1;
  do
  {
    v13 = 0;
    v14 = (__int64 *)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v14 )
      v11 = *v14;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v15);
    v19 = 0LL;
    if ( CurrentProcess )
      v19 = CurrentProcess == g_pepDwm;
    if ( v19 || (PVOID)PsGetCurrentProcess(v17) == gpepCSRSS && v11 != gptiTSRequest )
      break;
    if ( gbDITInHitTest == 1 && (struct tagTHREADINFO *)v11 != gptiRit )
    {
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      v13 = 1;
    }
  }
  while ( v13 == 1 );
  EtwTraceAcquiredSharedUserCrit(v17, v19, v18);
  v20 = 0;
  if ( !v9 )
    goto LABEL_61;
  if ( HIWORD(v9) )
    goto LABEL_61;
  if ( !a5 )
    goto LABEL_61;
  PointerInfoSize = GetPointerInfoSize(v8);
  if ( (_DWORD)v22 != PointerInfoSize )
    goto LABEL_61;
  v23 = (_DWORD *)a6;
  if ( !a6 )
    goto LABEL_61;
  v24 = (_DWORD *)a7;
  if ( !a7 )
    goto LABEL_61;
  v25 = v47;
  v26 = v48;
  if ( v47 || v48 )
  {
    v27 = Address;
  }
  else
  {
    v27 = Address;
    if ( !Address )
    {
LABEL_61:
      v28 = 87;
      goto LABEL_62;
    }
  }
  if ( v48 && (*(_DWORD *)(v11 + 1200) & 0x100) != 0 )
  {
    v28 = 5;
LABEL_62:
    v12 = v20;
    goto LABEL_63;
  }
  v29 = (unsigned int *)a6;
  if ( a6 >= MmUserProbeAddress )
    v29 = (unsigned int *)MmUserProbeAddress;
  v30 = *v29;
  v45 = *v29;
  v31 = (unsigned int *)a7;
  if ( a7 >= MmUserProbeAddress )
    v31 = (unsigned int *)MmUserProbeAddress;
  v32 = (CTouchProcessor *)*v31;
  v43[0] = *v31;
  if ( v27 )
  {
    if ( !(_DWORD)v30 )
      goto LABEL_61;
    if ( !(_DWORD)v32 )
      goto LABEL_61;
    v33 = v30 * (_QWORD)v32;
    if ( v33 > 0xFFFFFFFF )
      goto LABEL_61;
    v34 = v22 * (unsigned int)v33;
    v35 = -1;
    if ( v34 <= 0xFFFFFFFF )
      v35 = v34;
    v42 = v35;
    if ( v34 > 0xFFFFFFFF )
      goto LABEL_61;
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v34);
    ProbeForWrite(v27, v35, CurrentProcessWow64Process != 0 ? 1 : 4);
    v8 = v46;
    v26 = v48;
    v25 = v47;
  }
  if ( v9 == 1 )
  {
    v37 = *(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
    if ( !v37 || (*v37 & 1) == 0 )
    {
      v12 = 0;
      v28 = 87;
LABEL_63:
      UserSetLastError(v28);
      goto LABEL_64;
    }
    v45 = 1;
    v43[0] = 1;
    if ( v27 )
    {
      CurrentThread = KeGetCurrentThread();
      v38 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)CurrentThread) + 1248);
      if ( (unsigned __int64)v27 >= MmUserProbeAddress )
        v27 = (_OWORD *)MmUserProbeAddress;
      *v27 = *(_OWORD *)(v38 + 24);
      v27[1] = *(_OWORD *)(v38 + 40);
      v27[2] = *(_OWORD *)(v38 + 56);
      v27[3] = *(_OWORD *)(v38 + 72);
      v27[4] = *(_OWORD *)(v38 + 88);
      v27[5] = *(_OWORD *)(v38 + 104);
    }
  }
  else
  {
    if ( v26 )
    {
      PointerFrameInfoInternal = CTouchProcessor::GetPointerFrameInfoInternal(
                                   v32,
                                   (struct tagTHREADINFO *)v11,
                                   v9,
                                   v8,
                                   v25,
                                   v42,
                                   &v45,
                                   v43,
                                   (unsigned __int8 *)v27);
    }
    else
    {
      v43[0] = 1;
      if ( v25 )
      {
        PointerFrameInfoInternal = CTouchProcessor::GetPointerInfoHistoryInternal(
                                     v32,
                                     (struct tagTHREADINFO *)v11,
                                     v9,
                                     v8,
                                     v42,
                                     &v45,
                                     (unsigned __int8 *)v27);
      }
      else
      {
        v45 = 1;
        PointerFrameInfoInternal = CTouchProcessor::GetPointerInfoInternal(
                                     v32,
                                     (struct tagTHREADINFO *)v11,
                                     v9,
                                     v8,
                                     v42,
                                     (struct tagPOINTER_INFO *)v27);
      }
    }
    v12 = PointerFrameInfoInternal;
    if ( !PointerFrameInfoInternal )
      goto LABEL_64;
  }
  v40 = MmUserProbeAddress;
  if ( (unsigned __int64)v23 >= MmUserProbeAddress )
    v23 = (_DWORD *)MmUserProbeAddress;
  *v23 = v45;
  if ( (unsigned __int64)v24 >= MmUserProbeAddress )
    v24 = (_DWORD *)MmUserProbeAddress;
  *v24 = v43[0];
LABEL_64:
  UserSessionSwitchLeaveCrit(v40);
  return v12;
}
