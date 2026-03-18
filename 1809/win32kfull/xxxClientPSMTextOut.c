/*
 * XREFs of xxxClientPSMTextOut @ 0x1C0207E64
 * Callers:
 *     xxxPSMTextOut @ 0x1C023A0D8 (xxxPSMTextOut.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C001A674 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C001A718 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     GreSaveDC @ 0x1C0056E34 (GreSaveDC.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     CreateCompatiblePublicDC @ 0x1C0151E08 (CreateCompatiblePublicDC.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

HSURF __fastcall xxxClientPSMTextOut(HDC a1, unsigned int a2, unsigned int a3, unsigned __int16 *a4, int a5, int a6)
{
  HSURF result; // rax
  HDC v11; // rsi
  __int64 v12; // rdx
  unsigned __int8 *v13; // rdi
  __int64 v14; // rdx
  unsigned int v15; // r12d
  int v16; // r15d
  __int64 v17; // rdx
  PVOID *v18; // rdx
  char v19; // [rsp+60h] [rbp-2E8h] BYREF
  _BYTE v20[3]; // [rsp+61h] [rbp-2E7h] BYREF
  int v21; // [rsp+64h] [rbp-2E4h] BYREF
  HSURF v22[4]; // [rsp+68h] [rbp-2E0h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-2C0h] BYREF
  _BYTE v24[16]; // [rsp+90h] [rbp-2B8h] BYREF
  _QWORD v25[4]; // [rsp+A0h] [rbp-2A8h] BYREF
  unsigned __int8 v26[80]; // [rsp+C0h] [rbp-288h] BYREF
  unsigned __int8 v27[512]; // [rsp+110h] [rbp-238h] BYREF

  v22[3] = (HSURF)a1;
  v22[0] = 0LL;
  result = (HSURF)CreateCompatiblePublicDC(a1, v22);
  v11 = (HDC)result;
  v22[2] = result;
  if ( result )
  {
    result = (HSURF)AllocCallbackMessage(80, 1u, a4[1], v27, 1, 0x200uLL);
    v13 = (unsigned __int8 *)result;
    v22[1] = result;
    if ( result )
    {
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
      if ( v13 != v26 && v13 != v27 )
        PushW32ThreadLock((__int64)v13, v25, (__int64)Win32FreePool);
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
          (ReleaseAndReacquirePerObjectLocks *)v20,
          v14);
        LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
        EtwTraceBeginCallback(78LL);
        *((_QWORD *)v13 + 2) = 0LL;
        v16 = KeUserModeCallback(78LL, v13, *(unsigned int *)v13, v24, &v21);
        EtwTraceEndCallback(78LL);
        LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
        ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
          (ReleaseAndReacquirePerObjectLocks *)v20,
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
        GreDeleteObject(v22[0]);
      }
      result = (HSURF)v26;
      if ( v13 != v26 )
      {
        result = (HSURF)v27;
        if ( v13 != v27 )
        {
          v18 = (PVOID *)(v13 + 32);
          if ( *((_QWORD *)v13 + 4) )
          {
            RegionSize = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v18, &RegionSize, 0x8000u);
          }
          return (HSURF)PopAndFreeAlwaysW32ThreadLock((__int64)v25, (__int64)v18);
        }
      }
    }
    else if ( v11 != a1 )
    {
      GreDeleteDC(v11);
      return (HSURF)GreDeleteObject(v22[0]);
    }
  }
  return result;
}
