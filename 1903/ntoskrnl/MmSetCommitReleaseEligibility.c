/*
 * XREFs of MmSetCommitReleaseEligibility @ 0x1402BCB14
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MmSetCommitReleaseEligibility(ULONG_PTR BugCheckParameter1, int a2)
{
  int v4; // ebp
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // ecx
  unsigned int v11; // ebx
  char v12; // cl
  _BYTE v14[48]; // [rsp+28h] [rbp-50h] BYREF

  memset(v14, 0, sizeof(v14));
  v4 = 0;
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
  {
    v4 = 1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v14);
  }
  SharedVm = MiGetSharedVm(BugCheckParameter1 + 1280);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = *(unsigned int *)(BugCheckParameter1 + 780);
  v10 = *(_DWORD *)(BugCheckParameter1 + 1464);
  if ( (v9 & 0x20) != 0 )
  {
    v11 = -1073741558;
  }
  else
  {
    if ( a2 )
      v12 = HIBYTE(v10) & 0x9F | 0x20;
    else
      v12 = HIBYTE(v10) & 0x9F;
    *(_BYTE *)(BugCheckParameter1 + 1467) = v12;
    v11 = 0;
  }
  LOBYTE(v9) = v6;
  MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1280, v9, v7, v8);
  if ( v4 )
    KiUnstackDetachProcess((struct _KTHREAD *)v14, 0);
  return v11;
}
