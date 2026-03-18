/*
 * XREFs of PiDmObjectUpdateCachedObjectProperty @ 0x1405BEF40
 * Callers:
 *     PiDmObjectUpdateCachedCmProperty @ 0x1405BE198 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1405BE420 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpGetObjectProperty @ 0x1405BC228 (PnpGetObjectProperty.c)
 *     PiDmGetObject @ 0x1405BEA50 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405BED44 (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x1405BEE90 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x1405BEEE0 (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataFree @ 0x1406FA6F0 (PiDmCacheDataFree.c)
 *     PiDmCacheDataEncode @ 0x1406FA728 (PiDmCacheDataEncode.c)
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
  __int64 v13; // rdi
  unsigned int v14; // edx
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v16; // r13
  __int64 v17; // rcx
  const void *v18; // rdi
  unsigned int v19; // eax
  int ObjectProperty; // eax
  void *v21; // rbx
  int v22; // esi
  unsigned int v23; // eax
  struct _KTHREAD *v24; // rax
  unsigned int v25; // [rsp+60h] [rbp-19h] BYREF
  void *Buf1; // [rsp+68h] [rbp-11h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-9h] BYREF
  DEVPROPKEY **v28; // [rsp+78h] [rbp-1h] BYREF
  __int64 v29; // [rsp+80h] [rbp+7h]
  unsigned int Size; // [rsp+D0h] [rbp+57h] BYREF
  int Size_4; // [rsp+D4h] [rbp+5Bh]
  __int64 v32; // [rsp+D8h] [rbp+5Fh] BYREF

  if ( !a4 )
  {
    Size_4 = HIDWORD(a3);
    BugCheckParameter2 = 0LL;
    Buf1 = 0LL;
    Size = 0;
    v10 = 0;
    PiDmGetCacheKeys(a1, &v28, &v25);
    if ( v25 )
    {
      v11 = a5;
      CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v28, v25, a5);
      v13 = CachedKeyIndex;
      if ( CachedKeyIndex < v14 && (int)PiDmGetObject(a1, a2, (__int64 *)&BugCheckParameter2) >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v16 = BugCheckParameter2;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        v17 = 3 * v13;
        v18 = Buf2;
        v19 = *(_DWORD *)(v16 + 112 + 8 * v17);
        v29 = v16 + 112 + 8 * v17;
        v25 = v19;
        if ( v19 <= 1 )
        {
          PiDmCacheDataEncode(
            a6,
            Buf2,
            (unsigned int)NumberOfBytes,
            LODWORD(v28[v17 + 1]),
            HIDWORD(v28[v17 + 1]),
            v16 + 112 + 8 * v17);
          v10 = v25 == 0;
        }
        ExReleasePushLockEx(v16, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( !v10 )
          goto LABEL_9;
        ObjectProperty = PnpGetObjectProperty(
                           0x5A706E50u,
                           (unsigned int)NumberOfBytes,
                           a2,
                           a1,
                           0LL,
                           0LL,
                           v11,
                           (__int64)&v32,
                           &Buf1,
                           &Size,
                           0x10000);
        v21 = Buf1;
        v22 = ObjectProperty;
        if ( ObjectProperty == -1073741275 )
        {
          LODWORD(v32) = 0;
          v22 = 0;
          if ( Buf1 )
          {
            ExFreePoolWithTag(Buf1, 0x5A706E50u);
            v21 = 0LL;
            Buf1 = 0LL;
          }
          v23 = 0;
        }
        else
        {
          v23 = Size;
        }
        if ( v22 < 0 || (_DWORD)v32 != a6 || v23 != (_DWORD)NumberOfBytes )
          goto LABEL_26;
        if ( v21 )
        {
          if ( !v18 )
            goto LABEL_26;
        }
        else if ( v18 )
        {
          goto LABEL_26;
        }
        if ( !v23 )
          goto LABEL_20;
        if ( !v21 )
        {
LABEL_9:
          PiDmObjectRelease((unsigned int *)BugCheckParameter2);
          return;
        }
        if ( !memcmp(v21, v18, v23) )
        {
LABEL_20:
          if ( v21 )
            ExFreePoolWithTag(v21, 0x5A706E50u);
          goto LABEL_9;
        }
LABEL_26:
        v24 = KeGetCurrentThread();
        --v24->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        PiDmCacheDataFree(v29);
        ExReleasePushLockEx(BugCheckParameter2, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v21 = Buf1;
        goto LABEL_20;
      }
    }
  }
}
