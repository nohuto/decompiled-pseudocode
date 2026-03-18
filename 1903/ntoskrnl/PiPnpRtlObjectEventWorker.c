/*
 * XREFs of PiPnpRtlObjectEventWorker @ 0x1406F9FC0
 * Callers:
 *     PiDqIrpPropertySet @ 0x1406F3670 (PiDqIrpPropertySet.c)
 *     PiPnpRtlObjectEventCallback @ 0x1406F9F90 (PiPnpRtlObjectEventCallback.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140001CA0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400028D0 (RtlLookupElementGenericTableAvl.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PiPnpRtlObjectEventDispatch @ 0x1405BB4FC (PiPnpRtlObjectEventDispatch.c)
 *     PiPnpRtlEndOperation @ 0x1405BB544 (PiPnpRtlEndOperation.c)
 *     PnpAllocatePWSTR @ 0x1405BC774 (PnpAllocatePWSTR.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD2F8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405BD44C (PiPnpRtlObjectEventCreate.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     PiPnpRtlEnableRemoveOperationDispatch @ 0x1406FA26C (PiPnpRtlEnableRemoveOperationDispatch.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1406FA298 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406FA2C8 (PiDmObjectProcessPropertyChange.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x140714D90 (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140714F18 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x14071CDC8 (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmObjectReleaseLock @ 0x14071CEC4 (PiDmObjectReleaseLock.c)
 *     PiPnpRtlOperationAllocMem @ 0x140863BAC (PiPnpRtlOperationAllocMem.c)
 *     PiPnpRtlOperationFreeMem @ 0x140863BD0 (PiPnpRtlOperationFreeMem.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x140863BEC (PiPnpRtlOperationListAcquireSharedLock.c)
 *     PiPnpRtlOperationListReleaseLock @ 0x140863C1C (PiPnpRtlOperationListReleaseLock.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x1408656F4 (PiDqObjectManagerMakeInconsistent.c)
 */

