/*
 * XREFs of SfnOUTSTRING @ 0x1C00AF100
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

__int64 __fastcall SfnOUTSTRING(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v9; // r12d
  unsigned __int8 *v11; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r15
  __int64 v14; // r14
  int v15; // r8d
  unsigned int v16; // ecx
  unsigned int v17; // edx
  __int64 v18; // rdx
  int v19; // r12d
  __int64 v20; // rdx
  int v21; // r11d
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // rsi
  __int64 v32; // rsi
  _BYTE *v33; // rax
  PVOID *v34; // rdx
  ULONG64 v36; // rcx
  __int64 v37; // xmm0_8
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  char v40; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v41[3]; // [rsp+31h] [rbp-397h] BYREF
  int v42; // [rsp+34h] [rbp-394h]
  unsigned int v43; // [rsp+38h] [rbp-390h]
  int v44; // [rsp+3Ch] [rbp-38Ch]
  unsigned int v45[2]; // [rsp+40h] [rbp-388h]
  unsigned __int8 *v46; // [rsp+48h] [rbp-380h]
  _DWORD v47[6]; // [rsp+50h] [rbp-378h] BYREF
  unsigned __int64 v48; // [rsp+68h] [rbp-360h] BYREF
  __int64 v49; // [rsp+70h] [rbp-358h]
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-348h] BYREF
  __int64 v51; // [rsp+88h] [rbp-340h] BYREF
  volatile signed __int32 *v52; // [rsp+90h] [rbp-338h]
  __int64 v53; // [rsp+98h] [rbp-330h]
  __int128 v54; // [rsp+A0h] [rbp-328h]
  __int64 v55; // [rsp+B0h] [rbp-318h]
  __int128 v56; // [rsp+B8h] [rbp-310h] BYREF
  __int64 v57; // [rsp+C8h] [rbp-300h]
  __int128 v58; // [rsp+F8h] [rbp-2D0h]
  _BYTE v59[24]; // [rsp+108h] [rbp-2C0h] BYREF
  unsigned __int8 v60[96]; // [rsp+120h] [rbp-2A8h] BYREF
  unsigned __int8 v61[512]; // [rsp+180h] [rbp-248h] BYREF

  *(_QWORD *)v45 = a3;
  v9 = a2;
  v42 = a7 & 1;
  v44 = 0;
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
    goto LABEL_59;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x8000000) == 0 && v15 < 0 && !v42 )
  {
    v39 = 2LL * v17;
    v17 = -1;
    if ( v39 <= 0xFFFFFFFF )
      v17 = v39;
    v43 = v17;
    if ( v39 > 0xFFFFFFFF )
      goto LABEL_59;
  }
  v11 = AllocCallbackMessage(96, 1u, v17, v61, 0, 0x200uLL);
  v46 = v11;
  if ( !v11 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18);
  if ( v11 != v60 && v11 != v61 )
    PushW32ThreadLock(v11, v59, Win32FreePool);
  *((_QWORD *)v11 + 5) = v14;
  *((_DWORD *)v11 + 12) = v9;
  v19 = v42;
  if ( v42 )
  {
    if ( *(int *)(a4 + 4) < 0 )
      goto LABEL_14;
    *((_QWORD *)v11 + 7) = 2LL * *(_QWORD *)v45;
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x8000000u;
    v44 = 1;
  }
  else
  {
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x8000000) == 0 )
    {
LABEL_14:
      *((_QWORD *)v11 + 7) = *(_QWORD *)v45;
      goto LABEL_15;
    }
    *((_QWORD *)v11 + 7) = *(_QWORD *)v45 >> 1;
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x8000000u;
  }
LABEL_15:
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v11, v43, (void **)v11 + 10) >= 0 )
  {
    *((_DWORD *)v11 + 22) = v21;
    v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
    v51 = *(_QWORD *)(v22 + 416);
    *(_QWORD *)(v22 + 416) = &v51;
    v52 = a1;
    if ( a1 )
      _InterlockedIncrement(a1 + 2);
    v23 = *(_QWORD *)(v13 + 480);
    v58 = *(_OWORD *)(v23 + 64);
    v54 = v58;
    v55 = *(_QWORD *)(v23 + 80);
    *(_QWORD *)(v23 + 72) = v14;
    v24 = 0LL;
    if ( a1 )
      v24 = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v24;
    if ( a1 )
      v25 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
    else
      v25 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v25;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v41,
      gdwInAtomicOperation);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
    EtwTraceBeginCallback(35LL);
    *((_QWORD *)v11 + 2) = 0LL;
    v26 = KeUserModeCallback(35LL, v11, *(unsigned int *)v11, &v48, v47);
    EtwTraceEndCallback(35LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v41, v27);
    ThreadUnlock1(v29, v28);
    v30 = *(_QWORD *)(v13 + 480);
    *(_OWORD *)(v30 + 64) = v58;
    *(_QWORD *)(v30 + 80) = v55;
    if ( v26 >= 0 && v47[0] == 24 )
    {
      v31 = (__int64 *)v48;
      if ( v48 + 8 < v48 || v48 + 8 > MmUserProbeAddress )
        v31 = (__int64 *)MmUserProbeAddress;
      v32 = *v31;
      v49 = v32;
      if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
        goto LABEL_37;
      if ( !v32 )
      {
        if ( *(_QWORD *)v45 )
        {
          v33 = *(_BYTE **)(a4 + 8);
          if ( *(int *)(a4 + 4) < 0 )
            *v33 = 0;
          else
            *(_WORD *)v33 = 0;
        }
        goto LABEL_37;
      }
      v36 = v48;
      if ( v48 + 24 < v48 || v48 + 24 > MmUserProbeAddress )
        v36 = MmUserProbeAddress;
      v37 = *(_QWORD *)(v36 + 16);
      v56 = *(_OWORD *)v36;
      v57 = v37;
      v38 = *(_QWORD *)(gptiCurrent + 512LL);
      if ( !v38 || (*(_DWORD *)(v38 + 84) & 1) == 0 || *(_QWORD *)(v38 + 96) != a4 )
      {
        v32 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v56, v32, *(_DWORD *)(a4 + 4) >> 31, v19);
        v49 = v32;
        CopyOutputString((struct _CALLBACKSTATUS *)&v56, (struct _LARGE_STRING *)a4, v45[0], v19);
        goto LABEL_37;
      }
    }
  }
LABEL_59:
  v32 = 0LL;
LABEL_37:
  if ( v11 != v60 && v11 != v61 )
  {
    v34 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v34, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v59, (__int64)v34);
  }
  if ( v44 )
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x8000000u;
  return v32;
}
