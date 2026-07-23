/*
 * XREFs of ObQueryNameStringMode @ 0x140662110
 * Callers:
 *     sub_140587D3C @ 0x140587D3C (sub_140587D3C.c)
 *     IoGetDeviceProperty @ 0x1405886E0 (IoGetDeviceProperty.c)
 *     MmQueryVirtualMemory @ 0x1405EF910 (MmQueryVirtualMemory.c)
 *     EtwpEnumerateAddressSpace @ 0x1405F6E18 (EtwpEnumerateAddressSpace.c)
 *     SepQueryNameString @ 0x14065ED54 (SepQueryNameString.c)
 *     PspInitializeFullProcessImageName @ 0x14065FCD4 (PspInitializeFullProcessImageName.c)
 *     ObQueryNameString @ 0x140660820 (ObQueryNameString.c)
 *     IopQueryNameInternal @ 0x140661764 (IopQueryNameInternal.c)
 *     NtQueryObject @ 0x140661C70 (NtQueryObject.c)
 *     CmpQueryNameString @ 0x140684814 (CmpQueryNameString.c)
 *     IopGraftName @ 0x1406AD50C (IopGraftName.c)
 *     IoRegisterDeviceInterface @ 0x14070AC20 (IoRegisterDeviceInterface.c)
 *     IopErrorLogThread @ 0x14070D630 (IopErrorLogThread.c)
 *     PnpBuildCmResourceList @ 0x14072F9B0 (PnpBuildCmResourceList.c)
 *     IopGetRelatedFileName @ 0x14081AE0C (IopGetRelatedFileName.c)
 *     IopRaiseHardError @ 0x14081B6D0 (IopRaiseHardError.c)
 *     PiControlGetDeviceStack @ 0x14083CB14 (PiControlGetDeviceStack.c)
 *     AlpcpGetPortNameInformation @ 0x14084BE70 (AlpcpGetPortNameInformation.c)
 *     MmGetFileNameForAddress @ 0x14084CEB0 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x14084CFC4 (MmGetFileNameForSection.c)
 *     ObGetObjectInformation @ 0x140862EC0 (ObGetObjectInformation.c)
 *     SmKmFileInfoGetPath @ 0x1408ADDC8 (SmKmFileInfoGetPath.c)
 *     SmKmStoreFileOpenVolume @ 0x1408AF540 (SmKmStoreFileOpenVolume.c)
 *     EtwpTraceHandle @ 0x1408B9ED0 (EtwpTraceHandle.c)
 *     EtwpObjectHandleEnumCallback @ 0x1408BFEC0 (EtwpObjectHandleEnumCallback.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14004D350 (PsGetCurrentSilo.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x1400DDBCC (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall ObQueryNameStringMode(char *a1, __int64 a2, unsigned int a3, _DWORD *a4, char a5)
{
  unsigned int v5; // r13d
  signed __int64 *v8; // rdi
  unsigned __int64 v9; // rdx
  char *v10; // rbx
  __int64 (__fastcall *v11)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char); // rax
  struct _LIST_ENTRY *CurrentSilo; // rax
  char *v14; // rax
  struct _KTHREAD *CurrentThread; // rax
  char *v16; // rbx
  unsigned int v17; // edx
  char *v18; // rcx
  struct _KTHREAD *v19; // rax
  char *v20; // rbx
  signed __int64 *v21; // r12
  char *v22; // rbx
  _WORD *v23; // r13
  _WORD *v24; // rcx
  size_t v25; // r8
  char *v26; // rcx
  struct _KTHREAD *v27; // rax
  char *v28; // rbx
  __int64 v29; // r12
  struct _KTHREAD *v30; // rax
  signed __int64 *v31; // rbx
  char *v32; // rbx
  size_t v33; // r8
  _WORD *v34; // r13
  int v35; // ebx
  _WORD *v36; // r8
  _WORD *v37; // rdx
  char v38; // [rsp+40h] [rbp-A8h]
  char v39; // [rsp+41h] [rbp-A7h]
  int v40; // [rsp+44h] [rbp-A4h]
  unsigned int v41; // [rsp+48h] [rbp-A0h]
  char *Object; // [rsp+50h] [rbp-98h]
  unsigned int v43; // [rsp+58h] [rbp-90h]
  _WORD *v44; // [rsp+60h] [rbp-88h]
  signed __int64 *BugCheckParameter2; // [rsp+68h] [rbp-80h]
  char *v46; // [rsp+70h] [rbp-78h]
  char *v47; // [rsp+70h] [rbp-78h]
  char *v48; // [rsp+70h] [rbp-78h]
  char *v49; // [rsp+78h] [rbp-70h]
  char *v50; // [rsp+80h] [rbp-68h]
  char *v51; // [rsp+88h] [rbp-60h]

  v5 = a3;
  v38 = 1;
  v39 = 0;
  v43 = 0;
  Object = 0LL;
  v40 = -1073741823;
  v8 = (signed __int64 *)(a1 - 48);
  v9 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  if ( (*(a1 - 22) & 2) != 0 )
    v10 = (char *)v8 - ObpInfoMaskToOffset[*(a1 - 22) & 3];
  else
    v10 = 0LL;
  v51 = v10;
  v11 = *(__int64 (__fastcall **)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char))(ObTypeIndexTable[v9] + 160);
  if ( v11 )
  {
    if ( v10 && *((_WORD *)v10 + 4) )
      LOBYTE(v9) = 1;
    else
      v9 = 0LL;
    v40 = v11(a1, v9, a2, a3, a4, a5);
LABEL_9:
    if ( v40 >= 0 )
LABEL_10:
      *(_DWORD *)(a2 + 4) = 0;
    return (unsigned int)v40;
  }
  CurrentSilo = PsGetCurrentSilo();
  v14 = (char *)OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO((__int64)CurrentSilo);
  v49 = v14;
  while ( v10 )
  {
    if ( a1 == v14 || a1 == ObpRootDirectoryObject )
    {
      v17 = 2;
LABEL_34:
      v43 = v17 + 18;
      *a4 = v17 + 18;
      if ( v5 < v17 + 18 )
      {
        v40 = -1073741820;
        v38 = 0;
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 2), 0LL);
      v16 = *(char **)v51;
      v46 = *(char **)v51;
      if ( *(_QWORD *)v51 )
      {
        ObfReferenceObject(v16);
        Object = v16;
      }
      v41 = *((unsigned __int16 *)v51 + 4) + 2;
      if ( _InterlockedCompareExchange64(v8 + 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8 + 2);
      KeAbPostRelease((ULONG_PTR)(v8 + 2));
      KeLeaveCriticalRegion();
      v17 = v41;
      v18 = v46;
      while ( v18 != v49 && v18 != ObpRootDirectoryObject && v18 && (*((_DWORD *)v18 + 84) & 0x20) == 0 )
      {
        v19 = KeGetCurrentThread();
        --v19->KernelApcDisable;
        v20 = v18 - 48;
        v21 = (signed __int64 *)(v18 - 32);
        ExAcquirePushLockSharedEx((ULONG_PTR)v21, 0LL);
        if ( (v20[26] & 2) == 0 || (v22 = &v20[-ObpInfoMaskToOffset[v20[26] & 3]]) == 0LL || !*(_QWORD *)v22 )
        {
          if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v21);
          KeAbPostRelease((ULONG_PTR)v21);
          KeLeaveCriticalRegion();
          v17 = v41 + 8;
          break;
        }
        v41 += 2 + *((unsigned __int16 *)v22 + 4);
        v47 = *(char **)v22;
        ObfReferenceObject(*(PVOID *)v22);
        if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v21);
        KeAbPostRelease((ULONG_PTR)v21);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(Object);
        v18 = v47;
        Object = v47;
        v17 = v41;
        if ( v41 > 0xFFFF )
          goto LABEL_39;
      }
      if ( v17 <= 0xFFFF )
      {
        v5 = a3;
        goto LABEL_34;
      }
LABEL_39:
      v40 = -1073741562;
      v38 = 0;
      v5 = a3;
    }
    if ( Object )
    {
      ObfDereferenceObject(Object);
      Object = 0LL;
    }
    if ( !v38 )
      goto LABEL_9;
    if ( (*((_BYTE *)v8 + 26) & 2) != 0 )
      v10 = (char *)v8 - ObpInfoMaskToOffset[*((_BYTE *)v8 + 26) & 3];
    else
      v10 = 0LL;
    v51 = v10;
    if ( !v10 )
      goto LABEL_91;
    v23 = (_WORD *)(a2 + 16);
    v24 = (_WORD *)(a2 + v43 - 2LL);
    *v24 = 0;
    if ( a1 == v49 || a1 == ObpRootDirectoryObject )
      goto LABEL_68;
    v25 = *((unsigned __int16 *)v10 + 4);
    v26 = (char *)v24 - v25;
    v44 = v26;
    if ( v26 > (char *)v23 )
    {
      memmove(v26, *((const void **)v10 + 2), v25);
      v27 = KeGetCurrentThread();
      --v27->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 2), 0LL);
      v28 = *(char **)v10;
      v48 = v28;
      if ( v28 )
      {
        ObfReferenceObject(v28);
        Object = v28;
      }
      if ( _InterlockedCompareExchange64(v8 + 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8 + 2);
      KeAbPostRelease((ULONG_PTR)(v8 + 2));
      KeLeaveCriticalRegion();
      while ( 1 )
      {
        if ( v48 == v49 || v48 == ObpRootDirectoryObject || !v48 || (*((_DWORD *)v48 + 84) & 0x20) != 0 )
        {
          v24 = v44;
          v23 = (_WORD *)(a2 + 16);
          goto LABEL_68;
        }
        *(v44 - 1) = 92;
        v50 = v48 - 48;
        v29 = (*(v48 - 22) & 2) != 0 ? (__int64)&v48[-ObpInfoMaskToOffset[*(v48 - 22) & 3] - 48] : 0LL;
        v30 = KeGetCurrentThread();
        --v30->KernelApcDisable;
        v31 = (signed __int64 *)(v50 + 16);
        BugCheckParameter2 = (signed __int64 *)(v50 + 16);
        ExAcquirePushLockSharedEx((ULONG_PTR)(v50 + 16), 0LL);
        if ( !v29 || !*(_QWORD *)v29 )
          break;
        ObfDereferenceObject(Object);
        v32 = *(char **)v29;
        v48 = *(char **)v29;
        ObfReferenceObject(*(PVOID *)v29);
        Object = v32;
        v33 = *(unsigned __int16 *)(v29 + 8);
        v34 = (_WORD *)((char *)v44 - v33 - 2);
        v44 = v34;
        if ( (unsigned __int64)v34 <= a2 + 16 )
        {
          v39 = 1;
          if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(BugCheckParameter2);
          KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
          KeLeaveCriticalRegion();
          goto LABEL_81;
        }
        memmove(v34, *(const void **)(v29 + 16), v33);
        if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(BugCheckParameter2);
        KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
        KeLeaveCriticalRegion();
      }
      if ( _InterlockedCompareExchange64(v31, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v31);
      KeAbPostRelease((ULONG_PTR)v31);
      KeLeaveCriticalRegion();
      v24 = v44 - 4;
      v36 = v44 - 4;
      v37 = v44 - 4;
      v23 = (_WORD *)(a2 + 16);
      if ( (unsigned __int64)(v44 - 4) < a2 + 16 )
      {
        v24 = (_WORD *)(a2 + 16);
        v36 = (_WORD *)(a2 + 16);
        v37 = (_WORD *)(a2 + 16);
      }
      *(_DWORD *)v24 = *(_DWORD *)L"...";
      v24[2] = asc_14076B670[2];
      if ( v36 == v23 )
        v24 = v37 + 1;
LABEL_68:
      *(v24 - 1) = 92;
      v35 = (unsigned __int16)(a2 + v43 - ((_WORD)v24 - 2));
      *(_WORD *)(a2 + 2) = v35;
      *(_WORD *)a2 = a2 + v43 - (_WORD)v24;
      *(_QWORD *)(a2 + 8) = v23;
      if ( v23 != v24 - 1 )
      {
        memmove(v23, v24 - 1, (unsigned __int16)(a2 + v43 - ((_WORD)v24 - 2)));
        *a4 = v35 + 16;
      }
      goto LABEL_81;
    }
    v39 = 1;
LABEL_81:
    if ( Object )
      ObfDereferenceObject(Object);
    if ( !v39 )
      goto LABEL_84;
    if ( (*((_BYTE *)v8 + 26) & 2) != 0 )
      v10 = (char *)v8 - ObpInfoMaskToOffset[*((_BYTE *)v8 + 26) & 3];
    else
      v10 = 0LL;
    v51 = v10;
    v39 = 0;
    v5 = a3;
LABEL_91:
    v14 = v49;
  }
  *a4 = 16;
  if ( v5 >= 0x10 )
  {
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 8) = 0LL;
LABEL_84:
    v40 = 0;
    goto LABEL_10;
  }
  return (unsigned int)-1073741820;
}
