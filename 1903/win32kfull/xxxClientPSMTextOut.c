/*
 * XREFs of xxxClientPSMTextOut @ 0x1C021F828
 * Callers:
 *     xxxPSMTextOut @ 0x1C0252D68 (xxxPSMTextOut.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     GreSaveDC @ 0x1C008DF10 (GreSaveDC.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00B25F4 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00B2694 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     CreateCompatiblePublicDC @ 0x1C0157E00 (CreateCompatiblePublicDC.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

HDC __fastcall xxxClientPSMTextOut(HDC a1, unsigned int a2, unsigned int a3, char **a4, int a5, int a6)
{
  HDC result; // rax
  HDC v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 *v15; // rdi
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r9
  unsigned int v22; // r12d
  int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  PVOID *v27; // rdx
  char v28; // [rsp+60h] [rbp-2E8h] BYREF
  _BYTE v29[3]; // [rsp+61h] [rbp-2E7h] BYREF
  int v30; // [rsp+64h] [rbp-2E4h] BYREF
  __int64 v31[4]; // [rsp+68h] [rbp-2E0h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-2C0h] BYREF
  _QWORD v33[3]; // [rsp+90h] [rbp-2B8h] BYREF
  _BYTE v34[24]; // [rsp+A8h] [rbp-2A0h] BYREF
  unsigned __int8 v35[80]; // [rsp+C0h] [rbp-288h] BYREF
  unsigned __int8 v36[512]; // [rsp+110h] [rbp-238h] BYREF

  v31[3] = (__int64)a1;
  memset(v35, 0, sizeof(v35));
  v31[0] = 0LL;
  result = CreateCompatiblePublicDC(a1, v31);
  v11 = result;
  v31[2] = (__int64)result;
  if ( result )
  {
    result = (HDC)AllocCallbackMessage(80, 1u, *((unsigned __int16 *)a4 + 1), v36, 1, 0x200uLL);
    v15 = (unsigned __int8 *)result;
    v31[1] = (__int64)result;
    if ( result )
    {
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14);
      memset(v33, 0, sizeof(v33));
      if ( v15 != v35 && v15 != v36 )
        PushW32ThreadLock((__int64)v15, v33, (__int64)Win32FreePool, v16);
      *((_QWORD *)v15 + 7) = v11;
      *((_DWORD *)v15 + 16) = a2;
      *((_DWORD *)v15 + 17) = a3;
      *((_DWORD *)v15 + 18) = a5;
      *((_DWORD *)v15 + 19) = a6;
      *((_WORD *)v15 + 20) = *(_WORD *)a4;
      *((_WORD *)v15 + 21) = *((_WORD *)a4 + 1);
      if ( (int)CaptureCallbackData(
                  (struct _CAPTUREBUF *)v15,
                  a4[1],
                  (unsigned int)*(unsigned __int16 *)a4 + 2,
                  (void **)v15 + 6) >= 0 )
      {
        v22 = GreSaveDC((__int64)a1, v17);
        if ( gdwInAtomicOperation )
        {
          v20 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
          (ReleaseAndReacquirePerObjectLocks *)v29,
          v20,
          gdwInAtomicOperation,
          v21);
        LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v28);
        EtwTraceBeginCallback(78LL);
        *((_QWORD *)v15 + 2) = 0LL;
        v23 = KeUserModeCallback(78LL, v15, *(unsigned int *)v15, v34, &v30);
        EtwTraceEndCallback(78LL);
        LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v28);
        ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
          (ReleaseAndReacquirePerObjectLocks *)v29,
          v24,
          v25,
          v26);
        GreRestoreDC(a1, v22);
        if ( v11 != a1 && v23 >= 0 )
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
        GreDeleteObject(v31[0]);
      }
      result = (HDC)v35;
      if ( v15 != v35 )
      {
        result = (HDC)v36;
        if ( v15 != v36 )
        {
          v27 = (PVOID *)(v15 + 32);
          if ( *((_QWORD *)v15 + 4) )
          {
            RegionSize = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v27, &RegionSize, 0x8000u);
          }
          return (HDC)PopAndFreeAlwaysW32ThreadLock((__int64)v33, (__int64)v27, v18, v19);
        }
      }
    }
    else if ( v11 != a1 )
    {
      GreDeleteDC(v11);
      return (HDC)GreDeleteObject(v31[0]);
    }
  }
  return result;
}
