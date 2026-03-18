/*
 * XREFs of xxxClientLoadStringW @ 0x1C0057480
 * Callers:
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0057AD0 (-xxxLoadSomeStrings@@YAXXZ.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
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

__int64 __fastcall xxxClientLoadStringW(int a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // esi
  unsigned __int8 *v7; // rdi
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 *v12; // rcx
  __int64 v13; // r10
  ULONG64 v14; // rcx
  __int64 v15; // xmm0_8
  __int64 v16; // rdx
  unsigned int v17; // ebx
  PVOID *v19; // rdx
  char v20; // [rsp+30h] [rbp-2E8h] BYREF
  _BYTE v21[3]; // [rsp+31h] [rbp-2E7h] BYREF
  int v22; // [rsp+34h] [rbp-2E4h] BYREF
  _QWORD v23[2]; // [rsp+38h] [rbp-2E0h] BYREF
  _DWORD v24[2]; // [rsp+48h] [rbp-2D0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-2C8h]
  __int64 v26; // [rsp+58h] [rbp-2C0h]
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-2B8h] BYREF
  _QWORD v28[3]; // [rsp+68h] [rbp-2B0h] BYREF
  __int128 v29; // [rsp+80h] [rbp-298h] BYREF
  __int64 v30; // [rsp+90h] [rbp-288h]
  unsigned __int8 v31[64]; // [rsp+B0h] [rbp-268h] BYREF
  unsigned __int8 v32[512]; // [rsp+F0h] [rbp-228h] BYREF

  memset(v31, 0, sizeof(v31));
  v6 = 2 * a3;
  v25 = a2;
  v24[0] = 0;
  v24[1] = 2;
  v7 = AllocCallbackMessage(64, 1u, 2 * a3, v32, 0, 0x200uLL);
  v23[1] = v7;
  if ( !v7 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  memset(v28, 0, sizeof(v28));
  if ( v7 != v31 && v7 != v32 )
    PushW32ThreadLock((__int64)v7, v28, (__int64)Win32FreePool);
  *((_DWORD *)v7 + 10) = a1;
  *((_DWORD *)v7 + 11) = a3;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v7, v6, (void **)v7 + 6) < 0 )
    goto LABEL_24;
  *((_DWORD *)v7 + 14) = v6;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v21,
    gdwInAtomicOperation,
    v8);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
  EtwTraceBeginCallback(98LL);
  *((_QWORD *)v7 + 2) = 0LL;
  v9 = KeUserModeCallback(98LL, v7, *(unsigned int *)v7, v23, &v22);
  EtwTraceEndCallback(98LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v21,
    v10,
    v11);
  if ( v9 < 0 || v22 != 24 )
    goto LABEL_24;
  v12 = (__int64 *)v23[0];
  if ( (unsigned __int64)(v23[0] + 8LL) < v23[0] || v23[0] + 8LL > MmUserProbeAddress )
    v12 = (__int64 *)MmUserProbeAddress;
  v13 = *v12;
  v26 = *v12;
  v14 = v23[0];
  if ( (unsigned __int64)(v23[0] + 24LL) < v23[0] || v23[0] + 24LL > MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  v15 = *(_QWORD *)(v14 + 16);
  v29 = *(_OWORD *)v14;
  v30 = v15;
  v16 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v16 && (*(_DWORD *)(v16 + 84) & 1) != 0 && *(_DWORD **)(v16 + 96) == v24 )
  {
LABEL_24:
    v17 = 0;
  }
  else
  {
    v17 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v29, v13, 0, 0);
    v26 = v17;
    CopyOutputString((struct _CALLBACKSTATUS *)&v29, (struct _LARGE_STRING *)v24, a3, 0);
  }
  if ( v7 != v31 && v7 != v32 )
  {
    v19 = (PVOID *)(v7 + 32);
    if ( *((_QWORD *)v7 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v19, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v28, (__int64)v19, v8);
  }
  return v17;
}
