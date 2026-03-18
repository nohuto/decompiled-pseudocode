/*
 * XREFs of SfnINCNTOUTSTRING @ 0x1C01FF1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C001A718 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00AF69C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00B0068 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00B01B4 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall SfnINCNTOUTSTRING(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v11; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r13
  __int64 v14; // r14
  int v15; // r8d
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned __int64 v18; // rax
  unsigned __int8 *result; // rax
  __int64 v20; // rdx
  unsigned __int16 v21; // r12
  __int16 v22; // ax
  __int64 v23; // rdx
  int v24; // r11d
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // esi
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 *v34; // rsi
  __int64 v35; // rsi
  ULONG64 v36; // rcx
  __int64 v37; // xmm0_8
  __int64 v38; // rdx
  _WORD *v39; // rax
  PVOID *v40; // rdx
  char v41; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v42[3]; // [rsp+31h] [rbp-397h] BYREF
  unsigned int v43; // [rsp+34h] [rbp-394h]
  int v44; // [rsp+38h] [rbp-390h]
  unsigned __int8 *v45; // [rsp+40h] [rbp-388h]
  int v46; // [rsp+48h] [rbp-380h]
  _DWORD v47[5]; // [rsp+4Ch] [rbp-37Ch] BYREF
  unsigned __int64 v48; // [rsp+60h] [rbp-368h] BYREF
  __int64 v49; // [rsp+68h] [rbp-360h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-350h] BYREF
  __int64 v51; // [rsp+80h] [rbp-348h] BYREF
  volatile signed __int32 *v52; // [rsp+88h] [rbp-340h]
  __int64 v53; // [rsp+90h] [rbp-338h]
  __int128 v54; // [rsp+98h] [rbp-330h]
  __int64 v55; // [rsp+A8h] [rbp-320h]
  __int128 v56; // [rsp+B0h] [rbp-318h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-308h]
  __int128 v58; // [rsp+F0h] [rbp-2D8h]
  _QWORD v59[4]; // [rsp+100h] [rbp-2C8h] BYREF
  unsigned __int8 v60[112]; // [rsp+120h] [rbp-2A8h] BYREF
  unsigned __int8 v61[512]; // [rsp+190h] [rbp-238h] BYREF

  v46 = a2;
  v44 = a7 & 1;
  v11 = v60;
  v49 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0uLL;
  v55 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v15 = *(_DWORD *)(a4 + 4);
  v16 = v15 & 0x7FFFFFFF;
  v17 = -1;
  if ( v16 + 2 >= v16 )
    v17 = v16 + 2;
  v43 = v17;
  if ( v16 + 2 < v16 )
    goto LABEL_50;
  if ( v15 < 0 && !v44 )
  {
    v18 = 2LL * v17;
    v17 = -1;
    if ( v18 <= 0xFFFFFFFF )
      v17 = v18;
    v43 = v17;
    if ( v18 > 0xFFFFFFFF )
      goto LABEL_50;
  }
  result = AllocCallbackMessage(104, 1u, v17, v61, 0, 0x200uLL);
  v11 = result;
  v45 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
  if ( v11 != v60 && v11 != v61 )
    PushW32ThreadLock((__int64)v11, v59, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 5) = v14;
  *((_DWORD *)v11 + 12) = v46;
  *((_QWORD *)v11 + 7) = a3;
  v21 = *(_WORD *)(a4 + 4) >> 1;
  if ( *(int *)(a4 + 4) < 0 )
    v21 = *(_WORD *)(a4 + 4);
  v22 = -1;
  if ( v21 != 0xFFFF )
    v22 = v21;
  *((_WORD *)v11 + 40) = v22;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v43, (void **)v11 + 11) < 0 )
    goto LABEL_50;
  *((_DWORD *)v11 + 24) = v24;
  v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23);
  v51 = *(_QWORD *)(v25 + 416);
  *(_QWORD *)(v25 + 416) = &v51;
  v52 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v26 = *(_QWORD *)(v13 + 480);
  v58 = *(_OWORD *)(v26 + 64);
  v54 = v58;
  v55 = *(_QWORD *)(v26 + 80);
  *(_QWORD *)(v26 + 72) = v14;
  v27 = 0LL;
  if ( a1 )
    v27 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v27;
  if ( a1 )
    v28 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v28 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v28;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v42,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  EtwTraceBeginCallback(7LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v29 = KeUserModeCallback(7LL, v11, *(unsigned int *)v11, &v48, v47);
  EtwTraceEndCallback(7LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v42, v30);
  ThreadUnlock1(v32, v31);
  v33 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v33 + 64) = v58;
  *(_QWORD *)(v33 + 80) = v55;
  if ( v29 < 0 || v47[0] != 24 )
    goto LABEL_50;
  v34 = (__int64 *)v48;
  if ( v48 + 8 < v48 || v48 + 8 > MmUserProbeAddress )
    v34 = (__int64 *)MmUserProbeAddress;
  v35 = *v34;
  v49 = v35;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_51;
  if ( !v35 )
  {
    v39 = *(_WORD **)(a4 + 8);
    if ( *(int *)(a4 + 4) >= 0 )
      *v39 = 0;
    else
      *(_BYTE *)v39 = 0;
    goto LABEL_51;
  }
  v36 = v48;
  if ( v48 + 24 < v48 || v48 + 24 > MmUserProbeAddress )
    v36 = MmUserProbeAddress;
  v37 = *(_QWORD *)(v36 + 16);
  v56 = *(_OWORD *)v36;
  v57 = v37;
  v38 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( v38 && (*(_DWORD *)(v38 + 84) & 1) != 0 && *(_QWORD *)(v38 + 96) == a4 )
  {
LABEL_50:
    v35 = 0LL;
  }
  else
  {
    v35 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v56, v35, *(_DWORD *)(a4 + 4) >> 31, v44);
    v49 = v35;
    CopyOutputString((struct _CALLBACKSTATUS *)&v56, (PWCH *)a4, v21, v44);
  }
LABEL_51:
  if ( v11 != v60 && v11 != v61 )
  {
    v40 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v40, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v59, (__int64)v40);
  }
  return (unsigned __int8 *)v35;
}
