/*
 * XREFs of RtlpValidateHeapEntry @ 0x1800706F4
 * Callers:
 *     RtlValidateHeap @ 0x1800705A0 (RtlValidateHeap.c)
 *     RtlDebugFreeHeap @ 0x1801050F0 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1801053E8 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801056D8 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180105C34 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180105E00 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180105F94 (RtlDebugSizeHeap.c)
 * Callees:
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     RtlpCheckBusyBlockTail @ 0x1800F2FB4 (RtlpCheckBusyBlockTail.c)
 *     RtlpBreakPointHeap @ 0x1801062C8 (RtlpBreakPointHeap.c)
 */

char __fastcall RtlpValidateHeapEntry(unsigned __int64 a1, unsigned __int64 a2, const char *a3)
{
  unsigned __int64 v5; // rdi
  char v6; // al
  __int64 v7; // rcx
  int v9; // edx
  unsigned __int8 v10; // al
  unsigned int v11; // eax
  unsigned int v12; // eax
  _QWORD *i; // rax

  v5 = a1;
  if ( a2 )
  {
    if ( (a2 & 0xF) == 0 )
    {
      v6 = *(_BYTE *)(a2 + 15);
      if ( (v6 & 0x3F) != 0 )
      {
        if ( v6 >= 0 )
        {
          if ( !*(_DWORD *)(a1 + 124)
            || (v9 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(a2 + 8),
                HIBYTE(v9) == ((unsigned __int8)v9 ^ (unsigned __int8)(BYTE1(v9) ^ BYTE2(v9)))) )
          {
            if ( *(_BYTE *)(a2 + 15) == 4 )
            {
              if ( (a2 & 0xFFF) != 0x30 )
                goto LABEL_34;
            }
            else
            {
              v10 = *(_BYTE *)(a2 + 14);
              if ( v10 )
                a1 = (a2 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v10 << 16) + 0x10000;
              if ( !a1 || *(_QWORD *)(a1 + 40) != v5 || a2 < *(_QWORD *)(a1 + 64) || a2 >= *(_QWORD *)(a1 + 72) )
                goto LABEL_34;
            }
            if ( *(_DWORD *)(v5 + 124) )
            {
              v11 = *(_DWORD *)(a2 + 8);
              if ( (v11 & *(_DWORD *)(v5 + 124)) != 0 )
                v11 ^= *(_DWORD *)(v5 + 136);
              v12 = HIWORD(v11);
            }
            else
            {
              LOBYTE(v12) = *(_BYTE *)(a2 + 10);
            }
            if ( (v12 & 4) == 0 || (unsigned __int8)RtlpCheckBusyBlockTail(v5, a2) )
            {
              if ( *(_BYTE *)(a2 + 15) == 4 )
                return 1;
              for ( i = *(_QWORD **)(v5 + 288); i != (_QWORD *)(v5 + 288); i = (_QWORD *)*i )
              {
                if ( a2 >= i[5] && a2 < i[6] )
                  return 1;
              }
            }
          }
        }
        else
        {
          if ( *(_BYTE *)(a1 + 418) == 2 )
            v7 = *(_QWORD *)(a1 + 408);
          else
            v7 = 0LL;
          if ( v7 )
            return 1;
        }
      }
    }
  }
LABEL_34:
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid address specified to %s( %p, %p )\n", a3, (const void *)v5, (const void *)(a2 + 16));
  RtlpBreakPointHeap();
  return 0;
}
