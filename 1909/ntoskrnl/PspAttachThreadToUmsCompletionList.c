/*
 * XREFs of PspAttachThreadToUmsCompletionList @ 0x140306EC4
 * Callers:
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlGetUmsContextExtendedSize @ 0x14031990C (RtlGetUmsContextExtendedSize.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     KeInitializeUmsThread @ 0x140880014 (KeInitializeUmsThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall PspAttachThreadToUmsCompletionList(struct _KTHREAD *a1, __int64 a2, KPROCESSOR_MODE a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rax
  __int64 UmsContextExtendedSize; // rdx
  unsigned __int8 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rcx
  _OWORD *v12; // rax
  NTSTATUS result; // eax
  int v14; // ebx
  HANDLE Handle[4]; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  memset(Handle, 0, sizeof(Handle));
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
  if ( (*(_QWORD *)(a2 + 8) & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  UmsContextExtendedSize = (unsigned int)RtlGetUmsContextExtendedSize();
  v11 = *(_QWORD *)(a2 + 16);
  if ( (unsigned __int64)(UmsContextExtendedSize - 1) > 0xFFFE )
  {
    if ( UmsContextExtendedSize )
    {
      if ( ((unsigned __int8)v11 & v9) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v11 + UmsContextExtendedSize > v10 || v11 + UmsContextExtendedSize < v11 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else if ( ((unsigned __int8)v11 & v9) != 0 )
  {
    ExRaiseDatatypeMisalignment();
  }
  v12 = *(_OWORD **)(a2 + 8);
  *(_OWORD *)Handle = *v12;
  *(_OWORD *)&Handle[2] = v12[1];
  result = ObReferenceObjectByHandle(Handle[1], 2u, (POBJECT_TYPE)ExEventObjectType, a3, &Object, 0LL);
  if ( result >= 0 )
  {
    v14 = KeInitializeUmsThread((_DWORD)a1, 0, Handle[0], (_DWORD)Object, *(_QWORD *)(a2 + 16));
    if ( v14 < 0 )
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return v14;
  }
  return result;
}
