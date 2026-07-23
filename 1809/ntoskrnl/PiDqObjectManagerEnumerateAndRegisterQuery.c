/*
 * XREFs of PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405912D0
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x140592044 (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PiDqQueryFreeActiveData @ 0x140591124 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14059272C (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryAppendActionEntry @ 0x1405927B8 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryEnumObject @ 0x140596674 (PiDqQueryEnumObject.c)
 *     PiDmEnumObjectsWithCallback @ 0x140597F5C (PiDmEnumObjectsWithCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14059924C (PiDmListEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1405999C8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140599D30 (PiDmObjectRelease.c)
 *     PiDmObjectIsEnumerable @ 0x14059B4DC (PiDmObjectIsEnumerable.c)
 *     _PnpStringFromGuid @ 0x14059BCE4 (_PnpStringFromGuid.c)
 *     ConstraintEval @ 0x1406BF030 (ConstraintEval.c)
 */

__int64 __fastcall PiDqObjectManagerEnumerateAndRegisterQuery(PERESOURCE Resource, KSPIN_LOCK a2)
{
  __int64 v2; // rax
  int EnumObject; // ebx
  char v6; // r14
  _BYTE *v7; // r12
  struct _KTHREAD *v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  PVOID v13; // rsi
  PVOID v14; // rcx
  ULONG_PTR v15; // rsi
  unsigned int *v17; // rsi
  unsigned int j; // r14d
  _DWORD *v19; // r13
  __int128 *v20; // rax
  __int64 v21; // r9
  __int128 v22; // xmm0
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *SpinLock; // rcx
  const wchar_t *v28; // rsi
  __int64 v29; // rax
  const wchar_t *i; // r14
  __int64 v31; // rax
  int Object; // eax
  PVOID v33; // r14
  __int64 v34; // rax
  struct _KTHREAD *v35; // rax
  char v36; // [rsp+30h] [rbp-A9h]
  PVOID P; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v38; // [rsp+40h] [rbp-99h] BYREF
  _QWORD v39[7]; // [rsp+48h] [rbp-91h] BYREF
  _OWORD v40[2]; // [rsp+80h] [rbp-59h] BYREF
  _BYTE v41[80]; // [rsp+A0h] [rbp-39h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  P = 0LL;
  EnumObject = 0;
  v6 = *(_BYTE *)(v2 + 40) & 1;
  v7 = 0LL;
  v36 = v6;
  memset(v40, 0, sizeof(v40));
  memset(v39, 0, sizeof(v39));
  if ( !v6 )
    goto LABEL_2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(Resource, 1u);
  ExAcquireFastMutex((PFAST_MUTEX)&Resource[1]);
  if ( (HIDWORD(Resource[2].OwnerTable) & 2) != 0 )
  {
    EnumObject = -1073741670;
  }
  else
  {
    SpinLock = (PERESOURCE *)Resource[1].SpinLock;
    if ( *SpinLock != (PERESOURCE)&Resource[1].Address )
      __fastfail(3u);
    *(_QWORD *)a2 = (char *)Resource + 192;
    *(_QWORD *)(a2 + 8) = SpinLock;
    *SpinLock = (PERESOURCE)a2;
    Resource[1].SpinLock = a2;
    ++LODWORD(Resource[2].OwnerTable);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 212));
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&Resource[1]);
  if ( EnumObject >= 0 )
  {
LABEL_2:
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 64, 0LL);
    v9 = *(_QWORD *)(a2 + 24);
    v10 = *(_DWORD *)(v9 + 20);
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          v28 = *(const wchar_t **)(v9 + 32);
          while ( 2 )
          {
            if ( *v28 )
            {
              v29 = -1LL;
              do
                ++v29;
              while ( v28[v29] );
              for ( i = &v28[v29 + 1]; *i; i += v31 + 1 )
              {
                if ( !wcsicmp(v28, i) )
                  goto LABEL_61;
                v31 = -1LL;
                do
                  ++v31;
                while ( i[v31] );
              }
              Object = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, v28, &P);
              EnumObject = Object;
              if ( Object == -1073741772 )
                goto LABEL_61;
              if ( Object >= 0 )
              {
                v33 = P;
                if ( (unsigned __int8)PiDmObjectIsEnumerable((ULONG_PTR)P) )
                  EnumObject = PiDqQueryEnumObject(a2, v33);
                PiDmObjectRelease(v33);
                P = 0LL;
                if ( EnumObject >= 0 )
                {
LABEL_61:
                  v34 = -1LL;
                  do
                    ++v34;
                  while ( v28[v34] );
                  v28 += v34 + 1;
                  continue;
                }
              }
              goto LABEL_12;
            }
            break;
          }
        }
        goto LABEL_10;
      }
      v12 = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, *(_QWORD *)(v9 + 24), &P);
      EnumObject = v12;
      if ( v12 != -1073741772 )
      {
        if ( v12 < 0 )
          goto LABEL_12;
        v13 = P;
        if ( (unsigned __int8)PiDmObjectIsEnumerable((ULONG_PTR)P) )
          EnumObject = PiDqQueryEnumObject(a2, v13);
        v14 = v13;
LABEL_9:
        PiDmObjectRelease(v14);
        if ( EnumObject >= 0 )
          goto LABEL_10;
LABEL_12:
        v15 = a2 + 64;
        ExReleasePushLockEx(a2 + 64, 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v6 = v36;
        goto LABEL_13;
      }
    }
    else
    {
      v17 = (unsigned int *)&PiDqQueryConstraintData;
      EnumObject = -1073741823;
      for ( j = 0; j < 6; ++j )
      {
        v19 = v17;
        if ( *v17 == *(_DWORD *)&Resource[2].ActiveCount )
        {
          v20 = (__int128 *)*((_QWORD *)v17 + 1);
          v21 = v17[4];
          v22 = *v20;
          LODWORD(v40[1]) = *((_DWORD *)v20 + 4);
          v23 = *(_QWORD *)(a2 + 24);
          v40[0] = v22;
          EnumObject = ConstraintEval(*(unsigned int *)(v23 + 80), *(_QWORD *)(v23 + 88), v40, v21, v39);
          if ( EnumObject != -1073741823 )
            break;
        }
        v17 += 8;
      }
      if ( EnumObject < 0 )
      {
        if ( EnumObject != -1073741823 )
          goto LABEL_12;
        EnumObject = PiDmEnumObjectsWithCallback(
                       *(unsigned int *)&Resource[2].ActiveCount,
                       PiDqEnumQueryObjectsCallback,
                       a2);
        if ( EnumObject < 0 )
          goto LABEL_12;
      }
      else if ( LODWORD(v39[5]) == v19[5] )
      {
        if ( LODWORD(v39[5]) == 13 )
        {
          EnumObject = PnpStringFromGuid(v39[6], v41);
          if ( EnumObject < 0 )
            goto LABEL_12;
          v7 = v41;
        }
        else if ( LODWORD(v39[5]) == 18 )
        {
          v7 = (_BYTE *)v39[6];
        }
        v24 = PiDmGetObject((unsigned int)v19[6], v7, &P);
        EnumObject = v24;
        if ( v24 != -1073741772 )
        {
          if ( v24 < 0 )
            goto LABEL_12;
          v25 = PiDmListEnumObjectsWithCallback((unsigned int)v19[7], P, PiDqEnumQueryObjectsCallback, a2);
          v14 = P;
          EnumObject = v25;
          goto LABEL_9;
        }
      }
    }
LABEL_10:
    EnumObject = PiDqQueryActionQueueEntryCreate(0LL, 0LL, 0LL, &v38);
    if ( EnumObject >= 0 )
    {
      PiDqQueryAppendActionEntry(a2, v38);
      *(_DWORD *)(a2 + 216) |= 0x20u;
    }
    goto LABEL_12;
  }
  v15 = a2 + 64;
LABEL_13:
  if ( EnumObject < 0 )
  {
    v35 = KeGetCurrentThread();
    --v35->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v15, 0LL);
    *(_DWORD *)(a2 + 216) |= 1u;
    PiDqQueryFreeActiveData(a2);
    ExReleasePushLockEx(v15, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v6 )
  {
    ExReleaseResourceLite(Resource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)EnumObject;
}
