/*
 * XREFs of MmQuerySystemWorkingSetInformation @ 0x140130B04
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetStandbyRepurposed @ 0x1400EF3CC (MiGetStandbyRepurposed.c)
 *     MiGetCurrentMultiplexedVm @ 0x1400EF564 (MiGetCurrentMultiplexedVm.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

_UNKNOWN **__fastcall MmQuerySystemWorkingSetInformation(int a1, _QWORD *a2)
{
  _UNKNOWN **result; // rax
  int v5; // ecx
  int v6; // edx
  __int64 AnyMultiplexedVm; // rdi
  int v8; // r8d
  __int64 v9; // rbp
  __int64 v10; // rsi
  unsigned __int8 v11; // r14
  LONG *SharedVm; // rax
  char v13; // al
  LONG *v14; // rax
  int StandbyRepurposed; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  int v18; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  *((_DWORD *)a2 + 15) = 0;
  v5 = 2;
  v6 = a1 - 2;
  if ( v6 )
  {
    v18 = v6 - 1;
    if ( v18 )
    {
      if ( v18 != 1 )
        return result;
      v5 = 1;
    }
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(v5);
  }
  else
  {
    AnyMultiplexedVm = MiGetCurrentMultiplexedVm();
    if ( !AnyMultiplexedVm )
      return (_UNKNOWN **)memset(a2, 0, 0x40uLL);
  }
  v9 = (unsigned int)(v8 - 2);
  v10 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174));
  v11 = MiLockWorkingSetShared(AnyMultiplexedVm);
  SharedVm = MiGetSharedVm(AnyMultiplexedVm);
  ExAcquireSpinLockExclusiveAtDpcLevel(SharedVm + 10);
  *a2 = *(_QWORD *)(AnyMultiplexedVm + 120);
  a2[1] = *(_QWORD *)(AnyMultiplexedVm + 160);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(AnyMultiplexedVm + 4);
  a2[3] = *(_QWORD *)(AnyMultiplexedVm + 112);
  a2[4] = *(_QWORD *)(AnyMultiplexedVm + 152);
  v13 = *(_BYTE *)(AnyMultiplexedVm + 184);
  if ( v13 < 0 )
  {
    *((_DWORD *)a2 + 15) |= 4u;
    v13 = *(_BYTE *)(AnyMultiplexedVm + 184);
  }
  if ( (v13 & 0x40) != 0 )
    *((_DWORD *)a2 + 15) |= 1u;
  a2[6] = *(_QWORD *)(v10 + 8 * v9 + 4296);
  v14 = MiGetSharedVm(AnyMultiplexedVm);
  ExReleaseSpinLockExclusiveFromDpcLevel(v14 + 10);
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v11);
  StandbyRepurposed = MiGetStandbyRepurposed(v10, 1u);
  v16 = *a2;
  *((_DWORD *)a2 + 14) = StandbyRepurposed;
  result = (_UNKNOWN **)a2[6];
  v17 = v16 + *(_QWORD *)(v10 + 4288);
  a2[5] = v17;
  if ( v17 > (unsigned __int64)result )
    a2[5] = result;
  a2[1] <<= 12;
  *a2 = v16 << 12;
  return result;
}
