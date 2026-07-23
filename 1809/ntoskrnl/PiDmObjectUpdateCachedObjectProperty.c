/*
 * XREFs of PiDmObjectUpdateCachedObjectProperty @ 0x14059AA98
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x1405993A0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x14059A7C0 (PiDmObjectUpdateCachedCmProperty.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiDmGetObject @ 0x1405999C8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140599D30 (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x140599E7C (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x140599ECC (PiDmGetCachedKeyIndex.c)
 *     PnpGetObjectProperty @ 0x14059AEC8 (PnpGetObjectProperty.c)
 *     PiDmCacheDataFree @ 0x1406F38E4 (PiDmCacheDataFree.c)
 *     PiDmCacheDataEncode @ 0x1406F391C (PiDmCacheDataEncode.c)
 */

void __fastcall PiDmObjectUpdateCachedObjectProperty(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        void *Buf2,
        SIZE_T NumberOfBytes)
{
  bool v10; // r15
  __int64 v11; // r14
  unsigned int CachedKeyIndex; // eax
  __int64 v13; // r9
  __int64 v14; // rdi
  unsigned int v15; // edx
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v17; // r13
  __int64 v18; // rcx
  const void *v19; // rdi
  unsigned int v20; // eax
  int ObjectProperty; // eax
  void *v22; // rbx
  int v23; // esi
  unsigned int v24; // eax
  struct _KTHREAD *v25; // rax
  unsigned int v26; // [rsp+60h] [rbp-19h] BYREF
  void *Buf1; // [rsp+68h] [rbp-11h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-9h] BYREF
  DEVPROPKEY **v29; // [rsp+78h] [rbp-1h] BYREF
  __int64 v30; // [rsp+80h] [rbp+7h]
  unsigned int Size; // [rsp+D0h] [rbp+57h] BYREF
  int Size_4; // [rsp+D4h] [rbp+5Bh]
  __int64 v33; // [rsp+D8h] [rbp+5Fh] BYREF

  if ( !a4 )
  {
    Size_4 = HIDWORD(a3);
    BugCheckParameter2 = 0LL;
    Buf1 = 0LL;
    Size = 0;
    v10 = 0;
    PiDmGetCacheKeys(a1, &v29, &v26);
    if ( v26 )
    {
      v11 = a5;
      CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v29, v26, a5);
      v14 = CachedKeyIndex;
      if ( CachedKeyIndex < v15 && (int)PiDmGetObject(a1, a2, (__int64 *)&BugCheckParameter2, v13) >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v17 = BugCheckParameter2;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        v18 = 3 * v14;
        v19 = Buf2;
        v20 = *(_DWORD *)(v17 + 112 + 8 * v18);
        v30 = v17 + 112 + 8 * v18;
        v26 = v20;
        if ( v20 <= 1 )
        {
          PiDmCacheDataEncode(
            a6,
            Buf2,
            (unsigned int)NumberOfBytes,
            LODWORD(v29[v18 + 1]),
            HIDWORD(v29[v18 + 1]),
            v17 + 112 + 8 * v18);
          v10 = v26 == 0;
        }
        ExReleasePushLockEx(v17, 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        if ( !v10 )
          goto LABEL_9;
        ObjectProperty = PnpGetObjectProperty(
                           0x5A706E50u,
                           (unsigned int)NumberOfBytes,
                           0LL,
                           0LL,
                           v11,
                           (__int64)&v33,
                           (__int64)&Buf1,
                           (__int64)&Size,
                           0x10000);
        v22 = Buf1;
        v23 = ObjectProperty;
        if ( ObjectProperty == -1073741275 )
        {
          LODWORD(v33) = 0;
          v23 = 0;
          if ( Buf1 )
          {
            ExFreePoolWithTag(Buf1, 0x5A706E50u);
            v22 = 0LL;
            Buf1 = 0LL;
          }
          v24 = 0;
        }
        else
        {
          v24 = Size;
        }
        if ( v23 < 0 || (_DWORD)v33 != a6 || v24 != (_DWORD)NumberOfBytes )
          goto LABEL_26;
        if ( v22 )
        {
          if ( !v19 )
            goto LABEL_26;
        }
        else if ( v19 )
        {
          goto LABEL_26;
        }
        if ( !v24 )
          goto LABEL_20;
        if ( !v22 )
        {
LABEL_9:
          PiDmObjectRelease((unsigned int *)BugCheckParameter2);
          return;
        }
        if ( !memcmp(v22, v19, v24) )
        {
LABEL_20:
          if ( v22 )
            ExFreePoolWithTag(v22, 0x5A706E50u);
          goto LABEL_9;
        }
LABEL_26:
        v25 = KeGetCurrentThread();
        --v25->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        PiDmCacheDataFree(v30);
        ExReleasePushLockEx(BugCheckParameter2, 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v22 = Buf1;
        goto LABEL_20;
      }
    }
  }
}
