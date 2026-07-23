/*
 * XREFs of NtQuerySymbolicLinkObject @ 0x140626E40
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x140738924 (AdtpInitializeDriveLetters.c)
 *     IopStoreSystemPartitionInformation @ 0x1409D72F4 (IopStoreSystemPartitionInformation.c)
 *     IopReassignSystemRoot @ 0x1409DC7D0 (IopReassignSystemRoot.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQuerySymbolicLinkObject(HANDLE SymLinkObjHandle, PUNICODE_STRING LinkTarget, PULONG DataWritten)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v7; // rcx
  __int64 p_MaximumLength; // rcx
  __int64 v9; // rcx
  int v10; // r14d
  struct _KTHREAD *CurrentThread; // rax
  char *v12; // rsi
  int v13; // esi
  unsigned int v14; // ecx
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-40h]
  void *Src[2]; // [rsp+40h] [rbp-38h] BYREF
  void *v19[2]; // [rsp+50h] [rbp-28h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)LinkTarget & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (__int64)LinkTarget;
    if ( (unsigned __int64)LinkTarget >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    *(_WORD *)v7 = *(_WORD *)v7;
    p_MaximumLength = (__int64)&LinkTarget->MaximumLength;
    if ( (unsigned __int64)&LinkTarget->MaximumLength >= 0x7FFFFFFF0000LL )
      p_MaximumLength = 0x7FFFFFFF0000LL;
    *(_WORD *)p_MaximumLength = *(_WORD *)p_MaximumLength;
    *(UNICODE_STRING *)v19 = *LinkTarget;
    ProbeForWrite((volatile void *)_mm_srli_si128(*(__m128i *)v19, 8).m128i_i64[0], WORD1(v19[0]), 1u);
    if ( DataWritten )
    {
      v9 = (__int64)DataWritten;
      if ( (unsigned __int64)DataWritten >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    *(UNICODE_STRING *)v19 = *LinkTarget;
  }
  v10 = ObReferenceObjectByHandle(SymLinkObjHandle, 1u, ObpSymbolicLinkObjectType, PreviousMode, &Object, 0LL);
  if ( v10 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = (char *)Object;
    BugCheckParameter2 = (ULONG_PTR)Object - 32;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
    if ( (*((_DWORD *)v12 + 7) & 0x10) != 0 )
      RtlInitUnicodeString((PUNICODE_STRING)Src, &word_140767740);
    else
      *(_OWORD *)Src = *(_OWORD *)(v12 + 8);
    v13 = (int)Src[0];
    if ( DataWritten )
    {
      if ( WORD1(Src[0]) <= WORD1(v19[0]) )
        goto LABEL_17;
      *DataWritten = WORD1(Src[0]);
    }
    else if ( LOWORD(Src[0]) <= WORD1(v19[0]) )
    {
LABEL_17:
      if ( DataWritten )
        v14 = WORD1(Src[0]);
      else
        v14 = LOWORD(Src[0]);
      memmove(v19[1], Src[1], v14);
      LinkTarget->Length = v13;
      if ( DataWritten )
        *DataWritten = HIWORD(v13);
      goto LABEL_22;
    }
    v10 = -1073741789;
LABEL_22:
    ExReleasePushLockEx(BugCheckParameter2, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object);
  }
  return v10;
}