void __fastcall PiPnpRtlObjectEventWorker(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  char *v5; // rdi
  unsigned int v7; // r15d
  int v10; // r14d
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // rbx
  _DWORD *v14; // rcx
  __int128 *v15; // rax
  const wchar_t *v16; // rsi
  __int128 v17; // xmm0
  unsigned int v18; // r12d
  int v19; // eax
  int PWSTR; // eax
  char *v21; // rcx
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int64 v24; // rdx
  char *v25; // r8
  const wchar_t *v26; // rdx
  _DWORD *v27; // rax
  _DWORD *v28; // rbx
  int v29; // eax
  __int64 v30; // rcx
  int v31; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v33; // rdi
  char *i; // rsi
  __int64 *v35; // rax
  __int64 v36; // rbx
  _QWORD *v37; // rbx
  _QWORD *v38; // rcx
  PVOID *v39; // r8
  _QWORD *v40; // rax
  PVOID *v41; // rdx
  _QWORD *v42; // rax
  __int64 ObjectManagerForPnpObjectType; // rax
  void *Src; // [rsp+30h] [rbp-40h] BYREF
  char v45[4]; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v46; // [rsp+3Ch] [rbp-34h]
  PVOID P[5]; // [rsp+40h] [rbp-30h] BYREF

  v5 = 0LL;
  v46 = a2;
  Src = 0LL;
  v7 = a2;
  memset(P, 0, sizeof(P));
  if ( a2 < 7 )
  {
    if ( a3 == 1 )
      goto LABEL_57;
    if ( (int)PiPnpRtlBeginOperation(P) < 0 )
    {
      v5 = (char *)P[0];
    }
    else
    {
      PiPnpRtlDisableRemoveOperationDispatch();
      v5 = (char *)P[0];
      v10 = PiPnpRtlObjectEventCreate(a1, v7, (__int64)P[0], (char **)&Src);
      PiPnpRtlEnableRemoveOperationDispatch();
      if ( v10 >= 0 )
      {
        if ( !Src )
          goto LABEL_19;
        v11 = a3 - 2;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( !v12 )
          {
            *((_DWORD *)Src + 1) |= 2u;
            PiDmObjectAcquireExclusiveLock(*((_QWORD *)Src + 1));
            v30 = *((_QWORD *)Src + 1);
            v31 = *(_DWORD *)(v30 + 32);
            *(_DWORD *)(v30 + 32) = v31 & 0xFFFFFFFE;
            PiDmObjectReleaseLock(*((_QWORD *)Src + 1));
            if ( (v31 & 1) != 0 )
              PiDmRemoveCacheReferenceForObject(v7, a1);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
            PiPnpRtlOperationListAcquireSharedLock();
            v33 = PiPnpRtlActiveOperations;
            for ( i = (char *)P[0]; (__int64 *)v33 != &PiPnpRtlActiveOperations; v33 = *(_QWORD *)v33 )
            {
              if ( (char *)v33 != i )
              {
                v35 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v33 + 24), &Src);
                if ( v35 )
                {
                  v36 = *v35;
                  RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v33 + 24), v35);
                  v37 = (_QWORD *)(v36 + 56);
                  v38 = *(_QWORD **)(v33 + 136);
                  if ( *v38 != v33 + 128 )
                    goto LABEL_59;
                  *v37 = v33 + 128;
                  v37[1] = v38;
                  *v38 = v37;
                  *(_QWORD *)(v33 + 136) = v37;
                }
              }
            }
            PiPnpRtlOperationListReleaseLock();
            PiPnpRtlObjectEventDispatch((__int64)Src);
            RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(i + 24), &Src);
            v39 = (PVOID *)*((_QWORD *)i + 17);
            v40 = (char *)Src + 56;
            if ( *v39 != i + 128 )
              goto LABEL_59;
            *v40 = i + 128;
            v40[1] = v39;
            *v39 = v40;
            *((_QWORD *)i + 17) = v40;
            ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            Src = 0LL;
            v5 = (char *)P[0];
            goto LABEL_19;
          }
          v13 = (unsigned int)(v12 - 1);
          if ( !(_DWORD)v13 )
          {
            PiDmObjectProcessPropertyChange(
              v7,
              a1,
              *((_QWORD *)Src + 1),
              *(_QWORD *)(a4 + 8),
              *(_QWORD *)(a4 + 16),
              (__int64)v45);
            if ( v45[0] )
              goto LABEL_19;
            PiPnpRtlDisableRemoveOperationDispatch();
            v14 = Src;
            if ( *((_QWORD *)Src + 7) )
              goto LABEL_18;
            v15 = *(__int128 **)(a4 + 16);
            v16 = *(const wchar_t **)(a4 + 8);
            v17 = *v15;
            v18 = *((_DWORD *)v15 + 4);
            P[3] = (PVOID)__PAIR64__(a5, v18);
            *(_OWORD *)&P[1] = v17;
            P[4] = (PVOID)v16;
            if ( *((_DWORD *)Src + 19) )
            {
              do
              {
                if ( v18 == v14[8 * v13 + 24] )
                {
                  v24 = 8LL * (unsigned int)v13;
                  v25 = (char *)P[1] - *(_QWORD *)&v14[v24 + 20];
                  if ( P[1] == *(PVOID *)&v14[v24 + 20] )
                    v25 = (char *)P[2] - *(_QWORD *)&v14[v24 + 22];
                  if ( !v25 && a5 == v14[v24 + 25] )
                  {
                    v26 = *(const wchar_t **)&v14[v24 + 26];
                    if ( v16 == v26 )
                      goto LABEL_28;
                    if ( v16 && v26 )
                    {
                      if ( !wcsicmp(v16, v26) )
                        goto LABEL_28;
                      v14 = Src;
                    }
                  }
                }
                v13 = (unsigned int)(v13 + 1);
              }
              while ( (unsigned int)v13 < v14[19] );
            }
            if ( a5 == 1 )
            {
              v29 = v14[1];
              if ( (v29 & 4) == 0 )
              {
                v14[1] = v29 | 4;
                SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)((char *)Src + 24));
                v14 = Src;
              }
            }
            v19 = v14[18];
            if ( v14[19] == v19 )
            {
              v27 = (_DWORD *)PiPnpRtlOperationAllocMem(32LL * (unsigned int)(2 * v19) + 80);
              v28 = v27;
              if ( !v27 )
              {
                v10 = -1073741670;
LABEL_28:
                v7 = v46;
                goto LABEL_18;
              }
              memmove(v27, Src, 32LL * *((unsigned int *)Src + 19) + 80);
              v28[18] *= 2;
              *(_QWORD *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v5 + 24), &Src) = v28;
              PiPnpRtlOperationFreeMem(Src);
              Src = v28;
            }
            PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a4 + 8), 0x7FFFFFFFuLL, 0x41706E50u, &P[4]);
            v7 = v46;
            v10 = PWSTR;
            if ( PWSTR >= 0 )
            {
              v21 = (char *)Src;
              v22 = *(_OWORD *)&P[3];
              v23 = 32LL * *((unsigned int *)Src + 19);
              *(_OWORD *)((char *)Src + v23 + 80) = *(_OWORD *)&P[1];
              *(_OWORD *)&v21[v23 + 96] = v22;
              ++*((_DWORD *)Src + 19);
            }
LABEL_18:
            PiPnpRtlEnableRemoveOperationDispatch();
            goto LABEL_19;
          }
          if ( (_DWORD)v13 == 1 )
            *((_DWORD *)Src + 1) |= 8u;
        }
        else
        {
          *((_DWORD *)Src + 1) |= 1u;
        }
LABEL_19:
        if ( v10 >= 0 )
        {
LABEL_20:
          if ( v5 )
            PiPnpRtlEndOperation((PVOID **)v5);
          return;
        }
      }
    }
    if ( !Src )
      goto LABEL_57;
    PiPnpRtlDisableRemoveOperationDispatch();
    if ( *((_QWORD *)Src + 7) )
    {
LABEL_56:
      PiPnpRtlEnableRemoveOperationDispatch();
LABEL_57:
      ObjectManagerForPnpObjectType = PiDqGetObjectManagerForPnpObjectType(v7);
      if ( ObjectManagerForPnpObjectType )
        PiDqObjectManagerMakeInconsistent(ObjectManagerForPnpObjectType);
      goto LABEL_20;
    }
    RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v5 + 24), &Src);
    v41 = (PVOID *)*((_QWORD *)v5 + 17);
    v42 = (char *)Src + 56;
    if ( *v41 == v5 + 128 )
    {
      *v42 = v5 + 128;
      v42[1] = v41;
      *v41 = v42;
      *((_QWORD *)v5 + 17) = v42;
      goto LABEL_56;
    }
LABEL_59:
    __fastfail(3u);
  }
}
