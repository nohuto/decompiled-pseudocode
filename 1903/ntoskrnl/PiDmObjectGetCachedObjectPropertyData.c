/*
 * XREFs of PiDmObjectGetCachedObjectPropertyData @ 0x1405BED80
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x1405BE8D0 (PiDmObjectGetCachedObjectProperty.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     PiDmGetObject @ 0x1405BEA50 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405BED44 (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x1405BEE90 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x1405BEEE0 (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataDecode @ 0x1405BF150 (PiDmCacheDataDecode.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectPropertyData(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned int v10; // r14d
  int Object; // ebx
  char v12; // si
  __int64 v13; // r9
  unsigned int CachedKeyIndex; // eax
  __int64 v15; // rbp
  unsigned int v16; // edx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v18; // rdi
  _DWORD *v19; // rcx
  unsigned int v21; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v22[4]; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+18h] BYREF

  BugCheckParameter2 = a3;
  v10 = a1;
  Object = -1073741802;
  v12 = 0;
  PiDmGetCacheKeys(a1, v22, &v21);
  if ( v21 )
  {
    CachedKeyIndex = PiDmGetCachedKeyIndex(v22[0], v21, v13);
    v15 = CachedKeyIndex;
    if ( CachedKeyIndex < v16 )
    {
      if ( !a3 )
      {
        Object = PiDmGetObject(v10, a2, (__int64 *)&BugCheckParameter2);
        if ( Object < 0 )
          return (unsigned int)Object;
        v12 = 1;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v18 = BugCheckParameter2;
      ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
      v19 = (_DWORD *)(v18 + 8 * (v15 + 2 * v15 + 14));
      if ( *v19 <= 1u )
        Object = -1073741802;
      else
        Object = PiDmCacheDataDecode(v19, a5, a6, a7, a8);
      ExReleasePushLockEx(v18, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v12 )
        PiDmObjectRelease((unsigned int *)BugCheckParameter2);
    }
  }
  return (unsigned int)Object;
}
