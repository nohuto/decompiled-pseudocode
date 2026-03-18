/*
 * XREFs of xxxClientAddFontResourceW @ 0x1C00B4708
 * Callers:
 *     xxxAddFontResourceW @ 0x1C00B4934 (xxxAddFontResourceW.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00B25F4 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00B2694 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall xxxClientAddFontResourceW(char **a1, int a2, __int64 a3)
{
  __int64 v6; // rdx
  unsigned __int8 *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rcx
  __int64 v18; // rbx
  PVOID *v20; // rdx
  char v21; // [rsp+30h] [rbp-2F8h] BYREF
  _BYTE v22[3]; // [rsp+31h] [rbp-2F7h] BYREF
  int v23; // [rsp+34h] [rbp-2F4h] BYREF
  _QWORD v24[2]; // [rsp+38h] [rbp-2F0h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-2E0h] BYREF
  _QWORD v26[6]; // [rsp+50h] [rbp-2D8h] BYREF
  unsigned __int8 v27[136]; // [rsp+80h] [rbp-2A8h] BYREF
  unsigned __int8 v28[512]; // [rsp+110h] [rbp-218h] BYREF

  memset(v27, 0, sizeof(v27));
  v7 = AllocCallbackMessage(136, 1u, *((unsigned __int16 *)a1 + 1), v28, 1, 0x200uLL);
  v24[1] = v7;
  if ( !v7 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v8, v9);
  memset(v26, 0, 24);
  if ( v7 != v27 && v7 != v28 )
    PushW32ThreadLock((__int64)v7, v26, (__int64)Win32FreePool, v10);
  *((_WORD *)v7 + 20) = *(_WORD *)a1;
  *((_WORD *)v7 + 21) = *((_WORD *)a1 + 1);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v7,
              a1[1],
              (unsigned int)*(unsigned __int16 *)a1 + 2,
              (void **)v7 + 6) < 0 )
    goto LABEL_19;
  *((_DWORD *)v7 + 14) = a2;
  if ( a3 && *(_DWORD *)(a3 + 4) )
  {
    *(_OWORD *)(v7 + 60) = *(_OWORD *)a3;
    *(_OWORD *)(v7 + 76) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v7 + 92) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v7 + 108) = *(_OWORD *)(a3 + 48);
    *(_QWORD *)(v7 + 124) = *(_QWORD *)(a3 + 64);
  }
  else
  {
    *((_DWORD *)v7 + 16) = 0;
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v22,
    gdwInAtomicOperation,
    v11,
    v12);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  EtwTraceBeginCallback(83LL);
  *((_QWORD *)v7 + 2) = 0LL;
  v13 = KeUserModeCallback(83LL, v7, *(unsigned int *)v7, v24, &v23);
  EtwTraceEndCallback(83LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v22,
    v14,
    v15,
    v16);
  if ( v13 < 0 )
    goto LABEL_19;
  if ( v23 == 24 )
  {
    v17 = (__int64 *)v24[0];
    if ( (unsigned __int64)(v24[0] + 8LL) < v24[0] || v24[0] + 8LL > MmUserProbeAddress )
      v17 = (__int64 *)MmUserProbeAddress;
    v18 = *v17;
    v26[3] = *v17;
  }
  else
  {
LABEL_19:
    LODWORD(v18) = 0;
  }
  if ( v7 != v27 && v7 != v28 )
  {
    v20 = (PVOID *)(v7 + 32);
    if ( *((_QWORD *)v7 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v20, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v26, (__int64)v20, v11, v12);
  }
  return (unsigned int)v18;
}
