/*
 * XREFs of NtQuerySymbolicLinkObject @ 0x1406BB260
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x140775BF0 (AdtpInitializeDriveLetters.c)
 *     IopStoreSystemPartitionInformation @ 0x1409F5770 (IopStoreSystemPartitionInformation.c)
 *     IopReassignSystemRoot @ 0x140A1E38C (IopReassignSystemRoot.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQuerySymbolicLinkObject(HANDLE SymLinkObjHandle, PUNICODE_STRING LinkTarget, PULONG DataWritten)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v7; // rcx
  __int64 p_MaximumLength; // rcx
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char *v11; // rdi
  int v12; // edi
  unsigned int v13; // eax
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-40h]
  void *Src[2]; // [rsp+40h] [rbp-38h] BYREF
  void *v18[2]; // [rsp+50h] [rbp-28h]
  int v19; // [rsp+98h] [rbp+20h]

  v18[0] = 0LL;
  v18[1] = 0LL;
  Src[0] = 0LL;
  Src[1] = 0LL;
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
    *(UNICODE_STRING *)v18 = *LinkTarget;
    ProbeForWrite((volatile void *)_mm_srli_si128(*(__m128i *)v18, 8).m128i_i64[0], WORD1(v18[0]), 1u);
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
    *(UNICODE_STRING *)v18 = *LinkTarget;
  }
  v19 = ObReferenceObjectByHandle(SymLinkObjHandle, 1u, ObpSymbolicLinkObjectType, PreviousMode, &Object, 0LL);
  if ( v19 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (char *)Object;
    BugCheckParameter2 = (ULONG_PTR)Object - 32;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
    if ( (*((_DWORD *)v11 + 7) & 0x10) != 0 )
      RtlInitUnicodeString((PUNICODE_STRING)Src, &word_14078CDD0);
    else
      *(_OWORD *)Src = *(_OWORD *)(v11 + 8);
    v12 = (int)Src[0];
    if ( DataWritten )
    {
      if ( WORD1(Src[0]) <= WORD1(v18[0]) )
      {
        v13 = WORD1(Src[0]);
LABEL_18:
        memmove(v18[1], Src[1], v13);
        LinkTarget->Length = v12;
        if ( DataWritten )
          *DataWritten = HIWORD(v12);
LABEL_20:
        ExReleasePushLockEx(BugCheckParameter2, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Object);
        return v19;
      }
    }
    else if ( LOWORD(Src[0]) <= WORD1(v18[0]) )
    {
      v13 = LOWORD(Src[0]);
      goto LABEL_18;
    }
    v19 = -1073741789;
    if ( DataWritten )
      *DataWritten = WORD1(Src[0]);
    goto LABEL_20;
  }
  return v19;
}
