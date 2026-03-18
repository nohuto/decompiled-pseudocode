/*
 * XREFs of xxxClientLpkDrawTextEx @ 0x1C021EE84
 * Callers:
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C025A40C (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C025A53C (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
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
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned int v22; // r12d
  int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 *v26; // rcx
  __int64 v27; // r15
  PVOID *v28; // rdx
  char v29; // [rsp+60h] [rbp-358h] BYREF
  _BYTE v30[3]; // [rsp+61h] [rbp-357h] BYREF
  int v31; // [rsp+64h] [rbp-354h] BYREF
  __int64 v32; // [rsp+68h] [rbp-350h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-348h] BYREF
  _QWORD v34[4]; // [rsp+80h] [rbp-338h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp-318h] BYREF
  _QWORD v36[5]; // [rsp+A8h] [rbp-310h] BYREF
  unsigned __int8 v37[168]; // [rsp+D0h] [rbp-2E8h] BYREF
  unsigned __int8 v38[512]; // [rsp+180h] [rbp-238h] BYREF

  v34[3] = a1;
  memset(v37, 0, sizeof(v37));
  v32 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, a4);
  v14 = CreateCompatiblePublicDC(a1, &v32);
  v34[2] = v14;
  if ( !v14 )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2LL * (a5 + 1)) )
    MaximumLength = 2LL * (a5 + 1);
  v18 = AllocCallbackMessage(168, 1u, MaximumLength, v38, 1, 0x200uLL);
  v34[1] = v18;
  if ( !v18 )
  {
    if ( v14 != a1 )
    {
      GreDeleteDC(v14);
      GreDeleteObject(v32);
    }
    return 0LL;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v19);
  memset(v36, 0, 24);
  if ( v18 != v37 && v18 != v38 )
    PushW32ThreadLock((__int64)v18, v36, (__int64)Win32FreePool);
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
  v22 = GreSaveDC(a1);
  if ( gdwInAtomicOperation )
  {
    v21 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v30,
    v21,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  EtwTraceBeginCallback(79LL);
  *((_QWORD *)v18 + 2) = 0LL;
  v23 = KeUserModeCallback(79LL, v18, *(unsigned int *)v18, v34, &v31);
  EtwTraceEndCallback(79LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v30,
    v24,
    v25);
  GreRestoreDC(a1, v22);
  if ( v14 != a1 )
  {
    if ( v23 < 0 )
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
  if ( v23 >= 0 && v31 == 24 )
  {
    v26 = (__int64 *)v34[0];
    if ( (unsigned __int64)(v34[0] + 8LL) < v34[0] || v34[0] + 8LL > MmUserProbeAddress )
      v26 = (__int64 *)MmUserProbeAddress;
    v27 = *v26;
    v36[3] = *v26;
    goto LABEL_25;
  }
LABEL_24:
  LODWORD(v27) = 0;
LABEL_25:
  if ( v14 != a1 )
  {
    GreDeleteDC(v14);
    GreDeleteObject(v32);
  }
  if ( v18 != v37 && v18 != v38 )
  {
    v28 = (PVOID *)(v18 + 32);
    if ( *((_QWORD *)v18 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v28, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v36, (__int64)v28, v20);
  }
  return (unsigned int)v27;
}
