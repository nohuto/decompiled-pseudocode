/*
 * XREFs of NtUserGetPointerInfoList @ 0x1C0118560
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     EnterSharedCrit @ 0x1C002A0D0 (EnterSharedCrit.c)
 *     GetPointerInfoSize @ 0x1C01135EC (GetPointerInfoSize.c)
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C016AC20 (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C016B394 (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C016B434 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerInfoList(
        int a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        ULONG64 a6,
        ULONG64 a7,
        _OWORD *Address)
{
  unsigned int v9; // esi
  int v11; // ebx
  __int64 v12; // rdx
  int v13; // r11d
  int PointerInfoSize; // eax
  __int64 v15; // r10
  _DWORD *v16; // r15
  _DWORD *v17; // r12
  int v18; // r9d
  _OWORD *v19; // rdi
  __int64 v20; // rcx
  unsigned int *v21; // rax
  __int64 v22; // r8
  unsigned int *v23; // rax
  CTouchProcessor *v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  __int64 CurrentProcessWow64Process; // rax
  _DWORD *v28; // rcx
  int PointerFrameInfoInternal; // eax
  ULONG64 v30; // rcx
  unsigned int v32; // [rsp+50h] [rbp-A8h] BYREF
  unsigned int v33; // [rsp+54h] [rbp-A4h]
  struct tagTHREADINFO *v34; // [rsp+78h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-60h]
  unsigned int v36; // [rsp+100h] [rbp+8h] BYREF
  unsigned int v37; // [rsp+108h] [rbp+10h]
  int v38; // [rsp+110h] [rbp+18h]

  v38 = a3;
  v37 = a2;
  v9 = a2;
  v33 = 0;
  v11 = 1;
  v34 = EnterSharedCrit(0, 1);
  v13 = 0;
  if ( !a1 )
    goto LABEL_45;
  if ( HIWORD(a1) )
    goto LABEL_45;
  v12 = a5;
  if ( !a5 )
    goto LABEL_45;
  PointerInfoSize = GetPointerInfoSize(v9);
  if ( (_DWORD)v12 != PointerInfoSize )
    goto LABEL_45;
  v16 = (_DWORD *)a6;
  if ( !a6 )
    goto LABEL_45;
  v17 = (_DWORD *)a7;
  if ( !a7 )
    goto LABEL_45;
  v18 = v38;
  if ( v38 || a4 )
  {
    v19 = Address;
  }
  else
  {
    v19 = Address;
    if ( !Address )
    {
LABEL_45:
      v20 = 87LL;
      goto LABEL_46;
    }
  }
  if ( a4 && (*(_DWORD *)(v15 + 1224) & 0x100) != 0 )
  {
    v20 = 5LL;
LABEL_46:
    v11 = v13;
    goto LABEL_47;
  }
  v21 = (unsigned int *)a6;
  if ( a6 >= MmUserProbeAddress )
    v21 = (unsigned int *)MmUserProbeAddress;
  v22 = *v21;
  v36 = *v21;
  v23 = (unsigned int *)a7;
  if ( a7 >= MmUserProbeAddress )
    v23 = (unsigned int *)MmUserProbeAddress;
  v24 = (CTouchProcessor *)*v23;
  v32 = *v23;
  if ( v19 )
  {
    if ( !(_DWORD)v22 )
      goto LABEL_45;
    if ( !(_DWORD)v24 )
      goto LABEL_45;
    v25 = v22 * (_QWORD)v24;
    if ( v25 > 0xFFFFFFFF )
      goto LABEL_45;
    v26 = v12 * (unsigned int)v25;
    if ( v26 > 0xFFFFFFFF )
      goto LABEL_45;
    v33 = v12 * v25;
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v25);
    ProbeForWrite(v19, (unsigned int)v26, CurrentProcessWow64Process != 0 ? 1 : 4);
    v9 = v37;
    v18 = v38;
  }
  if ( a1 == 1 )
  {
    v28 = *(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1280);
    v12 = 0LL;
    if ( !v28 || (*v28 & 1) == 0 )
    {
      v11 = 0;
      v20 = 87LL;
LABEL_47:
      UserSetLastError(v20, v12);
      goto LABEL_48;
    }
    v36 = 1;
    v32 = 1;
    if ( v19 )
    {
      CurrentThread = KeGetCurrentThread();
      v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)CurrentThread) + 1280);
      if ( (unsigned __int64)v19 >= MmUserProbeAddress )
        v19 = (_OWORD *)MmUserProbeAddress;
      *v19 = *(_OWORD *)(v12 + 24);
      v19[1] = *(_OWORD *)(v12 + 40);
      v19[2] = *(_OWORD *)(v12 + 56);
      v19[3] = *(_OWORD *)(v12 + 72);
      v19[4] = *(_OWORD *)(v12 + 88);
      v19[5] = *(_OWORD *)(v12 + 104);
    }
  }
  else
  {
    if ( a4 )
    {
      PointerFrameInfoInternal = CTouchProcessor::GetPointerFrameInfoInternal(
                                   v24,
                                   v34,
                                   a1,
                                   v9,
                                   v18,
                                   v33,
                                   &v36,
                                   &v32,
                                   (unsigned __int8 *)v19);
    }
    else
    {
      v32 = 1;
      if ( v18 )
      {
        PointerFrameInfoInternal = CTouchProcessor::GetPointerInfoHistoryInternal(
                                     v24,
                                     v34,
                                     a1,
                                     v9,
                                     v33,
                                     &v36,
                                     (unsigned __int8 *)v19);
      }
      else
      {
        v36 = 1;
        PointerFrameInfoInternal = CTouchProcessor::GetPointerInfoInternal(
                                     v24,
                                     v34,
                                     a1,
                                     v9,
                                     v33,
                                     (struct tagPOINTER_INFO *)v19);
      }
    }
    v11 = PointerFrameInfoInternal;
    if ( !PointerFrameInfoInternal )
      goto LABEL_48;
  }
  v30 = MmUserProbeAddress;
  if ( (unsigned __int64)v16 >= MmUserProbeAddress )
    v16 = (_DWORD *)MmUserProbeAddress;
  *v16 = v36;
  if ( (unsigned __int64)v17 >= MmUserProbeAddress )
    v17 = (_DWORD *)MmUserProbeAddress;
  *v17 = v32;
LABEL_48:
  UserSessionSwitchLeaveCrit(v30, v12);
  return v11;
}
