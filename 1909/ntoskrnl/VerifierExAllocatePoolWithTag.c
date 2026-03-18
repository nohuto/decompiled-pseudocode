/*
 * XREFs of VerifierExAllocatePoolWithTag @ 0x140972660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     VfCheckPoolType @ 0x140965B08 (VfCheckPoolType.c)
 *     VeAllocatePoolWithTagPriority @ 0x140971F50 (VeAllocatePoolWithTagPriority.c)
 */

PVOID __fastcall VerifierExAllocatePoolWithTag(__int32 PoolType, ULONG_PTR BugCheckParameter3, ULONG Tag)
{
  POOL_TYPE v7; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 0x400000) == 0 || (dword_140509B54 & 8) != 0 || (MmVerifierData & 1) != 0 )
  {
    VfCheckPoolType(PoolType, retaddr, Tag);
    v7 = PoolType | 0x80;
    if ( XdvEnabled )
      return (PVOID)((__int64 (__fastcall *)(_QWORD, ULONG_PTR, _QWORD, __int64, __int64, PVOID (__fastcall *)(POOL_TYPE, ULONG_PTR, ULONG, EX_POOL_PRIORITY, __int64)))pXdvExAllocatePoolWithTag)(
                      (unsigned int)v7,
                      BugCheckParameter3,
                      Tag,
                      32LL,
                      retaddr,
                      VeAllocatePoolWithTagPriority);
    else
      return VeAllocatePoolWithTagPriority(v7, BugCheckParameter3, Tag, HighPoolPriority, retaddr);
  }
  else
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(PoolType, retaddr, 0);
    return ExAllocatePoolWithTag((POOL_TYPE)PoolType, BugCheckParameter3, Tag);
  }
}
