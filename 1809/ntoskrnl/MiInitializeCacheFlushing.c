/*
 * XREFs of MiInitializeCacheFlushing @ 0x1409BD02C
 * Callers:
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140029658 (MiFinalizePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x140032010 (MiZeroPhysicalPage.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400EF400 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiFlushCacheForAttributeChange @ 0x140138FC8 (MiFlushCacheForAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x140177150 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwQuerySystemInformation @ 0x1401B89B0 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeCacheFlushing()
{
  __int64 result; // rax
  ULONG_PTR v1; // rbx
  unsigned __int64 v2; // rsi
  __int64 v3; // r15
  __int64 v4; // rdi
  __int64 CurrentIrql; // r12
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rbp
  unsigned __int8 v15; // r12
  unsigned __int64 v16; // rsi
  unsigned int v17; // eax
  SIZE_T v18; // r13
  PVOID PoolWithTag; // rbp
  __int64 v20; // r14
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v24[8]; // [rsp+0h] [rbp-88h] BYREF
  int v25; // [rsp+20h] [rbp-68h] BYREF
  int v26; // [rsp+24h] [rbp-64h] BYREF
  __int64 v27; // [rsp+28h] [rbp-60h]
  _BYTE v28[32]; // [rsp+30h] [rbp-58h] BYREF

  if ( ZwQuerySystemInformation(SystemFlushInformation, v28, 0x20u, 0LL) >= 0 && (v28[8] & 1) != 0 )
    byte_14043B13C = 1;
  result = MiGetPage((__int64)&MiSystemPartition, 0, 0);
  v1 = result;
  if ( result != -1 )
  {
    v2 = 0LL;
    v3 = 0LL;
    v4 = 48 * result - 0x58000000000LL;
    MiFinalizePageAttribute(v4, 1LL, 0);
    CurrentIrql = KeGetCurrentIrql();
    v27 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v6 = 4LL;
    do
    {
      MiZeroPhysicalPage(v1, 1, 0);
      v25 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v25, v7, v8);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      *(_BYTE *)(v4 + 34) &= 0x3Fu;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v9 = __rdtsc();
      _InterlockedOr(v24, 0);
      MiFlushCacheForAttributeChange(v1, 1LL, 0LL);
      _InterlockedOr(v24, 0);
      v12 = __rdtsc();
      v13 = (unsigned __int64)HIDWORD(v12) << 32;
      v26 = 0;
      v14 = v12;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v26, v13, v11);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      *(_BYTE *)(v4 + 34) = *(_BYTE *)(v4 + 34) & 0x3F | 0x40;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushEntireTbDueToAttributeChange(v10);
      v2 += v14 - v9;
      --v6;
    }
    while ( v6 );
    v15 = v27;
    v16 = v2 >> 2;
    if ( v16 )
    {
      v17 = dword_14043B130;
      if ( !dword_14043B130 )
        v17 = 256;
      v18 = 3 * (v17 >> 2);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x20206D4Du);
      if ( PoolWithTag )
      {
        v20 = 2LL;
        do
        {
          memset(PoolWithTag, 0, v18);
          v21 = __rdtsc();
          _InterlockedOr(v24, 0);
          ++dword_14043B154;
          KeInvalidateAllCaches();
          _InterlockedOr(v24, 0);
          v22 = __rdtsc();
          _InterlockedOr(v24, 0);
          v3 += (((unsigned __int64)HIDWORD(v22) << 32) | (unsigned int)v22) - v21;
          --v20;
        }
        while ( v20 );
        ExFreePoolWithTag(PoolWithTag, 0);
        dword_14043B15C = (v3 & 0xFFFFFFFFFFFFFFFEuLL) / v16;
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v15);
    return MiReleaseFreshPage(v4);
  }
  return result;
}
