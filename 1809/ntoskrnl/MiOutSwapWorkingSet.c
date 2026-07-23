/*
 * XREFs of MiOutSwapWorkingSet @ 0x1400E5868
 * Callers:
 *     MiOutSwapKernelStackPage @ 0x1400E50BC (MiOutSwapKernelStackPage.c)
 *     MmOutSwapWorkingSet @ 0x1400E51A8 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x1402CBC80 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void __fastcall MiOutSwapWorkingSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v9; // zf
  LONG *SharedVm; // rbx
  KIRQL v11; // al
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 v14; // dl
  _QWORD v15[22]; // [rsp+20h] [rbp-91h] BYREF

  memset(v15, 0, sizeof(v15));
  v9 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v15[19] = MiOutSwapWorkingSetPte;
  v15[3] = a1;
  v15[21] = a5;
  LODWORD(v15[0]) = 129;
  if ( v9 )
  {
    LODWORD(v15[0]) = 131;
    v15[4] = a3;
    v15[5] = a4;
    SharedVm = MiGetSharedVm(a1);
    v11 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v9 = (*(_DWORD *)(a2 + 48) & 0x20000000) == 0;
    BYTE4(v15[0]) = v11;
    if ( !v9 )
    {
      v14 = v11;
      goto LABEL_5;
    }
  }
  else
  {
    BYTE4(v15[0]) = 17;
  }
  MiWalkPageTables((int *)v15);
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return;
  v14 = BYTE4(v15[0]);
LABEL_5:
  MiUnlockWorkingSetExclusive(a1, v14, v12, v13);
}
