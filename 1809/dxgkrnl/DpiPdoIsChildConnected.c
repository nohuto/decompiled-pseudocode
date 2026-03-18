/*
 * XREFs of DpiPdoIsChildConnected @ 0x1C0144E00
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001E590 (DpiFdoHandleDisplayDetectControl.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C001E720 (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiSignalVideoOutputCreateCompletion @ 0x1C0044F74 (DpiSignalVideoOutputCreateCompletion.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00BCCF0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00BCFB8 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0145088 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryChildStatus @ 0x1C01450A8 (DpiDxgkDdiQueryChildStatus.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C014517C (DxgkAcquireAdapterDdiSync.c)
 */

__int64 __fastcall DpiPdoIsChildConnected(__int64 a1, int a2, char a3, char a4, char *a5, bool *a6)
{
  bool v6; // bl
  __int64 v7; // r14
  __int64 v10; // r13
  __int64 ChildStatus; // r15
  PVOID *ChildDescriptor; // rax
  __int64 v13; // rcx
  PVOID *v14; // rdi
  unsigned int v15; // eax
  int v16; // r12d
  __int64 v17; // rcx
  __int64 v18; // r13
  __int64 v19; // r9
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _DWORD v30[2]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v31; // [rsp+50h] [rbp-59h]
  _QWORD v32[10]; // [rsp+60h] [rbp-49h] BYREF

  v6 = 0;
  v7 = *(_QWORD *)(a1 + 64);
  v10 = a1;
  LODWORD(ChildStatus) = 0;
  *a5 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v7 + 3232), 1u);
  ChildDescriptor = (PVOID *)DpiFdoGetChildDescriptor(v7, a2);
  v14 = ChildDescriptor;
  if ( !ChildDescriptor )
  {
    v24 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v24 + 24) = 0LL;
    WdLogEvent5_WdError(v24);
    v16 = a2;
    goto LABEL_16;
  }
  if ( *(_DWORD *)ChildDescriptor == 1 )
  {
    v15 = *((_DWORD *)ChildDescriptor + 1);
    if ( v15 >= 0xF )
      v6 = v15 <= 0x11;
  }
  switch ( *((_DWORD *)v14 + 4) )
  {
    case 1:
      *a5 = 1;
      break;
    case 3:
LABEL_10:
      v16 = a2;
      v17 = *(_QWORD *)(v7 + 3792);
      v18 = *(_QWORD *)(v7 + 40);
      v31 = 0LL;
      v30[1] = a2;
      v30[0] = v6 ? 3 : 1;
      DxgkAcquireAdapterCoreSync(v17, 1);
      KeWaitForSingleObject(v14[9], Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v7 + 3792), 1LL);
      LOBYTE(v19) = a4;
      ChildStatus = (int)DpiDxgkDdiQueryChildStatus(v18, *(_QWORD *)(v7 + 48), v30, v19);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(v7 + 3792));
      KeReleaseMutex((PRKMUTEX)v14[9], 0);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v7 + 3792));
      if ( (int)ChildStatus < 0 )
      {
        v26 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v26 + 24) = *(_QWORD *)(v18 + 208);
        *(_QWORD *)(v26 + 32) = ChildStatus;
        WdLogEvent5_WdError(v26);
        goto LABEL_16;
      }
      v10 = a1;
      *a5 = v31;
      goto LABEL_12;
    case 4:
      if ( (!v6 || *((_DWORD *)v14 + 1) != 15 || *(_QWORD *)(v7 + 3160)) && a3 )
        goto LABEL_10;
      *a5 = *((_BYTE *)v14 + 65);
      break;
    default:
      v25 = WdLogNewEntry5_WdError((unsigned int)(*((_DWORD *)v14 + 4) - 3));
      *(_QWORD *)(v25 + 24) = 0LL;
      WdLogEvent5_WdError(v25);
      break;
  }
  v16 = a2;
LABEL_12:
  v21 = *a5;
  if ( !*a5 && *((_BYTE *)v14 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v7 + 3336), Executive, 0, 0, 0LL);
    *((_BYTE *)v14 + 64) = 0;
    KeReleaseMutex((PRKMUTEX)(v7 + 3336), 0);
    DpiSignalVideoOutputCreateCompletion(v10);
    v21 = *a5;
  }
  *a6 = v21 == (v14[6] == 0LL);
LABEL_16:
  ExReleaseResourceLite((PERESOURCE)(v7 + 3232));
  KeLeaveCriticalRegion();
  memset(v32, 0, 0x48uLL);
  v22 = *(_QWORD *)(v7 + 2600);
  memset(&v32[1], 0, 36);
  HIDWORD(v32[7]) = (unsigned __int8)*a5;
  v32[0] = 0x480000001ELL;
  LODWORD(v32[6]) = 38;
  HIDWORD(v32[6]) = v16;
  LODWORD(v32[7]) = ChildStatus;
  v32[8] = v22;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v32);
  return (unsigned int)ChildStatus;
}
