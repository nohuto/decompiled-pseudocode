/*
 * XREFs of ldevLoadDriver @ 0x1C0048C60
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00479C0 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C00489CC (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     ldevUnloadImage @ 0x1C0048B20 (ldevUnloadImage.c)
 *     ldevLoadImage @ 0x1C0048F40 (ldevLoadImage.c)
 *     MakeSystemRelativePath @ 0x1C0049260 (MakeSystemRelativePath.c)
 *     ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x1C004934C (-IsCddCddRemoteSessionFilteringAllowed@@YAHXZ.c)
 *     FreeSystemRelativePath @ 0x1C004936C (FreeSystemRelativePath.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x1C009C05C (-ldevBindDisplayStub@@YAPEAU_LDEV@@XZ.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C009C128 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     _wcsicmp @ 0x1C00BB41C (_wcsicmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     WinSqmSetString @ 0x1C012107C (WinSqmSetString.c)
 */

struct _LDEV *__fastcall ldevLoadDriver(PCWSTR Source, __int64 a2, __int64 a3)
{
  int v3; // esi
  int v4; // r14d
  __int64 v6; // rax
  int v7; // r15d
  int v8; // ebx
  const wchar_t *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _LDEV *Image; // rbx
  int v13; // eax
  __int64 v14; // rax
  HSEMAPHORE v15; // rcx
  __int64 v16; // rax
  unsigned int (__fastcall *v18)(__int64, _QWORD, PCWSTR *); // rax
  HSEMAPHORE v19; // rcx
  unsigned int (__fastcall *v20)(__int64, __int64, PFILE_OBJECT, __int64); // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-30h] BYREF
  PCWSTR v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+48h] [rbp-18h]
  PWSTR Buffer; // [rsp+50h] [rbp-10h]
  BOOL v30; // [rsp+58h] [rbp-8h]
  int v31; // [rsp+5Ch] [rbp-4h]
  int v32; // [rsp+90h] [rbp+30h] BYREF

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
    v27 = Source;
    LODWORD(v28) = v4;
    v9 = L"cdd";
    if ( !v7 )
      LODWORD(v9) = (_DWORD)Source;
    HIDWORD(v28) = v3;
    Image = (struct _LDEV *)ldevLoadImage((_DWORD)v9, 0, (unsigned int)&v32, 1, v7, (__int64)&v27);
    v13 = v32;
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
  Buffer = Destination.Buffer;
  v27 = 0LL;
  v30 = v3 == 3;
  v28 = 0LL;
  v31 = 0;
  if ( v4 == 4 )
    WinSqmSetString(v11, v10, Source);
  v18 = *(unsigned int (__fastcall **)(__int64, _QWORD, PCWSTR *))(*((_QWORD *)Image + 2) + 32LL);
  if ( !v18
    || !v18(196865LL, (unsigned int)(16 * (v7 + 1)), &v27)
    || (unsigned int)((_DWORD)v27 - 0x20000) > 0x10101
    || !(unsigned int)ldevFillTable(Image, &v27) )
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
  if ( !v20(qword_1C0215B78, qword_1C0215B70, FileObject, qword_1C0215B80) )
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
