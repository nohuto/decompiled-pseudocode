/*
 * XREFs of NtAlpcSetInformation @ 0x1406C2940
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     AlpcpAssociateIoCompletionPort @ 0x1406C2CE4 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x1406C2E60 (AlpcpAdjustCompletionListConcurrencyCount.c)
 *     AlpcpInitializeCompletionList @ 0x1406C2F48 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x1406F94F8 (AlpcpFreeCompletionList.c)
 */

NTSTATUS __cdecl NtAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  size_t v4; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v8; // r14d
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v10; // r13
  unsigned int *v11; // r12
  signed int v12; // edi
  __int32 v13; // esi
  __int32 v14; // esi
  signed int v15; // eax
  __int32 v17; // esi
  __int32 v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  _DWORD *v22; // rdi
  volatile signed __int64 *v23; // rsi
  char v24; // bl
  ULONG_PTR v25; // rcx
  _QWORD *v26; // rdi
  signed __int64 *v27; // rbx
  __int64 v28; // rdx
  _QWORD *v29; // rsi
  volatile signed __int64 *v30; // rdi
  char v31; // bl
  ULONG_PTR v32; // rcx
  _QWORD *v33; // rdi
  volatile signed __int64 *v34; // rsi
  char v35; // bl
  __m128i v36; // xmm0
  int v37; // edx
  KPROCESSOR_MODE v38; // [rsp+30h] [rbp-C8h]
  PVOID Object; // [rsp+38h] [rbp-C0h] BYREF
  unsigned int *v40; // [rsp+40h] [rbp-B8h]
  unsigned int *v41; // [rsp+48h] [rbp-B0h]
  HANDLE Handle; // [rsp+50h] [rbp-A8h]
  _QWORD v43[10]; // [rsp+60h] [rbp-98h] BYREF

  v4 = Length;
  Handle = PortHandle;
  v40 = (unsigned int *)PortInformation;
  memset(v43, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = 0;
  if ( !PortHandle
    || !v40
    && PortInformationClass != AlpcUnregisterCompletionListInformation
    && PortInformationClass != AlpcCompletionListRundownInformation )
  {
    v12 = -1073741811;
    goto LABEL_16;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v38 = PreviousMode;
  v10 = (__int64)v40;
  v11 = v40;
  v41 = v40;
  if ( (_DWORD)v4 && PreviousMode )
  {
    if ( (unsigned int)v4 > 0x48 )
    {
      v12 = -1073741820;
      goto LABEL_16;
    }
    if ( (unsigned __int64)v40 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    v40 = (unsigned int *)v10;
    memmove(v43, (const void *)v10, v4);
    v11 = (unsigned int *)v43;
    v41 = (unsigned int *)v43;
  }
  v12 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = PortInformationClass - 1;
    if ( !v13 )
    {
      if ( (_DWORD)v4 != 72 )
        goto LABEL_70;
      v37 = *v11;
      if ( (*v11 & 0xFC00FFFF) == 0 && ((v37 ^ *((_DWORD *)Object + 64)) & 0x40000) == 0 )
      {
        *((_DWORD *)Object + 64) = v37 | *((_DWORD *)Object + 64) & 0xFC00FFFF;
        goto LABEL_15;
      }
      goto LABEL_64;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      if ( (_DWORD)v4 == 16 )
      {
        v15 = AlpcpAssociateIoCompletionPort(Object, *((_QWORD *)v11 + 1), *(_QWORD *)v11);
LABEL_14:
        v12 = v15;
LABEL_15:
        ObfDereferenceObject(Object);
        goto LABEL_16;
      }
LABEL_70:
      v12 = -1073741820;
      goto LABEL_15;
    }
    v17 = v14 - 3;
    if ( !v17 )
    {
      v12 = (_DWORD)v4 != 16 ? 0xC000000D : 0;
      goto LABEL_15;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( !v19 )
      {
        if ( (_DWORD)v4 )
          goto LABEL_64;
        v29 = Object;
        v30 = (volatile signed __int64 *)((char *)Object + 352);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
        if ( v29[45] )
          AlpcpFreeCompletionList(v29);
        v31 = _InterlockedExchangeAdd64(v30, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v31 & 2) != 0 && (v31 & 4) == 0 )
          ExfTryToWakePushLock(v30);
        v32 = (ULONG_PTR)v30;
        goto LABEL_48;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          if ( v21 == 1 && !(_DWORD)v4 )
          {
            v22 = Object;
            v23 = (volatile signed __int64 *)((char *)Object + 352);
            ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
            if ( *((_QWORD *)v22 + 45) )
            {
              v22[104] &= ~0x10000u;
              v12 = 0;
            }
            else
            {
              v12 = -1073741811;
            }
            v24 = _InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL);
            if ( (v24 & 2) != 0 && (v24 & 4) == 0 )
              ExfTryToWakePushLock(v23);
            v25 = (ULONG_PTR)v23;
LABEL_35:
            KeAbPostRelease(v25);
            goto LABEL_15;
          }
          goto LABEL_64;
        }
        if ( v38 )
          goto LABEL_64;
        ObfReferenceObject(*(PVOID *)v10);
        v33 = Object;
        v34 = (volatile signed __int64 *)((char *)Object + 352);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
        v33[46] = *(_QWORD *)v10;
        v33[47] = *(_QWORD *)(v10 + 8);
        v35 = _InterlockedExchangeAdd64(v34, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v35 & 2) != 0 && (v35 & 4) == 0 )
          ExfTryToWakePushLock(v34);
        v32 = (ULONG_PTR)v34;
LABEL_48:
        KeAbPostRelease(v32);
        v12 = 0;
        goto LABEL_15;
      }
      if ( (_DWORD)v4 == 4 && *v11 )
      {
        v26 = Object;
        v27 = (signed __int64 *)((char *)Object + 352);
        ExAcquirePushLockSharedEx((ULONG_PTR)Object + 352, 0LL);
        if ( v26[45] )
        {
          AlpcpAdjustCompletionListConcurrencyCount(v26, *v11);
          v12 = 0;
        }
        else
        {
          v12 = -1073741811;
        }
        if ( _InterlockedCompareExchange64(v27, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v27);
        v25 = (ULONG_PTR)v27;
        goto LABEL_35;
      }
    }
    else if ( (*((_DWORD *)Object + 104) & 6) == 2 )
    {
      if ( (_DWORD)v4 == 24 )
      {
        v28 = *(_QWORD *)v11;
      }
      else
      {
        if ( (_DWORD)v4 != 16 )
          goto LABEL_64;
        v36 = *(__m128i *)v11;
        v11 = (unsigned int *)v43;
        v28 = v36.m128i_u32[0];
        v43[0] = v36.m128i_u32[0];
        LODWORD(v43[1]) = v36.m128i_i32[1];
        *(_QWORD *)((char *)&v43[1] + 4) = _mm_srli_si128(v36, 8).m128i_u64[0];
        v8 = 1;
      }
      v15 = AlpcpInitializeCompletionList(Object, v28, v11[2], v11[3], v11[4], v8);
      goto LABEL_14;
    }
LABEL_64:
    v12 = -1073741811;
    goto LABEL_15;
  }
LABEL_16:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v12;
}
