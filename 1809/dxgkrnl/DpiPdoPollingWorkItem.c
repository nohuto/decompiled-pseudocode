/*
 * XREFs of DpiPdoPollingWorkItem @ 0x1C0277000
 * Callers:
 *     DpiCleanUpGlobalState @ 0x1C026E288 (DpiCleanUpGlobalState.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0020F20 (ExFreeToNPagedLookasideList.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DpiFdoInvalidateChildStatus @ 0x1C0265FCC (DpiFdoInvalidateChildStatus.c)
 */

void __fastcall DpiPdoPollingWorkItem(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  char v2; // r15
  int v3; // r14d
  PVOID v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD v12[10]; // [rsp+30h] [rbp-78h] BYREF

  v2 = (char)Context;
  memset(v12, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v12[1]);
  v3 = 0;
  v12[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v12[3]) = 14;
  LOBYTE(v12[6]) = -1;
  while ( 1 )
  {
    KeWaitForSingleObject(P, Executive, 0, 0, 0LL);
    v4 = Entry;
    if ( Entry == &Entry )
    {
      v4 = 0LL;
      _InterlockedExchange(&dword_1C008E9B8, 0);
    }
    else
    {
      if ( *((PVOID **)Entry + 1) != &Entry || (v5 = *(_QWORD *)Entry, *(PVOID *)(*(_QWORD *)Entry + 8LL) != Entry) )
        __fastfail(3u);
      Entry = *(PVOID *)Entry;
      *(_QWORD *)(v5 + 8) = &Entry;
    }
    KeReleaseMutex((PRKMUTEX)P, 0);
    if ( !v4 )
      break;
    v6 = *(_QWORD *)(*((_QWORD *)v4 + 3) + 64LL);
    if ( !v2 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v6 + 483) )
      {
        DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v6 + 3816), 4023LL);
        DpiCheckForOutstandingD3Requests(v6);
      }
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
      if ( *(_DWORD *)(v6 + 236) != 2 )
      {
        v3 = -1073741810;
        v10 = WdLogNewEntry5_WdWarning(v8, v7, v9);
        *(_QWORD *)(v10 + 24) = *(int *)(v6 + 236);
        goto LABEL_17;
      }
      if ( *(_DWORD *)(v6 + 3888) == 1 || *(_DWORD *)(v6 + 284) != 1 )
      {
        v3 = -1073741661;
        v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
        *(_QWORD *)(v11 + 24) = *(int *)(v6 + 284);
        v10 = v11;
LABEL_17:
        WdLogEvent5_WdWarning(v10);
      }
      else
      {
        v3 = DpiFdoInvalidateChildStatus(
               *((_QWORD *)v4 + 3),
               *((_DWORD *)v4 + 8),
               *((_BYTE *)v4 + 40),
               *((_BYTE *)v4 + 41),
               *((_BYTE *)v4 + 42),
               (__int64)v12);
      }
      if ( *(_BYTE *)(v6 + 483) )
      {
        DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v6 + 3816), 4023LL);
        DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
      KeLeaveCriticalRegion();
    }
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), v4, 0x20u);
    ExFreeToNPagedLookasideList(&stru_1C008E840, v4);
    if ( v3 == 259 )
    {
      _InterlockedExchange(&dword_1C008E9B8, 0);
      KeSetTimer(&stru_1C008E930, (LARGE_INTEGER)-3000000LL, &stru_1C008E970);
      return;
    }
  }
}
