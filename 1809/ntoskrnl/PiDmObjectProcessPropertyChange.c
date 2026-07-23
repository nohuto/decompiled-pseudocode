/*
 * XREFs of PiDmObjectProcessPropertyChange @ 0x1406F34BC
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1406F31C0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiDmGetObject @ 0x1405999C8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140599D30 (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x140599E7C (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x140599ECC (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataDecode @ 0x140599F2C (PiDmCacheDataDecode.c)
 *     PnpGetObjectProperty @ 0x14059AEC8 (PnpGetObjectProperty.c)
 *     PiDmCacheDataFree @ 0x1406F38E4 (PiDmCacheDataFree.c)
 *     PiDmCacheDataEncode @ 0x1406F391C (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1406F3BE8 (PiDmGetReferencedObjectFromProperty.c)
 */

void __fastcall PiDmObjectProcessPropertyChange(
        unsigned int a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  _BYTE *v6; // r15
  int Object; // ebx
  GUID *PoolWithTag; // r12
  DEVPROPKEY **v11; // rsi
  unsigned int CachedKeyIndex; // eax
  __int64 v13; // r9
  __int64 v14; // r14
  unsigned int v15; // edx
  __int64 v16; // rdi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v18; // r14
  _DWORD *v19; // r14
  int v20; // eax
  unsigned int v21; // ebx
  bool v22; // zf
  unsigned int v23; // r8d
  _QWORD *v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rcx
  char *v27; // rdi
  struct _KTHREAD *v28; // rax
  __int64 v29; // rdi
  ULONG_PTR v30; // rsi
  int v31; // eax
  int v32; // eax
  __int128 v33; // [rsp+68h] [rbp-19h] BYREF
  void *Buf2; // [rsp+78h] [rbp-9h] BYREF
  ULONG_PTR v35; // [rsp+80h] [rbp-1h] BYREF
  DEVPROPKEY **v36; // [rsp+88h] [rbp+7h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+E8h] [rbp+67h] BYREF
  char v39; // [rsp+F0h] [rbp+6Fh]

  BugCheckParameter2 = a3;
  v6 = a6;
  *((_QWORD *)&v33 + 1) = 0LL;
  v39 = 0;
  Object = 0;
  *a6 = 0;
  PoolWithTag = 0LL;
  Buf2 = 0LL;
  *(_QWORD *)&v33 = 0LL;
  v35 = 0LL;
  if ( a4 )
    return;
  PiDmGetCacheKeys(a1, &v36, &a6);
  if ( !(_DWORD)a6 )
    return;
  v11 = v36;
  CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v36, (unsigned int)a6, a5);
  v14 = CachedKeyIndex;
  if ( CachedKeyIndex >= v15 )
    return;
  if ( !a3 )
  {
    Object = PiDmGetObject(a1, a2, (__int64 *)&BugCheckParameter2, v13);
    if ( Object < 0 )
      return;
    v39 = 1;
  }
  v16 = 3 * v14;
  if ( LODWORD(v11[3 * v14 + 2]) == 1 )
  {
    Object = PnpGetObjectProperty(
               0x5A706E50u,
               0x10uLL,
               a2,
               a1,
               0LL,
               0LL,
               a5,
               (__int64)&v33,
               &Buf2,
               (_DWORD *)&v33 + 3,
               0x10000);
    if ( Object == -1073741275 )
    {
      Object = 0;
      LODWORD(v33) = 0;
      HIDWORD(v33) = 0;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v18 = BugCheckParameter2;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v19 = (_DWORD *)(v18 + 8 * v16 + 112);
  if ( !*v19 )
  {
    if ( !LODWORD(v11[v16 + 2]) )
      goto LABEL_23;
    goto LABEL_34;
  }
  if ( *v19 == 1 || Object < 0 || !LODWORD(v11[v16 + 2]) )
    goto LABEL_34;
  v20 = PiDmCacheDataDecode((__int64)v19, (_DWORD *)&v33 + 1, 0LL, 0, (unsigned int *)&v33 + 2);
  Object = v20;
  if ( v20 == -1073741275 )
  {
    DWORD1(v33) = 0;
    Object = 0;
    v22 = (_DWORD)v33 == 0;
  }
  else
  {
    if ( (int)(v20 + 0x80000000) >= 0 && v20 != -1073741789 )
      goto LABEL_34;
    v21 = DWORD2(v33);
    if ( DWORD2(v33) )
    {
      PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, DWORD2(v33), 0x5A706E50u);
      if ( !PoolWithTag )
      {
        Object = -1073741670;
        goto LABEL_34;
      }
    }
    Object = PiDmCacheDataDecode((__int64)v19, (_DWORD *)&v33 + 1, PoolWithTag, v21, (unsigned int *)&v33 + 2);
    if ( Object < 0 || *(_QWORD *)((char *)&v33 + 4) != __PAIR64__(HIDWORD(v33), v33) )
      goto LABEL_34;
    if ( !DWORD2(v33) )
    {
LABEL_22:
      *v6 = 1;
      goto LABEL_23;
    }
    v22 = memcmp(PoolWithTag, Buf2, DWORD2(v33)) == 0;
  }
  if ( v22 )
    goto LABEL_22;
LABEL_34:
  PiDmCacheDataFree(v19);
  if ( Object >= 0 && LODWORD(v11[v16 + 2]) == 1 && !HIDWORD(v11[v16 + 1]) )
    Object = PiDmCacheDataEncode((unsigned int)v33, Buf2, HIDWORD(v33), LODWORD(v11[v16 + 1]), 0, v19);
LABEL_23:
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( !LODWORD(v11[v16 + 2]) || *v6 )
    goto LABEL_25;
  v23 = 0;
  v24 = &PiDmAggregatedBooleanDefs;
  while ( 1 )
  {
    v25 = v24[1];
    if ( *(_DWORD *)(v25 + 16) == *(_DWORD *)(a5 + 16) )
    {
      v26 = *(_QWORD *)v25 - *(_QWORD *)a5;
      if ( *(_QWORD *)v25 == *(_QWORD *)a5 )
        v26 = *(_QWORD *)(v25 + 8) - *(_QWORD *)(a5 + 8);
      if ( !v26 && a1 == *(_DWORD *)v24 )
        break;
    }
    ++v23;
    v24 += 7;
    if ( v23 >= 3 )
      goto LABEL_25;
  }
  v27 = (char *)&PiDmAggregatedBooleanDefs + 56 * v23;
  if ( !v27
    || (int)PiDmGetReferencedObjectFromProperty(
              a1,
              a2,
              BugCheckParameter2,
              v25,
              *((_QWORD *)v27 + 2),
              *((_DWORD *)v27 + 6),
              (__int64)&v35) < 0 )
  {
    goto LABEL_25;
  }
  v28 = KeGetCurrentThread();
  v29 = *((_QWORD *)v27 + 6);
  v30 = v35;
  --v28->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v35, 0LL);
  if ( Object < 0 || (v31 = *(_DWORD *)(v30 + v29), v31 == 0x80000000) )
  {
    *(_DWORD *)(v30 + v29) = 0x80000000;
    goto LABEL_59;
  }
  if ( DWORD1(v33) != 17 )
    goto LABEL_56;
  if ( LOBYTE(PoolWithTag->Data1) == 0xFF && ((_DWORD)v33 != 17 || !*(_BYTE *)Buf2) )
  {
    v32 = v31 - 1;
LABEL_58:
    *(_DWORD *)(v30 + v29) = v32;
    goto LABEL_59;
  }
  if ( !LOBYTE(PoolWithTag->Data1) )
  {
LABEL_56:
    if ( (_DWORD)v33 != 17 || *(_BYTE *)Buf2 != 0xFF )
      goto LABEL_59;
    v32 = v31 + 1;
    goto LABEL_58;
  }
LABEL_59:
  ExReleasePushLockEx(v35, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_25:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x5A706E50u);
  if ( Buf2 )
    ExFreePoolWithTag(Buf2, 0x5A706E50u);
  if ( v35 )
    PiDmObjectRelease((unsigned int *)v35);
  if ( v39 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
}
