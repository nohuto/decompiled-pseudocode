/*
 * XREFs of SfnINCNTOUTSTRING @ 0x1C0216290
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00534F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0057744 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0057820 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0057A5C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

unsigned __int8 *__fastcall SfnINCNTOUTSTRING(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // r8
  __int64 v16; // r13
  __int64 v17; // r15
  int v18; // ecx
  unsigned __int64 v19; // rdx
  unsigned __int8 *result; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int16 v23; // r12
  __int16 v24; // ax
  __int64 v25; // rdx
  int v26; // r11d
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // esi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 *v39; // rsi
  __int64 v40; // rsi
  ULONG64 v41; // rcx
  __int64 v42; // xmm0_8
  __int64 v43; // rdx
  _WORD *v44; // rax
  PVOID *v45; // rdx
  char v46; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v47[3]; // [rsp+31h] [rbp-397h] BYREF
  unsigned int v48; // [rsp+34h] [rbp-394h]
  int v49; // [rsp+38h] [rbp-390h]
  unsigned __int8 *v50; // [rsp+40h] [rbp-388h]
  int v51; // [rsp+48h] [rbp-380h]
  _DWORD v52[5]; // [rsp+4Ch] [rbp-37Ch] BYREF
  unsigned __int64 v53; // [rsp+60h] [rbp-368h] BYREF
  __int64 v54; // [rsp+68h] [rbp-360h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-350h] BYREF
  __int64 v56; // [rsp+80h] [rbp-348h] BYREF
  _QWORD *v57; // [rsp+88h] [rbp-340h]
  __int64 v58; // [rsp+90h] [rbp-338h]
  __int128 v59; // [rsp+98h] [rbp-330h]
  __int64 v60; // [rsp+A8h] [rbp-320h]
  _QWORD v61[3]; // [rsp+B0h] [rbp-318h] BYREF
  __int128 v62; // [rsp+C8h] [rbp-300h] BYREF
  __int64 v63; // [rsp+D8h] [rbp-2F0h]
  __int128 v64; // [rsp+108h] [rbp-2C0h]
  unsigned __int8 v65[112]; // [rsp+120h] [rbp-2A8h] BYREF
  unsigned __int8 v66[512]; // [rsp+190h] [rbp-238h] BYREF

  v51 = a2;
  v49 = a7 & 1;
  memset(v65, 0, 0x68uLL);
  v11 = v65;
  v54 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0uLL;
  v60 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13);
  v16 = ThreadWin32Thread;
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v17 = 0LL;
  v18 = *(_DWORD *)(a4 + 4);
  v19 = (v18 & 0x7FFFFFFFu) + 2;
  if ( (unsigned int)v19 < (v18 & 0x7FFFFFFFu) )
    goto LABEL_47;
  v48 = (v18 & 0x7FFFFFFF) + 2;
  if ( v18 < 0 && !v49 )
  {
    v19 *= 2LL;
    if ( v19 > 0xFFFFFFFF )
      goto LABEL_47;
    v48 = v19;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v19, v66, 0, 0x200uLL);
  v11 = result;
  v50 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22);
  memset(v61, 0, sizeof(v61));
  if ( v11 != v65 && v11 != v66 )
    PushW32ThreadLock((__int64)v11, v61, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 5) = v17;
  *((_DWORD *)v11 + 12) = v51;
  *((_QWORD *)v11 + 7) = a3;
  v23 = *(_WORD *)(a4 + 4) >> 1;
  if ( *(int *)(a4 + 4) < 0 )
    v23 = *(_WORD *)(a4 + 4);
  v24 = -1;
  if ( v23 != 0xFFFF )
    v24 = v23;
  *((_WORD *)v11 + 40) = v24;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v48, (void **)v11 + 11) >= 0 )
  {
    *((_DWORD *)v11 + 24) = v26;
    v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v15);
    v56 = *(_QWORD *)(v27 + 408);
    *(_QWORD *)(v27 + 408) = &v56;
    v57 = a1;
    if ( a1 )
      HMLockObject(a1);
    v29 = *(_QWORD *)(v16 + 472);
    v64 = *(_OWORD *)(v29 + 64);
    v59 = v64;
    v60 = *(_QWORD *)(v29 + 80);
    *(_QWORD *)(v29 + 72) = v17;
    v30 = 0LL;
    if ( a1 )
      v30 = *a1;
    *(_QWORD *)(*(_QWORD *)(v16 + 472) + 64LL) = v30;
    if ( a1 )
      v31 = *(_QWORD *)(a1[5] + 224LL);
    else
      v31 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v16 + 472) + 80LL) = v31;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v47,
      gdwInAtomicOperation,
      v28);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v46);
    EtwTraceBeginCallback(7LL);
    *((_QWORD *)v11 + 2) = 0LL;
    v32 = KeUserModeCallback(7LL, v11, *(unsigned int *)v11, &v53, v52);
    EtwTraceEndCallback(7LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v46);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v47,
      v33,
      v34);
    ThreadUnlock1(v36, v35, v37);
    v38 = *(_QWORD *)(v16 + 472);
    *(_OWORD *)(v38 + 64) = v64;
    *(_QWORD *)(v38 + 80) = v60;
    if ( v32 >= 0 && v52[0] == 24 )
    {
      v39 = (__int64 *)v53;
      if ( v53 + 8 < v53 || v53 + 8 > MmUserProbeAddress )
        v39 = (__int64 *)MmUserProbeAddress;
      v40 = *v39;
      v54 = v40;
      if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
        goto LABEL_48;
      if ( !v40 )
      {
        v44 = *(_WORD **)(a4 + 8);
        if ( *(int *)(a4 + 4) >= 0 )
          *v44 = 0;
        else
          *(_BYTE *)v44 = 0;
        goto LABEL_48;
      }
      v41 = v53;
      if ( v53 + 24 < v53 || v53 + 24 > MmUserProbeAddress )
        v41 = MmUserProbeAddress;
      v42 = *(_QWORD *)(v41 + 16);
      v62 = *(_OWORD *)v41;
      v63 = v42;
      v43 = *(_QWORD *)(gptiCurrent + 504LL);
      if ( !v43 || (*(_DWORD *)(v43 + 84) & 1) == 0 || *(_QWORD *)(v43 + 96) != a4 )
      {
        v40 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v62, v40, *(_DWORD *)(a4 + 4) >> 31, v49);
        v54 = v40;
        CopyOutputString((volatile void **)&v62, (struct _LARGE_STRING *)a4, v23, v49);
        goto LABEL_48;
      }
    }
  }
LABEL_47:
  v40 = 0LL;
LABEL_48:
  if ( v11 != v65 && v11 != v66 )
  {
    v45 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v45, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v61, (__int64)v45, v15);
  }
  return (unsigned __int8 *)v40;
}
