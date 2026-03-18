/*
 * XREFs of MiOutSwapWorkingSet @ 0x1400F44E8
 * Callers:
 *     MiOutSwapKernelStackPage @ 0x1400F3D40 (MiOutSwapKernelStackPage.c)
 *     MmOutSwapWorkingSet @ 0x1400F3E2C (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x14014389C (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall MiOutSwapWorkingSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v9; // zf
  LONG *SharedVm; // rbx
  KIRQL v11; // al
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  _QWORD v15[22]; // [rsp+20h] [rbp-91h] BYREF

  memset(v15, 0, 0xA8uLL);
  v9 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v15[18] = MiOutSwapWorkingSetPte;
  LOWORD(v15[0]) = 129;
  v15[2] = a1;
  v15[20] = a5;
  if ( v9 )
  {
    v15[3] = a3;
    LOWORD(v15[0]) = 131;
    v15[4] = a4;
    SharedVm = MiGetSharedVm(a1);
    v11 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v14 = *(unsigned int *)(a2 + 48);
    BYTE6(v15[0]) = v11;
    if ( (v14 & 4) != 0 )
    {
      LOBYTE(v14) = v11;
      goto LABEL_5;
    }
  }
  else
  {
    BYTE6(v15[0]) = 17;
  }
  MiWalkPageTables((__int16 *)v15);
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return;
  LOBYTE(v14) = BYTE6(v15[0]);
LABEL_5:
  MiUnlockWorkingSetExclusive(a1, v14, v12, v13);
}
