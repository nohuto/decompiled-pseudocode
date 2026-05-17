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
 *     LdrpReleaseTlsEntry @ 0x1800818BC (LdrpReleaseTlsEntry.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtSetInformationProcess @ 0x1800A0660 (NtSetInformationProcess.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     LdrpGenericExceptionFilter @ 0x1800D7988 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpHandleTlsData(unsigned __int64 a1)
{
  unsigned __int64 v1; // r15
  int v2; // eax
  unsigned __int64 v3; // rdx
  unsigned __int64 *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  void *ProcessHeap; // r14
  _BYTE *Heap; // rdi
  unsigned __int64 v10; // rcx
  signed int TlsEntry; // esi
  __int64 v12; // r8
  int v13; // r13d
  unsigned int v14; // r11d
  __int64 v15; // r8
  __int64 v16; // r15
  unsigned int v17; // r13d
  __int64 v18; // rax
  _QWORD *v19; // r13
  __int64 v20; // rcx
  int v21; // esi
  __int64 v22; // r8
  __int64 NewTlsVector; // rcx
  unsigned __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r13
  char v27; // [rsp+30h] [rbp-F8h]
  char v28; // [rsp+31h] [rbp-F7h] BYREF
  int v29; // [rsp+34h] [rbp-F4h]
  unsigned int v30; // [rsp+38h] [rbp-F0h] BYREF
  unsigned int v31; // [rsp+3Ch] [rbp-ECh]
  int v32; // [rsp+40h] [rbp-E8h]
  unsigned int v33; // [rsp+44h] [rbp-E4h]
  _BYTE *v34; // [rsp+48h] [rbp-E0h]
  _DWORD v35[2]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int i; // [rsp+58h] [rbp-D0h]
  __int64 v37; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-C0h]
  _BYTE *v39; // [rsp+78h] [rbp-B0h]
  size_t Size; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v41; // [rsp+88h] [rbp-A0h]
  __int64 v42; // [rsp+90h] [rbp-98h] BYREF
  __int64 v43; // [rsp+98h] [rbp-90h]
  unsigned __int64 v44; // [rsp+A0h] [rbp-88h]
  unsigned __int64 v45[4]; // [rsp+A8h] [rbp-80h] BYREF
  _BYTE v46[40]; // [rsp+C8h] [rbp-60h] BYREF

  v1 = a1;
  v38 = a1;
  v45[2] = a1;
  if ( !LdrpActiveThreadCount )
    return 0LL;
  v2 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a1 + 48), 1, 9u, &v30, &v37);
  v6 = v37;
  if ( v2 < 0 )
    v6 = 0LL;
  v37 = v6;
  if ( !v6 )
    return 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v45[1] = (unsigned __int64)ProcessHeap;
  v32 = 0;
  v45[0] = 0LL;
  Heap = 0LL;
  v39 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpTlsLock, v3, v4, v5);
  if ( LdrpActiveThreadCount == 1 )
  {
    Heap = v46;
    v39 = v46;
  }
  else
  {
    v10 = 24LL * (unsigned int)LdrpActiveThreadCount;
    if ( is_mul_ok((unsigned int)LdrpActiveThreadCount, 0x18uLL) )
    {
      TlsEntry = 0;
    }
    else
    {
      v10 = -1LL;
      TlsEntry = -1073741675;
    }
    if ( TlsEntry >= 0 )
    {
      v12 = -1LL;
      if ( v10 + 16 >= v10 )
        v12 = v10 + 16;
      TlsEntry = v10 + 16 < v10 ? 0xC0000095 : 0;
      if ( v10 + 16 >= v10 )
      {
        Heap = (_BYTE *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 786432, v12);
        v39 = Heap;
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
  v34 = Heap;
  v45[3] = (unsigned __int64)Heap;
  v13 = LdrpTlsBitmap;
  v33 = LdrpTlsBitmap;
  TlsEntry = LdrpAllocateTlsEntry(v37, v1, (unsigned int)&v30, (unsigned int)&v28, (__int64)&v42);
  v29 = TlsEntry;
  if ( TlsEntry < 0 )
    goto LABEL_34;
  *((_DWORD *)Heap + 2) = LdrpActiveThreadCount;
  v27 = v28;
  v14 = v30;
  v31 = v30;
  if ( v28 )
  {
    *((_DWORD *)Heap + 1) = 1;
    *((_DWORD *)Heap + 3) = v13;
    v33 = LdrpTlsBitmap;
  }
  else
  {
    *((_DWORD *)Heap + 1) = 0;
    *((_DWORD *)Heap + 3) = v14;
  }
  v43 = v42;
  v15 = LdrpComputeTlsSizeAndAlignment(v42, v35);
  Size = v15;
  LODWORD(v16) = 0;
  v17 = v35[0];
  for ( i = v35[0]; ; v17 = i )
  {
    v35[1] = v16;
    LODWORD(v37) = v16;
    if ( (unsigned int)v16 >= *((_DWORD *)Heap + 2) )
    {
      *(_DWORD *)Heap = 0;
      v29 = NtSetInformationProcess(-1LL, 35LL, Heap);
      goto LABEL_25;
    }
    v41 = v17;
    v18 = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 786432, v17 + 1LL + v15);
    v44 = v18;
    if ( !v18 )
      break;
    v19 = (_QWORD *)(~v41 & (v18 + v17 + 1));
    v41 = (unsigned __int64)v19;
    *(v19 - 1) = v18;
    memmove(v19, *(const void **)(v43 + 16), Size);
    if ( v27 )
    {
      NewTlsVector = LdrpGetNewTlsVector(v33);
      if ( !NewTlsVector )
      {
        RtlFreeHeap((__int64)ProcessHeap, 0, v44);
        break;
      }
      *(_QWORD *)(NewTlsVector + 8LL * v31) = v19;
      v19 = (_QWORD *)NewTlsVector;
    }
    v20 = 3LL * (unsigned int)v37;
    *(_QWORD *)&v34[8 * v20 + 24] = v19;
    *(_DWORD *)&Heap[8 * v20 + 16] = 0;
    LODWORD(v16) = v16 + 1;
    v15 = Size;
  }
  v29 = -1073741801;
LABEL_25:
  v21 = v32;
  while ( (_DWORD)v16 )
  {
    v16 = (unsigned int)(v16 - 1);
    if ( (Heap[24 * v16 + 16] & 2) != 0 )
    {
      v22 = *(_QWORD *)&v34[24 * v16 + 24];
      if ( v22 )
      {
        if ( !v27 )
        {
          v24 = *(_QWORD *)(v22 - 8);
          goto LABEL_45;
        }
        LdrpQueueDeferredTlsData(v22, *(_QWORD *)&v34[24 * v16 + 32]);
      }
    }
    else if ( (Heap[24 * v16 + 16] & 1) != 0 )
    {
      ++LdrpPotentialTlsLeaks;
    }
    else
    {
      ++v21;
      v25 = *(_QWORD *)&v34[24 * v16 + 24];
      if ( v27 )
      {
        v26 = *(_QWORD *)(v25 + 8LL * v31);
        RtlFreeHeap((__int64)ProcessHeap, 0, v25 - 16);
      }
      else
      {
        v26 = *(_QWORD *)&v34[24 * v16 + 24];
      }
      v24 = *(_QWORD *)(v26 - 8);
LABEL_45:
      RtlFreeHeap((__int64)ProcessHeap, 0, v24);
    }
  }
  v32 = v21;
  TlsEntry = v29;
  v1 = v38;
  if ( v29 < 0 )
  {
    LdrpReleaseTlsEntry(v38, v45);
    if ( v27 )
      LdrpTlsBitmap -= 8;
  }
  else if ( v32 )
  {
    LdrpActiveThreadCount -= v32;
  }
LABEL_34:
  if ( TlsEntry >= 0 )
    *(_WORD *)(v1 + 110) = -1;
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( Heap != v46 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Heap);
  if ( v45[0] )
    RtlFreeHeap((__int64)ProcessHeap, 0, v45[0]);
  if ( TlsEntry >= 0 )
    return 0LL;
  return (unsigned int)TlsEntry;
}
