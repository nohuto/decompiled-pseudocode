/*
 * XREFs of PspAttachThreadToUmsCompletionList @ 0x1402EA044
 * Callers:
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     RtlGetUmsContextExtendedSize @ 0x1402FB730 (RtlGetUmsContextExtendedSize.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     KeInitializeUmsThread @ 0x140846574 (KeInitializeUmsThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall PspAttachThreadToUmsCompletionList(struct _KTHREAD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rax
  __int64 UmsContextExtendedSize; // rdx
  unsigned __int8 v9; // r8
  KPROCESSOR_MODE v10; // r9
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  NTSTATUS result; // eax
  int v15; // ebx
  HANDLE Handle[2]; // [rsp+30h] [rbp-28h]
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  LOBYTE(a4) = a3;
  v5 = (int)a1;
  CurrentThread = a1;
  if ( !a1 )
    CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    return -1073741637;
  v7 = a1;
  if ( !a1 )
    v7 = KeGetCurrentThread();
  if ( (v7->Header.Reserved1 & 0x40) != 0 )
    return -1073741637;
  LOBYTE(a3) = 3;
  if ( (*(_QWORD *)(a2 + 8) & 3) != 0 )
    goto LABEL_20;
  UmsContextExtendedSize = (unsigned int)RtlGetUmsContextExtendedSize(a1, a2, a3, a4);
  v12 = *(_QWORD *)(a2 + 16);
  if ( (unsigned __int64)(UmsContextExtendedSize - 1) > 0xFFFE )
  {
    if ( !UmsContextExtendedSize )
      goto LABEL_16;
    if ( ((unsigned __int8)v12 & v9) == 0 )
    {
      if ( v12 + UmsContextExtendedSize > v11 || v12 + UmsContextExtendedSize < v12 )
        MEMORY[0x7FFFFFFF0000] = 0;
      goto LABEL_16;
    }
LABEL_20:
    ExRaiseDatatypeMisalignment();
  }
  if ( ((unsigned __int8)v12 & v9) != 0 )
    goto LABEL_20;
LABEL_16:
  v13 = *(_QWORD *)(a2 + 8);
  *(_OWORD *)Handle = *(_OWORD *)v13;
  result = ObReferenceObjectByHandle(*(HANDLE *)(v13 + 8), 2u, (POBJECT_TYPE)ExEventObjectType, v10, &Object, 0LL);
  if ( result >= 0 )
  {
    v15 = KeInitializeUmsThread(v5, 0, Handle[0], (_DWORD)Object, *(_QWORD *)(a2 + 16));
    if ( v15 < 0 )
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return v15;
  }
  return result;
}
