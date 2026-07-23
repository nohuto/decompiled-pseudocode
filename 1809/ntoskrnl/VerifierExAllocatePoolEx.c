/*
 * XREFs of VerifierExAllocatePoolEx @ 0x140926320
 * Callers:
 *     <none>
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x1409285EC (VfCheckPoolType.c)
 */

PVOID __fastcall VerifierExAllocatePoolEx(__int64 a1, SIZE_T a2, __int64 a3)
{
  ULONG v3; // edi
  POOL_TYPE v5; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v5 = (int)a1;
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 1) != 0 )
  {
    VfCheckPoolType(a1, retaddr, a3);
    return (PVOID)pXdvExAllocatePoolWithTagPriority(
                    v5 | 0x80u,
                    a2,
                    v3,
                    32,
                    retaddr,
                    (__int64)VeAllocatePoolWithTagPriority);
  }
  else
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(a1, retaddr, 0LL);
    return CmpAllocateTransientPoolWithTag(v5, a2, v3);
  }
}
