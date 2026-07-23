/*
 * XREFs of FsRtlNotifyFilterReportChangeLiteEx @ 0x1406A2100
 * Callers:
 *     FsRtlNotifyFilterReportChangeLite @ 0x140817C80 (FsRtlNotifyFilterReportChangeLite.c)
 * Callees:
 *     RtlUIntAdd @ 0x140001568 (RtlUIntAdd.c)
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1400901D0 (PsReturnProcessPagedPoolQuota.c)
 *     PsChargePoolQuota @ 0x14011B120 (PsChargePoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x14012F320 (FsRtlIsNtstatusExpected.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1406A264C (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyInitializeSync @ 0x1406A2CF0 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyUninitializeSync @ 0x1406CD0A0 (FsRtlNotifyUninitializeSync.c)
 */

void __fastcall FsRtlNotifyFilterReportChangeLiteEx(
        volatile signed __int64 *a1,
        _QWORD *a2,
        const void **a3,
        const void **a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10)
{
  _QWORD **v10; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int64 v13; // rax
  _QWORD *v14; // r13
  _QWORD *v15; // rdi
  __int16 *v16; // rbx
  char v17; // r14
  unsigned __int8 (__fastcall *v18)(_QWORD, __int64, _QWORD); // rax
  unsigned __int8 (__fastcall *v19)(_QWORD); // rax
  UINT v20; // r12d
  _QWORD *v21; // rcx
  UINT v22; // r14d
  NTSTATUS v23; // eax
  __int16 v24; // r9
  __int64 v25; // r10
  unsigned int v26; // r11d
  _DWORD *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r11
  PVOID PoolWithTag; // rax
  char *v32; // rbx
  char *v33; // rbx
  __int16 v34; // r9
  __int16 v35; // ax
  char v36; // [rsp+31h] [rbp-97h]
  UINT v37; // [rsp+4Ch] [rbp-7Ch]
  UINT puResult[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD *v39; // [rsp+58h] [rbp-70h]
  _QWORD *v40; // [rsp+60h] [rbp-68h]
  PNOTIFY_SYNC NotifySync; // [rsp+68h] [rbp-60h] BYREF
  NTSTATUS v42; // [rsp+70h] [rbp-58h]
  _QWORD *v43; // [rsp+78h] [rbp-50h]
  _QWORD *v44; // [rsp+80h] [rbp-48h]

  v10 = (_QWORD **)a2;
  if ( (_QWORD *)*a2 == a2 || a10 && *(_DWORD *)a10 < 0x50u )
    return;
  if ( !*a1 )
  {
    FsRtlNotifyInitializeSync(&NotifySync);
    if ( _InterlockedCompareExchange64(a1, (signed __int64)NotifySync, 0LL) )
      FsRtlNotifyUninitializeSync(&NotifySync);
  }
  CurrentThread = KeGetCurrentThread();
  v13 = *a1;
  if ( CurrentThread != *(struct _KTHREAD **)(*a1 + 56) )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)a1);
    *(_QWORD *)(*a1 + 56) = CurrentThread;
    v13 = *a1;
  }
  ++*(_DWORD *)(v13 + 64);
  v14 = *v10;
  while ( 1 )
  {
    v40 = v14;
    if ( v14 == v10 )
      break;
    v15 = v14 - 4;
    v39 = v14 - 4;
    v44 = v14 - 4;
    v16 = (__int16 *)(v14 + 5);
    v17 = (unsigned __int8)*v16 >> 7;
    v36 = v17;
    if ( (*((_DWORD *)v14 + 11) & a5) != 0
      && ((a9 & 1) != 0
       || (*v16 & 1) != 0
       && ((v18 = (unsigned __int8 (__fastcall *)(_QWORD, __int64, _QWORD))v15[2]) == 0LL || v18(v15[1], a7, v15[3]))) )
    {
      v19 = (unsigned __int8 (__fastcall *)(_QWORD))v15[8];
      if ( !v19 || !a8 || v19(v15[1]) )
      {
        if ( (*v16 & 2) == 0 )
        {
          v20 = *((_DWORD *)v15 + 24);
          if ( v20 )
          {
            v43 = 0LL;
            if ( *((_DWORD *)v15 + 25) )
            {
              v20 = *((_DWORD *)v15 + 25);
            }
            else
            {
              v21 = (_QWORD *)v15[6];
              if ( v21 != v15 + 6 )
              {
                v43 = v21 - 21;
                v20 = *(_DWORD *)(v21[2] + 8LL);
              }
            }
            v22 = *(unsigned __int16 *)a3 + (v17 != 0 ? 84 : 12);
            if ( a4 )
              v22 += *(unsigned __int16 *)a4 + 2;
            v37 = (*((_DWORD *)v15 + 26) + 3) & 0xFFFFFFFC;
            puResult[1] = v37;
            v23 = RtlUIntAdd(v37, v22, puResult);
            v42 = v23;
            if ( v22 > v20 || v23 || puResult[0] > v20 )
            {
              v34 = v24 | 2;
              *v16 = v34;
            }
            else
            {
              v27 = 0LL;
              v28 = v15[11];
              if ( v28 )
              {
                *(_DWORD *)(v28 + *((unsigned int *)v15 + 27)) = v26 - *((_DWORD *)v15 + 27);
                *((_DWORD *)v15 + 27) = v26;
                v27 = (_DWORD *)(v15[11] + v26);
                goto LABEL_42;
              }
              if ( v25 )
              {
                v29 = *(_QWORD *)(v25 + 24);
                if ( v29 )
                {
                  v27 = *(_DWORD **)(v25 + 24);
                  v15[11] = v29;
                  goto LABEL_41;
                }
                v30 = *(_QWORD *)(v25 + 8);
                if ( v30 )
                {
                  if ( (*(_BYTE *)(v30 + 10) & 5) != 0 )
                    v27 = *(_DWORD **)(v30 + 24);
                  else
                    v27 = MmMapLockedPagesSpecifyCache((PMDL)v30, 0, MmCached, 0LL, 0, 0x40000010u);
                  v15[11] = v27;
LABEL_41:
                  *((_DWORD *)v15 + 25) = v20;
                }
              }
LABEL_42:
              if ( !v15[11] )
              {
                PsChargePoolQuota((PEPROCESS)v15[15], PagedPool, v20);
                PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, v20, 0x4E725346u);
                v15[11] = PoolWithTag;
                v15[10] = PoolWithTag;
                memset((void *)v15[11], 0, v20);
                *((_DWORD *)v15 + 25) = v20;
                v27 = (_DWORD *)v15[11];
              }
              if ( v27 )
              {
                *v27 = 0;
                v27[1] = a6;
                if ( v36 )
                {
                  *((_QWORD *)v27 + 1) = *(_QWORD *)(a10 + 8);
                  *((_QWORD *)v27 + 2) = *(_QWORD *)(a10 + 16);
                  *((_QWORD *)v27 + 3) = *(_QWORD *)(a10 + 24);
                  *((_QWORD *)v27 + 4) = *(_QWORD *)(a10 + 32);
                  *((_QWORD *)v27 + 5) = *(_QWORD *)(a10 + 40);
                  *((_QWORD *)v27 + 6) = *(_QWORD *)(a10 + 48);
                  v27[14] = *(_DWORD *)(a10 + 56);
                  v27[15] = *(_DWORD *)(a10 + 60);
                  *((_QWORD *)v27 + 8) = *(_QWORD *)(a10 + 64);
                  *((_QWORD *)v27 + 9) = *(_QWORD *)(a10 + 72);
                  v27[20] = v22 - 84;
                  v32 = (char *)(v27 + 21);
                }
                else
                {
                  v27[2] = v22 - 12;
                  v32 = (char *)(v27 + 3);
                }
                memmove(v32, a3[1], *(unsigned __int16 *)a3);
                if ( a4 )
                {
                  v33 = &v32[*(unsigned __int16 *)a3];
                  *(_WORD *)v33 = 58;
                  memmove(v33 + 2, a4[1], *(unsigned __int16 *)a4);
                }
                *((_DWORD *)v15 + 26) = v37 + v22;
              }
              v16 = (__int16 *)(v44 + 9);
              v34 = *((_WORD *)v44 + 36);
            }
            if ( (v34 & 2) != 0 && v15[11] )
            {
              if ( v15[10] )
              {
                PsReturnProcessPagedPoolQuota((struct _KPROCESS *)v15[15], *((unsigned int *)v15 + 25));
                ExFreePoolWithTag((PVOID)v15[10], 0);
              }
              v15[11] = 0LL;
              v15[10] = 0LL;
              v15[13] = 0LL;
              *((_DWORD *)v15 + 25) = 0;
            }
          }
        }
        v35 = *v16;
        if ( a6 == 4 )
        {
          *v16 = v35 | 8;
        }
        else
        {
          *v16 = v35 & 0xFFF7;
          if ( (_QWORD *)v15[6] != v15 + 6 )
            FsRtlNotifyCompleteIrpList(v15, 0LL, a3);
        }
      }
    }
    v14 = (_QWORD *)*v14;
    v10 = (_QWORD **)a2;
  }
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
}
