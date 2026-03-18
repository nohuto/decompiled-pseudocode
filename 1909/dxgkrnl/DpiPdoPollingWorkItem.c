/*
 * XREFs of DpiPdoPollingWorkItem @ 0x1C02AFBF0
 * Callers:
 *     DpiCleanUpGlobalState @ 0x1C029E0B0 (DpiCleanUpGlobalState.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008B54 (DpiEnableD3Requests.c)
 *     DpiFdoGetChildDescriptor @ 0x1C001A8D8 (DpiFdoGetChildDescriptor.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D90C (DpiCheckForOutstandingD3Requests.c)
 *     ExFreeToNPagedLookasideList @ 0x1C001E8D0 (ExFreeToNPagedLookasideList.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DpiFdoPendingCreatePdoCompletion @ 0x1C029EA68 (DpiFdoPendingCreatePdoCompletion.c)
 *     DpiFdoInvalidateChildStatus @ 0x1C02A1C74 (DpiFdoInvalidateChildStatus.c)
 */

void __fastcall DpiPdoPollingWorkItem(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  char v2; // bl
  int v3; // r13d
  PVOID v4; // r14
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *ChildDescriptor; // rbx
  char v13; // [rsp+40h] [rbp-88h]
  _QWORD v14[10]; // [rsp+50h] [rbp-78h] BYREF

  v2 = (char)Context;
  v13 = (char)Context;
  memset(v14, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v14[1]);
  v3 = 0;
  v14[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v14[3]) = 14;
  LOBYTE(v14[6]) = -1;
  while ( 1 )
  {
    KeWaitForSingleObject(P, Executive, 0, 0, 0LL);
    v4 = Entry;
    if ( Entry == &Entry )
    {
      v4 = 0LL;
      _InterlockedExchange(&dword_1C00A29B8, 0);
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
      if ( *(_BYTE *)(v6 + 484) )
        DpiCheckForOutstandingD3Requests(v6);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
      if ( *(_DWORD *)(v6 + 236) == 2 )
      {
        if ( *(_DWORD *)(v6 + 3992) != 1 && *(_DWORD *)(v6 + 284) == 1 )
        {
          v3 = DpiFdoInvalidateChildStatus(
                 *((_QWORD *)v4 + 3),
                 *((_DWORD *)v4 + 8),
                 *((_BYTE *)v4 + 40),
                 *((_BYTE *)v4 + 41),
                 *((_BYTE *)v4 + 42),
                 1,
                 (__int64)v14);
LABEL_18:
          if ( *(_BYTE *)(v6 + 484) )
            DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
          ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
          KeLeaveCriticalRegion();
          goto LABEL_21;
        }
        v3 = -1073741661;
        v10 = WdLogNewEntry5_WdWarning(v8, v7, v9);
        v11 = *(int *)(v6 + 284);
      }
      else
      {
        v3 = -1073741810;
        v10 = WdLogNewEntry5_WdWarning(v8, v7, v9);
        v11 = *(int *)(v6 + 236);
      }
      *(_QWORD *)(v10 + 24) = v11;
      WdLogEvent5_WdWarning(v10);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v6 + 3304), 1u);
      ChildDescriptor = DpiFdoGetChildDescriptor(v6, *((_DWORD *)v4 + 8));
      KeWaitForSingleObject((PVOID)(v6 + 3408), Executive, 0, 0, 0LL);
      DpiFdoPendingCreatePdoCompletion(*((_QWORD *)v4 + 3), (__int64)ChildDescriptor);
      KeReleaseMutex((PRKMUTEX)(v6 + 3408), 0);
      ExReleaseResourceLite((PERESOURCE)(v6 + 3304));
      KeLeaveCriticalRegion();
      v2 = v13;
      goto LABEL_18;
    }
LABEL_21:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), v4, 0x20u);
    ExFreeToNPagedLookasideList(&stru_1C00A2840, v4);
    if ( v3 == 259 )
    {
      _InterlockedExchange(&dword_1C00A29B8, 0);
      KeSetTimer(&stru_1C00A2930, (LARGE_INTEGER)-3000000LL, &stru_1C00A2970);
      return;
    }
  }
}
