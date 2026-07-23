/*
 * XREFs of NtInitializeEnclave @ 0x140894C00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     MiInitializeEnclave @ 0x1408939B0 (MiInitializeEnclave.c)
 */

NTSTATUS __cdecl NtInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  SIZE_T v5; // r13
  PVOID PoolWithTag; // rdi
  char PreviousMode; // dl
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _KPROCESS *Process; // rsi
  PVOID v14; // rsi
  char v16; // [rsp+40h] [rbp-B8h]
  ULONG v17; // [rsp+48h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-A8h] BYREF
  PVOID v19; // [rsp+58h] [rbp-A0h]
  HANDLE v20; // [rsp+68h] [rbp-90h]
  PULONG v21; // [rsp+70h] [rbp-88h]
  PVOID v22; // [rsp+78h] [rbp-80h]
  _BYTE v23[48]; // [rsp+88h] [rbp-70h] BYREF

  v5 = EnclaveInformationLength;
  v22 = BaseAddress;
  v20 = ProcessHandle;
  v21 = EnclaveError;
  memset(v23, 0, sizeof(v23));
  Object = 0LL;
  v17 = 0;
  PoolWithTag = 0LL;
  v19 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v16 = PreviousMode;
  if ( EnclaveError && PreviousMode == 1 )
  {
    v10 = (__int64)EnclaveError;
    if ( (unsigned __int64)EnclaveError >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v10 = *(_DWORD *)v10;
  }
  if ( !(_DWORD)v5 )
    goto LABEL_17;
  if ( (unsigned int)v5 <= 0x1000 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x44456D4Du);
    v19 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v11 = -1073741670;
      goto LABEL_22;
    }
    if ( v16 == 1
      && v5 - 1 > 0xFFFE
      && ((unsigned __int64)EnclaveInformation + v5 > 0x7FFFFFFF0000LL
       || (char *)EnclaveInformation + v5 < EnclaveInformation) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, EnclaveInformation, v5);
    PreviousMode = v16;
LABEL_17:
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    if ( ProcessHandle == (HANDLE)-1LL )
    {
      Object = CurrentThread->ApcState.Process;
    }
    else
    {
      v11 = ObpReferenceObjectByHandleWithTag(
              (ULONG_PTR)ProcessHandle,
              8,
              (__int64)PsProcessType,
              PreviousMode,
              0x6D566D4Du,
              &Object,
              0LL,
              0LL);
      if ( v11 < 0 )
        goto LABEL_22;
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v23);
    }
    v11 = MiInitializeEnclave(Process, (unsigned __int64)v22, (__int64)PoolWithTag, v5, &v17);
    goto LABEL_22;
  }
  v11 = -1073741820;
LABEL_22:
  v14 = Object;
  if ( Object && ProcessHandle != (HANDLE)-1LL )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)v23, 0);
    ObfDereferenceObjectWithTag(v14, 0x6D566D4Du);
  }
  if ( EnclaveError )
    *EnclaveError = v17;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v11;
}
