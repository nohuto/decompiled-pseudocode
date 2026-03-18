/*
 * XREFs of EtwpGetTraceGroupInfo @ 0x1408F2A34
 * Callers:
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     qsort @ 0x1401A0AD0 (qsort.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405D408C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405D4180 (EtwpFindGuidEntryByGuid.c)
 */

__int64 __fastcall EtwpGetTraceGroupInfo(__int64 a1, _DWORD *a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v5; // r12d
  unsigned int v6; // esi
  int v8; // r15d
  __int64 *GuidEntryByGuid; // rbp
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  _OWORD *v14; // rcx
  _OWORD *v15; // rax
  __int64 *v16; // r14
  int *v17; // rax
  unsigned int v18; // ebx
  _QWORD *v19; // rdi
  struct _KTHREAD *v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  _OWORD *v24; // [rsp+20h] [rbp-48h]
  int *v25; // [rsp+28h] [rbp-40h]
  unsigned int v26; // [rsp+80h] [rbp+18h]

  v26 = 0;
  v5 = *a4;
  v6 = 0;
  v8 = 0;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2, 2);
  if ( !GuidEntryByGuid )
    return 3221226133LL;
  memset(a3, 0, *a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
  v12 = 4;
  GuidEntryByGuid[52] = (__int64)KeGetCurrentThread();
  v13 = 8LL;
  if ( v5 >= 4 )
    *a3 = 8;
  v14 = a3 + 1;
  v15 = GuidEntryByGuid + 16;
  do
  {
    v12 += 32;
    if ( v12 <= v5 )
    {
      *v14 = *v15;
      v14[1] = v15[1];
      v14 += 2;
    }
    v15 += 2;
    --v13;
  }
  while ( v13 );
  v16 = (__int64 *)GuidEntryByGuid[7];
  v17 = &a3[v12 / 4];
  v18 = v12 + 4;
  v25 = v17;
  v19 = (_QWORD *)((char *)a3 + v18);
  v24 = v19;
  while ( v16 != GuidEntryByGuid + 7 )
  {
    v18 += 16;
    ++v6;
    if ( v18 <= v5 )
    {
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v16[2] + 408, 0LL);
      *(_QWORD *)(v16[2] + 416) = KeGetCurrentThread();
      *v24 = *(_OWORD *)(v16[2] + 40);
      *(_QWORD *)(v16[2] + 416) = 0LL;
      ExReleasePushLockEx(v16[2] + 408, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ++v24;
    }
    v16 = (__int64 *)*v16;
  }
  if ( v18 > v5 )
  {
    v26 = -1073741789;
  }
  else
  {
    if ( v6 == 1 )
    {
      v8 = 1;
    }
    else if ( v6 > 1 )
    {
      qsort(v19, v6, 0x10uLL, EtwpCompareGuid);
      v21 = v19 + 2;
      v8 = 1;
      v22 = v6 - 1;
      do
      {
        v23 = *v21 - *v19;
        if ( *v21 == *v19 )
          v23 = v21[1] - v19[1];
        if ( v23 )
        {
          v19 += 2;
          if ( v19 != v21 )
            *(_OWORD *)v19 = *(_OWORD *)v21;
          ++v8;
        }
        v21 += 2;
        --v22;
      }
      while ( v22 );
    }
    *v25 = v8;
  }
  GuidEntryByGuid[52] = 0LL;
  ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  result = v26;
  *a4 = v18;
  return result;
}
