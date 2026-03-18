/*
 * XREFs of ObQueryNameStringMode @ 0x14062E570
 * Callers:
 *     IopGetRelatedFileName @ 0x1405B510C (IopGetRelatedFileName.c)
 *     IoGetDeviceProperty @ 0x1405BFB40 (IoGetDeviceProperty.c)
 *     EtwpEnumerateAddressSpace @ 0x1405EA704 (EtwpEnumerateAddressSpace.c)
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     SepQueryNameString @ 0x140620310 (SepQueryNameString.c)
 *     sub_140626208 @ 0x140626208 (sub_140626208.c)
 *     PspInitializeFullProcessImageName @ 0x14062B0C8 (PspInitializeFullProcessImageName.c)
 *     ObQueryNameString @ 0x14062BC10 (ObQueryNameString.c)
 *     IopQueryNameInternal @ 0x14062DBA4 (IopQueryNameInternal.c)
 *     NtQueryObject @ 0x14062E0B0 (NtQueryObject.c)
 *     CmpQueryNameString @ 0x14068BC28 (CmpQueryNameString.c)
 *     IopGraftName @ 0x1406CDC58 (IopGraftName.c)
 *     IoRegisterDeviceInterface @ 0x1407373D0 (IoRegisterDeviceInterface.c)
 *     IopErrorLogThread @ 0x140739D70 (IopErrorLogThread.c)
 *     PnpBuildCmResourceList @ 0x140753050 (PnpBuildCmResourceList.c)
 *     IopRaiseHardError @ 0x140853B00 (IopRaiseHardError.c)
 *     PiControlGetDeviceStack @ 0x14087610C (PiControlGetDeviceStack.c)
 *     AlpcpGetPortNameInformation @ 0x140885994 (AlpcpGetPortNameInformation.c)
 *     MmGetFileNameForAddress @ 0x14088697C (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x140886A90 (MmGetFileNameForSection.c)
 *     ObGetObjectInformation @ 0x14089DF44 (ObGetObjectInformation.c)
 *     SmKmFileInfoGetPath @ 0x1408E9390 (SmKmFileInfoGetPath.c)
 *     SmKmStoreFileOpenVolume @ 0x1408EABA8 (SmKmStoreFileOpenVolume.c)
 *     EtwpTraceHandle @ 0x1408F50C4 (EtwpTraceHandle.c)
 *     EtwpObjectHandleEnumCallback @ 0x1408FB3A0 (EtwpObjectHandleEnumCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     PsGetCurrentSilo @ 0x140043C50 (PsGetCurrentSilo.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x1400894F4 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
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
  char *v15; // r12
  unsigned int v16; // edx
  char *v17; // rcx
  char *v18; // rbx
  signed __int64 *v19; // r12
  char *v20; // rbx
  _WORD *v21; // rcx
  size_t v22; // r8
  char *v23; // rcx
  char *v24; // rbx
  __int64 v25; // r12
  signed __int64 *v26; // rbx
  char *v27; // rbx
  size_t v28; // r8
  _WORD *v29; // r13
  int v30; // ebx
  _WORD *v31; // rdx
  char v32; // [rsp+40h] [rbp-138h]
  char v33; // [rsp+41h] [rbp-137h]
  int v34; // [rsp+44h] [rbp-134h]
  unsigned int v35; // [rsp+48h] [rbp-130h]
  char *Object; // [rsp+50h] [rbp-128h]
  unsigned int v37; // [rsp+58h] [rbp-120h]
  _WORD *v38; // [rsp+60h] [rbp-118h]
  char *v39; // [rsp+68h] [rbp-110h]
  char *v40; // [rsp+68h] [rbp-110h]
  char *v41; // [rsp+68h] [rbp-110h]
  char *v42; // [rsp+70h] [rbp-108h]
  char *v43; // [rsp+78h] [rbp-100h]
  char *v44; // [rsp+80h] [rbp-F8h]
  signed __int64 *BugCheckParameter2; // [rsp+88h] [rbp-F0h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-98h]
  struct _KTHREAD *v47; // [rsp+F0h] [rbp-88h]
  struct _KTHREAD *v48; // [rsp+108h] [rbp-70h]
  struct _KTHREAD *v49; // [rsp+118h] [rbp-60h]

  v5 = a3;
  v32 = 1;
  v33 = 0;
  v37 = 0;
  Object = 0LL;
  v34 = -1073741823;
  v8 = (signed __int64 *)(a1 - 48);
  v9 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  if ( (*(a1 - 22) & 2) != 0 )
    v10 = (char *)v8 - ObpInfoMaskToOffset[*(a1 - 22) & 3];
  else
    v10 = 0LL;
  v44 = v10;
  v11 = *(__int64 (__fastcall **)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char))(ObTypeIndexTable[v9] + 160);
  if ( v11 )
  {
    if ( v10 && *((_WORD *)v10 + 4) )
      LOBYTE(v9) = 1;
    else
      v9 = 0LL;
    v34 = v11(a1, v9, a2, a3, a4, a5);
LABEL_7:
    if ( v34 >= 0 )
LABEL_8:
      *(_DWORD *)(a2 + 4) = 0;
  }
  else
  {
    CurrentSilo = PsGetCurrentSilo();
    v14 = (char *)OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO((__int64)CurrentSilo);
    v42 = v14;
    while ( v10 )
    {
      if ( a1 == v14 || a1 == ObpRootDirectoryObject )
      {
        v16 = 2;
LABEL_32:
        v37 = v16 + 18;
        *a4 = v16 + 18;
        if ( v5 < v16 + 18 )
        {
          v34 = -1073741820;
          v32 = 0;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 2), 0LL);
        v15 = *(char **)v44;
        v39 = *(char **)v44;
        if ( *(_QWORD *)v44 )
        {
          ObfReferenceObject(v15);
          Object = v15;
        }
        v35 = *((unsigned __int16 *)v44 + 4) + 2;
        if ( _InterlockedCompareExchange64(v8 + 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v8 + 2);
        KeAbPostRelease((ULONG_PTR)(v8 + 2));
        KeLeaveCriticalRegion();
        v16 = v35;
        v17 = v39;
        while ( v17 != v42 && v17 != ObpRootDirectoryObject && v17 && (*((_DWORD *)v17 + 84) & 0x20) == 0 )
        {
          v47 = KeGetCurrentThread();
          --v47->KernelApcDisable;
          v18 = v17 - 48;
          v19 = (signed __int64 *)(v17 - 32);
          ExAcquirePushLockSharedEx((ULONG_PTR)v19, 0LL);
          if ( (v18[26] & 2) == 0 || (v20 = &v18[-ObpInfoMaskToOffset[v18[26] & 3]]) == 0LL || !*(_QWORD *)v20 )
          {
            if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v19);
            KeAbPostRelease((ULONG_PTR)v19);
            KeLeaveCriticalRegion();
            v16 = v35 + 8;
            break;
          }
          v35 += 2 + *((unsigned __int16 *)v20 + 4);
          v40 = *(char **)v20;
          ObfReferenceObject(*(PVOID *)v20);
          if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v19);
          KeAbPostRelease((ULONG_PTR)v19);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(Object);
          v17 = v40;
          Object = v40;
          v16 = v35;
          if ( v35 > 0xFFFF )
            goto LABEL_37;
        }
        if ( v16 <= 0xFFFF )
        {
          v5 = a3;
          goto LABEL_32;
        }
LABEL_37:
        v34 = -1073741562;
        v32 = 0;
        v5 = a3;
      }
      if ( Object )
      {
        ObfDereferenceObject(Object);
        Object = 0LL;
      }
      if ( !v32 )
        goto LABEL_7;
      if ( (*((_BYTE *)v8 + 26) & 2) != 0 )
        v10 = (char *)v8 - ObpInfoMaskToOffset[*((_BYTE *)v8 + 26) & 3];
      else
        v10 = 0LL;
      v44 = v10;
      if ( v10 )
      {
        v21 = (_WORD *)(a2 + v37 - 2LL);
        *v21 = 0;
        if ( a1 == v42 || a1 == ObpRootDirectoryObject )
        {
LABEL_67:
          *(v21 - 1) = 92;
          v30 = (unsigned __int16)(a2 + v37 - ((_WORD)v21 - 2));
          *(_WORD *)(a2 + 2) = v30;
          *(_WORD *)a2 = a2 + v37 - (_WORD)v21;
          *(_QWORD *)(a2 + 8) = a2 + 16;
          if ( (_WORD *)(a2 + 16) != v21 - 1 )
          {
            memmove((void *)(a2 + 16), v21 - 1, (unsigned __int16)(a2 + v37 - ((_WORD)v21 - 2)));
            *a4 = v30 + 16;
          }
        }
        else
        {
          v22 = *((unsigned __int16 *)v10 + 4);
          v23 = (char *)v21 - v22;
          v38 = v23;
          if ( (unsigned __int64)v23 <= a2 + 16 )
          {
            v33 = 1;
          }
          else
          {
            memmove(v23, *((const void **)v10 + 2), v22);
            v48 = KeGetCurrentThread();
            --v48->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 2), 0LL);
            v24 = *(char **)v10;
            v41 = v24;
            if ( v24 )
            {
              ObfReferenceObject(v24);
              Object = v24;
            }
            if ( _InterlockedCompareExchange64(v8 + 2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v8 + 2);
            KeAbPostRelease((ULONG_PTR)(v8 + 2));
            KeLeaveCriticalRegion();
            while ( 1 )
            {
              if ( v41 == v42 || v41 == ObpRootDirectoryObject || !v41 || (*((_DWORD *)v41 + 84) & 0x20) != 0 )
              {
                v21 = v38;
LABEL_66:
                v5 = a3;
                goto LABEL_67;
              }
              *(v38 - 1) = 92;
              v43 = v41 - 48;
              if ( (*(v41 - 22) & 2) != 0 )
                v25 = (__int64)&v41[-ObpInfoMaskToOffset[*(v41 - 22) & 3] - 48];
              else
                v25 = 0LL;
              v49 = KeGetCurrentThread();
              --v49->KernelApcDisable;
              v26 = (signed __int64 *)(v43 + 16);
              BugCheckParameter2 = (signed __int64 *)(v43 + 16);
              ExAcquirePushLockSharedEx((ULONG_PTR)(v43 + 16), 0LL);
              if ( !v25 || !*(_QWORD *)v25 )
              {
                if ( _InterlockedCompareExchange64(v26, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared(v26);
                KeAbPostRelease((ULONG_PTR)v26);
                KeLeaveCriticalRegion();
                v21 = v38 - 4;
                v31 = v38 - 4;
                if ( (unsigned __int64)(v38 - 4) < a2 + 16 )
                {
                  v21 = (_WORD *)(a2 + 16);
                  v31 = (_WORD *)(a2 + 16);
                }
                *(_DWORD *)v21 = *(_DWORD *)L"...";
                v21[2] = asc_1407933B0[2];
                if ( v31 == (_WORD *)(a2 + 16) )
                  v21 = v31 + 1;
                goto LABEL_66;
              }
              ObfDereferenceObject(Object);
              v27 = *(char **)v25;
              v41 = *(char **)v25;
              ObfReferenceObject(*(PVOID *)v25);
              Object = v27;
              v28 = *(unsigned __int16 *)(v25 + 8);
              v29 = (_WORD *)((char *)v38 - v28 - 2);
              v38 = v29;
              if ( (unsigned __int64)v29 <= a2 + 16 )
                break;
              memmove(v29, *(const void **)(v25 + 16), v28);
              if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(BugCheckParameter2);
              KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
              KeLeaveCriticalRegion();
            }
            v33 = 1;
            if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(BugCheckParameter2);
            KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
            KeLeaveCriticalRegion();
            v5 = a3;
          }
        }
        if ( Object )
          ObfDereferenceObject(Object);
        if ( !v33 )
          goto LABEL_83;
        if ( (*((_BYTE *)v8 + 26) & 2) != 0 )
          v10 = (char *)v8 - ObpInfoMaskToOffset[*((_BYTE *)v8 + 26) & 3];
        else
          v10 = 0LL;
        v44 = v10;
        v33 = 0;
      }
      v14 = v42;
    }
    *a4 = 16;
    if ( v5 >= 0x10 )
    {
      *(_DWORD *)a2 = 0;
      *(_QWORD *)(a2 + 8) = 0LL;
LABEL_83:
      v34 = 0;
      goto LABEL_8;
    }
    return (unsigned int)-1073741820;
  }
  return (unsigned int)v34;
}
