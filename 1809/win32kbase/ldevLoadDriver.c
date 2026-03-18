/*
 * XREFs of ldevLoadDriver @ 0x1C0054000
 * Callers:
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C0053D54 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0055E78 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ldevUnloadImage @ 0x1C0053EB0 (ldevUnloadImage.c)
 *     ldevLoadImage @ 0x1C00542D0 (ldevLoadImage.c)
 *     MakeSystemRelativePath @ 0x1C0054570 (MakeSystemRelativePath.c)
 *     ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x1C005465C (-IsCddCddRemoteSessionFilteringAllowed@@YAHXZ.c)
 *     FreeSystemRelativePath @ 0x1C005467C (FreeSystemRelativePath.c)
 *     ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x1C0056B74 (-ldevBindDisplayStub@@YAPEAU_LDEV@@XZ.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C0056C40 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _wcsicmp @ 0x1C00A680C (_wcsicmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     WinSqmSetString @ 0x1C00F517C (WinSqmSetString.c)
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
  HSEMAPHORE v15; // rcx
  __int64 v16; // rax
  unsigned int (__fastcall *v18)(__int64, _QWORD, _QWORD *); // rax
  HSEMAPHORE v19; // rcx
  unsigned int (__fastcall *v20)(__int64, __int64, PFILE_OBJECT, __int64); // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v27[3]; // [rsp+40h] [rbp-20h] BYREF
  BOOL v28; // [rsp+58h] [rbp-8h]
  int v29; // [rsp+90h] [rbp+30h]

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
      if ( (unsigned int)IsCddCddRemoteSessionFilteringAllowed() && (unsigned int)(v3 - 2) <= 1 )
      {
        if ( gbForceCddRemoteSessionBitmapSupport )
          v3 = 3;
        v7 = 1;
        if ( !(unsigned int)MakeSystemRelativePath(Source, &Destination) )
        {
          v25 = WdLogNewEntry5_WdError(v23, v22, v24);
          WdLogEvent5_WdError(v25);
          return 0LL;
        }
      }
    }
    else
    {
      v8 = 1;
    }
  }
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
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
    v13 = v29;
  }
  if ( !Image )
    goto LABEL_15;
  if ( v13 )
  {
    v14 = WdLogNewEntry5_WdTrace(v11);
    WdLogEvent5_WdTrace(v14);
LABEL_15:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    v15 = ghsemDriverMgmt;
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
    goto LABEL_17;
  }
  v27[2] = Destination.Buffer;
  v27[0] = 0LL;
  v28 = v3 == 3;
  v27[1] = 0LL;
  if ( v4 == 4 )
    WinSqmSetString(v11, v10, Source);
  v18 = *(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD *))(*((_QWORD *)Image + 2) + 32LL);
  if ( !v18
    || !v18(196865LL, (unsigned int)(16 * (v7 + 1)), v27)
    || (unsigned int)(LODWORD(v27[0]) - 0x20000) > 0x10101
    || !(unsigned int)ldevFillTable(Image, v27) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
LABEL_39:
    ldevUnloadImage((__int64)Image);
    Image = 0LL;
    goto LABEL_31;
  }
  *((_DWORD *)Image + 6) = v4;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  v19 = ghsemDriverMgmt;
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion();
  }
  v20 = *(unsigned int (__fastcall **)(__int64, __int64, PFILE_OBJECT, __int64))(*((_QWORD *)Image + 112) + 616LL);
  if ( !v20 )
    goto LABEL_31;
  if ( !v20(qword_1C01CE2C8, qword_1C01CE2C0, FileObject, qword_1C01CE2D0) )
    goto LABEL_39;
  *((_DWORD *)Image + 15) = 1;
LABEL_31:
  v21 = WdLogNewEntry5_WdTrace(v19);
  WdLogEvent5_WdTrace(v21);
LABEL_17:
  if ( v7 )
    FreeSystemRelativePath(&Destination);
  v16 = WdLogNewEntry5_WdTrace(v15);
  *(_QWORD *)(v16 + 24) = Image;
  WdLogEvent5_WdTrace(v16);
  return Image;
}
