/*
 * XREFs of CmpEtwDumpKcb @ 0x1407ECB80
 * Callers:
 *     CmpLinkHiveToMaster @ 0x1405B9C48 (CmpLinkHiveToMaster.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1405D53B8 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1405D6EB0 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpConstructNameWithStatus @ 0x1405D83A0 (CmpConstructNameWithStatus.c)
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

  v2 = (void (__fastcall *)(__int64, _BYTE *, _QWORD, _QWORD, __int64, void *))CmpTraceRoutine;
  result = memset(v9, 0, sizeof(v9));
  if ( CmpTraceRoutine )
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
    return (void *)KiUnstackDetachProcess((__int64)v10, 0LL);
  }
  return result;
}
