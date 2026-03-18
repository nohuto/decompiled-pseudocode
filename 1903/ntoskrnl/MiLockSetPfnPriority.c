/*
 * XREFs of MiLockSetPfnPriority @ 0x140121F80
 * Callers:
 *     MiDeleteVa @ 0x14004B480 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x14004CF70 (MiAgePteWorker.c)
 *     MmUnmapViewInSystemCache @ 0x140070300 (MmUnmapViewInSystemCache.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 *     MiUpdateOldPteWorker @ 0x1402C9580 (MiUpdateOldPteWorker.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockSetPfnPriority(__int64 a1, char a2)
{
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v5);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  *(_BYTE *)(a1 + 35) ^= (a2 ^ *(_BYTE *)(a1 + 35)) & 7;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
