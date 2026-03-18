/*
 * XREFs of DbgkpPostFakeProcessCreateMessages @ 0x1408485C0
 * Callers:
 *     NtDebugActiveProcess @ 0x140849520 (NtDebugActiveProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     DbgkpPostFakeThreadMessages @ 0x140848684 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpPostModuleMessages @ 0x140848A68 (DbgkpPostModuleMessages.c)
 */

__int64 __fastcall DbgkpPostFakeProcessCreateMessages(_KPROCESS *BugCheckParameter1, struct _KEVENT *a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  PVOID Object; // [rsp+30h] [rbp-68h]
  __int64 v9; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v10[48]; // [rsp+40h] [rbp-58h] BYREF

  memset(v10, 0, sizeof(v10));
  result = DbgkpPostFakeThreadMessages(BugCheckParameter1, (__int64)&v9);
  v7 = 0LL;
  if ( (int)result >= 0 )
  {
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v10);
    DbgkpPostModuleMessages(BugCheckParameter1, Object, a2);
    KiUnstackDetachProcess((struct _KTHREAD *)v10, 0);
    ObfDereferenceObjectWithTag(Object, 0x4F676244u);
    result = 0LL;
    v7 = v9;
  }
  *a3 = v7;
  return result;
}
