/*
 * XREFs of RtlSetCurrentDirectory_U @ 0x1800769C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlGetFullPathName_Ustr @ 0x180027B70 (RtlGetFullPathName_Ustr.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x1800285E0 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpCheckForSameCurdir @ 0x180076B5C (RtlpCheckForSameCurdir.c)
 *     RtlULongToUShort @ 0x180076DEC (RtlULongToUShort.c)
 *     RtlpCreateNewDirectoryReference @ 0x180076E84 (RtlpCreateNewDirectoryReference.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 */

__int64 __fastcall RtlSetCurrentDirectory_U(unsigned __int16 *a1)
{
  struct _PEB *v1; // rax
  __int64 ProcessHeap; // r14
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdi
  unsigned int MaximumLength; // esi
  __int64 i; // r8
  int v8; // ebx
  unsigned int FullPathName_Ustr; // eax
  unsigned __int64 v10; // rbx
  unsigned __int16 v11; // ax
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rbx
  __int16 v15; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v16; // [rsp+32h] [rbp-Eh] BYREF
  _WORD *Heap; // [rsp+38h] [rbp-8h]
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF
  char v19; // [rsp+80h] [rbp+40h] BYREF

  v1 = NtCurrentPeb();
  ProcessHeap = (__int64)v1->ProcessHeap;
  ProcessParameters = v1->ProcessParameters;
  if ( (unsigned __int8)RtlpCheckForSameCurdir() )
    return 0LL;
  if ( (unsigned int)RtlpIsDosDeviceName_Ustr((__int64)a1) )
    return 3221225731LL;
  MaximumLength = ProcessParameters->CurrentDirectory.DosPath.MaximumLength;
  for ( i = ProcessParameters->CurrentDirectory.DosPath.MaximumLength; ; i = (unsigned int)(v10 + 4) )
  {
    Heap = (_WORD *)RtlAllocateHeap(ProcessHeap, 0, i);
    if ( !Heap )
      return 3221225495LL;
    v15 = 0;
    v8 = RtlULongToUShort(MaximumLength, &v16);
    if ( v8 < 0 )
      goto LABEL_22;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(a1, MaximumLength, Heap, 0LL, 0LL, (__int64)&v19);
    v10 = FullPathName_Ustr;
    if ( !FullPathName_Ustr )
    {
      v8 = -1073741773;
      goto LABEL_22;
    }
    v11 = v16;
    if ( v10 <= (unsigned __int64)v16 - 4 )
      goto LABEL_9;
    if ( (NtCurrentPeb()->BitField & 0x80u) == 0 )
      break;
    RtlFreeHeap(ProcessHeap, 0, (__int64)Heap);
    MaximumLength = v10 + 4;
  }
  v11 = v16;
LABEL_9:
  if ( (unsigned int)v10 > v11 )
  {
    v8 = -1073741562;
    goto LABEL_22;
  }
  v8 = RtlULongToUShort((unsigned int)v10, &v15);
  if ( v8 < 0 )
  {
LABEL_22:
    RtlFreeHeap(ProcessHeap, 0, (__int64)Heap);
    return (unsigned int)v8;
  }
  v12 = RtlpCreateNewDirectoryReference(&v15, v16, &v18);
  RtlFreeHeap(ProcessHeap, 0, (__int64)Heap);
  if ( v12 >= 0 )
  {
    RtlEnterCriticalSection((__int64)&FastPebLock);
    v13 = v18;
    v14 = RtlpCurDirRef;
    ProcessParameters->CurrentDirectory.Handle = *(void **)(v18 + 8);
    ProcessParameters->CurrentDirectory.DosPath.Buffer = *(wchar_t **)(v13 + 32);
    ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v13 + 24);
    RtlpCurDirRef = v13;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v14 + 8));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
      }
    }
  }
  return (unsigned int)v12;
}
