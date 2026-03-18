/*
 * XREFs of MiInitializeCacheFlushing @ 0x1409F206C
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiZeroPhysicalPage @ 0x14006ED90 (MiZeroPhysicalPage.c)
 *     MiFinalizePageAttribute @ 0x1400A3F48 (MiFinalizePageAttribute.c)
 *     KeInvalidateAllCaches @ 0x1400B7B70 (KeInvalidateAllCaches.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400B8B90 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MiReleaseFreshPage @ 0x1400F62CC (MiReleaseFreshPage.c)
 *     MiFlushCacheForAttributeChange @ 0x14015B120 (MiFlushCacheForAttributeChange.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwQuerySystemInformation @ 0x1401C0790 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeCacheFlushing()
{
  __int64 result; // rax
  ULONG_PTR v1; // rbx
  unsigned __int64 v2; // rsi
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 CurrentIrql; // r12
  __int64 v6; // r15
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rbp
  unsigned __int8 v9; // r12
  unsigned __int64 v10; // rsi
  unsigned int v11; // eax
  SIZE_T v12; // r13
  PVOID PoolWithTag; // rbp
  __int64 v14; // r15
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v18[8]; // [rsp+0h] [rbp-88h] BYREF
  int v19; // [rsp+20h] [rbp-68h] BYREF
  int v20; // [rsp+24h] [rbp-64h] BYREF
  __int64 v21; // [rsp+28h] [rbp-60h]
  _BYTE SystemInformation[32]; // [rsp+30h] [rbp-58h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  if ( ZwQuerySystemInformation(SystemFlushInformation, SystemInformation, 0x20u, 0LL) >= 0
    && (SystemInformation[8] & 1) != 0 )
  {
    byte_140465AA0 = 1;
  }
  result = MiGetPage((__int64)&MiSystemPartition, 0, 0LL);
  v1 = result;
  if ( result != -1 )
  {
    v2 = 0LL;
    v3 = 0LL;
    v4 = 48 * result - 0x58000000000LL;
    MiFinalizePageAttribute(v4, 1LL, 0);
    CurrentIrql = KeGetCurrentIrql();
    v21 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v6 = 4LL;
    do
    {
      MiZeroPhysicalPage(v1, 1, 0);
      v19 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v19);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      *(_BYTE *)(v4 + 34) &= 0x3Fu;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v7 = __rdtsc();
      _InterlockedOr(v18, 0);
      MiFlushCacheForAttributeChange(v1, 1LL, 0LL);
      _InterlockedOr(v18, 0);
      v20 = 0;
      v8 = __rdtsc();
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v20);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      *(_BYTE *)(v4 + 34) = *(_BYTE *)(v4 + 34) & 0x3F | 0x40;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushEntireTbDueToAttributeChange();
      v2 += v8 - v7;
      --v6;
    }
    while ( v6 );
    v9 = v21;
    v10 = v2 >> 2;
    if ( v10 )
    {
      v11 = dword_140465A94;
      if ( !dword_140465A94 )
        v11 = 256;
      v12 = 3 * (v11 >> 2);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x20206D4Du);
      if ( PoolWithTag )
      {
        v14 = 2LL;
        do
        {
          memset(PoolWithTag, 0, v12);
          v15 = __rdtsc();
          _InterlockedOr(v18, 0);
          ++dword_140465ABC;
          KeInvalidateAllCaches();
          _InterlockedOr(v18, 0);
          v16 = __rdtsc();
          _InterlockedOr(v18, 0);
          v3 += (((unsigned __int64)HIDWORD(v16) << 32) | (unsigned int)v16) - v15;
          --v14;
        }
        while ( v14 );
        ExFreePoolWithTag(PoolWithTag, 0);
        dword_140465AC4 = (v3 & 0xFFFFFFFFFFFFFFFEuLL) / v10;
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v9);
    return MiReleaseFreshPage(v4);
  }
  return result;
}
