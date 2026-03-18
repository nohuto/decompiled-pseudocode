/*
 * XREFs of xxxClientLpkDrawTextEx @ 0x1C01E1E54
 * Callers:
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C022BE28 (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C022BF58 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
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
  HDC v13; // rsi
  __int64 MaximumLength; // r8
  __int64 v16; // rdx
  unsigned __int8 *v17; // rdi
  __int64 v18; // rdx
  unsigned int v19; // r12d
  int v20; // r15d
  __int64 v21; // rdx
  ULONG_PTR *v22; // rcx
  ULONG_PTR v23; // r15
  char v24; // [rsp+60h] [rbp-358h] BYREF
  _BYTE v25[3]; // [rsp+61h] [rbp-357h] BYREF
  int v26; // [rsp+64h] [rbp-354h] BYREF
  __int64 v27; // [rsp+68h] [rbp-350h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-348h] BYREF
  _QWORD v29[4]; // [rsp+80h] [rbp-338h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+A0h] [rbp-318h] BYREF
  _QWORD v31[3]; // [rsp+B8h] [rbp-300h] BYREF
  unsigned __int8 v32[176]; // [rsp+D0h] [rbp-2E8h] BYREF
  unsigned __int8 v33[512]; // [rsp+180h] [rbp-238h] BYREF

  v29[3] = a1;
  v27 = 0LL;
  RtlInitUnicodeString(&DestinationString, a4);
  v13 = CreateCompatiblePublicDC(a1, &v27);
  v29[2] = v13;
  if ( !v13 )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2LL * (a5 + 1)) )
    MaximumLength = 2LL * (a5 + 1);
  v17 = AllocCallbackMessage(168, 1u, MaximumLength, v33, 1, 0x200uLL);
  v29[1] = v17;
  if ( !v17 )
  {
    if ( v13 != a1 )
    {
      GreDeleteDC(v13);
      GreDeleteObject(v27);
    }
    return 0LL;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
  if ( v17 != v32 && v17 != v33 )
    PushW32ThreadLock((__int64)v17, v31, (__int64)Win32FreePool);
  *((_QWORD *)v17 + 7) = v13;
  *((_DWORD *)v17 + 16) = a2;
  *((_DWORD *)v17 + 17) = a3;
  *((_DWORD *)v17 + 18) = a5;
  *((_DWORD *)v17 + 19) = a6;
  *((_DWORD *)v17 + 20) = a7;
  *(_OWORD *)(v17 + 88) = *(_OWORD *)a8;
  *(_OWORD *)(v17 + 104) = *(_OWORD *)(a8 + 16);
  *(_OWORD *)(v17 + 120) = *(_OWORD *)(a8 + 32);
  *(_OWORD *)(v17 + 136) = *(_OWORD *)(a8 + 48);
  *((_QWORD *)v17 + 19) = *(_QWORD *)(a8 + 64);
  *((_DWORD *)v17 + 40) = a9;
  *((_DWORD *)v17 + 41) = a10;
  *((_WORD *)v17 + 20) = DestinationString.Length;
  *((_WORD *)v17 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v17,
              (unsigned __int64)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v17 + 6) < 0 )
    goto LABEL_24;
  v19 = GreSaveDC(a1);
  if ( gdwInAtomicOperation )
  {
    v18 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v25, v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v24);
  EtwTraceBeginCallback(79LL);
  *((_QWORD *)v17 + 2) = 0LL;
  v20 = KeUserModeCallback(79LL, v17, *(unsigned int *)v17, v29, &v26);
  EtwTraceEndCallback(79LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v24);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v25, v21);
  GreRestoreDC(a1, v19);
  if ( v13 != a1 )
  {
    if ( v20 < 0 )
      goto LABEL_24;
    NtGdiBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(gpDispInfo + 88LL),
      *(_DWORD *)(gpDispInfo + 92LL),
      v13,
      0,
      0,
      13369376,
      0,
      0);
  }
  if ( v20 >= 0 && v26 == 24 )
  {
    v22 = (ULONG_PTR *)v29[0];
    if ( (unsigned __int64)(v29[0] + 8LL) < v29[0] || v29[0] + 8LL > MmUserProbeAddress )
      v22 = (ULONG_PTR *)MmUserProbeAddress;
    v23 = *v22;
    RegionSize[1] = *v22;
    goto LABEL_25;
  }
LABEL_24:
  LODWORD(v23) = 0;
LABEL_25:
  if ( v13 != a1 )
  {
    GreDeleteDC(v13);
    GreDeleteObject(v27);
  }
  if ( v17 != v32 && v17 != v33 )
  {
    if ( *((_QWORD *)v17 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v17 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v31);
  }
  return (unsigned int)v23;
}
