/*
 * XREFs of NtResetWriteWatch @ 0x140605A40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockAndDereferenceVad @ 0x140050550 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140050810 (MiObtainReferencedVadEx.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052C00 (MiMoveDirtyBitsToPfns.c)
 *     MiGetVadMandatoryPageSize @ 0x1400537F0 (MiGetVadMandatoryPageSize.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtResetWriteWatch(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T RegionSize)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdi
  void *v8; // r13
  int v9; // ebx
  unsigned __int64 v10; // rax
  char *v11; // rdi
  NTSTATUS v12; // esi
  unsigned __int64 VadMandatoryPageSize; // rax
  __int64 v15; // rax
  int v16; // [rsp+40h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v18[48]; // [rsp+50h] [rbp-78h] BYREF

  memset(v18, 0, sizeof(v18));
  if ( (unsigned __int64)BaseAddress > 0x7FFFFFFEFFFFLL )
    return -1073741584;
  if ( 0x7FFFFFFF0000LL - (__int64)BaseAddress >= RegionSize && RegionSize )
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    if ( ProcessHandle == (HANDLE)-1LL )
    {
      v8 = CurrentThread->ApcState.Process;
      v9 = 0;
    }
    else
    {
      v12 = ObpReferenceObjectByHandleWithTag(
              (ULONG_PTR)ProcessHandle,
              8,
              (__int64)PsProcessType,
              CurrentThread->PreviousMode,
              0x77576D4Du,
              &BugCheckParameter1,
              0LL,
              0LL);
      if ( v12 < 0 )
        return v12;
      v8 = (void *)BugCheckParameter1;
      v9 = 0;
      if ( Process != (_KPROCESS *)BugCheckParameter1 )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v18);
        v9 = 1;
      }
    }
    v10 = MiObtainReferencedVadEx((unsigned __int64)BaseAddress, 0, &v16);
    v11 = (char *)v10;
    if ( !v10 )
    {
      v12 = -1073741585;
      goto LABEL_10;
    }
    if ( (*(_DWORD *)(v10 + 48) & 0x300000) == 0x300000
      && (unsigned __int64)BaseAddress + RegionSize - 1 <= (((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) << 12) | 0xFFF) )
    {
      VadMandatoryPageSize = MiGetVadMandatoryPageSize(v10);
      if ( VadMandatoryPageSize <= 1 )
      {
LABEL_17:
        MiMoveDirtyBitsToPfns(
          (unsigned __int64)BaseAddress,
          (unsigned __int64)BaseAddress + RegionSize - 1,
          (__int64)v11,
          1);
        v12 = 0;
        goto LABEL_9;
      }
      v15 = (VadMandatoryPageSize << 12) - 1;
      if ( (v15 & (unsigned __int64)BaseAddress) == 0 )
      {
        if ( (v15 & RegionSize) != 0 )
        {
          v12 = -1073741583;
          goto LABEL_9;
        }
        goto LABEL_17;
      }
    }
    v12 = -1073741585;
LABEL_9:
    MiUnlockAndDereferenceVad(v11);
LABEL_10:
    if ( v9 )
      KiUnstackDetachProcess((struct _KTHREAD *)v18, 0);
    if ( ProcessHandle != (HANDLE)-1LL )
      ObfDereferenceObjectWithTag(v8, 0x77576D4Du);
    return v12;
  }
  return -1073741583;
}
