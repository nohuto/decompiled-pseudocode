/*
 * XREFs of sub_18002C944 @ 0x18002C944
 * Callers:
 *     sub_18002C8C0 @ 0x18002C8C0 (sub_18002C8C0.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     sub_1800255A8 @ 0x1800255A8 (sub_1800255A8.c)
 *     sub_18002946C @ 0x18002946C (sub_18002946C.c)
 *     sub_18002CAA8 @ 0x18002CAA8 (sub_18002CAA8.c)
 *     sub_18002CB3C @ 0x18002CB3C (sub_18002CB3C.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180083400 @ 0x180083400 (sub_180083400.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 __fastcall sub_18002C944(__int64 a1)
{
  __int64 v1; // r13
  void (__fastcall *v2)(__int64); // rdi
  _BOOL8 v3; // rsi
  ULONG NtGlobalFlag; // ebp
  __int64 v5; // rdx
  __int64 v6; // r14
  int v7; // r12d
  int v8; // ebp
  __int64 v9; // rbx
  _WORD *v10; // rsi
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // r15
  char *Heap; // rbp
  char v16; // al
  __int64 v17; // r13
  __int64 v18; // r8
  __int64 v19; // r8
  int v21; // [rsp+78h] [rbp+10h]
  _BOOL8 v22; // [rsp+80h] [rbp+18h]

  v1 = a1;
  v2 = 0LL;
  v3 = Src != 0LL;
  v22 = v3;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  RtlEnterCriticalSection(&stru_18015F3F0);
  if ( byte_180166014 )
  {
    v5 = MEMORY[0x7FFE0330];
    v2 = (void (__fastcall *)(__int64))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                               qword_18017A268,
                                                               64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  }
  v6 = *(_QWORD *)(v1 + 8);
  v7 = 0;
  if ( v6 != v1 )
  {
    v8 = NtGlobalFlag & 0x100;
    v21 = v8;
    do
    {
      v9 = v6 - 160;
      if ( v8 )
      {
        v7 = sub_180083400(v6 - 160);
        if ( v7 < 0 )
          break;
      }
      sub_18002CB3C(v6 - 160, v5, 0LL);
      if ( v2 && !byte_180166015 )
      {
        v2(v6 - 160);
        *(_BYTE *)(v9 + 105) |= 8u;
      }
      if ( !v3 )
      {
        v10 = *(_WORD **)(v9 + 80);
        if ( (unsigned int)sub_18002946C(v10, 16) )
        {
          v13 = -1LL;
          do
            ++v13;
          while ( v10[v13] );
          if ( Src )
            v14 = v13 + qword_180165370 + 1;
          else
            v14 = v13 + 2;
          Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v14);
          if ( Heap )
          {
            if ( Src )
            {
              v17 = 2 * qword_180165370;
              memmove(Heap, Src, 2 * qword_180165370);
              v18 = -1LL;
              do
                ++v18;
              while ( v10[v18] );
              memmove(&Heap[v17 + 2], v10, 2 * v18);
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Src);
              v1 = a1;
            }
            else
            {
              v19 = -1LL;
              do
                ++v19;
              while ( v10[v19] );
              memmove(Heap, v10, 2 * v19);
            }
            Src = Heap;
            qword_180165370 = v14;
          }
          else
          {
            v16 = dword_18015FAB0;
            if ( (dword_18015FAB0 & 3) != 0 )
            {
              sub_1800CE318(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                2775,
                (unsigned int)"LdrpCheckModule",
                0,
                (__int64)"Failed to allocated memory for shimmed module list\n");
              v16 = dword_18015FAB0;
            }
            if ( (v16 & 0x10) != 0 )
              __debugbreak();
          }
          v8 = v21;
        }
        v3 = v22;
      }
      sub_18002CAA8(v6 - 160, 1LL);
      v11 = *(_QWORD *)(v9 + 48);
      *(_DWORD *)(v9 + 104) |= 8u;
      sub_1800255A8(v11, v9 + 72, 0x14ADu);
      v6 = *(_QWORD *)(v6 + 8);
    }
    while ( v6 != v1 );
  }
  RtlLeaveCriticalSection(&stru_18015F3F0);
  return (unsigned int)v7;
}
