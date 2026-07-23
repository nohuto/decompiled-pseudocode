/*
 * XREFs of MmWaitMultipleForCacheManagerPrefetch @ 0x1400E045C
 * Callers:
 *     CcAsyncReadWorker @ 0x1401404B0 (CcAsyncReadWorker.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     MmWaitForCacheManagerPrefetch @ 0x1400DED78 (MmWaitForCacheManagerPrefetch.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmWaitMultipleForCacheManagerPrefetch(__int64 a1, unsigned int a2, void *a3)
{
  __int64 v3; // rbp
  unsigned int v5; // esi
  PVOID *PoolWithTag; // rbx
  struct _KWAIT_BLOCK *WaitBlockArray; // r15
  __int64 v9; // rdi
  PVOID *v10; // r8
  __int64 *v11; // rcx
  __int64 *v12; // r11
  __int64 *v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // r10
  __int64 **v16; // r10
  _QWORD *v18; // rax
  PVOID Object[4]; // [rsp+40h] [rbp-118h] BYREF
  struct _KWAIT_BLOCK v20; // [rsp+60h] [rbp-F8h] BYREF

  v3 = a2 + 1;
  if ( !a3 )
    v3 = a2;
  v5 = a2;
  if ( a2 > 3 )
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 56LL * (unsigned int)v3, 0x6157694Du);
  else
    PoolWithTag = 0LL;
  if ( PoolWithTag )
  {
    WaitBlockArray = (struct _KWAIT_BLOCK *)&PoolWithTag[v3];
  }
  else
  {
    PoolWithTag = Object;
    WaitBlockArray = &v20;
    if ( v5 > 3 )
      v5 = 3;
  }
  do
  {
    v9 = 0LL;
    if ( v5 )
    {
      v10 = PoolWithTag;
      while ( 2 )
      {
        v11 = *(__int64 **)((char *)v10 + a1 - (_QWORD)PoolWithTag);
        while ( 1 )
        {
          v12 = (__int64 *)*v11;
          if ( *((_DWORD *)v11 + 22) != *((_DWORD *)v11 + 21) )
          {
            v13 = v11 + 12;
            while ( 1 )
            {
              v14 = (__int64 *)*v13;
              if ( !*(_DWORD *)(*v13 + 36) )
                break;
              if ( (__int64 *)v14[1] != v13
                || (v15 = *v14, *(__int64 **)(*v14 + 8) != v14)
                || (*v13 = v15, *(_QWORD *)(v15 + 8) = v13, v16 = (__int64 **)v11[13], *v16 != v13) )
              {
                __fastfail(3u);
              }
              *v14 = (__int64)v13;
              v14[1] = (__int64)v16;
              *v16 = v14;
              v11[13] = (__int64)v14;
              if ( ++*((_DWORD *)v11 + 22) == *((_DWORD *)v11 + 21) )
                goto LABEL_18;
            }
            v18 = v14 + 4;
            if ( v18 )
              break;
          }
LABEL_18:
          v11 = v12;
          if ( !v12 )
          {
            MmWaitForCacheManagerPrefetch(*(_DWORD **)(a1 + 8 * v9));
            if ( PoolWithTag != Object )
              ExFreePoolWithTag(PoolWithTag, 0);
            return (unsigned int)v9;
          }
        }
        *v10 = v18;
        v9 = (unsigned int)(v9 + 1);
        ++v10;
        if ( (unsigned int)v9 < v5 )
          continue;
        break;
      }
    }
    if ( a3 )
    {
      PoolWithTag[v9] = a3;
      LODWORD(v9) = v9 + 1;
    }
  }
  while ( KeWaitForMultipleObjects(v9, PoolWithTag, WaitAny, WrVirtualMemory, 0, 0, 0LL, WaitBlockArray) != (_DWORD)v9 - 1
       || !a3 );
  if ( PoolWithTag != Object )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)(v3 - 1);
}
