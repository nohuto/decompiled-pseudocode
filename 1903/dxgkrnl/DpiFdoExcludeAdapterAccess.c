/*
 * XREFs of DpiFdoExcludeAdapterAccess @ 0x1C029FF70
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008924 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D8BC (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D489C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiRequestIoPowerState @ 0x1C0154BE0 (DpiRequestIoPowerState.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C0246830 (DxgkRequestAsyncDisplaySwitchCallout.c)
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1C02468D4 (DxgkRequestSyncDisplaySwitchCallout.c)
 *     DpiDxgkDdiProtectedCallback @ 0x1C02AEEBC (DpiDxgkDdiProtectedCallback.c)
 */

void __fastcall DpiFdoExcludeAdapterAccess(_QWORD *IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  char *v5; // rcx
  char v6; // r12
  char v7; // r13
  char v8; // r15
  __int64 v9; // rbx
  __int64 SDCFlags; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v23; // r14
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  struct _DXGK_WIN32K_PARAM_DATA v37; // [rsp+30h] [rbp-D0h] BYREF
  PIO_WORKITEM IoWorkItema; // [rsp+50h] [rbp-B0h]
  _QWORD v39[10]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v40[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-48h]
  __int128 v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  __int64 v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  __int64 v47; // [rsp+F0h] [rbp-10h]

  IoWorkItema = IoWorkItem;
  v5 = (char *)(Context + 4);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = IoObject[8];
  if ( *(_BYTE *)(v9 + 480) )
  {
    LODWORD(SDCFlags) = -1073741637;
    v11 = WdLogNewEntry5_WdError(v5, Context, IoWorkItem);
    *(_QWORD *)(v11 + 24) = -1073741637LL;
LABEL_3:
    WdLogEvent5_WdError(v11);
    goto LABEL_23;
  }
  if ( (Context[2] & 1) == 0 )
    goto LABEL_12;
  v12 = *(_QWORD *)(v9 + 5760);
  v42 = 0uLL;
  LOBYTE(IoWorkItem) = 1;
  v41 = 0LL;
  v47 = *(_QWORD *)(v9 + 2672);
  v37.PathsArray = (PVOID)4;
  memset(&v37.ModesArray, 0, 24);
  v44 = 0LL;
  v40[0] = 30;
  v40[1] = 72;
  v43 = 0LL;
  v45 = 43LL;
  v46 = 0LL;
  SMgrGdiCallout(&v37, v12, IoWorkItem, 0LL, 0LL, v5);
  v13 = *(_QWORD *)(v9 + 5760);
  SDCFlags = (int)v37.SDCFlags;
  HIDWORD(v45) = v37.SDCFlags;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v40, v13, v14);
  if ( (int)SDCFlags >= 0 )
  {
LABEL_12:
    if ( (Context[2] & 2) == 0 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v9 + 484) )
        DpiCheckForOutstandingD3Requests(v9);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v9 + 168), 1u);
      KeWaitForSingleObject((PVOID)(v9 + 176), Executive, 0, 0, 0LL);
      v6 = 1;
      if ( *(_DWORD *)(v9 + 236) != 2 || *(_DWORD *)(v9 + 3992) == 1 || *(_DWORD *)(v9 + 284) != 1 )
      {
        LODWORD(SDCFlags) = -1073741661;
        v11 = WdLogNewEntry5_WdError(v20, v19, IoWorkItem);
        *(_QWORD *)(v11 + 24) = -1073741661LL;
        goto LABEL_3;
      }
    }
    v21 = DpiRequestIoPowerState((__int64)IoObject, 5, (__int64)IoWorkItem, *((_DWORD *)Context + 4));
    LODWORD(SDCFlags) = v21;
    if ( v21 >= 0 )
    {
      v7 = 1;
      DpiDxgkDdiProtectedCallback(*(_QWORD *)(v9 + 48), *Context, Context[1], (unsigned int)v21);
      LODWORD(SDCFlags) = DpiRequestIoPowerState((__int64)IoObject, 6, v22, *((_DWORD *)Context + 4));
      if ( (int)SDCFlags >= 0 )
        goto LABEL_24;
      LODWORD(SDCFlags) = 0;
    }
    else if ( v21 != -1071775482 )
    {
      goto LABEL_20;
    }
    v8 = 1;
    goto LABEL_20;
  }
  v17 = WdLogNewEntry5_WdError(v16, v15, IoWorkItem);
  *(_QWORD *)(v17 + 24) = SDCFlags;
  WdLogEvent5_WdError(v17);
