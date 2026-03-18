/*
 * XREFs of xxxClientAddFontResourceW @ 0x1C00C3414
 * Callers:
 *     xxxAddFontResourceW @ 0x1C00C33D0 (xxxAddFontResourceW.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C001A674 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C001A718 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientAddFontResourceW(unsigned __int16 *a1, int a2, __int64 a3)
{
  __int64 v6; // rdx
  unsigned __int8 *v7; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  ULONG_PTR *v10; // rcx
  ULONG_PTR v11; // rbx
  PVOID *v13; // rdx
  char v14; // [rsp+30h] [rbp-2F8h] BYREF
  _BYTE v15[3]; // [rsp+31h] [rbp-2F7h] BYREF
  int v16; // [rsp+34h] [rbp-2F4h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-2F0h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+48h] [rbp-2E0h] BYREF
  _QWORD v19[4]; // [rsp+60h] [rbp-2C8h] BYREF
  _BYTE v20[144]; // [rsp+80h] [rbp-2A8h] BYREF
  unsigned __int8 v21[512]; // [rsp+110h] [rbp-218h] BYREF

  v7 = AllocCallbackMessage(136, 1u, a1[1], v21, 1, 0x200uLL);
  v17[1] = v7;
  if ( !v7 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
  if ( v7 != v20 && v7 != v21 )
    PushW32ThreadLock((__int64)v7, v19, (__int64)Win32FreePool);
  *((_WORD *)v7 + 20) = *a1;
  *((_WORD *)v7 + 21) = a1[1];
  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v7, *((_QWORD *)a1 + 1), (unsigned int)*a1 + 2, (void **)v7 + 6) < 0 )
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
    (ReleaseAndReacquirePerObjectLocks *)v15,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v14);
  EtwTraceBeginCallback(83LL);
  *((_QWORD *)v7 + 2) = 0LL;
  v8 = KeUserModeCallback(83LL, v7, *(unsigned int *)v7, v17, &v16);
  EtwTraceEndCallback(83LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v14);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v15, v9);
  if ( v8 < 0 )
    goto LABEL_19;
  if ( v16 == 24 )
  {
    v10 = (ULONG_PTR *)v17[0];
    if ( (unsigned __int64)(v17[0] + 8LL) < v17[0] || v17[0] + 8LL > MmUserProbeAddress )
      v10 = (ULONG_PTR *)MmUserProbeAddress;
    v11 = *v10;
    RegionSize[1] = *v10;
  }
  else
  {
LABEL_19:
    LODWORD(v11) = 0;
  }
  if ( v7 != v20 && v7 != v21 )
  {
    v13 = (PVOID *)(v7 + 32);
    if ( *((_QWORD *)v7 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v13, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v19, (__int64)v13);
  }
  return (unsigned int)v11;
}
