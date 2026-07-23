/*
 * XREFs of CmpCleanUpKCBCacheTable @ 0x140693CDC
 * Callers:
 *     CmpEnumerateAllOpenSubKeys @ 0x140693AA8 (CmpEnumerateAllOpenSubKeys.c)
 *     CmpCleanUpHigherLayerKcbCachesPostCallback @ 0x1407FAB00 (CmpCleanUpHigherLayerKcbCachesPostCallback.c)
 *     CmpRefreshHive @ 0x140803FAC (CmpRefreshHive.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1405D53B8 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x140693DB4 (CmpFreeKeyControlBlock.c)
 *     CmpRemoveFromDelayedClose @ 0x140693F0C (CmpRemoveFromDelayedClose.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x140693F94 (CmpRunDownDelayDerefKCBEngine.c)
 */

__int64 __fastcall CmpCleanUpKCBCacheTable(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // r14
  __int64 v3; // rdx
  char v4; // dl
  __int64 i; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  ULONG_PTR v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdx
  _BYTE v12[48]; // [rsp+20h] [rbp-58h] BYREF

  v1 = *(_DWORD *)(a1 + 1648);
  v2 = *(_QWORD *)(a1 + 1640);
  CmpAttachToRegistryProcess((__int64)v12);
  LOBYTE(v3) = 1;
  CmpRunDownDelayDerefKCBEngine(0LL, v3);
LABEL_2:
  v4 = 0;
  for ( i = 0LL; (unsigned int)i < v1; i = (unsigned int)(i + 1) )
  {
    v6 = v2 + 24 * i;
    v7 = *(_QWORD *)(v6 + 16);
    if ( v7 )
    {
      do
      {
        v8 = v7 - 8;
        if ( *(_DWORD *)(v7 - 8) )
        {
          v9 = (__int64 *)(v8 + 16);
        }
        else
        {
          CmpRemoveFromDelayedClose(v7 - 8);
          LOBYTE(v10) = 1;
          CmpCleanUpKcbCacheWithLock(v8, v10);
          if ( (*(_DWORD *)(v8 + 4) & 0x80000) != 0 )
            CmpFreeKeyControlBlock(v8);
          v4 = 1;
          v9 = (__int64 *)(v6 + 16);
        }
        v7 = *v9;
      }
      while ( v7 );
      if ( v4 )
        goto LABEL_2;
    }
  }
  return KiUnstackDetachProcess((__int64)v12, 0LL);
}
