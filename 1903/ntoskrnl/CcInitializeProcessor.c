/*
 * XREFs of CcInitializeProcessor @ 0x14075A2E8
 * Callers:
 *     KiStartDynamicProcessor @ 0x14087E80C (KiStartDynamicProcessor.c)
 *     CcInitializeCacheManager @ 0x140A03BC8 (CcInitializeCacheManager.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x1400B5880 (MmIsThisAnNtAsSystem.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExInitializeSystemLookasideList @ 0x1405A0548 (ExInitializeSystemLookasideList.c)
 */

__int64 __fastcall CcInitializeProcessor(__int64 a1)
{
  BOOLEAN IsThisAnNtAsSystem; // al
  BOOLEAN v3; // si
  PVOID PoolWithTag; // rbx
  __int64 result; // rax

  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  *(_QWORD *)(a1 + 2152) = &CcTwilightLookasideList;
  v3 = IsThisAnNtAsSystem;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x4B576343u);
  if ( PoolWithTag )
    ExInitializeSystemLookasideList(
      (__int64)PoolWithTag,
      512,
      136,
      1264018243,
      v3 != 0 ? 256 : 128,
      (__int64)&ExSystemLookasideListHead);
  else
    PoolWithTag = &CcTwilightLookasideList;
  result = 0LL;
  *(_QWORD *)(a1 + 2144) = PoolWithTag;
  return result;
}
