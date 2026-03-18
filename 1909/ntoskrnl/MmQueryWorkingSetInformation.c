/*
 * XREFs of MmQueryWorkingSetInformation @ 0x14011FEF0
 * Callers:
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140324FA8 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x140325388 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     PspQueryQuotaLimits @ 0x1406C6C14 (PspQueryQuotaLimits.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 */

__int64 __fastcall MmQueryWorkingSetInformation(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _DWORD *a6)
{
  unsigned __int16 *v10; // rbp
  unsigned __int8 v11; // dl
  char v12; // al

  *a6 = 0;
  v10 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  v11 = MiLockWorkingSetShared((__int64)v10);
  *a1 = *((_QWORD *)v10 + 20) << 12;
  *a2 = *((_QWORD *)v10 + 15) << 12;
  *a3 = *((_QWORD *)v10 + 16) << 12;
  *a4 = *((_QWORD *)v10 + 14) << 12;
  *a5 = *((_QWORD *)v10 + 19) << 12;
  v12 = *((_BYTE *)v10 + 184);
  if ( v12 < 0 )
  {
    *a6 |= 4u;
    v12 = *((_BYTE *)v10 + 184);
  }
  if ( (v12 & 0x40) != 0 )
    *a6 |= 1u;
  MiUnlockWorkingSetShared((__int64)v10, v11);
  return 0LL;
}
