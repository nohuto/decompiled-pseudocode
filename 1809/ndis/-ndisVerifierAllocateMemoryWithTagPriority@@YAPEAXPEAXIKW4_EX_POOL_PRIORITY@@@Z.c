/*
 * XREFs of ?ndisVerifierAllocateMemoryWithTagPriority@@YAPEAXPEAXIKW4_EX_POOL_PRIORITY@@@Z @ 0x1C006A130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisVerifierAllocateMemoryWithTagPriority(void *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // r10d
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 1835091022;
  if ( a3 )
    v4 = a3;
  return (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, void *))ndisVerifierWdmDispatch + 6))(
           (unsigned int)ndisDriverPoolType,
           a2,
           v4,
           a4,
           retaddr);
}
