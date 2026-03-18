/*
 * XREFs of SeCodeIntegritySetInformationProcess @ 0x1408D9650
 * Callers:
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCodeIntegritySetInformationProcess(__int64 a1, unsigned int a2, const void *a3, unsigned int a4)
{
  size_t v4; // r14
  PVOID PoolWithTag; // rax
  void *v10; // rbx
  unsigned int v11; // edi

  v4 = a4;
  if ( !qword_1404364B0 )
    return 3221225659LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4, 0x20206553u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memmove(PoolWithTag, a3, v4);
  v11 = ((__int64 (__fastcall *)(__int64, _QWORD, void *, _QWORD))qword_1404364B0)(a1, a2, v10, (unsigned int)v4);
  ExFreePoolWithTag(v10, 0);
  return v11;
}
