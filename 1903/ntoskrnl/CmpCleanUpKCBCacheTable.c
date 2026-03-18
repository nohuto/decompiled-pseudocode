/*
 * XREFs of CmpCleanUpKCBCacheTable @ 0x14069B610
 * Callers:
 *     CmpEnumerateAllOpenSubKeys @ 0x14069B484 (CmpEnumerateAllOpenSubKeys.c)
 *     CmpCleanUpHigherLayerKcbCachesPostCallback @ 0x140832DA0 (CmpCleanUpHigherLayerKcbCachesPostCallback.c)
 *     CmpRefreshHive @ 0x14083C1EC (CmpRefreshHive.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1400440B4 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045A40 (CmpDrainDelayDerefContext.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140652328 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x14069B720 (CmpFreeKeyControlBlock.c)
 *     CmpRemoveFromDelayedClose @ 0x14069B7F0 (CmpRemoveFromDelayedClose.c)
 */

unsigned __int64 __fastcall CmpCleanUpKCBCacheTable(__int64 a1)
{
  unsigned int v1; // r14d
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 *v4; // rdi
  __int64 i; // rax
  ULONG_PTR v7; // rbx
  __int64 *v8; // rax
  _QWORD *v9[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v10[48]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(_DWORD *)(a1 + 1648);
  v2 = *(_QWORD *)(a1 + 1640);
  memset(v10, 0, sizeof(v10));
  v9[0] = 0LL;
  v9[1] = 0LL;
  CmpAttachToRegistryProcess((__int64)v10);
  CmpInitializeDelayDerefContext(v9);
  v3 = 0LL;
  if ( v1 )
  {
    v4 = (__int64 *)(v2 + 16);
    do
    {
      for ( i = *v4; i; i = *v8 )
      {
        v7 = i - 16;
        if ( *(_QWORD *)(i - 16) )
        {
          v8 = (__int64 *)(v7 + 24);
        }
        else
        {
          CmpRemoveFromDelayedClose(i - 16);
          CmpCleanUpKcbCacheWithLock(v7, (__int64)v9);
          if ( (*(_DWORD *)(v7 + 8) & 0x80000) != 0 )
            CmpFreeKeyControlBlock(v7);
          CmpDrainDelayDerefContext(v9);
          v8 = (__int64 *)(v2 + 16 + 24 * v3);
        }
      }
      v3 = (unsigned int)(v3 + 1);
      v4 += 3;
    }
    while ( (unsigned int)v3 < v1 );
  }
  return KiUnstackDetachProcess((struct _KTHREAD *)v10, 0);
}
