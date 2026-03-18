/*
 * XREFs of xxxClientExtTextOutW @ 0x1C0158550
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0158138 (xxxDrawCaptionTemp.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C023F9CC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C02496C8 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
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

__int64 __fastcall xxxClientExtTextOutW(HDC a1, int a2, int a3, int a4, _OWORD *a5, PCWSTR SourceString, int a7)
{
  HDC CompatiblePublicDC; // rsi
  __int64 MaximumLength; // r8
  __int64 v13; // rdx
  unsigned __int8 *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned int v18; // r12d
  int v19; // r15d
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 *v22; // rcx
  __int64 v23; // r15
  PVOID *v25; // rdx
  char v26; // [rsp+60h] [rbp-308h] BYREF
  _BYTE v27[3]; // [rsp+61h] [rbp-307h] BYREF
  int v28; // [rsp+64h] [rbp-304h] BYREF
  __int64 v29; // [rsp+68h] [rbp-300h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-2F8h] BYREF
  _QWORD v31[4]; // [rsp+80h] [rbp-2E8h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp-2C8h] BYREF
  _QWORD v33[5]; // [rsp+A8h] [rbp-2C0h] BYREF
  unsigned __int8 v34[104]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v35[512]; // [rsp+140h] [rbp-228h] BYREF

  v31[3] = a1;
  memset(v34, 0, sizeof(v34));
  v29 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v31[2] = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= 2 * (unsigned __int64)(unsigned int)(a7 + 1) )
    MaximumLength = 2LL * (unsigned int)(a7 + 1);
  v14 = AllocCallbackMessage(104, 1u, MaximumLength, v35, 1, 0x200uLL);
  v31[1] = v14;
  if ( !v14 )
  {
    if ( CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v29);
    }
    return 0LL;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v15);
  memset(v33, 0, 24);
  if ( v14 != v34 && v14 != v35 )
    PushW32ThreadLock((__int64)v14, v33, (__int64)Win32FreePool);
  *((_QWORD *)v14 + 7) = CompatiblePublicDC;
  *((_DWORD *)v14 + 16) = a2;
  *((_DWORD *)v14 + 17) = a3;
  *((_DWORD *)v14 + 18) = a4;
  if ( a5 )
  {
    *(_OWORD *)(v14 + 76) = *a5;
    *((_DWORD *)v14 + 24) = 1;
  }
  else
  {
    *((_DWORD *)v14 + 24) = 0;
  }
  *((_DWORD *)v14 + 23) = a7;
  *((_WORD *)v14 + 20) = DestinationString.Length;
  *((_WORD *)v14 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v14,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v14 + 6) < 0 )
    goto LABEL_24;
  v18 = GreSaveDC(a1);
  if ( gdwInAtomicOperation )
  {
    v17 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v27,
    v17,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
  EtwTraceBeginCallback(80LL);
  *((_QWORD *)v14 + 2) = 0LL;
  v19 = KeUserModeCallback(80LL, v14, *(unsigned int *)v14, v31, &v28);
  EtwTraceEndCallback(80LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v27,
    v20,
    v21);
  GreRestoreDC(a1, v18);
  if ( CompatiblePublicDC != a1 )
  {
    if ( v19 < 0 )
      goto LABEL_24;
    NtGdiBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(gpDispInfo + 88LL),
      *(_DWORD *)(gpDispInfo + 92LL),
      CompatiblePublicDC,
      0,
      0,
      13369376,
      0,
      0);
  }
  if ( v19 >= 0 && v28 == 24 )
  {
    v22 = (__int64 *)v31[0];
    if ( (unsigned __int64)(v31[0] + 8LL) < v31[0] || v31[0] + 8LL > MmUserProbeAddress )
      v22 = (__int64 *)MmUserProbeAddress;
    v23 = *v22;
    v33[3] = *v22;
    goto LABEL_19;
  }
LABEL_24:
  LODWORD(v23) = 0;
LABEL_19:
  if ( CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v29);
  }
  if ( v14 != v34 && v14 != v35 )
  {
    v25 = (PVOID *)(v14 + 32);
    if ( *((_QWORD *)v14 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v25, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v33, (__int64)v25, v16);
  }
  return (unsigned int)v23;
}
