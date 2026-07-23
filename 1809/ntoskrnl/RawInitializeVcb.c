/*
 * XREFs of RawInitializeVcb @ 0x1405A36B4
 * Callers:
 *     RawMountVolume @ 0x1405A3988 (RawMountVolume.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1405A37E0 (ExAllocateCacheAwareRundownProtection.c)
 */

__int64 __fastcall RawInitializeVcb(_DWORD *a1, __int64 a2, __int64 a3)
{
  PVOID PoolWithTag; // rax
  PVOID v7; // rbx
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  unsigned int v9; // ebx
  char v10; // al
  __int64 result; // rax

  memset(a1, 0, 0x150uLL);
  *((_QWORD *)a1 + 23) = a3;
  *a1 = 22021632;
  *((_QWORD *)a1 + 22) = a2;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x20776152u);
  *((_QWORD *)a1 + 24) = PoolWithTag;
  v7 = PoolWithTag;
  CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x20776152u);
  *((_QWORD *)a1 + 27) = CacheAwareRundownProtection;
  a1[56] = 1;
  v9 = v7 == 0LL ? 0xC000009A : 0;
  if ( !CacheAwareRundownProtection )
    v9 = -1073741670;
  *((_QWORD *)a1 + 29) = 0LL;
  a1[60] = 0;
  KeInitializeEvent((PRKEVENT)(a1 + 62), SynchronizationEvent, 0);
  *((_QWORD *)a1 + 36) = 0LL;
  a1[74] = 0;
  a1[70] = 1;
  KeInitializeEvent((PRKEVENT)(a1 + 76), SynchronizationEvent, 0);
  v10 = *((_BYTE *)a1 + 7);
  *((_BYTE *)a1 + 4) |= 0x40u;
  *((_BYTE *)a1 + 6) |= 2u;
  *((_BYTE *)a1 + 7) = v10 & 0xF | 0x30;
  *((_QWORD *)a1 + 8) = a1 + 14;
  *((_QWORD *)a1 + 7) = a1 + 14;
  if ( a1 != (_DWORD *)-280LL )
    *((_QWORD *)a1 + 6) = a1 + 70;
  *((_QWORD *)a1 + 9) = 0LL;
  result = v9;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 11) = 0LL;
  *((_QWORD *)a1 + 12) = 0LL;
  a1[26] |= 0x10u;
  return result;
}
