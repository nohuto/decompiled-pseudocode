/*
 * XREFs of CmpEtwDumpKcb @ 0x1408264E8
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x140652328 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1406545D0 (CmpCreateKeyControlBlock.c)
 *     CmpLinkHiveToMaster @ 0x1406622B0 (CmpLinkHiveToMaster.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     CmpFreeTransientPoolWithTag @ 0x140092A90 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpConstructNameWithStatus @ 0x140655750 (CmpConstructNameWithStatus.c)
 */

void *__fastcall CmpEtwDumpKcb(__int64 a1, char a2)
{
  void (__fastcall *v2)(__int64, _BYTE *, _QWORD, _QWORD, __int64, void *); // rsi
  void *result; // rax
  __int64 v6; // rcx
  void *v7; // rbx
  void *v8; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v9[32]; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v10[48]; // [rsp+68h] [rbp-50h] BYREF

  v2 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, __int64, void *))((char *)&NlsMbCodePageTag + 7);
  memset(v9, 0, sizeof(v9));
  result = memset(v10, 0, sizeof(v10));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    CmpAttachToRegistryProcess((__int64)v10);
    v8 = 0LL;
    CmpConstructNameWithStatus(a1, &v8);
    v7 = v8;
    if ( v8 )
    {
      LOBYTE(v6) = a2;
      v2(v6, v9, 0LL, 0LL, a1, v8);
      CmpFreeTransientPoolWithTag(v7, 0x624E4D43u);
    }
    return (void *)KiUnstackDetachProcess((struct _KTHREAD *)v10, 0);
  }
  return result;
}
