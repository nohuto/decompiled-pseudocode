/*
 * XREFs of FsRtlNotifyFilterReportChangeLiteEx @ 0x1406C22E0
 * Callers:
 *     FsRtlNotifyFilterReportChangeLite @ 0x1408505A0 (FsRtlNotifyFilterReportChangeLite.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     PsReturnProcessPagedPoolQuota @ 0x14005B090 (PsReturnProcessPagedPoolQuota.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400888B0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 *     PsChargePoolQuota @ 0x14011B6A0 (PsChargePoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x14012EF30 (FsRtlIsNtstatusExpected.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1406C2888 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyInitializeSync @ 0x1406C2F30 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyUninitializeSync @ 0x1406EC370 (FsRtlNotifyUninitializeSync.c)
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
  _QWORD *v14; // r14
  _QWORD *v15; // rdi
  _WORD *v16; // r12
  char v17; // bl
  unsigned __int8 (__fastcall *v18)(_QWORD, __int64, _QWORD); // rax
  unsigned __int8 (__fastcall *v19)(_QWORD); // rax
  __int16 v20; // cx
  unsigned int v21; // r13d
  _QWORD *v22; // rdx
  unsigned int v23; // r14d
  unsigned int v24; // edx
  _DWORD *MappedSystemVa; // rbx
  __int64 v26; // rax
  const void *v27; // rax
  struct _MDL *v28; // rcx
  PVOID PoolWithTag; // rax
  __int64 v30; // rcx
  char *v31; // rbx
  char *v32; // rbx
  __int16 v33; // cx
  char v34; // [rsp+31h] [rbp-A7h]
  unsigned int v35; // [rsp+34h] [rbp-A4h]
  _QWORD *v36; // [rsp+48h] [rbp-90h]
  PNOTIFY_SYNC NotifySync[2]; // [rsp+68h] [rbp-70h] BYREF
  _QWORD *v38; // [rsp+78h] [rbp-60h]
  _WORD *v39; // [rsp+80h] [rbp-58h]
  _QWORD *v40; // [rsp+88h] [rbp-50h]
  const void **v42; // [rsp+F0h] [rbp+18h]

  v42 = a3;
  v10 = (_QWORD **)a2;
  if ( (_QWORD *)*a2 == a2 || a10 && *(_DWORD *)a10 < 0x50u )
    return;
  if ( !*a1 )
  {
    FsRtlNotifyInitializeSync(NotifySync);
    if ( _InterlockedCompareExchange64(a1, (signed __int64)NotifySync[0], 0LL) )
      FsRtlNotifyUninitializeSync(NotifySync);
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
    v36 = v14;
    if ( v14 == v10 )
      break;
    v15 = v14 - 4;
    v40 = v14 - 4;
    v16 = v14 + 5;
    v17 = (unsigned __int8)*v16 >> 7;
    v34 = v17;
    if ( (*((_DWORD *)v14 + 11) & a5) != 0
      && ((a9 & 1) != 0
       || (*v16 & 1) != 0
       && ((v18 = (unsigned __int8 (__fastcall *)(_QWORD, __int64, _QWORD))v15[2]) == 0LL || v18(v15[1], a7, v15[3]))) )
    {
      v19 = (unsigned __int8 (__fastcall *)(_QWORD))v15[8];
      if ( !v19 || !a8 || v19(v15[1]) )
      {
        v20 = *v16;
        if ( (*v16 & 2) == 0 )
        {
          v21 = *((_DWORD *)v15 + 24);
          if ( v21 )
          {
            a3 = 0LL;
            v38 = 0LL;
            if ( *((_DWORD *)v15 + 25) )
            {
              v21 = *((_DWORD *)v15 + 25);
            }
            else
            {
              v22 = (_QWORD *)v15[6];
              if ( v22 != v15 + 6 )
              {
                a3 = (const void **)(v22 - 21);
                v38 = v22 - 21;
                v21 = *(_DWORD *)(v22[2] + 8LL);
              }
            }
            v23 = *(unsigned __int16 *)v42 + (v17 != 0 ? 84 : 12);
            if ( a4 )
              v23 += *(unsigned __int16 *)a4 + 2;
            v24 = (*((_DWORD *)v15 + 26) + 3) & 0xFFFFFFFC;
            v35 = v24;
            if ( v23 > v21 || v24 + v23 > v21 )
            {
              v33 = v20 | 2;
              *v16 = v33;
            }
            else
            {
              MappedSystemVa = 0LL;
              v26 = v15[11];
              if ( v26 )
              {
                *(_DWORD *)(v26 + *((unsigned int *)v15 + 27)) = v24 - *((_DWORD *)v15 + 27);
                *((_DWORD *)v15 + 27) = v24;
                MappedSystemVa = (_DWORD *)(v15[11] + v24);
              }
              else
              {
                if ( !a3 )
                  goto LABEL_29;
                v27 = a3[3];
                if ( v27 )
                {
                  MappedSystemVa = a3[3];
                  v15[11] = v27;
                }
                else
                {
                  v28 = (struct _MDL *)a3[1];
                  if ( !v28 )
                    goto LABEL_29;
                  if ( (v28->MdlFlags & 5) != 0 )
                  {
                    MappedSystemVa = v28->MappedSystemVa;
                  }
                  else
                  {
                    MappedSystemVa = MmMapLockedPagesSpecifyCache(v28, 0, MmCached, 0LL, 0, 0x40000010u);
                    v24 = v35;
                  }
                  v15[11] = MappedSystemVa;
                }
                *((_DWORD *)v15 + 25) = v21;
              }
LABEL_29:
              if ( !v15[11] )
              {
                PsChargePoolQuota((PEPROCESS)v15[15], PagedPool, v21);
                PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, v21, 0x4E725346u);
                v15[11] = PoolWithTag;
                v15[10] = PoolWithTag;
                *((_DWORD *)v15 + 25) = v21;
                MappedSystemVa = (_DWORD *)v15[11];
                v24 = v35;
              }
              v39 = v16;
              if ( MappedSystemVa )
              {
                v30 = *((unsigned int *)v15 + 26);
                if ( v24 > (unsigned int)v30 )
                  memset((void *)(v15[11] + v30), 0, v24 - (unsigned int)v30);
                *MappedSystemVa = 0;
                MappedSystemVa[1] = a6;
                if ( v34 )
                {
                  *((_QWORD *)MappedSystemVa + 1) = *(_QWORD *)(a10 + 8);
                  *((_QWORD *)MappedSystemVa + 2) = *(_QWORD *)(a10 + 16);
                  *((_QWORD *)MappedSystemVa + 3) = *(_QWORD *)(a10 + 24);
                  *((_QWORD *)MappedSystemVa + 4) = *(_QWORD *)(a10 + 32);
                  *((_QWORD *)MappedSystemVa + 5) = *(_QWORD *)(a10 + 40);
                  *((_QWORD *)MappedSystemVa + 6) = *(_QWORD *)(a10 + 48);
                  MappedSystemVa[14] = *(_DWORD *)(a10 + 56);
                  MappedSystemVa[15] = *(_DWORD *)(a10 + 60);
                  *((_QWORD *)MappedSystemVa + 8) = *(_QWORD *)(a10 + 64);
                  *((_QWORD *)MappedSystemVa + 9) = *(_QWORD *)(a10 + 72);
                  MappedSystemVa[20] = v23 - 84;
                  v31 = (char *)(MappedSystemVa + 21);
                }
                else
                {
                  MappedSystemVa[2] = v23 - 12;
                  v31 = (char *)(MappedSystemVa + 3);
                }
                memmove(v31, v42[1], *(unsigned __int16 *)v42);
                if ( a4 )
                {
                  v32 = &v31[*(unsigned __int16 *)v42];
                  *(_WORD *)v32 = 58;
                  memmove(v32 + 2, a4[1], *(unsigned __int16 *)a4);
                }
                *((_DWORD *)v15 + 26) = v23 + v35;
              }
              v33 = *((_WORD *)v40 + 36);
            }
            if ( (v33 & 2) != 0 && v15[11] )
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
            v14 = v36;
          }
        }
        if ( a6 == 4 )
        {
          *v16 |= 8u;
        }
        else
        {
          *v16 &= ~8u;
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
