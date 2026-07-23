/*
 * XREFs of sub_1800FDDB4 @ 0x1800FDDB4
 * Callers:
 *     RtlGetUILanguageInfo @ 0x180083E70 (RtlGetUILanguageInfo.c)
 *     sub_1800FDF7C @ 0x1800FDF7C (sub_1800FDF7C.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x180016330 (RtlLCIDToCultureName.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_1800FDF7C @ 0x1800FDF7C (sub_1800FDF7C.c)
 */

__int64 __fastcall sub_1800FDDB4(__int64 a1, __int64 a2, unsigned __int16 a3, char a4, __int64 a5)
{
  __int16 v9; // r9
  __int16 i; // dx
  __int16 v11; // r8
  __int16 v12; // cx
  __int64 v13; // r8
  __int64 v14; // rcx
  WCHAR *Heap; // rax
  WCHAR *v17; // rdi
  unsigned int v18; // ebx
  _UNICODE_STRING String; // [rsp+30h] [rbp-38h] BYREF

  if ( !a1 || !a2 || !a5 )
    return 3221225485LL;
  v9 = 0;
  for ( i = 0; i < 8; i += 2 )
  {
    v11 = (*(_WORD *)(a2 + 8) >> i) & 3;
    v12 = *(_WORD *)(a2 + 2LL * v9 + 12);
    if ( v11 == 2 )
    {
      v13 = v12;
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
      if ( *(_WORD *)(28 * v13 + v14 + 4) == a3 )
      {
        *(_OWORD *)a5 = *(_OWORD *)(28 * v13 + v14);
        *(_QWORD *)(a5 + 16) = *(_QWORD *)(28 * v13 + v14 + 16);
        *(_DWORD *)(a5 + 24) = *(_DWORD *)(28 * v13 + v14 + 24);
        return 0LL;
      }
    }
    else if ( v12 != a3 && v11 != 1 )
    {
      *(_QWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 8) = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_DWORD *)(a5 + 24) = 0;
      *(_WORD *)(a5 + 6) = -1;
      *(_WORD *)(a5 + 4) = a3;
      return 0LL;
    }
    ++v9;
  }
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  v17 = Heap;
  if ( !Heap )
    return 3221225495LL;
  if ( a4
    && *(__int16 *)(a2 + 6) > 0
    && (String.Buffer = Heap, *(_DWORD *)&String.Length = 11141120, RtlLCIDToCultureName(a3, &String)) )
  {
    v18 = sub_1800FDF7C(a1, a2, String.Buffer, 0LL, a5);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
    return v18;
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
    return 3221225524LL;
  }
}
