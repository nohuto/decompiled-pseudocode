/*
 * XREFs of EtwpGetTraceGroupInfo @ 0x1408B6E24
 * Callers:
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 * Callees:
 *     RtlUIntAdd @ 0x140001568 (RtlUIntAdd.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405C5098 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405C5190 (EtwpFindGuidEntryByGuid.c)
 */

__int64 __fastcall EtwpGetTraceGroupInfo(__int64 a1, _DWORD *a2, _DWORD *a3, UINT *a4)
{
  UINT v4; // r15d
  unsigned int v6; // r12d
  unsigned int v8; // edi
  int v9; // ebp
  _QWORD *GuidEntryByGuid; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  _OWORD *v15; // rdx
  _OWORD *v16; // rax
  _QWORD *v17; // r14
  UINT v18; // ecx
  _QWORD *v19; // rbx
  struct _KTHREAD *v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  _OWORD *v23; // [rsp+20h] [rbp-48h]
  int *v24; // [rsp+28h] [rbp-40h]
  UINT puResult; // [rsp+80h] [rbp+18h] BYREF
  UINT *v26; // [rsp+88h] [rbp+20h]

  v26 = a4;
  v4 = *a4;
  v6 = 0;
  v8 = 0;
  v9 = 0;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2, 2);
  if ( !GuidEntryByGuid )
    return 3221226133LL;
  memset(a3, 0, *a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
  LODWORD(v13) = 4;
  GuidEntryByGuid[52] = KeGetCurrentThread();
  v14 = 8LL;
  if ( v4 >= 4 )
    *a3 = 8;
  v15 = a3 + 1;
  v16 = GuidEntryByGuid + 16;
  do
  {
    v13 = (unsigned int)(v13 + 32);
    if ( (unsigned int)v13 <= v4 )
    {
      *v15 = *v16;
      v15[1] = v16[1];
      v15 += 2;
    }
    v16 += 2;
    --v14;
  }
  while ( v14 );
  v17 = (_QWORD *)GuidEntryByGuid[7];
  v24 = (_DWORD *)((char *)a3 + v13);
  v18 = v13 + 4;
  v19 = (_QWORD *)((char *)a3 + v18);
  puResult = v18;
  v23 = v19;
  while ( v17 != GuidEntryByGuid + 7 )
  {
    if ( RtlUIntAdd(v18, 0x10u, &puResult) < 0 )
    {
      v6 = -2147483643;
      goto LABEL_29;
    }
    v18 = puResult;
    ++v8;
    if ( puResult <= v4 )
    {
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v17[2] + 408LL, 0LL);
      *(_QWORD *)(v17[2] + 416LL) = KeGetCurrentThread();
      *v23 = *(_OWORD *)(v17[2] + 40LL);
      *(_QWORD *)(v17[2] + 416LL) = 0LL;
      ExReleasePushLockEx(v17[2] + 408LL, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ++v23;
      v18 = puResult;
    }
    v17 = (_QWORD *)*v17;
  }
  if ( v18 > v4 )
  {
    v6 = -1073741789;
  }
  else
  {
    if ( v8 == 1 )
    {
      v9 = 1;
    }
    else if ( v8 > 1 )
    {
      qsort(v19, v8, 0x10uLL, EtwpCompareGuid);
      v21 = v19 + 2;
      v9 = 1;
      v22 = v8 - 1;
      do
      {
        if ( *v21 != *v19 || v21[1] != v19[1] )
        {
          v19 += 2;
          if ( v19 != v21 )
            *(_OWORD *)v19 = *(_OWORD *)v21;
          ++v9;
        }
        v21 += 2;
        --v22;
      }
      while ( v22 );
    }
    *v24 = v9;
  }
LABEL_29:
  GuidEntryByGuid[52] = 0LL;
  ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  *v26 = puResult;
  return v6;
}
