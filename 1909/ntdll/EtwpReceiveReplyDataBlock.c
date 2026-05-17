/*
 * XREFs of EtwpReceiveReplyDataBlock @ 0x180001CE0
 * Callers:
 *     EtwSendNotification @ 0x1800539F0 (EtwSendNotification.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlNtStatusToDosError @ 0x180053CB0 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x1800A0620 (NtTraceControl.c)
 */

__int64 __fastcall EtwpReceiveReplyDataBlock(
        int a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7,
        _DWORD *a8,
        int a9)
{
  __int64 v9; // r13
  unsigned int v10; // r14d
  unsigned int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // r15
  __int64 Heap; // r12
  __int64 v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rbx
  NTSTATUS v18; // r8d
  unsigned __int64 v19; // rdx
  int v20; // ecx
  ULONG v22; // eax
  _DWORD *v23; // r8
  __int64 v24; // r9
  _DWORD *v25; // rax
  int v26; // [rsp+30h] [rbp-28h]
  int v27; // [rsp+34h] [rbp-24h] BYREF
  _DWORD v28[2]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v29; // [rsp+40h] [rbp-18h]
  _DWORD *v30; // [rsp+48h] [rbp-10h]
  char v31; // [rsp+A0h] [rbp+48h]

  v29 = 0LL;
  v9 = 0LL;
  v30 = 0LL;
  v10 = 0;
  v26 = 0;
  v11 = 0;
  v12 = a5;
  v13 = 0LL;
  Heap = 0LL;
  v31 = 0;
  v15 = 0LL;
  v28[0] = a1;
  v16 = a4;
  if ( a9 == 4 || a9 == 11 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, a6);
    if ( !Heap )
      return 8;
    v9 = v12 + 72;
    v29 = v12;
    v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 8LL * a4);
    if ( !v15 )
    {
      v11 = 8;
      goto LABEL_16;
    }
    v16 = a4;
  }
  if ( !v16 )
    goto LABEL_11;
  do
  {
    v28[1] = a2;
    v17 = (((unsigned __int64)MEMORY[0x7FFE0004] << 32) * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64;
    v18 = NtTraceControl(19LL, v28, 8LL, v12, a6, &a5);
    v19 = ((((unsigned __int64)MEMORY[0x7FFE0004] << 32) * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64)
        - v17;
    if ( a2 <= v19 )
    {
      v11 = 1460;
      goto LABEL_16;
    }
    a2 -= v19;
    v20 = (a5 + 7) & 0xFFFFFFF8;
    LODWORD(a5) = v20;
    if ( !v18 )
    {
      v11 = 0;
LABEL_7:
      if ( !a3 )
      {
        if ( v29 )
        {
          if ( *(_DWORD *)(v12 + 4) >= 0xF8u )
          {
            if ( *(_DWORD *)(v12 + 76) == 1 )
            {
              *(_DWORD *)(v15 + 8 * v13) = *(_DWORD *)(v12 + 32);
              *(_WORD *)(v15 + 8 * v13 + 4) = *(_WORD *)(v12 + 80);
              *(_WORD *)(v15 + 8 * v13 + 6) = *(_WORD *)(v12 + 236);
              v20 = a5;
            }
            v13 = (unsigned int)(v13 + 1);
            if ( (_DWORD)v13 == 1 )
            {
              v12 = Heap;
            }
            else if ( *(_DWORD *)(v12 + 76) != 1 )
            {
              v23 = (_DWORD *)(v9 + 104);
              v24 = 4LL;
              do
              {
                *v23 += *(_DWORD *)((char *)v23 + v12 + 72 - v9);
                ++v23;
                --v24;
              }
              while ( v24 );
            }
          }
        }
        else
        {
          v25 = (_DWORD *)(v12 + 8);
          *(_DWORD *)(v12 + 8) = v20;
          v20 = a5;
          v12 += (unsigned int)a5;
          v30 = v25;
          a6 -= a5;
        }
      }
      v26 += v20;
      goto LABEL_9;
    }
    v22 = RtlNtStatusToDosError(v18);
    v11 = v22;
    if ( !v22 )
    {
      v20 = a5;
      goto LABEL_7;
    }
    if ( v22 != 122 )
      break;
    v26 += a5;
    v31 = 1;
LABEL_9:
    ++v10;
  }
  while ( v10 < a4 );
  if ( (_DWORD)v13 )
  {
    if ( *(_DWORD *)(v9 + 4) == 1 )
    {
      v11 = NtTraceControl(38LL, v15, (unsigned int)(8 * v13), &a9, 2, &v27);
      if ( !v11 && v27 == 2 )
        *(_WORD *)(v9 + 8) = a9;
    }
  }
LABEL_11:
  *a7 = v10;
  *a8 = v26;
  if ( v30 )
    *v30 = 0;
  if ( !v11 && v31 )
    v11 = 122;
LABEL_16:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  if ( v15 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v15);
  return v11;
}
