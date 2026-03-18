/*
 * XREFs of xxxClientLpkDrawTextEx @ 0x1C021F3C4
 * Callers:
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C025AB4C (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C025AC7C (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
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

__int64 __fastcall xxxClientLpkDrawTextEx(
        HDC a1,
        int a2,
        int a3,
        const WCHAR *a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10)
{
  HDC v14; // rsi
  __int64 MaximumLength; // r8
  __int64 v17; // rdx
  unsigned __int8 *v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r9
  unsigned int v27; // r12d
  int v28; // r15d
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v32; // rcx
  __int64 v33; // r15
  PVOID *v34; // rdx
  char v35; // [rsp+60h] [rbp-358h] BYREF
  _BYTE v36[3]; // [rsp+61h] [rbp-357h] BYREF
  int v37; // [rsp+64h] [rbp-354h] BYREF
  __int64 v38; // [rsp+68h] [rbp-350h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-348h] BYREF
  _QWORD v40[4]; // [rsp+80h] [rbp-338h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp-318h] BYREF
  _QWORD v42[5]; // [rsp+A8h] [rbp-310h] BYREF
  unsigned __int8 v43[168]; // [rsp+D0h] [rbp-2E8h] BYREF
  unsigned __int8 v44[512]; // [rsp+180h] [rbp-238h] BYREF

  v40[3] = a1;
  memset(v43, 0, sizeof(v43));
  v38 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, a4);
  v14 = CreateCompatiblePublicDC(a1, &v38);
  v40[2] = v14;
  if ( !v14 )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2LL * (a5 + 1)) )
    MaximumLength = 2LL * (a5 + 1);
  v18 = AllocCallbackMessage(168, 1u, MaximumLength, v44, 1, 0x200uLL);
  v40[1] = v18;
  if ( !v18 )
  {
    if ( v14 != a1 )
    {
      GreDeleteDC(v14);
      GreDeleteObject(v38);
    }
    return 0LL;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v19, v20);
  memset(v42, 0, 24);
  if ( v18 != v43 && v18 != v44 )
    PushW32ThreadLock((__int64)v18, v42, (__int64)Win32FreePool, v21);
  *((_QWORD *)v18 + 7) = v14;
  *((_DWORD *)v18 + 16) = a2;
  *((_DWORD *)v18 + 17) = a3;
  *((_DWORD *)v18 + 18) = a5;
  *((_DWORD *)v18 + 19) = a6;
  *((_DWORD *)v18 + 20) = a7;
  *(_OWORD *)(v18 + 88) = *(_OWORD *)a8;
  *(_OWORD *)(v18 + 104) = *(_OWORD *)(a8 + 16);
  *(_OWORD *)(v18 + 120) = *(_OWORD *)(a8 + 32);
  *(_OWORD *)(v18 + 136) = *(_OWORD *)(a8 + 48);
  *((_QWORD *)v18 + 19) = *(_QWORD *)(a8 + 64);
  *((_DWORD *)v18 + 40) = a9;
  *((_DWORD *)v18 + 41) = a10;
  *((_WORD *)v18 + 20) = DestinationString.Length;
  *((_WORD *)v18 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v18,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v18 + 6) < 0 )
    goto LABEL_24;
  v27 = GreSaveDC((__int64)a1, v22);
  if ( gdwInAtomicOperation )
  {
    v25 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v36,
    v25,
    gdwInAtomicOperation,
    v26);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  EtwTraceBeginCallback(79LL);
  *((_QWORD *)v18 + 2) = 0LL;
  v28 = KeUserModeCallback(79LL, v18, *(unsigned int *)v18, v40, &v37);
  EtwTraceEndCallback(79LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v36,
    v29,
    v30,
    v31);
  GreRestoreDC(a1, v27);
  if ( v14 != a1 )
  {
    if ( v28 < 0 )
      goto LABEL_24;
    NtGdiBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(gpDispInfo + 88LL),
      *(_DWORD *)(gpDispInfo + 92LL),
      v14,
      0,
      0,
      13369376,
      0,
      0);
  }
  if ( v28 >= 0 && v37 == 24 )
  {
    v32 = (__int64 *)v40[0];
    if ( (unsigned __int64)(v40[0] + 8LL) < v40[0] || v40[0] + 8LL > MmUserProbeAddress )
      v32 = (__int64 *)MmUserProbeAddress;
    v33 = *v32;
    v42[3] = *v32;
    goto LABEL_25;
  }
LABEL_24:
  LODWORD(v33) = 0;
LABEL_25:
  if ( v14 != a1 )
  {
    GreDeleteDC(v14);
    GreDeleteObject(v38);
  }
  if ( v18 != v43 && v18 != v44 )
  {
    v34 = (PVOID *)(v18 + 32);
    if ( *((_QWORD *)v18 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v34, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v42, (__int64)v34, v23, v24);
  }
  return (unsigned int)v33;
}
