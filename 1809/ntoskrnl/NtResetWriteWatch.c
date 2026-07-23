/*
 * XREFs of NtResetWriteWatch @ 0x1405EF780
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A30 (MiMoveDirtyBitsToPfns.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtResetWriteWatch(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T RegionSize)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdi
  char *v7; // r15
  void *v8; // r12
  int v9; // ebx
  __int64 v10; // rax
  char *v11; // rdi
  NTSTATUS v12; // r14d
  int v14; // [rsp+40h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v16[48]; // [rsp+50h] [rbp-78h] BYREF

  if ( (unsigned __int64)BaseAddress > 0x7FFFFFFEFFFFLL )
    return -1073741584;
  if ( 0x7FFFFFFF0000LL - (__int64)BaseAddress >= RegionSize && RegionSize )
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    v7 = (char *)BaseAddress + RegionSize - 1;
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
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v16);
        v9 = 1;
      }
    }
    v10 = MiObtainReferencedVadEx((unsigned __int64)BaseAddress, 0, &v14);
    v11 = (char *)v10;
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 48) & 7) == 4
        && (unsigned __int64)v7 <= (((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) << 12) | 0xFFF) )
      {
        MiMoveDirtyBitsToPfns((unsigned __int64)BaseAddress, (unsigned __int64)v7, v10, 0LL);
        v12 = 0;
      }
      else
      {
        v12 = -1073741585;
      }
      MiUnlockAndDereferenceVad(v11);
    }
    else
    {
      v12 = -1073741585;
    }
    if ( v9 )
      KiUnstackDetachProcess((__int64)v16, 0LL);
    if ( ProcessHandle != (HANDLE)-1LL )
      ObfDereferenceObjectWithTag(v8, 0x77576D4Du);
    return v12;
  }
  return -1073741583;
}
