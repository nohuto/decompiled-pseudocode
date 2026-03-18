/*
 * XREFs of DpiPdoIsChildConnected @ 0x1C015B218
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001E240 (DpiFdoHandleDisplayDetectControl.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C001A8D8 (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00D0970 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00D1A5C (DxgkAcquireAdapterCoreSync.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0157B30 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0157B64 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryChildStatus @ 0x1C015B4A4 (DpiDxgkDdiQueryChildStatus.c)
 *     DpiFdoPendingCreatePdoCompletion @ 0x1C029EA68 (DpiFdoPendingCreatePdoCompletion.c)
 */

__int64 __fastcall DpiPdoIsChildConnected(__int64 a1, int a2, char a3, char a4, char *a5, bool *a6)
{
  bool v6; // bl
  __int64 v7; // r14
  __int64 v10; // r13
  __int64 ChildStatus; // r15
  PVOID *ChildDescriptor; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  const GUID *v15; // r8
  PVOID *v16; // rdi
  unsigned int v17; // eax
  int v18; // r12d
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  const GUID *v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  char v29; // al
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _DWORD v39[2]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v40; // [rsp+50h] [rbp-59h]
  _QWORD v41[10]; // [rsp+60h] [rbp-49h] BYREF

  v6 = 0;
  v7 = *(_QWORD *)(a1 + 64);
  v10 = a1;
  LODWORD(ChildStatus) = 0;
  *a5 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v7 + 3304), 1u);
  ChildDescriptor = (PVOID *)DpiFdoGetChildDescriptor(v7, a2);
  v16 = ChildDescriptor;
  if ( !ChildDescriptor )
  {
    v33 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v33 + 24) = 0LL;
    WdLogEvent5_WdError(v33);
    v18 = a2;
    goto LABEL_16;
  }
  if ( *(_DWORD *)ChildDescriptor == 1 )
  {
    v17 = *((_DWORD *)ChildDescriptor + 1);
    if ( v17 >= 0xF )
      v6 = v17 <= 0x11;
  }
  switch ( *((_DWORD *)v16 + 4) )
  {
    case 1:
      *a5 = 1;
      break;
    case 3:
LABEL_10:
      v40 = 0LL;
      v18 = a2;
      v19 = *(_QWORD *)(v7 + 3896);
      v20 = *(_QWORD *)(v7 + 40);
      v39[1] = a2;
      v39[0] = v6 ? 3 : 1;
      DxgkAcquireAdapterCoreSync(v19, 1, v15);
      KeWaitForSingleObject(v16[9], Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v7 + 3896), 1LL, v21);
      LOBYTE(v22) = a4;
      ChildStatus = (int)DpiDxgkDdiQueryChildStatus(v20, *(_QWORD *)(v7 + 48), v39, v22);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v7 + 3896), v23, v24);
      KeReleaseMutex((PRKMUTEX)v16[9], 0);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v7 + 3896), 1u, v25);
      if ( (int)ChildStatus < 0 )
      {
        v35 = WdLogNewEntry5_WdError(v27, v26, v28);
        *(_QWORD *)(v35 + 24) = *(_QWORD *)(v20 + 208);
        *(_QWORD *)(v35 + 32) = ChildStatus;
        WdLogEvent5_WdError(v35);
        goto LABEL_16;
      }
      v10 = a1;
      *a5 = v40;
      goto LABEL_12;
    case 4:
      if ( (!v6 || *((_DWORD *)v16 + 1) != 15 || *(_QWORD *)(v7 + 3232)) && a3 )
        goto LABEL_10;
      *a5 = *((_BYTE *)v16 + 65);
      break;
    default:
      v34 = WdLogNewEntry5_WdError((unsigned int)(*((_DWORD *)v16 + 4) - 3), 1LL, v15);
      *(_QWORD *)(v34 + 24) = 0LL;
      WdLogEvent5_WdError(v34);
      break;
  }
  v18 = a2;
LABEL_12:
  v29 = *a5;
  if ( !*a5 && *((_BYTE *)v16 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v7 + 3408), Executive, 0, 0, 0LL);
    DpiFdoPendingCreatePdoCompletion(v10, v16);
    KeReleaseMutex((PRKMUTEX)(v7 + 3408), 0);
    v29 = *a5;
  }
  *a6 = v29 == (v16[6] == 0LL);
LABEL_16:
  ExReleaseResourceLite((PERESOURCE)(v7 + 3304));
  KeLeaveCriticalRegion();
  memset(v41, 0, 0x48uLL);
  v30 = *(_QWORD *)(v7 + 2672);
  memset(&v41[1], 0, 36);
  HIDWORD(v41[7]) = (unsigned __int8)*a5;
  v41[0] = 0x480000001ELL;
  LODWORD(v41[6]) = 38;
  HIDWORD(v41[6]) = v18;
  LODWORD(v41[7]) = ChildStatus;
  v41[8] = v30;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v41, *(_QWORD *)(v7 + 5760), v31);
  return (unsigned int)ChildStatus;
}
