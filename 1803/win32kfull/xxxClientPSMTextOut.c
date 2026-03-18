/*
 * XREFs of xxxClientPSMTextOut @ 0x1C01E2234
 * Callers:
 *     xxxPSMTextOut @ 0x1C0210A28 (xxxPSMTextOut.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0020A2C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0020B54 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     GreSaveDC @ 0x1C0078AB8 (GreSaveDC.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     CreateCompatiblePublicDC @ 0x1C0133238 (CreateCompatiblePublicDC.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

HDC __fastcall xxxClientPSMTextOut(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned int a6)
{
  HDC result; // rax
  HDC v11; // rsi
  __int64 v12; // rdx
  unsigned __int8 *v13; // rdi
  __int64 v14; // rdx
  unsigned int v15; // r12d
  int v16; // r15d
  __int64 v17; // rdx
  char v18; // [rsp+60h] [rbp-2E8h] BYREF
  _BYTE v19[3]; // [rsp+61h] [rbp-2E7h] BYREF
  int v20; // [rsp+64h] [rbp-2E4h] BYREF
  __int64 v21[4]; // [rsp+68h] [rbp-2E0h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-2C0h] BYREF
  _BYTE v23[16]; // [rsp+90h] [rbp-2B8h] BYREF
  _QWORD v24[4]; // [rsp+A0h] [rbp-2A8h] BYREF
  unsigned __int8 v25[80]; // [rsp+C0h] [rbp-288h] BYREF
  unsigned __int8 v26[512]; // [rsp+110h] [rbp-238h] BYREF

  v21[3] = (__int64)a1;
  v21[0] = 0LL;
  result = CreateCompatiblePublicDC(a1, v21);
  v11 = result;
  v21[2] = (__int64)result;
  if ( result )
  {
    result = (HDC)AllocCallbackMessage(80, 1u, a4[1], v26, 1, 0x200uLL);
    v13 = (unsigned __int8 *)result;
    v21[1] = (__int64)result;
    if ( result )
    {
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
      if ( v13 != v25 && v13 != v26 )
        PushW32ThreadLock((__int64)v13, v24, (__int64)Win32FreePool);
      *((_QWORD *)v13 + 7) = v11;
      *((_DWORD *)v13 + 16) = a2;
      *((_DWORD *)v13 + 17) = a3;
      *((_DWORD *)v13 + 18) = a5;
      *((_DWORD *)v13 + 19) = a6;
      *((_WORD *)v13 + 20) = *a4;
      *((_WORD *)v13 + 21) = a4[1];
      if ( (int)CaptureCallbackData(
                  (struct _CAPTUREBUF *)v13,
                  *((_QWORD *)a4 + 1),
                  (unsigned int)*a4 + 2,
                  (void **)v13 + 6) >= 0 )
      {
        v15 = GreSaveDC(a1);
        if ( gdwInAtomicOperation )
        {
          v14 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
          (ReleaseAndReacquirePerObjectLocks *)v19,
          v14);
        LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v18);
        EtwTraceBeginCallback(78LL);
        *((_QWORD *)v13 + 2) = 0LL;
        v16 = KeUserModeCallback(78LL, v13, *(unsigned int *)v13, v23, &v20);
        EtwTraceEndCallback(78LL);
        LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v18);
        ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
          (ReleaseAndReacquirePerObjectLocks *)v19,
          v17);
        GreRestoreDC(a1, v15);
        if ( v11 != a1 && v16 >= 0 )
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
        GreDeleteObject(v21[0]);
      }
      result = (HDC)v25;
      if ( v13 != v25 )
      {
        result = (HDC)v26;
        if ( v13 != v26 )
        {
          if ( *((_QWORD *)v13 + 4) )
          {
            RegionSize = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v13 + 4, &RegionSize, 0x8000u);
          }
          return (HDC)PopAndFreeAlwaysW32ThreadLock((__int64)v24);
        }
      }
    }
    else if ( v11 != a1 )
    {
      GreDeleteDC(v11);
      return (HDC)GreDeleteObject(v21[0]);
    }
  }
  return result;
}
