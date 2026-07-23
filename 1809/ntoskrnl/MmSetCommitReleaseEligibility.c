/*
 * XREFs of MmSetCommitReleaseEligibility @ 0x1402A5988
 * Callers:
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MmSetCommitReleaseEligibility(__int64 a1, int a2)
{
  int v2; // ebp
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  int v10; // edx
  char v11; // dl
  _BYTE v13[48]; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)a1 )
  {
    v2 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v13);
  }
  SharedVm = MiGetSharedVm(a1 + 1280);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  if ( (*(_DWORD *)(a1 + 772) & 0x20) != 0 )
  {
    v9 = -1073741558;
  }
  else
  {
    v10 = HIBYTE(*(_DWORD *)(a1 + 1464));
    if ( a2 )
      v11 = v10 & 0x9F | 0x20;
    else
      v11 = v10 & 0x9F;
    *(_BYTE *)(a1 + 1467) = v11;
    v9 = 0;
  }
  MiUnlockWorkingSetExclusive(a1 + 1280, v6, v7, v8);
  if ( v2 )
    KiUnstackDetachProcess((__int64)v13, 0LL);
  return v9;
}
