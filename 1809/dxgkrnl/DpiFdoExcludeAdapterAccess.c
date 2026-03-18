/*
 * XREFs of DpiFdoExcludeAdapterAccess @ 0x1C0264AA0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DpiRequestIoPowerState @ 0x1C014314C (DpiRequestIoPowerState.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C0212BC0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1C0212C64 (DxgkRequestSyncDisplaySwitchCallout.c)
 *     DpiDxgkDdiProtectedCallback @ 0x1C0273B9C (DpiDxgkDdiProtectedCallback.c)
 */

void __fastcall DpiFdoExcludeAdapterAccess(_QWORD *IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rbx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // r12
  char v7; // r13
  char v8; // r15
  __int64 SDCFlags; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  char v28; // [rsp+30h] [rbp-D0h]
  struct _DXGK_WIN32K_PARAM_DATA v29; // [rsp+38h] [rbp-C8h] BYREF
  PIO_WORKITEM IoWorkItema; // [rsp+58h] [rbp-A8h]
  _QWORD v31[10]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v32[10]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = IoObject[8];
  v4 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(Context + 4);
  IoWorkItema = IoWorkItem;
  v28 = 0;
  v7 = 0;
  v8 = 0;
  if ( *(_BYTE *)(v3 + 480) )
  {
    LODWORD(SDCFlags) = -1073741637;
    v10 = WdLogNewEntry5_WdError(IoObject);
    *(_QWORD *)(v10 + 24) = -1073741637LL;
LABEL_3:
    WdLogEvent5_WdError(v10);
    goto LABEL_23;
  }
  if ( (Context[2] & 1) == 0 )
    goto LABEL_12;
  memset(&v29, 0, sizeof(v29));
  LODWORD(v29.PathsArray) = 4;
  *(_QWORD *)&v29.NumPathArrayElements = 0LL;
  v29.ModesArray = 0LL;
  memset(v32, 0, 0x48uLL);
  v11 = *(_QWORD *)(v3 + 5536);
  memset(&v32[1], 0, 36);
  LOBYTE(v12) = 1;
  v32[8] = *(_QWORD *)(v3 + 2600);
  v32[0] = 0x480000001ELL;
  v32[6] = 43LL;
  v32[7] = 0LL;
  SMgrGdiCallout(&v29, v11, v12, 0LL, 0LL, v4);
  SDCFlags = (int)v29.SDCFlags;
  HIDWORD(v32[6]) = v29.SDCFlags;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v32);
  if ( (int)SDCFlags >= 0 )
  {
LABEL_12:
    if ( (Context[2] & 2) == 0 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v3 + 483) )
      {
        DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v3 + 3816), 4023LL);
        DpiCheckForOutstandingD3Requests(v3);
      }
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
      KeWaitForSingleObject((PVOID)(v3 + 176), Executive, 0, 0, 0LL);
      v7 = 1;
      if ( *(_DWORD *)(v3 + 236) != 2 || *(_DWORD *)(v3 + 3888) == 1 || *(_DWORD *)(v3 + 284) != 1 )
      {
        LODWORD(SDCFlags) = -1073741661;
        v10 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v10 + 24) = -1073741661LL;
        goto LABEL_3;
      }
    }
    v17 = DpiRequestIoPowerState((__int64)IoObject, 5, (__int64)IoWorkItem, *((_DWORD *)Context + 4));
    LODWORD(SDCFlags) = v17;
    if ( v17 >= 0 )
    {
      v28 = 1;
      DpiDxgkDdiProtectedCallback(*(_QWORD *)(v3 + 48), *Context, Context[1], (unsigned int)v17);
      LODWORD(SDCFlags) = DpiRequestIoPowerState((__int64)IoObject, 6, v18, *((_DWORD *)Context + 4));
      if ( (int)SDCFlags >= 0 )
        goto LABEL_24;
      LODWORD(SDCFlags) = 0;
    }
    else if ( v17 != -1071775482 )
    {
      goto LABEL_20;
    }
    v8 = 1;
    goto LABEL_20;
  }
  v14 = WdLogNewEntry5_WdError(v13);
  *(_QWORD *)(v14 + 24) = SDCFlags;
  WdLogEvent5_WdError(v14);
LABEL_20:
  if ( (int)SDCFlags >= 0 )
    goto LABEL_24;
  if ( v28 == 1 )
    DpiRequestIoPowerState((__int64)IoObject, 6, v15, *((_DWORD *)Context + 4));
LABEL_23:
  DpiDxgkDdiProtectedCallback(*(_QWORD *)(v3 + 48), *Context, Context[1], (unsigned int)SDCFlags);
LABEL_24:
  if ( v7 == 1 )
  {
    KeReleaseMutex((PRKMUTEX)(v3 + 176), 0);
    if ( *(_BYTE *)(v3 + 483) )
    {
      DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v3 + 3816), 4023LL);
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
  }
  if ( (Context[2] & 1) != 0 )
  {
    memset(&v29, 0, sizeof(v29));
    LODWORD(v29.PathsArray) = 4;
    *(_QWORD *)&v29.NumPathArrayElements = 1LL;
    v29.ModesArray = 0LL;
    memset(v31, 0, 0x48uLL);
    v19 = *(_QWORD *)(v3 + 2600);
    memset(&v31[1], 0, 36);
    LOBYTE(v20) = 1;
    v31[7] = 0LL;
    v31[8] = v19;
    v31[0] = 0x480000001ELL;
    v31[6] = 44LL;
    SMgrGdiCallout(&v29, *(_QWORD *)(v3 + 5536), v20, 0LL, 0LL, v4);
    SDCFlags = (int)v29.SDCFlags;
    HIDWORD(v31[6]) = v29.SDCFlags;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v31);
    if ( (v29.SDCFlags & 0x80000000) != 0 )
    {
      v22 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v22 + 24) = SDCFlags;
      WdLogEvent5_WdError(v22);
    }
  }
  if ( v8 == 1 )
  {
    memset(&v29, 0, sizeof(v29));
    v29.SDCFlags = 143;
    memset(v31, 0, 0x48uLL);
    v31[8] = *(_QWORD *)(v3 + 2600);
    v23 = *((_DWORD *)Context + 4);
    memset(&v31[1], 0, 36);
    v31[7] = 0LL;
    v31[0] = 0x480000001ELL;
    v31[6] = 45LL;
    v24 = *(_QWORD *)(v3 + 5536);
    if ( (v23 & 2) != 0 )
    {
      DxgkRequestAsyncDisplaySwitchCallout(&v29, v4, v24);
    }
    else
    {
      v25 = DxgkRequestSyncDisplaySwitchCallout(&v29, v4, v24);
      SDCFlags = v25;
      if ( v25 < 0 )
      {
        v27 = WdLogNewEntry5_WdError(v26);
        *(_QWORD *)(v27 + 24) = SDCFlags;
        WdLogEvent5_WdError(v27);
      }
    }
    HIDWORD(v31[6]) = SDCFlags;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v31);
  }
  if ( (Context[2] & 2) != 0 )
    KeSetEvent((PRKEVENT)Context[3], 0, 0);
  ExFreePoolWithTag(Context, 0);
  IoFreeWorkItem(IoWorkItema);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItema, 0x20u);
}
