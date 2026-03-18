/*
 * XREFs of xxxClientAddFontResourceW @ 0x1C0055478
 * Callers:
 *     xxxAddFontResourceW @ 0x1C00556A4 (xxxAddFontResourceW.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0053454 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00534F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall xxxClientAddFontResourceW(char **a1, int a2, __int64 a3)
{
  unsigned __int8 *v6; // rdi
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 *v11; // rcx
  __int64 v12; // rbx
  PVOID *v14; // rdx
  char v15; // [rsp+30h] [rbp-2F8h] BYREF
  _BYTE v16[3]; // [rsp+31h] [rbp-2F7h] BYREF
  int v17; // [rsp+34h] [rbp-2F4h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-2F0h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-2E0h] BYREF
  _QWORD v20[6]; // [rsp+50h] [rbp-2D8h] BYREF
  unsigned __int8 v21[136]; // [rsp+80h] [rbp-2A8h] BYREF
  unsigned __int8 v22[512]; // [rsp+110h] [rbp-218h] BYREF

  memset(v21, 0, sizeof(v21));
  v6 = AllocCallbackMessage(136, 1u, *((unsigned __int16 *)a1 + 1), v22, 1, 0x200uLL);
  v18[1] = v6;
  if ( !v6 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  memset(v20, 0, 24);
  if ( v6 != v21 && v6 != v22 )
    PushW32ThreadLock((__int64)v6, v20, (__int64)Win32FreePool);
  *((_WORD *)v6 + 20) = *(_WORD *)a1;
  *((_WORD *)v6 + 21) = *((_WORD *)a1 + 1);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v6,
              a1[1],
              (unsigned int)*(unsigned __int16 *)a1 + 2,
              (void **)v6 + 6) < 0 )
    goto LABEL_19;
  *((_DWORD *)v6 + 14) = a2;
  if ( a3 && *(_DWORD *)(a3 + 4) )
  {
    *(_OWORD *)(v6 + 60) = *(_OWORD *)a3;
    *(_OWORD *)(v6 + 76) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v6 + 92) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v6 + 108) = *(_OWORD *)(a3 + 48);
    *(_QWORD *)(v6 + 124) = *(_QWORD *)(a3 + 64);
  }
  else
  {
    *((_DWORD *)v6 + 16) = 0;
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v16,
    gdwInAtomicOperation,
    v7);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  EtwTraceBeginCallback(83LL);
  *((_QWORD *)v6 + 2) = 0LL;
  v8 = KeUserModeCallback(83LL, v6, *(unsigned int *)v6, v18, &v17);
  EtwTraceEndCallback(83LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v16,
    v9,
    v10);
  if ( v8 < 0 )
    goto LABEL_19;
  if ( v17 == 24 )
  {
    v11 = (__int64 *)v18[0];
    if ( (unsigned __int64)(v18[0] + 8LL) < v18[0] || v18[0] + 8LL > MmUserProbeAddress )
      v11 = (__int64 *)MmUserProbeAddress;
    v12 = *v11;
    v20[3] = *v11;
  }
  else
  {
LABEL_19:
    LODWORD(v12) = 0;
  }
  if ( v6 != v21 && v6 != v22 )
  {
    v14 = (PVOID *)(v6 + 32);
    if ( *((_QWORD *)v6 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v14, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v20, (__int64)v14, v7);
  }
  return (unsigned int)v12;
}
