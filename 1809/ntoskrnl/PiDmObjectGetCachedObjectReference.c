/*
 * XREFs of PiDmObjectGetCachedObjectReference @ 0x1406F3D24
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x140599848 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1406F3BE8 (PiDmGetReferencedObjectFromProperty.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PiDmGetObject @ 0x1405999C8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140599D30 (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x140599E7C (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x140599ECC (PiDmGetCachedKeyIndex.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectReference(
        unsigned int a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        _QWORD *a5)
{
  int Object; // ebx
  char v9; // si
  __int64 v10; // r9
  unsigned int CachedKeyIndex; // eax
  __int64 v12; // r9
  __int64 v13; // rbp
  unsigned int v14; // edx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v16; // rdi
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v20; // [rsp+20h] [rbp-28h] BYREF
  DEVPROPKEY **v21; // [rsp+28h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+18h] BYREF

  BugCheckParameter2 = a3;
  Object = -1073741802;
  v9 = 0;
  PiDmGetCacheKeys(a1, &v21, &v20);
  if ( v20 )
  {
    CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v21, v20, v10);
    v13 = CachedKeyIndex;
    if ( CachedKeyIndex < v14 )
    {
      if ( !a3 )
      {
        Object = PiDmGetObject(a1, a2, (__int64 *)&BugCheckParameter2, v12);
        if ( Object < 0 )
          return (unsigned int)Object;
        v9 = 1;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v16 = BugCheckParameter2;
      ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
      v17 = *(_DWORD *)(v16 + 24 * v13 + 112);
      if ( v17 == 6 )
      {
        v18 = *(_QWORD *)(v16 + 24 * v13 + 128);
        *a5 = v18;
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
        v16 = BugCheckParameter2;
        Object = 0;
      }
      else if ( v17 == 2 )
      {
        Object = -1073741275;
      }
      else
      {
        Object = -1073741802;
      }
      ExReleasePushLockEx(v16, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( v9 )
        PiDmObjectRelease((unsigned int *)BugCheckParameter2);
    }
  }
  return (unsigned int)Object;
}
