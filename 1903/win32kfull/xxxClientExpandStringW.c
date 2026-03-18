/*
 * XREFs of xxxClientExpandStringW @ 0x1C00E331C
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00B6714 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
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
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00E39A0 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00E3A7C (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall xxxClientExpandStringW(struct _LARGE_STRING *a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  unsigned __int8 *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rcx
  __int64 v15; // r10
  ULONG64 v16; // rcx
  __int64 v17; // xmm0_8
  __int64 v18; // rdx
  unsigned int v19; // ebx
  PVOID *v21; // rdx
  char v22; // [rsp+30h] [rbp-308h] BYREF
  _BYTE v23[3]; // [rsp+31h] [rbp-307h] BYREF
  int v24; // [rsp+34h] [rbp-304h] BYREF
  _QWORD v25[2]; // [rsp+38h] [rbp-300h] BYREF
  __int64 v26; // [rsp+48h] [rbp-2F0h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-2E8h] BYREF
  _QWORD v28[3]; // [rsp+58h] [rbp-2E0h] BYREF
  __int128 v29; // [rsp+70h] [rbp-2C8h] BYREF
  __int64 v30; // [rsp+80h] [rbp-2B8h]
  unsigned __int8 v31[56]; // [rsp+98h] [rbp-2A0h] BYREF
  unsigned __int8 v32[592]; // [rsp+D0h] [rbp-268h] BYREF

  memset(v31, 0, sizeof(v31));
  v2 = *((_DWORD *)a1 + 1) & 0x7FFFFFFF;
  if ( v2 > 0x208 )
    v2 = 520;
  v4 = AllocCallbackMessage(56, 1u, v2, v32, 1, 0x248uLL);
  v25[1] = v4;
  if ( !v4 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v5, v6);
  memset(v28, 0, sizeof(v28));
  if ( v4 != v31 && v4 != v32 )
    PushW32ThreadLock((__int64)v4, v28, (__int64)Win32FreePool, v7);
  *((_DWORD *)v4 + 10) = *(_DWORD *)a1;
  *((_DWORD *)v4 + 11) ^= (*((_DWORD *)a1 + 1) ^ *((_DWORD *)v4 + 11)) & 0x7FFFFFFF;
  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v4, *((char **)a1 + 1), *(_DWORD *)a1 + 2, (void **)v4 + 6) < 0 )
    goto LABEL_26;
  *((_DWORD *)v4 + 11) &= ~0x80000000;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v23,
    gdwInAtomicOperation,
    v8,
    v9);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
  EtwTraceBeginCallback(59LL);
  *((_QWORD *)v4 + 2) = 0LL;
  v10 = KeUserModeCallback(59LL, v4, *(unsigned int *)v4, v25, &v24);
  EtwTraceEndCallback(59LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v23,
    v11,
    v12,
    v13);
  if ( v10 < 0 || v24 != 24 )
    goto LABEL_26;
  v14 = (__int64 *)v25[0];
  if ( (unsigned __int64)(v25[0] + 8LL) < v25[0] || v25[0] + 8LL > MmUserProbeAddress )
    v14 = (__int64 *)MmUserProbeAddress;
  v15 = *v14;
  v26 = *v14;
  v16 = v25[0];
  if ( (unsigned __int64)(v25[0] + 24LL) < v25[0] || v25[0] + 24LL > MmUserProbeAddress )
    v16 = MmUserProbeAddress;
  v17 = *(_QWORD *)(v16 + 16);
  v29 = *(_OWORD *)v16;
  v30 = v17;
  v18 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v18 && (*(_DWORD *)(v18 + 84) & 1) != 0 && *(struct _LARGE_STRING **)(v18 + 96) == a1 )
  {
LABEL_26:
    v19 = 0;
  }
  else
  {
    v19 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v29, v15, *((_DWORD *)a1 + 1) >> 31, 0);
    v26 = v19;
    CopyOutputString((struct _CALLBACKSTATUS *)&v29, a1, *((_DWORD *)a1 + 1) & 0x7FFFFFFF, 0);
  }
  if ( v4 != v31 && v4 != v32 )
  {
    v21 = (PVOID *)(v4 + 32);
    if ( *((_QWORD *)v4 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v21, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v28, (__int64)v21, v8, v9);
  }
  return v19;
}
