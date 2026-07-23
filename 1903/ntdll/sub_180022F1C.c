/*
 * XREFs of sub_180022F1C @ 0x180022F1C
 * Callers:
 *     sub_180029EFC @ 0x180029EFC (sub_180029EFC.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_18001C610 @ 0x18001C610 (sub_18001C610.c)
 *     sub_180020F00 @ 0x180020F00 (sub_180020F00.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18006F284 @ 0x18006F284 (sub_18006F284.c)
 *     sub_1800709A4 @ 0x1800709A4 (sub_1800709A4.c)
 *     sub_1800723A8 @ 0x1800723A8 (sub_1800723A8.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180022F1C(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  int v3; // edi
  int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // r13
  unsigned int v7; // r15d
  unsigned int *v8; // rsi
  _DWORD *v9; // r8
  __int64 v10; // rcx
  int v11; // edx
  PVOID Heap; // rax
  unsigned int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  CHAR *v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  char v20; // al
  ANSI_STRING SourceString; // [rsp+30h] [rbp-48h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = a1;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 || (v3 = sub_18006F284(*(_QWORD *)(a1 + 56)), v3 >= 0) )
    v3 = sub_180020F00(v2);
  if ( v3 < 0 )
    goto LABEL_37;
  v4 = 0;
  if ( !*(_QWORD *)(v2 + 104) )
    goto LABEL_30;
  if ( !byte_180165268 )
    goto LABEL_7;
  if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
  {
    if ( (*(_BYTE *)(v1 + 104) & 1) == 0 )
    {
      v20 = 0;
LABEL_43:
      if ( !v20 )
        goto LABEL_7;
    }
  }
  else if ( qword_180165278 )
  {
    v20 = qword_180165278(*(_QWORD *)(v1 + 80));
    goto LABEL_43;
  }
  *(_DWORD *)(v2 + 32) |= 0x2000000u;
LABEL_7:
  v5 = sub_1800723A8(v2);
  v6 = v5;
  v7 = 0;
  v8 = (unsigned int *)(v5 + 12);
  if ( !*(_DWORD *)(v5 + 12) )
    goto LABEL_30;
  v9 = (_DWORD *)(v5 + 12);
  do
  {
    v10 = (unsigned int)v9[1];
    if ( !(_DWORD)v10 )
      break;
    v11 = v4 + 1;
    ++v7;
    v9 += 5;
    if ( !*(_QWORD *)(v10 + *(_QWORD *)(v1 + 48)) )
      v11 = v4;
    v4 = v11;
  }
  while ( *v9 );
  v2 = a1;
  if ( !v4 )
    goto LABEL_30;
  Heap = RtlAllocateHeap(HeapHandle, (Flags + 1572864) | 8, 8LL * v7);
  *(_QWORD *)(a1 + 88) = Heap;
  if ( Heap )
  {
    *(_DWORD *)(a1 + 96) = v7;
    *(_DWORD *)(a1 + 100) = v4 + 1;
    v13 = 0;
    *(_QWORD *)(a1 + 128) = v6;
    BaseAddress = 0LL;
    if ( *v8 )
    {
      while ( v8[1] )
      {
        v14 = *(_QWORD *)(v1 + 48);
        if ( *(_QWORD *)(v8[1] + v14) )
        {
          v15 = *v8;
          v16 = v14 + v15 == 0;
          v17 = (CHAR *)(v14 + v15);
          *(_QWORD *)&SourceString.Length = 0LL;
          SourceString.Buffer = v17;
          if ( !v16 )
          {
            v18 = -1LL;
            do
              ++v18;
            while ( v17[v18] );
            if ( v18 > 0xFFFE )
            {
              v3 = -1073741562;
              break;
            }
            SourceString.Length = v18;
            SourceString.MaximumLength = v18 + 1;
          }
          v3 = sub_180023170(&SourceString, *(_QWORD *)(a1 + 88) + 8LL * v13, (__int64)&BaseAddress);
          if ( v3 < 0 )
            break;
        }
        v8 += 5;
        ++v13;
        if ( !*v8 )
          break;
      }
      if ( BaseAddress )
        RtlFreeHeap(HeapHandle, 0, BaseAddress);
    }
    if ( v3 >= 0 )
    {
      RtlAcquireSRWLockExclusive(&stru_1801660B0);
      v4 = --*(_DWORD *)(a1 + 100);
      RtlReleaseSRWLockExclusive(&stru_1801660B0);
    }
  }
  else
  {
    v3 = -1073741801;
  }
  if ( !v4 )
  {
LABEL_30:
    v19 = *(_QWORD *)(v1 + 152);
    if ( *(_QWORD *)(v2 + 104) )
    {
      *(_DWORD *)(v19 + 56) = 4;
      if ( *(_QWORD *)(v2 + 48) )
        sub_1800709A4(v2);
      else
        v3 = sub_18001C610(v2);
    }
    else
    {
      *(_DWORD *)(v19 + 56) = 5;
    }
  }
  if ( v3 < 0 )
LABEL_37:
    **(_DWORD **)(v2 + 40) = v3;
}