LABEL_20:
  if ( (int)SDCFlags >= 0 )
    goto LABEL_24;
  if ( v7 == 1 )
    DpiRequestIoPowerState((__int64)IoObject, 6, v18, *((_DWORD *)Context + 4));
LABEL_23:
  DpiDxgkDdiProtectedCallback(*(_QWORD *)(v9 + 48), *Context, Context[1], (unsigned int)SDCFlags);
LABEL_24:
  if ( v6 == 1 )
  {
    KeReleaseMutex((PRKMUTEX)(v9 + 176), 0);
    if ( *(_BYTE *)(v9 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v9 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 168));
    KeLeaveCriticalRegion();
  }
  if ( (Context[2] & 1) != 0 )
  {
    v37.PathsArray = (PVOID)4;
    *(_QWORD *)&v37.SDCFlags = 0LL;
    *(_QWORD *)&v37.NumPathArrayElements = 1LL;
    v37.ModesArray = 0LL;
    memset(v39, 0, 0x48uLL);
    v23 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(Context + 4);
    v39[8] = *(_QWORD *)(v9 + 2672);
    memset(&v39[1], 0, 36);
    LOBYTE(v24) = 1;
    v39[7] = 0LL;
    v39[0] = 0x480000001ELL;
    v39[6] = 44LL;
    SMgrGdiCallout(&v37, *(_QWORD *)(v9 + 5760), v24, 0LL, 0LL, Context + 4);
    HIDWORD(v39[6]) = v37.SDCFlags;
    SDCFlags = (int)v37.SDCFlags;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v39, *(_QWORD *)(v9 + 5760), v25);
    if ( (v37.SDCFlags & 0x80000000) != 0 )
    {
      v29 = WdLogNewEntry5_WdError(v27, v26, v28);
      *(_QWORD *)(v29 + 24) = SDCFlags;
      WdLogEvent5_WdError(v29);
    }
  }
  else
  {
    v23 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(Context + 4);
  }
  if ( v8 == 1 )
  {
    memset(&v37, 0, sizeof(v37));
    v37.SDCFlags = 143;
    memset(v39, 0, 0x48uLL);
    v39[8] = *(_QWORD *)(v9 + 2672);
    v30 = *((_DWORD *)Context + 4);
    memset(&v39[1], 0, 36);
    v39[7] = 0LL;
    v39[0] = 0x480000001ELL;
    v39[6] = 45LL;
    v31 = *(_QWORD *)(v9 + 5760);
    if ( (v30 & 2) != 0 )
    {
      DxgkRequestAsyncDisplaySwitchCallout(&v37, v23, v31);
    }
    else
    {
      v33 = DxgkRequestSyncDisplaySwitchCallout(&v37, v23, v31);
      SDCFlags = v33;
      if ( v33 < 0 )
      {
        v36 = WdLogNewEntry5_WdError(v35, v34, v32);
        *(_QWORD *)(v36 + 24) = SDCFlags;
        WdLogEvent5_WdError(v36);
      }
    }
    HIDWORD(v39[6]) = SDCFlags;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v39, *(_QWORD *)(v9 + 5760), v32);
  }
  if ( (Context[2] & 2) != 0 )
    KeSetEvent((PRKEVENT)Context[3], 0, 0);
  ExFreePoolWithTag(Context, 0);
  IoFreeWorkItem(IoWorkItema);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 64), IoWorkItema, 0x20u);
}
