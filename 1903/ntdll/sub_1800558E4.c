/*
 * XREFs of sub_1800558E4 @ 0x1800558E4
 * Callers:
 *     sub_180055830 @ 0x180055830 (sub_180055830.c)
 * Callees:
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180055F60 @ 0x180055F60 (sub_180055F60.c)
 *     sub_180055FD0 @ 0x180055FD0 (sub_180055FD0.c)
 *     sub_180056664 @ 0x180056664 (sub_180056664.c)
 *     sub_18007DDBC @ 0x18007DDBC (sub_18007DDBC.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwSetInformationProcess @ 0x18009CA60 (ZwSetInformationProcess.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800D5848 @ 0x1800D5848 (sub_1800D5848.c)
 */

__int64 __fastcall sub_1800558E4(__int64 a1)
{
  unsigned int v1; // ebx
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  PVOID ProcessHeap; // r14
  _DWORD *Heap; // rdi
  unsigned __int64 v7; // rcx
  signed int v8; // esi
  SIZE_T v9; // r8
  ULONG SizeOfBitMap; // r15d
  int v11; // esi
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
  __int64 v26; // rax
  __int64 v27; // rdx
  void *v28; // r8
  __int64 v29; // rax
  __int64 v30; // r8
  char v31; // [rsp+30h] [rbp-C8h] BYREF
  NTSTATUS v32; // [rsp+34h] [rbp-C4h]
  DWORD v33; // [rsp+38h] [rbp-C0h] BYREF
  int v34; // [rsp+3Ch] [rbp-BCh]
  ULONG v35; // [rsp+40h] [rbp-B8h]
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
  if ( !dword_180165240 )
    return 0LL;
  v2 = sub_18001C4DC(*(_QWORD *)(a1 + 48), 1, 9u, &v33, &v39);
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
  RtlAcquireSRWLockExclusive(&stru_1801661B8);
  if ( dword_180165240 == 1 )
  {
    Heap = v48;
    v41 = v48;
  }
  else
  {
    v7 = 24LL * (unsigned int)dword_180165240;
    if ( is_mul_ok((unsigned int)dword_180165240, 0x18uLL) )
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
        Heap = RtlAllocateHeap(ProcessHeap, Flags + 786432, v9);
        v41 = Heap;
        if ( !Heap )
          v8 = -1073741801;
      }
    }
    if ( v8 < 0 )
    {
      RtlReleaseSRWLockExclusive(&stru_1801661B8);
      return (unsigned int)v8;
    }
  }
  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
  v35 = BitMapHeader.SizeOfBitMap;
  v11 = sub_180055FD0(v39, v36, (unsigned int)&v33, (unsigned int)&v31, (__int64)&v45);
  v32 = v11;
  if ( v11 < 0 )
  {
    v25 = v36;
    goto LABEL_39;
  }
  Heap[2] = dword_180165240;
  if ( v31 )
  {
    Heap[1] = 1;
    Heap[3] = SizeOfBitMap;
    v35 = BitMapHeader.SizeOfBitMap;
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
      v32 = ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessTlsInformation, Heap, 24 * v18 + 16);
      goto LABEL_30;
    }
    v43 = v16;
    v19 = RtlAllocateHeap(ProcessHeap, Flags + 786432, (SIZE_T)v13 + v16 + 1);
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
    v26 = sub_180055F60(v35);
    v27 = v26;
    if ( !v26 )
      break;
    *(_QWORD *)(v26 + 8LL * v33) = v20;
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
        sub_180056664(v24, *(_QWORD *)&Heap[6 * v17 + 8]);
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
    ++dword_180165244;
  }
  v34 = v23;
  v11 = v32;
  v25 = v36;
  if ( v32 < 0 )
  {
    sub_18007DDBC(v36, v47);
    if ( v22 )
      BitMapHeader.SizeOfBitMap -= 8;
  }
  else if ( v34 )
  {
    dword_180165240 -= v34;
  }
LABEL_39:
  if ( v11 >= 0 )
    *(_WORD *)(v25 + 110) = -1;
  RtlReleaseSRWLockExclusive(&stru_1801661B8);
  if ( Heap != (_DWORD *)v48 )
    RtlFreeHeap(ProcessHeap, 0, Heap);
  if ( v47[0] )
    RtlFreeHeap(ProcessHeap, 0, v47[0]);
  if ( v11 < 0 )
    return (unsigned int)v11;
  return v1;
}
