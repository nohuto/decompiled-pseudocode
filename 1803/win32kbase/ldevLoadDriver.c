/*
 * XREFs of ldevLoadDriver @ 0x1C0052FC0
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0047950 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C0052E1C (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     ldevUnloadImage @ 0x1C0052F40 (ldevUnloadImage.c)
 *     ldevLoadImage @ 0x1C0053150 (ldevLoadImage.c)
 *     FreeSystemRelativePath @ 0x1C00532A4 (FreeSystemRelativePath.c)
 *     MakeSystemRelativePath @ 0x1C00532E0 (MakeSystemRelativePath.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _wcsicmp @ 0x1C0074044 (_wcsicmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     WinSqmSetString @ 0x1C00BE284 (WinSqmSetString.c)
 *     ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x1C00D3214 (-ldevBindDisplayStub@@YAPEAU_LDEV@@XZ.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C00D32EC (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 */

struct _LDEV *__fastcall ldevLoadDriver(PCWSTR Source, __int64 a2, __int64 a3)
{
  int v3; // esi
  int v4; // r14d
  __int64 v6; // rax
  int v7; // r15d
  int v8; // ebx
  const WCHAR *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _LDEV *Image; // rbx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned int (__fastcall *v21)(__int64, _QWORD, _QWORD *); // rax
  unsigned int (__fastcall *v22)(__int64, __int64, PFILE_OBJECT, __int64); // rax
  __int64 v23; // rax
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v25[3]; // [rsp+40h] [rbp-20h] BYREF
  BOOL v26; // [rsp+58h] [rbp-8h]
  int v27; // [rsp+90h] [rbp+30h]

  v3 = a3;
  v4 = a2;
  v6 = WdLogNewEntry5_WdEvent(Source, a2, a3);
  *(_QWORD *)(v6 + 24) = Source;
  WdLogEvent5_WdEvent(v6);
  if ( !Source || !*Source )
    return 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  v7 = 0;
  Destination.Buffer = 0LL;
  v8 = 0;
  if ( v4 == 1 )
  {
    if ( wcsicmp(Source, L"WORKERDD") && wcsicmp(Source, L"TSDDD") )
    {
      if ( !gbDisableCddRemoteSessionFiltering && (unsigned int)(v3 - 2) <= 1 )
      {
        if ( gbForceCddRemoteSessionBitmapSupport )
          v3 = 3;
        v7 = 1;
        if ( !(unsigned int)MakeSystemRelativePath(Source, &Destination) )
        {
          v20 = WdLogNewEntry5_WdError(v18, v17, v19);
          WdLogEvent5_WdError(v20);
          return 0LL;
        }
      }
    }
    else
    {
      v8 = 1;
    }
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  if ( v8 )
  {
    Image = ldevBindDisplayStub();
    v13 = 1;
  }
  else
  {
    v9 = L"cdd";
    if ( !v7 )
      v9 = Source;
    Image = (struct _LDEV *)ldevLoadImage(v9, v7);
    v13 = v27;
  }
  if ( !Image )
    goto LABEL_15;
  if ( v13 )
  {
    v14 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v14);
LABEL_15:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
    goto LABEL_17;
  }
  v25[2] = Destination.Buffer;
  v25[0] = 0LL;
  v26 = v3 == 3;
  v25[1] = 0LL;
  if ( v4 == 4 )
    WinSqmSetString(v11, v10, Source);
  v21 = *(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD *))(*((_QWORD *)Image + 2) + 32LL);
  if ( !v21
    || !v21(196865LL, (unsigned int)(16 * (v7 + 1)), v25)
    || (unsigned int)(LODWORD(v25[0]) - 0x20000) > 0x10101
    || !(unsigned int)ldevFillTable(Image, v25) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
LABEL_38:
    ldevUnloadImage((__int64)Image);
    Image = 0LL;
    goto LABEL_39;
  }
  *((_DWORD *)Image + 6) = v4;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    PsLeavePriorityRegion();
  }
  v22 = *(unsigned int (__fastcall **)(__int64, __int64, PFILE_OBJECT, __int64))(*((_QWORD *)Image + 112) + 616LL);
  if ( !v22 )
    goto LABEL_39;
  if ( !v22(qword_1C01A1728, qword_1C01A1720, FileObject, qword_1C01A1730) )
    goto LABEL_38;
  *((_DWORD *)Image + 15) = 1;
LABEL_39:
  v23 = WdLogNewEntry5_WdTrace();
  WdLogEvent5_WdTrace(v23);
LABEL_17:
  if ( v7 )
    FreeSystemRelativePath(&Destination);
  v15 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v15 + 24) = Image;
  WdLogEvent5_WdTrace(v15);
  return Image;
}
