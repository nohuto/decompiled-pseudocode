/*
 * XREFs of AlpcpCreateView @ 0x140618D0C
 * Callers:
 *     AlpcpCreateSectionView @ 0x14061767C (AlpcpCreateSectionView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140618B88 (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiMapViewInSystemSpace @ 0x1405E03F4 (MiMapViewInSystemSpace.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140617E4C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpInsertResourcePort @ 0x140618F98 (AlpcpInsertResourcePort.c)
 *     AlpcpReferenceBlob @ 0x140619428 (AlpcpReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x14061949C (AlpcpAllocateBlob.c)
 *     MmMapSecureViewOfSection @ 0x140619574 (MmMapSecureViewOfSection.c)
 *     AlpcpDereferenceBlobEx @ 0x140619C70 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x140638060 (AlpcpUnlockBlob.c)
 *     MmMapViewOfSection @ 0x140679D20 (MmMapViewOfSection.c)
 */

__int64 __fastcall AlpcpCreateView(ULONG_PTR BugCheckParameter2, _QWORD *Object, ULONG_PTR *a3)
{
  ULONG_PTR v3; // r14
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax
  __int64 v9; // r13
  void *Blob; // rax
  ULONG_PTR v11; // rsi
  int v12; // r9d
  bool v13; // zf
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  int v18; // [rsp+B0h] [rbp+48h]
  __int64 v19; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 v20; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+60h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  *a3 = 0LL;
  AlpcpLockForCachedReferenceBlob(v3);
  if ( (Object[52] & 0x20) != 0 )
  {
    v7 = -1073741769;
  }
  else
  {
    v8 = Object[38];
    v9 = Object[3];
    if ( v8 && v8 < *(_QWORD *)(BugCheckParameter2 + 40) )
    {
      v7 = -1073741756;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0
           && (*(_DWORD *)(BugCheckParameter2 + 52) >= 2u || *(_QWORD *)(BugCheckParameter2 + 80)) )
    {
      v7 = -1073741790;
    }
    else
    {
      Blob = (void *)AlpcpAllocateBlob(&AlpcViewType, 96LL, 0LL);
      v11 = (ULONG_PTR)Blob;
      if ( Blob )
      {
        memset(Blob, 0, 0x60uLL);
        v21 = *(_QWORD *)(BugCheckParameter2 + 24);
        v20 = *(_QWORD *)(BugCheckParameter2 + 40);
        v13 = (Object[32] & 0x100000) == 0;
        v14 = Object[32] & 0x100000;
        v19 = 0LL;
        v18 = v14;
        if ( v13 )
        {
          if ( (*(_DWORD *)(v3 + 48) & 2) != 0 )
            v15 = MmMapSecureViewOfSection(*(_QWORD *)v3, v9, (unsigned int)&v19, v12);
          else
            v15 = MmMapViewOfSection(**(_QWORD **)(BugCheckParameter2 + 16), v9, &v19, 0LL, 0LL, &v21, &v20, 2, 0, 4);
        }
        else
        {
          v15 = MiMapViewInSystemSpace(*(_QWORD *)v3, (__int64)&unk_14043A000, &v19, &v20, &v21, 0LL, 0LL);
        }
        v7 = v15;
        if ( v15 >= 0 )
        {
          AlpcpReferenceBlob(v11);
          *(_QWORD *)(v11 + 40) = v19;
          *(_QWORD *)(v11 + 48) = v20;
          *(_DWORD *)(v11 + 72) = *(_DWORD *)(v11 + 72) & 0xFFFFFFF7 | (v18 != 0 ? 8 : 0) | 1;
          ObfReferenceObjectWithTag((PVOID)v9, 0x63706C41u);
          *(_QWORD *)(v11 + 32) = v9;
          ObfReferenceObject(Object);
          *(_QWORD *)(v11 + 24) = Object;
          AlpcpReferenceBlob(BugCheckParameter2);
          *(_QWORD *)(v11 + 16) = BugCheckParameter2;
          v16 = *(_QWORD *)(BugCheckParameter2 + 64);
          *(_QWORD *)v11 = BugCheckParameter2 + 56;
          *(_QWORD *)(v11 + 8) = v16;
          **(_QWORD **)(BugCheckParameter2 + 64) = v11;
          *(_QWORD *)(BugCheckParameter2 + 64) = v11;
          ++*(_DWORD *)(BugCheckParameter2 + 52);
          AlpcpInsertResourcePort(Object, v11);
          ExAcquirePushLockExclusiveEx(v9 + 1616, 0LL);
          *(_QWORD *)(v11 + 88) = *(_QWORD *)(v9 + 1632);
          *(_QWORD *)(v11 + 80) = v9 + 1624;
          **(_QWORD **)(v9 + 1632) = v11 + 80;
          *(_QWORD *)(v9 + 1632) = v11 + 80;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 1616), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 1616));
          KeAbPostRelease(v9 + 1616);
          if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0 )
            *(_QWORD *)(BugCheckParameter2 + 80) = v11;
          *a3 = v11;
          v7 = 0;
        }
        else
        {
          AlpcpDereferenceBlobEx(v11);
        }
      }
      else
      {
        v7 = -1073741670;
      }
    }
  }
  AlpcpUnlockBlob(v3);
  return v7;
}
