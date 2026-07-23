/*
 * XREFs of NtInitializeEnclave @ 0x14085BF40
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
 *     MiInitializeEnclave @ 0x14085B4A0 (MiInitializeEnclave.c)
 */

NTSTATUS __cdecl NtInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  size_t v5; // r13
  PVOID v7; // rsi
  _DWORD *PoolWithTag; // rdi
  char PreviousMode; // dl
  __int64 v11; // rcx
  NTSTATUS v12; // ebx
  PVOID v13; // rsi
  char v15; // [rsp+40h] [rbp-B8h]
  ULONG v17; // [rsp+50h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A0h] BYREF
  _DWORD *v19; // [rsp+60h] [rbp-98h]
  HANDLE v20; // [rsp+70h] [rbp-88h]
  PULONG v21; // [rsp+78h] [rbp-80h]
  _BYTE v22[48]; // [rsp+88h] [rbp-70h] BYREF

  v5 = EnclaveInformationLength;
  v7 = BaseAddress;
  v20 = ProcessHandle;
  v21 = EnclaveError;
  Object = 0LL;
  v17 = 0;
  PoolWithTag = 0LL;
  v19 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v15 = PreviousMode;
  if ( EnclaveError && PreviousMode == 1 )
  {
    v11 = (__int64)EnclaveError;
    if ( (unsigned __int64)EnclaveError >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v11 = *(_DWORD *)v11;
  }
  if ( !EnclaveInformationLength )
    goto LABEL_18;
  if ( EnclaveInformationLength <= 0x1000 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, EnclaveInformationLength, 0x44456D4Du);
    v19 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v12 = -1073741670;
      goto LABEL_23;
    }
    if ( v15 == 1
      && v5 - 1 > 0xFFFE
      && (_DWORD)v5
      && ((unsigned __int64)EnclaveInformation + v5 > 0x7FFFFFFF0000LL
       || (char *)EnclaveInformation + v5 < EnclaveInformation) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, EnclaveInformation, v5);
    PreviousMode = v15;
    v7 = BaseAddress;
LABEL_18:
    if ( ProcessHandle == (HANDLE)-1LL )
    {
      Object = KeGetCurrentThread()->ApcState.Process;
    }
    else
    {
      v12 = ObpReferenceObjectByHandleWithTag(
              (ULONG_PTR)ProcessHandle,
              8,
              (__int64)PsProcessType,
              PreviousMode,
              0x6D566D4Du,
              &Object,
              0LL,
              0LL);
      if ( v12 < 0 )
        goto LABEL_23;
      KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)v22);
    }
    v12 = MiInitializeEnclave((unsigned __int64)v7, PoolWithTag, v5, &v17);
    goto LABEL_23;
  }
  v12 = -1073741820;
LABEL_23:
  v13 = Object;
  if ( Object && ProcessHandle != (HANDLE)-1LL )
  {
    KiUnstackDetachProcess((__int64)v22, 0LL);
    ObfDereferenceObjectWithTag(v13, 0x6D566D4Du);
  }
  if ( EnclaveError )
    *EnclaveError = v17;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v12;
}
