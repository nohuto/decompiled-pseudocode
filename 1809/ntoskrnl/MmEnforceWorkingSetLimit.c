/*
 * XREFs of MmEnforceWorkingSetLimit @ 0x14008FA70
 * Callers:
 *     PspApplyWorkingSetLimitsToProcess @ 0x140605D74 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspSetQuotaLimits @ 0x1406D2398 (PspSetQuotaLimits.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x14088A980 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x14088AA44 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MmEnforceWorkingSetLimit(_KPROCESS *BugCheckParameter1, char a2)
{
  __int64 v2; // r14
  int v3; // r12d
  unsigned int v4; // r15d
  char v5; // di
  char v6; // si
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  unsigned __int8 v9; // r13
  int v10; // ecx
  BOOL v11; // r8d
  unsigned __int8 v12; // r9
  char v13; // cl
  char v14; // dl
  char v15; // dl
  __int64 v16; // r8
  __int64 v17; // r9
  __int16 v19; // [rsp+24h] [rbp-5Ch]
  _QWORD v20[3]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v21[48]; // [rsp+40h] [rbp-40h] BYREF

  v2 = (__int64)&BugCheckParameter1[1].IdealNode[12];
  v3 = 0;
  v4 = 0;
  v5 = a2 & 0xF7;
  v6 = (a2 & 4) != 0 ? 0x80 : 0;
  if ( (a2 & 4) == 0 )
    v5 = a2;
  if ( (v5 & 1) != 0 )
  {
    v5 &= ~2u;
    v6 |= 0x40u;
  }
  if ( KeGetCurrentThread()->ApcState.Process != BugCheckParameter1 )
  {
    v3 = 1;
    KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v21);
  }
  SharedVm = MiGetSharedVm(v2);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v20[0] = 0LL;
  v20[1] = &qword_14043BF40;
  v9 = v8;
  KxAcquireQueuedSpinLock(v20);
  v10 = *(_DWORD *)(v2 + 184);
  v19 = v10;
  if ( (v5 & 8) != 0 )
  {
    LOBYTE(v10) = v10 & 0x7F;
    LOBYTE(v19) = v10;
  }
  v11 = (v5 & 8) != 0;
  if ( (v5 & 2) != 0 )
  {
    v11 = 1;
    LOBYTE(v19) = v10 & 0xBF;
  }
  v12 = v10 & 0xBF;
  if ( (v5 & 2) == 0 )
    v12 = v10;
  v13 = v6 | 0x80;
  if ( v12 >> 7 != 1 )
    v13 = v6;
  v14 = v13 | 0x40;
  if ( (v12 & 0x40) == 0 )
    v14 = v13;
  if ( v14 < 0 && (v14 & 0x40) != 0 && (unsigned __int64)(*(_QWORD *)(v2 + 112) + 6LL) >= *(_QWORD *)(v2 + 152) )
  {
    v5 = -6;
    v4 = -1073741748;
  }
  if ( (v5 & 4) != 0 )
  {
    v11 = 1;
    LOBYTE(v19) = v12 | 0x80;
  }
  v15 = v12 | 0x80;
  if ( (v5 & 4) == 0 )
    v15 = v12;
  if ( (v5 & 1) != 0 )
  {
    v11 = 1;
    LOBYTE(v19) = v15 | 0x40;
  }
  if ( v11 )
    *(_WORD *)(v2 + 184) = v19;
  KxReleaseQueuedSpinLock(v20);
  MiUnlockWorkingSetExclusive(v2, v9, v16, v17);
  if ( v3 )
    KiUnstackDetachProcess((__int64)v21, 0LL);
  return v4;
}
