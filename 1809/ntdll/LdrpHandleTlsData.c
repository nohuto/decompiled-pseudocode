/*
 * XREFs of LdrpHandleTlsData @ 0x18003629C
 * Callers:
 *     LdrpDoPostSnapWork @ 0x1800361E8 (LdrpDoPostSnapWork.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180007188 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrpComputeTlsSizeAndAlignment @ 0x1800368DC (LdrpComputeTlsSizeAndAlignment.c)
 *     LdrpGetNewTlsVector @ 0x18003692C (LdrpGetNewTlsVector.c)
 *     LdrpAllocateTlsEntry @ 0x18003699C (LdrpAllocateTlsEntry.c)
 *     LdrpQueueDeferredTlsData @ 0x180037354 (LdrpQueueDeferredTlsData.c)
 *     LdrpReleaseTlsEntry @ 0x1800818CC (LdrpReleaseTlsEntry.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtSetInformationProcess @ 0x1800A0680 (NtSetInformationProcess.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     LdrpGenericExceptionFilter @ 0x1800D7988 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpHandleTlsData(unsigned __int64 *a1)
{
  unsigned __int64 *v1; // r15
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  void *ProcessHeap; // r14
  _DWORD *Heap; // rdi
  unsigned __int64 v7; // rcx
  signed int TlsEntry; // esi
  SIZE_T v9; // r8
  unsigned int SizeOfBitMap; // r13d
  unsigned int v11; // r11d
  __int64 v12; // r8
  __int64 v13; // r15
  unsigned int v14; // r13d
  unsigned int v15; // ecx
  PVOID v16; // rax
  _QWORD *v17; // r13
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // r8
  __int64 NewTlsVector; // rcx
  void *v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r13
  char v25; // [rsp+30h] [rbp-F8h]
  char v26; // [rsp+31h] [rbp-F7h] BYREF
  NTSTATUS v27; // [rsp+34h] [rbp-F4h]
  unsigned int v28; // [rsp+38h] [rbp-F0h] BYREF
  unsigned int v29; // [rsp+3Ch] [rbp-ECh]
  int v30; // [rsp+40h] [rbp-E8h]
  unsigned int v31; // [rsp+44h] [rbp-E4h]
  _DWORD *v32; // [rsp+48h] [rbp-E0h]
  _DWORD v33[2]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int i; // [rsp+58h] [rbp-D0h]
  __int64 v35; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 *v36; // [rsp+68h] [rbp-C0h]
  _BYTE *v37; // [rsp+78h] [rbp-B0h]
  size_t Size; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v39; // [rsp+88h] [rbp-A0h]
  __int64 v40; // [rsp+90h] [rbp-98h] BYREF
  __int64 v41; // [rsp+98h] [rbp-90h]
  PVOID BaseAddress; // [rsp+A0h] [rbp-88h]
  PVOID v43[4]; // [rsp+A8h] [rbp-80h] BYREF
  _BYTE v44[40]; // [rsp+C8h] [rbp-60h] BYREF

  v1 = a1;
  v36 = a1;
  v43[2] = a1;
  if ( !LdrpActiveThreadCount )
    return 0LL;
  v2 = RtlpImageDirectoryEntryToDataEx(a1[6], 1, 9u, &v28, &v35);
  v3 = v35;
  if ( v2 < 0 )
    v3 = 0LL;
  v35 = v3;
  if ( !v3 )
    return 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v43[1] = ProcessHeap;
  v30 = 0;
  v43[0] = 0LL;
  Heap = 0LL;
  v37 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  if ( LdrpActiveThreadCount == 1 )
  {
    Heap = v44;
    v37 = v44;
  }
  else
  {
    v7 = 24LL * (unsigned int)LdrpActiveThreadCount;
    if ( is_mul_ok((unsigned int)LdrpActiveThreadCount, 0x18uLL) )
    {
      TlsEntry = 0;
    }
    else
    {
      v7 = -1LL;
      TlsEntry = -1073741675;
    }
    if ( TlsEntry >= 0 )
    {
      v9 = -1LL;
      if ( v7 + 16 >= v7 )
        v9 = v7 + 16;
      TlsEntry = v7 + 16 < v7 ? 0xC0000095 : 0;
      if ( v7 + 16 >= v7 )
      {
        Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 786432, v9);
        v37 = Heap;
        if ( !Heap )
          TlsEntry = -1073741801;
      }
    }
    if ( TlsEntry < 0 )
    {
      RtlReleaseSRWLockExclusive(&LdrpTlsLock);
      return (unsigned int)TlsEntry;
    }
  }
  v32 = Heap;
  v43[3] = Heap;
  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  v31 = LdrpTlsBitmap.SizeOfBitMap;
  TlsEntry = LdrpAllocateTlsEntry(v35, (_DWORD)v1, (unsigned int)&v28, (unsigned int)&v26, (__int64)&v40);
  v27 = TlsEntry;
  if ( TlsEntry < 0 )
    goto LABEL_34;
  Heap[2] = LdrpActiveThreadCount;
  v25 = v26;
  v11 = v28;
  v29 = v28;
  if ( v26 )
  {
    Heap[1] = 1;
    Heap[3] = SizeOfBitMap;
    v31 = LdrpTlsBitmap.SizeOfBitMap;
  }
  else
  {
    Heap[1] = 0;
    Heap[3] = v11;
  }
  v41 = v40;
  v12 = LdrpComputeTlsSizeAndAlignment(v40, v33);
  Size = v12;
  LODWORD(v13) = 0;
  v14 = v33[0];
  for ( i = v33[0]; ; v14 = i )
  {
    v33[1] = v13;
    LODWORD(v35) = v13;
    v15 = Heap[2];
    if ( (unsigned int)v13 >= v15 )
    {
      *Heap = 0;
      v27 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessTlsInformation, Heap, 24 * v15 + 16);
      goto LABEL_25;
    }
    v39 = v14;
    v16 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 786432, v14 + 1LL + v12);
    BaseAddress = v16;
    if ( !v16 )
      break;
    v17 = (_QWORD *)(~v39 & ((unsigned __int64)v16 + v14 + 1));
    v39 = (unsigned __int64)v17;
    *(v17 - 1) = v16;
    memmove(v17, *(const void **)(v41 + 16), Size);
    if ( v25 )
    {
      NewTlsVector = LdrpGetNewTlsVector(v31);
      if ( !NewTlsVector )
      {
        RtlFreeHeap(ProcessHeap, 0, BaseAddress);
        break;
      }
      *(_QWORD *)(NewTlsVector + 8LL * v29) = v17;
      v17 = (_QWORD *)NewTlsVector;
    }
    v18 = 3LL * (unsigned int)v35;
    *(_QWORD *)&v32[2 * v18 + 6] = v17;
    Heap[2 * v18 + 4] = 0;
    LODWORD(v13) = v13 + 1;
    v12 = Size;
  }
  v27 = -1073741801;
LABEL_25:
  v19 = v30;
  while ( (_DWORD)v13 )
  {
    v13 = (unsigned int)(v13 - 1);
    if ( (Heap[6 * v13 + 4] & 2) != 0 )
    {
      v20 = *(_QWORD *)&v32[6 * v13 + 6];
      if ( v20 )
      {
        if ( !v25 )
        {
          v22 = *(void **)(v20 - 8);
          goto LABEL_45;
        }
        LdrpQueueDeferredTlsData(v20, *(_QWORD *)&v32[6 * v13 + 8]);
      }
    }
    else if ( (Heap[6 * v13 + 4] & 1) != 0 )
    {
      ++LdrpPotentialTlsLeaks;
    }
    else
    {
      ++v19;
      v23 = *(_QWORD *)&v32[6 * v13 + 6];
      if ( v25 )
      {
        v24 = *(_QWORD *)(v23 + 8LL * v29);
        RtlFreeHeap(ProcessHeap, 0, (PVOID)(v23 - 16));
      }
      else
      {
        v24 = *(_QWORD *)&v32[6 * v13 + 6];
      }
      v22 = *(void **)(v24 - 8);
LABEL_45:
      RtlFreeHeap(ProcessHeap, 0, v22);
    }
  }
  v30 = v19;
  TlsEntry = v27;
  v1 = v36;
  if ( v27 < 0 )
  {
    LdrpReleaseTlsEntry(v36, v43);
    if ( v25 )
      LdrpTlsBitmap.SizeOfBitMap -= 8;
  }
  else if ( v30 )
  {
    LdrpActiveThreadCount -= v30;
  }
LABEL_34:
  if ( TlsEntry >= 0 )
    *((_WORD *)v1 + 55) = -1;
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( Heap != (_DWORD *)v44 )
    RtlFreeHeap(ProcessHeap, 0, Heap);
  if ( v43[0] )
    RtlFreeHeap(ProcessHeap, 0, v43[0]);
  if ( TlsEntry >= 0 )
    return 0LL;
  return (unsigned int)TlsEntry;
}
