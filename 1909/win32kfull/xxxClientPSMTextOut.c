/*
 * XREFs of xxxClientPSMTextOut @ 0x1C021F2E8
 * Callers:
 *     xxxPSMTextOut @ 0x1C0252628 (xxxPSMTextOut.c)
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
 *     GreSaveDC @ 0x1C00AD5CC (GreSaveDC.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     CreateCompatiblePublicDC @ 0x1C0158BC0 (CreateCompatiblePublicDC.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

HDC __fastcall xxxClientPSMTextOut(HDC a1, unsigned int a2, unsigned int a3, char **a4, int a5, int a6)
{
  HDC result; // rax
  HDC v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int8 *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned int v17; // r12d
  int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // r8
  PVOID *v21; // rdx
  char v22; // [rsp+60h] [rbp-2E8h] BYREF
  _BYTE v23[3]; // [rsp+61h] [rbp-2E7h] BYREF
  int v24; // [rsp+64h] [rbp-2E4h] BYREF
  __int64 v25[4]; // [rsp+68h] [rbp-2E0h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-2C0h] BYREF
  _QWORD v27[3]; // [rsp+90h] [rbp-2B8h] BYREF
  _BYTE v28[24]; // [rsp+A8h] [rbp-2A0h] BYREF
  unsigned __int8 v29[80]; // [rsp+C0h] [rbp-288h] BYREF
  unsigned __int8 v30[512]; // [rsp+110h] [rbp-238h] BYREF

  v25[3] = (__int64)a1;
  memset(v29, 0, sizeof(v29));
  v25[0] = 0LL;
  result = CreateCompatiblePublicDC(a1, v25);
  v11 = result;
  v25[2] = (__int64)result;
  if ( result )
  {
    result = (HDC)AllocCallbackMessage(80, 1u, *((unsigned __int16 *)a4 + 1), v30, 1, 0x200uLL);
    v14 = (unsigned __int8 *)result;
    v25[1] = (__int64)result;
    if ( result )
    {
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13);
      memset(v27, 0, sizeof(v27));
      if ( v14 != v29 && v14 != v30 )
        PushW32ThreadLock((__int64)v14, v27, (__int64)Win32FreePool);
      *((_QWORD *)v14 + 7) = v11;
      *((_DWORD *)v14 + 16) = a2;
      *((_DWORD *)v14 + 17) = a3;
      *((_DWORD *)v14 + 18) = a5;
      *((_DWORD *)v14 + 19) = a6;
      *((_WORD *)v14 + 20) = *(_WORD *)a4;
      *((_WORD *)v14 + 21) = *((_WORD *)a4 + 1);
      if ( (int)CaptureCallbackData(
                  (struct _CAPTUREBUF *)v14,
                  a4[1],
                  (unsigned int)*(unsigned __int16 *)a4 + 2,
                  (void **)v14 + 6) >= 0 )
      {
        v17 = GreSaveDC(a1);
        if ( gdwInAtomicOperation )
        {
          v16 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
          (ReleaseAndReacquirePerObjectLocks *)v23,
          v16,
          gdwInAtomicOperation);
        LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
        EtwTraceBeginCallback(78LL);
        *((_QWORD *)v14 + 2) = 0LL;
        v18 = KeUserModeCallback(78LL, v14, *(unsigned int *)v14, v28, &v24);
        EtwTraceEndCallback(78LL);
        LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
        ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
          (ReleaseAndReacquirePerObjectLocks *)v23,
          v19,
          v20);
        GreRestoreDC(a1, v17);
        if ( v11 != a1 && v18 >= 0 )
          NtGdiBitBltInternal(
            a1,
            0,
            0,
            *(_DWORD *)(gpDispInfo + 88LL),
            *(_DWORD *)(gpDispInfo + 92LL),
            v11,
            0,
            0,
            13369376,
            0,
            0);
      }
      if ( v11 != a1 )
      {
        GreDeleteDC(v11);
        GreDeleteObject(v25[0]);
      }
      result = (HDC)v29;
      if ( v14 != v29 )
      {
        result = (HDC)v30;
        if ( v14 != v30 )
        {
          v21 = (PVOID *)(v14 + 32);
          if ( *((_QWORD *)v14 + 4) )
          {
            RegionSize = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v21, &RegionSize, 0x8000u);
          }
          return (HDC)PopAndFreeAlwaysW32ThreadLock((__int64)v27, (__int64)v21, v15);
        }
      }
    }
    else if ( v11 != a1 )
    {
      GreDeleteDC(v11);
      return (HDC)GreDeleteObject(v25[0]);
    }
  }
  return result;
}
