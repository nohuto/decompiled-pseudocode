/*
 * XREFs of NtCreateEnclave @ 0x14085A8E0
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E8390 (ObpReferenceObjectByHandleWithTag.c)
 *     MiValidateZeroBits @ 0x14067744C (MiValidateZeroBits.c)
 *     ExSystemExceptionFilter @ 0x1406E2790 (ExSystemExceptionFilter.c)
 *     MiCreateEnclave @ 0x140859AC8 (MiCreateEnclave.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D65E0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtCreateEnclave(
        ULONG_PTR a1,
        unsigned __int64 *a2,
        ULONGLONG a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        char *Src,
        unsigned int a8,
        _DWORD *a9)
{
  PVOID PoolWithTag; // r14
  char PreviousMode; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  int Enclave; // ebx
  int v15; // ebx
  char v16; // dl
  __int64 v17; // rcx
  void *Process; // rdi
  char v20; // [rsp+50h] [rbp-C8h]
  _DWORD Size_4[3]; // [rsp+64h] [rbp-B4h] BYREF
  unsigned __int64 v23[2]; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp-98h]
  ULONGLONG v25[2]; // [rsp+88h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+98h] [rbp-80h] BYREF
  _BYTE v27[48]; // [rsp+A0h] [rbp-78h] BYREF

  v24 = a4;
  v25[1] = (ULONGLONG)a2;
  v25[0] = a3;
  v23[1] = (unsigned __int64)a9;
  v23[0] = 0LL;
  PoolWithTag = 0LL;
  memset(Size_4, 0, sizeof(Size_4));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v20 = PreviousMode;
  if ( a9 && PreviousMode == 1 )
  {
    v12 = (__int64)a9;
    if ( (unsigned __int64)a9 >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
  }
  if ( a6 == 1 )
  {
LABEL_16:
    if ( qword_14043A188 )
    {
      v15 = 4096;
      v13 = a5;
      goto LABEL_18;
    }
LABEL_15:
    Enclave = -1073741637;
    goto LABEL_47;
  }
  if ( a6 == 2 )
  {
    if ( (MEMORY[0x7FFE036C] & 4) == 0 )
      goto LABEL_15;
    goto LABEL_16;
  }
  if ( a6 != 16 )
    goto LABEL_15;
  v13 = a5;
  if ( a5 )
  {
LABEL_10:
    Enclave = -1073741581;
    goto LABEL_47;
  }
  if ( a8 > 0x24 )
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
    v17 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v17 = *(_QWORD *)v17;
  }
  v23[0] = *a2;
  if ( a8 )
  {
    if ( v15 && a8 != v15 )
    {
LABEL_12:
      Enclave = -1073741820;
      goto LABEL_47;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (a8 + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x44456D4Du);
    *(_QWORD *)&Size_4[1] = PoolWithTag;
    if ( !PoolWithTag )
    {
      Enclave = -1073741670;
      goto LABEL_47;
    }
    if ( v20 == 1 )
    {
      if ( (unsigned __int64)a8 - 1 > 0xFFFE )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Src[a8] > 0x7FFFFFFF0000LL || &Src[a8] < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else if ( ((unsigned __int8)Src & 3) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
    }
    memmove(PoolWithTag, Src, a8);
    v16 = v20;
  }
  if ( a1 == -1LL )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
  }
  else
  {
    Enclave = ObpReferenceObjectByHandleWithTag(
                a1,
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
  Enclave = MiCreateEnclave((__int64)Process, v23, v25[0], v24, v13, a6, (__int64)PoolWithTag, a8, (__int64)Size_4);
  if ( a1 != -1LL )
  {
    KiUnstackDetachProcess((__int64)v27, 0LL);
    ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
  }
LABEL_47:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( Enclave >= 0 )
    *a2 = v23[0];
  if ( a9 )
    *a9 = Size_4[0];
  return (unsigned int)Enclave;
}
