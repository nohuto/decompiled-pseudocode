/*
 * XREFs of NtUserGetPointerInfoList @ 0x1C00EF210
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCritSharedPti@@QEAA@PEAPEAUtagTHREADINFO@@@Z @ 0x1C00A9618 (--0EnterLeaveCritSharedPti@@QEAA@PEAPEAUtagTHREADINFO@@@Z.c)
 *     GetPointerInfoSize @ 0x1C00ECAD4 (GetPointerInfoSize.c)
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C013C44C (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C013CA7C (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C013CB1C (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerInfoList(
        int a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        int a5,
        ULONG64 a6,
        ULONG64 a7,
        volatile void *Address)
{
  int v11; // r10d
  int PointerInfoSize; // eax
  __int64 v13; // rdx
  _DWORD *v14; // r14
  _DWORD *v15; // r15
  int v16; // r8d
  _OWORD *v17; // rdi
  __int64 v18; // rcx
  unsigned int *v19; // rax
  __int64 v20; // r9
  unsigned int *v21; // rax
  CTouchProcessor *v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned int v25; // ebx
  __int64 CurrentProcessWow64Process; // rax
  int v27; // ebx
  _DWORD *v28; // rcx
  __int64 v29; // rdx
  int PointerFrameInfoInternal; // eax
  unsigned int v32; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v33; // [rsp+54h] [rbp-94h]
  unsigned int v34; // [rsp+58h] [rbp-90h] BYREF
  struct tagTHREADINFO *v35; // [rsp+60h] [rbp-88h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-48h]
  __int64 v37; // [rsp+F0h] [rbp+8h] BYREF
  int v38; // [rsp+100h] [rbp+18h]

  v38 = a3;
  v33 = 0;
  EnterLeaveCritSharedPti::EnterLeaveCritSharedPti((EnterLeaveCritSharedPti *)&v37, &v35, a3);
  v11 = 0;
  if ( !a1 )
    goto LABEL_47;
  if ( HIWORD(a1) )
    goto LABEL_47;
  if ( !a5 )
    goto LABEL_47;
  PointerInfoSize = GetPointerInfoSize(a2);
  if ( (_DWORD)v13 != PointerInfoSize )
    goto LABEL_47;
  v14 = (_DWORD *)a6;
  if ( !a6 )
    goto LABEL_47;
  v15 = (_DWORD *)a7;
  if ( !a7 )
    goto LABEL_47;
  v16 = v38;
  if ( v38 || a4 )
  {
    v17 = Address;
  }
  else
  {
    v17 = Address;
    if ( !Address )
    {
LABEL_47:
      v18 = 87LL;
      goto LABEL_48;
    }
  }
  if ( a4 && (*((_DWORD *)v35 + 302) & 0x100) != 0 )
  {
    v18 = 5LL;
LABEL_48:
    v27 = v11;
    goto LABEL_49;
  }
  v19 = (unsigned int *)a6;
  if ( a6 >= MmUserProbeAddress )
    v19 = (unsigned int *)MmUserProbeAddress;
  v20 = *v19;
  v32 = *v19;
  v21 = (unsigned int *)a7;
  if ( a7 >= MmUserProbeAddress )
    v21 = (unsigned int *)MmUserProbeAddress;
  v22 = (CTouchProcessor *)*v21;
  v34 = *v21;
  if ( v17 )
  {
    if ( !(_DWORD)v20 )
      goto LABEL_47;
    if ( !(_DWORD)v22 )
      goto LABEL_47;
    v23 = v20 * (_QWORD)v22;
    if ( v23 > 0xFFFFFFFF )
      goto LABEL_47;
    v24 = v13 * (unsigned int)v23;
    v25 = -1;
    if ( v24 <= 0xFFFFFFFF )
      v25 = v24;
    v33 = v25;
    if ( v24 > 0xFFFFFFFF )
      goto LABEL_47;
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v24);
    ProbeForWrite(v17, v25, CurrentProcessWow64Process != 0 ? 1 : 4);
    v16 = v38;
  }
  v27 = 1;
  if ( a1 == 1 )
  {
    v28 = *(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1256);
    if ( !v28 || (*v28 & 1) == 0 )
    {
      v27 = 0;
      v18 = 87LL;
LABEL_49:
      UserSetLastError(v18);
      goto LABEL_50;
    }
    v32 = 1;
    v34 = 1;
    if ( v17 )
    {
      CurrentThread = KeGetCurrentThread();
      v29 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)CurrentThread) + 1256);
      if ( (unsigned __int64)v17 >= MmUserProbeAddress )
        v17 = (_OWORD *)MmUserProbeAddress;
      *v17 = *(_OWORD *)(v29 + 24);
      v17[1] = *(_OWORD *)(v29 + 40);
      v17[2] = *(_OWORD *)(v29 + 56);
      v17[3] = *(_OWORD *)(v29 + 72);
      v17[4] = *(_OWORD *)(v29 + 88);
      v17[5] = *(_OWORD *)(v29 + 104);
    }
  }
  else
  {
    if ( a4 )
    {
      PointerFrameInfoInternal = CTouchProcessor::GetPointerFrameInfoInternal(
                                   v22,
                                   v35,
                                   a1,
                                   a2,
                                   v16,
                                   v33,
                                   &v32,
                                   &v34,
                                   (unsigned __int8 *)v17);
    }
    else
    {
      v34 = 1;
      if ( v16 )
      {
        PointerFrameInfoInternal = CTouchProcessor::GetPointerInfoHistoryInternal(
                                     v22,
                                     v35,
                                     a1,
                                     a2,
                                     v33,
                                     &v32,
                                     (unsigned __int8 *)v17);
      }
      else
      {
        v32 = 1;
        PointerFrameInfoInternal = CTouchProcessor::GetPointerInfoInternal(
                                     v22,
                                     v35,
                                     a1,
                                     a2,
                                     v33,
                                     (struct tagPOINTER_INFO *)v17);
      }
    }
    v27 = PointerFrameInfoInternal;
    if ( !PointerFrameInfoInternal )
      goto LABEL_50;
  }
  if ( (unsigned __int64)v14 >= MmUserProbeAddress )
    v14 = (_DWORD *)MmUserProbeAddress;
  *v14 = v32;
  if ( (unsigned __int64)v15 >= MmUserProbeAddress )
    v15 = (_DWORD *)MmUserProbeAddress;
  *v15 = v34;
LABEL_50:
  UserSessionSwitchLeaveCrit();
  return v27;
}
