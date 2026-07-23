/*
 * XREFs of VerifierIoAllocateWorkItem @ 0x140929A50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VerifierIoAllocateWorkItem(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  return ((__int64 (__fastcall *)(__int64, void *, __int64 (__fastcall *)(__int64, __int64)))pXdvIoAllocateWorkItem)(
           a1,
           retaddr,
           IovAllocateWorkItem);
}
