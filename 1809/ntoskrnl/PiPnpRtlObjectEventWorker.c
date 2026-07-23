/*
 * XREFs of PiPnpRtlObjectEventWorker @ 0x1406F31C0
 * Callers:
 *     PiDqIrpPropertySet @ 0x1406D6B7C (PiDqIrpPropertySet.c)
 *     PiPnpRtlObjectEventCallback @ 0x1406F3190 (PiPnpRtlObjectEventCallback.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140006BF0 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140006CA0 (RtlDeleteElementGenericTableAvl.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiPnpRtlObjectEventDispatch @ 0x140596C5C (PiPnpRtlObjectEventDispatch.c)
 *     PiPnpRtlEndOperation @ 0x140596CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140597E08 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405990E4 (PiPnpRtlObjectEventCreate.c)
 *     PnpAllocatePWSTR @ 0x14059B42C (PnpAllocatePWSTR.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406F34BC (PiDmObjectProcessPropertyChange.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x1406FA7B0 (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1406FA9D0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x14082C0E8 (PiDqObjectManagerMakeInconsistent.c)
 */

void __fastcall PiPnpRtlObjectEventWorker(__int64 a1, unsigned int a2, int a3, __int64 a4, unsigned int a5)
{
  struct _KTHREAD *v9; // rax
  int PWSTR; // r15d
  void *v11; // rdx
  int v12; // ebx
  int v13; // ebx
  __int64 v14; // rbx
  struct _KTHREAD *v15; // rax
  _DWORD *v16; // rcx
  __int128 *v17; // rax
  const wchar_t *v18; // rdi
  __int128 v19; // xmm0
  unsigned int v20; // r13d
  int v21; // eax
  char *v22; // rcx
  __int128 v23; // xmm1
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  const wchar_t *v27; // rdx
  _DWORD *PoolWithTag; // rax
  _DWORD *v29; // rbx
  _RTL_AVL_TABLE *v30; // rcx
  int v31; // eax
  ULONG_PTR v32; // rcx
  struct _KTHREAD *v33; // rax
  __int64 v34; // rcx
  int v35; // ebx
  struct _KTHREAD *v36; // rax
  struct _KTHREAD *v37; // rax
  __int64 *i; // rdi
  __int64 *v39; // rax
  __int64 v40; // rbx
  _QWORD *v41; // rbx
  void **v42; // rcx
  char *v43; // rbx
  char *v44; // rbx
  char *v45; // rax
  char **v46; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char *v48; // rbx
  char *v49; // rbx
  char *v50; // rax
  char **v51; // rcx
  __int64 ObjectManagerForPnpObjectType; // rax
  void *Src; // [rsp+30h] [rbp-40h] BYREF
  char v54[8]; // [rsp+38h] [rbp-38h] BYREF
  PVOID P; // [rsp+40h] [rbp-30h] BYREF
  __int128 v56; // [rsp+48h] [rbp-28h]
  __int128 v57; // [rsp+58h] [rbp-18h] BYREF

  if ( (int)a2 < 7 )
  {
    P = 0LL;
    Src = 0LL;
    if ( a3 == 1 )
      goto LABEL_59;
    if ( (int)PiPnpRtlBeginOperation(&P) < 0
      || (v9 = KeGetCurrentThread(),
          --v9->KernelApcDisable,
          ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u),
          PWSTR = PiPnpRtlObjectEventCreate(a1, a2, (__int64)P, (char **)&Src),
          ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock),
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread()),
          PWSTR < 0) )
    {
      v11 = Src;
LABEL_54:
      if ( !v11 )
        goto LABEL_59;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
      if ( *((_QWORD *)Src + 7) )
      {
LABEL_58:
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_59:
        ObjectManagerForPnpObjectType = PiDqGetObjectManagerForPnpObjectType(a2);
        if ( ObjectManagerForPnpObjectType )
          PiDqObjectManagerMakeInconsistent(ObjectManagerForPnpObjectType);
        goto LABEL_21;
      }
      v48 = (char *)P;
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)((char *)P + 24), &Src);
      v49 = v48 + 128;
      v50 = (char *)Src + 56;
      v51 = (char **)*((_QWORD *)v49 + 1);
      if ( *v51 == v49 )
      {
        *(_QWORD *)v50 = v49;
        *((_QWORD *)v50 + 1) = v51;
        *v51 = v50;
        *((_QWORD *)v49 + 1) = v50;
        goto LABEL_58;
      }
