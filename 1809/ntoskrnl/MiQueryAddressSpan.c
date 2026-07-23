/*
 * XREFs of MiQueryAddressSpan @ 0x140075E90
 * Callers:
 *     MmQueryVirtualMemory @ 0x1405EF910 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 */

__int64 __fastcall MiQueryAddressSpan(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, ULONG_PTR a4)
{
  int v4; // r13d
  __int64 v5; // r10
  unsigned __int64 v7; // rbx
  unsigned __int16 *v10; // r12
  unsigned __int8 v11; // r15
  __int64 v12; // rax
  int v13; // eax
  unsigned __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned int v17; // [rsp+90h] [rbp+8h] BYREF
  int v18; // [rsp+98h] [rbp+10h] BYREF
  int v19; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v20; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  v5 = *(unsigned int *)(a4 + 28);
  v7 = a3;
  if ( a3 > (((v5 | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) << 12) | 0xFFF) + 1 || !a3 )
    v7 = (((v5 | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) << 12) | 0xFFF) + 1;
  v10 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v11 = MiLockWorkingSetShared(v10);
  *(_DWORD *)(a1 + 32) = MiQueryAddressState(a2, v7 - 1, v11, a4, 0LL, (int *)&v17, (__int64 *)&v20, &v18);
  v12 = v17;
  v17 = v12;
  if ( (_DWORD)v12 )
    v13 = MmProtectToValue[v12];
  else
    v13 = 0;
  *(_DWORD *)(a1 + 36) = v13;
  v14 = v20;
  v15 = v20;
  while ( v14 < v7 )
  {
    if ( (unsigned int)MiQueryAddressState(v14, v7 - 1, v11, a4, a1, &v19, (__int64 *)&v20, &v18) != *(_DWORD *)(a1 + 32)
      || v19 != v17 )
    {
      break;
    }
    v14 = v20;
    ++v4;
    v15 = v20;
    if ( (v4 & 0x1F) == 0 && (unsigned int)MiWorkingSetIsContended(v10) || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetShared((__int64)v10, v11);
      MiLockWorkingSetShared(v10);
    }
  }
  MiUnlockWorkingSetShared((__int64)v10, v11);
  return v15;
}
