/*
 * XREFs of NtCreateEnclave @ 0x14085BB20
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     MiValidateZeroBits @ 0x1406785EC (MiValidateZeroBits.c)
 *     ExSystemExceptionFilter @ 0x1406E3A10 (ExSystemExceptionFilter.c)
 *     MiCreateEnclave @ 0x14085AD08 (MiCreateEnclave.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateEnclave(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T Size,
        SIZE_T InitialCommitment,
        ULONG EnclaveType,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  PVOID PoolWithTag; // r14
  char PreviousMode; // al
  __int64 v12; // rcx
  SIZE_T v13; // r12
  NTSTATUS Enclave; // ebx
  int v15; // ebx
  char v16; // dl
  __int64 v17; // rcx
  void *Process; // rdi
  char v20; // [rsp+50h] [rbp-C8h]
  _DWORD Size_4[3]; // [rsp+64h] [rbp-B4h] BYREF
  unsigned __int64 v23[2]; // [rsp+70h] [rbp-A8h] BYREF
  SIZE_T v24; // [rsp+80h] [rbp-98h]
  ULONGLONG v25[2]; // [rsp+88h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+98h] [rbp-80h] BYREF
  _BYTE v27[48]; // [rsp+A0h] [rbp-78h] BYREF

  v24 = Size;
  v25[1] = (ULONGLONG)BaseAddress;
  v25[0] = ZeroBits;
  v23[1] = (unsigned __int64)EnclaveError;
  v23[0] = 0LL;
  PoolWithTag = 0LL;
  memset(Size_4, 0, sizeof(Size_4));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v20 = PreviousMode;
  if ( EnclaveError && PreviousMode == 1 )
  {
    v12 = (__int64)EnclaveError;
    if ( (unsigned __int64)EnclaveError >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
  }
  if ( EnclaveType == 1 )
  {
LABEL_16:
    if ( qword_14043B248 )
    {
      v15 = 4096;
      v13 = InitialCommitment;
      goto LABEL_18;
    }
LABEL_15:
    Enclave = -1073741637;
    goto LABEL_47;
  }
  if ( EnclaveType == 2 )
  {
    if ( (MEMORY[0x7FFE036C] & 4) == 0 )
      goto LABEL_15;
    goto LABEL_16;
  }
  if ( EnclaveType != 16 )
    goto LABEL_15;
  v13 = InitialCommitment;
  if ( InitialCommitment )
  {
LABEL_10:
    Enclave = -1073741581;
    goto LABEL_47;
  }
  if ( EnclaveInformationLength > 0x24 )
    goto LABEL_12;
  v15 = 0;
LABEL_18:
  if ( (int)MiValidateZeroBits(v25) < 0 )
  {
    Enclave = -1073741583;
    goto LABEL_47;
  }
  if ( !v24 )
  {
    Enclave = -1073741582;
    goto LABEL_47;
  }
  if ( v13 > v24 )
    goto LABEL_10;
  v16 = v20;
  if ( v20 == 1 )
  {
    v17 = (__int64)BaseAddress;
    if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v17 = *(_QWORD *)v17;
  }
  v23[0] = (unsigned __int64)*BaseAddress;
  if ( EnclaveInformationLength )
  {
    if ( v15 && EnclaveInformationLength != v15 )
    {
LABEL_12:
      Enclave = -1073741820;
      goto LABEL_47;
    }
    PoolWithTag = ExAllocatePoolWithTag(
                    PagedPool,
                    (EnclaveInformationLength + 4095LL) & 0xFFFFFFFFFFFFF000uLL,
                    0x44456D4Du);
    *(_QWORD *)&Size_4[1] = PoolWithTag;
    if ( !PoolWithTag )
    {
      Enclave = -1073741670;
      goto LABEL_47;
    }
    if ( v20 == 1 )
    {
      if ( (unsigned __int64)EnclaveInformationLength - 1 > 0xFFFE )
      {
        if ( ((unsigned __int8)EnclaveInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)EnclaveInformation + EnclaveInformationLength > 0x7FFFFFFF0000LL
          || (char *)EnclaveInformation + EnclaveInformationLength < EnclaveInformation )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else if ( ((unsigned __int8)EnclaveInformation & 3) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
    }
    memmove(PoolWithTag, EnclaveInformation, EnclaveInformationLength);
    v16 = v20;
  }
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
  }
  else
  {
    Enclave = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)ProcessHandle,
                8,
                (__int64)PsProcessType,
                v16,
                0x6D566D4Du,
                &BugCheckParameter1,
                0LL,
                0LL);
    if ( Enclave < 0 )
      goto LABEL_47;
    Process = (void *)BugCheckParameter1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v27);
  }
  Enclave = MiCreateEnclave(
              (__int64)Process,
              v23,
              v25[0],
              v24,
              v13,
              EnclaveType,
              (__int64)PoolWithTag,
              EnclaveInformationLength,
              (__int64)Size_4);
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KiUnstackDetachProcess((__int64)v27, 0LL);
    ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
  }
LABEL_47:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( Enclave >= 0 )
    *BaseAddress = (PVOID)v23[0];
  if ( EnclaveError )
    *EnclaveError = Size_4[0];
  return Enclave;
}