LABEL_61:
      __fastfail(3u);
    }
    v11 = Src;
    if ( Src )
    {
      v12 = a3 - 2;
      if ( !v12 )
      {
        *((_DWORD *)Src + 1) |= 1u;
        goto LABEL_19;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        *((_DWORD *)Src + 1) |= 2u;
        v32 = *((_QWORD *)Src + 1);
        v33 = KeGetCurrentThread();
        --v33->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v32, 0LL);
        v34 = *((_QWORD *)Src + 1);
        v35 = *(_DWORD *)(v34 + 32);
        *(_DWORD *)(v34 + 32) = v35 & 0xFFFFFFFE;
        ExReleasePushLockEx(*((_QWORD *)Src + 1), 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        if ( (v35 & 1) != 0 )
          PiDmRemoveCacheReferenceForObject(a2, a1);
        v36 = KeGetCurrentThread();
        --v36->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
        v37 = KeGetCurrentThread();
        --v37->KernelApcDisable;
        ExAcquireResourceSharedLite(&PiPnpRtlActiveOperationsLock, 1u);
        for ( i = (__int64 *)PiPnpRtlActiveOperations; i != &PiPnpRtlActiveOperations; i = (__int64 *)*i )
        {
          if ( i != P )
          {
            v39 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(i + 3), &Src);
            if ( v39 )
            {
              v40 = *v39;
              RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(i + 3), v39);
              v41 = (_QWORD *)(v40 + 56);
              v42 = (void **)i[17];
              if ( *v42 != i + 16 )
                goto LABEL_61;
              *v41 = i + 16;
              v41[1] = v42;
              *v42 = v41;
              i[17] = (__int64)v41;
            }
          }
        }
        ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        PiPnpRtlObjectEventDispatch((__int64)Src);
        v43 = (char *)P;
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)((char *)P + 24), &Src);
        v44 = v43 + 128;
        v45 = (char *)Src + 56;
        v46 = (char **)*((_QWORD *)v44 + 1);
        if ( *v46 != v44 )
          goto LABEL_61;
        *((_QWORD *)Src + 8) = v46;
        *(_QWORD *)v45 = v44;
        *v46 = v45;
        *((_QWORD *)v44 + 1) = v45;
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v11 = 0LL;
        Src = 0LL;
        goto LABEL_20;
      }
      v14 = (unsigned int)(v13 - 1);
      if ( !(_DWORD)v14 )
      {
        PiDmObjectProcessPropertyChange(
          a2,
          a1,
          *((_QWORD *)Src + 1),
          *(_QWORD *)(a4 + 8),
          *(_QWORD *)(a4 + 16),
          (__int64)v54);
        if ( v54[0] )
        {
LABEL_19:
          v11 = Src;
          goto LABEL_20;
        }
        v15 = KeGetCurrentThread();
        --v15->KernelApcDisable;
        ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
        v16 = Src;
        if ( !*((_QWORD *)Src + 7) )
        {
          v17 = *(__int128 **)(a4 + 16);
          v18 = *(const wchar_t **)(a4 + 8);
          v19 = *v17;
          v20 = *((_DWORD *)v17 + 4);
          *(_QWORD *)&v57 = __PAIR64__(a5, v20);
          v56 = v19;
          *((_QWORD *)&v57 + 1) = v18;
          if ( *((_DWORD *)Src + 19) )
          {
            do
            {
              if ( v20 == v16[8 * v14 + 24] )
              {
                v25 = 8LL * (unsigned int)v14;
                v26 = v56 - *(_QWORD *)&v16[v25 + 20];
                if ( (_QWORD)v56 == *(_QWORD *)&v16[v25 + 20] )
                  v26 = *((_QWORD *)&v56 + 1) - *(_QWORD *)&v16[v25 + 22];
                if ( !v26 && a5 == v16[v25 + 25] )
                {
                  v27 = *(const wchar_t **)&v16[v25 + 26];
                  if ( v18 == v27 )
                    goto LABEL_18;
                  if ( v18 && v27 )
                  {
                    if ( !wcsicmp(v18, v27) )
                      goto LABEL_18;
                    v16 = Src;
                  }
                }
              }
              v14 = (unsigned int)(v14 + 1);
            }
            while ( (unsigned int)v14 < v16[19] );
          }
          if ( a5 == 1 )
          {
            v31 = v16[1];
            if ( (v31 & 4) == 0 )
            {
              v16[1] = v31 | 4;
              SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)((char *)Src + 24));
              v16 = Src;
            }
          }
          v21 = v16[18];
          if ( v16[19] != v21 )
            goto LABEL_16;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * (unsigned int)(2 * v21) + 80, 0x41706E50u);
          v29 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, Src, 32LL * *((unsigned int *)Src + 19) + 80);
            v30 = (_RTL_AVL_TABLE *)((char *)P + 24);
            v29[18] *= 2;
            *(_QWORD *)RtlLookupElementGenericTableAvl(v30, &Src) = v29;
            ExFreePoolWithTag(Src, 0x41706E50u);
            Src = v29;
LABEL_16:
            PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a4 + 8), 0x7FFFFFFFuLL, 0x41706E50u, (PVOID *)&v57 + 1);
            if ( PWSTR >= 0 )
            {
              v22 = (char *)Src;
              v23 = v57;
              v24 = 32LL * *((unsigned int *)Src + 19);
              *(_OWORD *)((char *)Src + v24 + 80) = v56;
              *(_OWORD *)&v22[v24 + 96] = v23;
              ++*((_DWORD *)Src + 19);
            }
            goto LABEL_18;
          }
          PWSTR = -1073741670;
        }
LABEL_18:
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        goto LABEL_19;
      }
      if ( (_DWORD)v14 == 1 )
      {
        *((_DWORD *)Src + 1) |= 8u;
        goto LABEL_19;
      }
    }
LABEL_20:
    if ( PWSTR >= 0 )
    {
LABEL_21:
      if ( P )
        PiPnpRtlEndOperation((PVOID **)P);
      return;
    }
    goto LABEL_54;
  }
}
