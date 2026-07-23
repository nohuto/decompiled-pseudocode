/*
 * XREFs of LdrpHandleTlsData @ 0x180055984
 * Callers:
 *     LdrpDoPostSnapWork @ 0x1800558D0 (LdrpDoPostSnapWork.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x18001C4DC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     LdrpGetNewTlsVector @ 0x180056000 (LdrpGetNewTlsVector.c)
 *     LdrpAllocateTlsEntry @ 0x180056070 (LdrpAllocateTlsEntry.c)
 *     LdrpQueueDeferredTlsData @ 0x180056704 (LdrpQueueDeferredTlsData.c)
 *     LdrpReleaseTlsEntry @ 0x18007E45C (LdrpReleaseTlsEntry.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtSetInformationProcess @ 0x18009D210 (NtSetInformationProcess.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     LdrpGenericExceptionFilter @ 0x1800D5908 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpHandleTlsData(__int64 a1)
{
  unsigned int v1; // ebx
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  void *ProcessHeap; // r14
  _DWORD *Heap; // rdi
  unsigned __int64 v7; // rcx
  signed int v8; // esi
  SIZE_T v9; // r8
  unsigned int SizeOfBitMap; // r15d
  int TlsEntry; // esi
  int v12; // ecx
  void *v13; // r9
  char v14; // al
  int v15; // r8d
  unsigned int v16; // r8d
  __int64 v17; // r15
  unsigned int v18; // eax
  PVOID v19; // rax
  _QWORD *v20; // r13
  _DWORD *v21; // rax
  char v22; // r13
  int v23; // esi
  __int64 v24; // r8
  __int64 v25; // r15
  __int64 NewTlsVector; // rax
  __int64 v27; // rdx
  void *v28; // r8
  __int64 v29; // rax
  __int64 v30; // r8
  char v31; // [rsp+30h] [rbp-C8h] BYREF
  NTSTATUS v32; // [rsp+34h] [rbp-C4h]
  unsigned int v33; // [rsp+38h] [rbp-C0h] BYREF
  int v34; // [rsp+3Ch] [rbp-BCh]
  unsigned int v35; // [rsp+40h] [rbp-B8h]
  __int64 v36; // [rsp+48h] [rbp-B0h]
  int v37; // [rsp+50h] [rbp-A8h]
  unsigned int v38; // [rsp+54h] [rbp-A4h]
  __int64 v39; // [rsp+58h] [rbp-A0h] BYREF
  unsigned int v40; // [rsp+64h] [rbp-94h]
  _BYTE *v41; // [rsp+68h] [rbp-90h]
  size_t Size; // [rsp+70h] [rbp-88h]
  unsigned __int64 v43; // [rsp+78h] [rbp-80h]
  __int64 v44; // [rsp+80h] [rbp-78h]
  __int64 v45; // [rsp+88h] [rbp-70h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp-68h]
  PVOID v47[3]; // [rsp+98h] [rbp-60h] BYREF
  _BYTE v48[40]; // [rsp+B0h] [rbp-48h] BYREF

  v36 = a1;
  v44 = a1;
  v1 = 0;
  if ( !LdrpActiveThreadCount )
    return 0LL;
  v2 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a1 + 48), 1, 9u, &v33, &v39);
  v3 = v39;
  if ( v2 < 0 )
    v3 = 0LL;
  v39 = v3;
  if ( !v3 )
    return 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v47[1] = ProcessHeap;
  v34 = 0;
  v47[0] = 0LL;
  Heap = 0LL;
  v41 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  if ( LdrpActiveThreadCount == 1 )
  {
    Heap = v48;
    v41 = v48;
  }
  else
  {
    v7 = 24LL * (unsigned int)LdrpActiveThreadCount;
    if ( is_mul_ok((unsigned int)LdrpActiveThreadCount, 0x18uLL) )
    {
      v8 = 0;
    }
    else
    {
      v7 = -1LL;
      v8 = -1073741675;
    }
    if ( v8 >= 0 )
    {
      v9 = -1LL;
      if ( v7 + 16 >= v7 )
        v9 = v7 + 16;
      v8 = v7 + 16 < v7 ? 0xC0000095 : 0;
      if ( v7 + 16 >= v7 )
      {
        Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 786432, v9);
        v41 = Heap;
        if ( !Heap )
          v8 = -1073741801;
      }
    }
    if ( v8 < 0 )
    {
      RtlReleaseSRWLockExclusive(&LdrpTlsLock);
      return (unsigned int)v8;
    }
  }
  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  v35 = LdrpTlsBitmap.SizeOfBitMap;
  TlsEntry = LdrpAllocateTlsEntry(v39, v36, (unsigned int)&v33, (unsigned int)&v31, (__int64)&v45);
  v32 = TlsEntry;
  if ( TlsEntry < 0 )
  {
    v25 = v36;
    goto LABEL_39;
  }
  Heap[2] = LdrpActiveThreadCount;
  if ( v31 )
  {
    Heap[1] = 1;
    Heap[3] = SizeOfBitMap;
    v35 = LdrpTlsBitmap.SizeOfBitMap;
  }
  else
  {
    Heap[1] = 0;
    Heap[3] = v33;
  }
  v12 = (*(_DWORD *)(v45 + 52) >> 20) & 0xF;
  v13 = (void *)(*(_QWORD *)(v45 + 24) - *(_QWORD *)(v45 + 16));
  Size = (size_t)v13;
  v14 = v12 - 1;
  if ( (*(_DWORD *)(v45 + 52) & 0xF00000) == 0 )
    v14 = v12;
  v15 = 1 << v14;
  if ( (unsigned int)(1 << v14) < 0x10 )
    v15 = 16;
  LODWORD(v39) = v15;
  v16 = v15 - 1;
  v38 = v16;
  v40 = v16;
  v47[2] = v13;
  LODWORD(v17) = 0;
  while ( 1 )
  {
    v37 = v17;
    v18 = Heap[2];
    if ( (unsigned int)v17 >= v18 )
    {
      *Heap = 0;
      v32 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessTlsInformation, Heap, 24 * v18 + 16);
      goto LABEL_30;
    }
    v43 = v16;
    v19 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 786432, (SIZE_T)v13 + v16 + 1);
    BaseAddress = v19;
    if ( !v19 )
    {
      v32 = -1073741801;
      goto LABEL_30;
    }
    v20 = (_QWORD *)(~v43 & ((unsigned __int64)v19 + (unsigned int)v39));
    v43 = (unsigned __int64)v20;
    *(v20 - 1) = v19;
    memmove(v20, *(const void **)(v45 + 16), Size);
    if ( !v31 )
    {
      v21 = &Heap[6 * (unsigned int)v17];
      *((_QWORD *)v21 + 3) = v20;
      goto LABEL_28;
    }
    NewTlsVector = LdrpGetNewTlsVector(v35);
    v27 = NewTlsVector;
    if ( !NewTlsVector )
      break;
    *(_QWORD *)(NewTlsVector + 8LL * v33) = v20;
    v21 = &Heap[6 * (unsigned int)v17];
    *((_QWORD *)v21 + 3) = v27;
LABEL_28:
    v21[4] = 0;
    LODWORD(v17) = v17 + 1;
    v16 = v38;
    v13 = (void *)Size;
  }
  RtlFreeHeap(ProcessHeap, 0, BaseAddress);
  v32 = -1073741801;
LABEL_30:
  v22 = v31;
  v23 = v34;
  while ( (_DWORD)v17 )
  {
    v17 = (unsigned int)(v17 - 1);
    if ( (Heap[6 * v17 + 4] & 2) != 0 )
    {
      v24 = *(_QWORD *)&Heap[6 * v17 + 6];
      if ( !v24 )
        continue;
      if ( v22 )
      {
        LdrpQueueDeferredTlsData(v24, *(_QWORD *)&Heap[6 * v17 + 8]);
        continue;
      }
      v28 = *(void **)(v24 - 8);
      goto LABEL_52;
    }
    if ( (Heap[6 * v17 + 4] & 1) == 0 )
    {
      ++v23;
      if ( v22 )
      {
        v30 = *(_QWORD *)&Heap[6 * v17 + 6];
        v44 = *(_QWORD *)(v30 + 8LL * v33);
        RtlFreeHeap(ProcessHeap, 0, (PVOID)(v30 - 16));
        v29 = v44;
      }
      else
      {
        v29 = *(_QWORD *)&Heap[6 * v17 + 6];
      }
      v28 = *(void **)(v29 - 8);
LABEL_52:
      RtlFreeHeap(ProcessHeap, 0, v28);
      continue;
    }
    ++LdrpPotentialTlsLeaks;
  }
  v34 = v23;
  TlsEntry = v32;
  v25 = v36;
  if ( v32 < 0 )
  {
    LdrpReleaseTlsEntry(v36, v47);
    if ( v22 )
      LdrpTlsBitmap.SizeOfBitMap -= 8;
  }
  else if ( v34 )
  {
    LdrpActiveThreadCount -= v34;
  }
LABEL_39:
  if ( TlsEntry >= 0 )
    *(_WORD *)(v25 + 110) = -1;
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( Heap != (_DWORD *)v48 )
    RtlFreeHeap(ProcessHeap, 0, Heap);
  if ( v47[0] )
    RtlFreeHeap(ProcessHeap, 0, v47[0]);
  if ( TlsEntry < 0 )
    return (unsigned int)TlsEntry;
  return v1;
}
