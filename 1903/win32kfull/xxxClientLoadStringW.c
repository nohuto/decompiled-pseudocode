/*
 * XREFs of xxxClientLoadStringW @ 0x1C00E36DC
 * Callers:
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00E35EC (-xxxLoadSomeStrings@@YAXXZ.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00B2694 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00E39A0 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00E3A7C (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00E3CB8 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall xxxClientLoadStringW(int a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  unsigned __int8 *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rcx
  __int64 v19; // r10
  ULONG64 v20; // rcx
  __int64 v21; // xmm0_8
  __int64 v22; // rdx
  unsigned int v23; // ebx
  PVOID *v25; // rdx
  char v26; // [rsp+30h] [rbp-2E8h] BYREF
  _BYTE v27[3]; // [rsp+31h] [rbp-2E7h] BYREF
  int v28; // [rsp+34h] [rbp-2E4h] BYREF
  _QWORD v29[2]; // [rsp+38h] [rbp-2E0h] BYREF
  _DWORD v30[2]; // [rsp+48h] [rbp-2D0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-2C8h]
  __int64 v32; // [rsp+58h] [rbp-2C0h]
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-2B8h] BYREF
  _QWORD v34[3]; // [rsp+68h] [rbp-2B0h] BYREF
  __int128 v35; // [rsp+80h] [rbp-298h] BYREF
  __int64 v36; // [rsp+90h] [rbp-288h]
  unsigned __int8 v37[64]; // [rsp+B0h] [rbp-268h] BYREF
  unsigned __int8 v38[512]; // [rsp+F0h] [rbp-228h] BYREF

  memset(v37, 0, sizeof(v37));
  v6 = 2 * a3;
  v31 = a2;
  v30[0] = 0;
  v30[1] = 2;
  v8 = AllocCallbackMessage(64, 1u, 2 * a3, v38, 0, 0x200uLL);
  v29[1] = v8;
  if ( !v8 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v9, v10);
  memset(v34, 0, sizeof(v34));
  if ( v8 != v37 && v8 != v38 )
    PushW32ThreadLock((__int64)v8, v34, (__int64)Win32FreePool, v11);
  *((_DWORD *)v8 + 10) = a1;
  *((_DWORD *)v8 + 11) = a3;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v8, v6, (void **)v8 + 6) < 0 )
    goto LABEL_24;
  *((_DWORD *)v8 + 14) = v6;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v27,
    gdwInAtomicOperation,
    v12,
    v13);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
  EtwTraceBeginCallback(98LL);
  *((_QWORD *)v8 + 2) = 0LL;
  v14 = KeUserModeCallback(98LL, v8, *(unsigned int *)v8, v29, &v28);
  EtwTraceEndCallback(98LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v27,
    v15,
    v16,
    v17);
  if ( v14 < 0 || v28 != 24 )
    goto LABEL_24;
  v18 = (__int64 *)v29[0];
  if ( (unsigned __int64)(v29[0] + 8LL) < v29[0] || v29[0] + 8LL > MmUserProbeAddress )
    v18 = (__int64 *)MmUserProbeAddress;
  v19 = *v18;
  v32 = *v18;
  v20 = v29[0];
  if ( (unsigned __int64)(v29[0] + 24LL) < v29[0] || v29[0] + 24LL > MmUserProbeAddress )
    v20 = MmUserProbeAddress;
  v21 = *(_QWORD *)(v20 + 16);
  v35 = *(_OWORD *)v20;
  v36 = v21;
  v22 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v22 && (*(_DWORD *)(v22 + 84) & 1) != 0 && *(_DWORD **)(v22 + 96) == v30 )
  {
LABEL_24:
    v23 = 0;
  }
  else
  {
    v23 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v35, v19, 0, 0);
    v32 = v23;
    CopyOutputString((struct _CALLBACKSTATUS *)&v35, (struct _LARGE_STRING *)v30, a3, 0);
  }
  if ( v8 != v37 && v8 != v38 )
  {
    v25 = (PVOID *)(v8 + 32);
    if ( *((_QWORD *)v8 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v25, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v34, (__int64)v25, v12, v13);
  }
  return v23;
}
