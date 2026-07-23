/*
 * XREFs of sub_1801045B8 @ 0x1801045B8
 * Callers:
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 * Callees:
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     sub_180033C9C @ 0x180033C9C (sub_180033C9C.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     sub_18006E8DC @ 0x18006E8DC (sub_18006E8DC.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800F0764 @ 0x1800F0764 (sub_1800F0764.c)
 *     sub_180101024 @ 0x180101024 (sub_180101024.c)
 *     sub_180106190 @ 0x180106190 (sub_180106190.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 *     sub_180106798 @ 0x180106798 (sub_180106798.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

PVOID __fastcall sub_1801045B8(_DWORD *Src, int a2, SIZE_T a3)
{
  ULONG v7; // ebx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  SIZE_T v10; // rax
  PVOID Heap; // rbx
  unsigned __int64 v12; // rbx
  _WORD *v13; // rax
  _WORD *v14; // r14
  unsigned __int16 v15; // ax
  struct _PEB *v16; // rax
  wchar_t *v17; // rax
  char v18; // [rsp+20h] [rbp-38h]
  PVOID v19; // [rsp+28h] [rbp-30h]
  unsigned __int16 v20; // [rsp+78h] [rbp+20h]

  v18 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (PVOID)_guard_dispatch_icall_fptr();
  if ( !sub_180019C74(Src, "RtlAllocateHeap") )
    goto LABEL_46;
  v7 = Src[29] | 0x10000100 | a2;
  v8 = a3;
  if ( !a3 )
    v8 = 1LL;
  v9 = *((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v8);
  if ( v9 < 0x20 )
    v9 = 32LL;
  v10 = v9 + 16;
  if ( v10 < a3 || v10 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a3, *((_QWORD *)Src + 25));
LABEL_46:
    v19 = 0LL;
    goto LABEL_47;
  }
  if ( (v7 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
    v18 = 1;
    v7 |= 1u;
  }
  sub_1801061B8((_DWORD)Src);
  Heap = RtlAllocateHeap(Src, v7, a3);
  v19 = Heap;
  sub_180106798(Src);
  if ( !Heap )
    goto LABEL_47;
  v12 = (unsigned __int64)Heap - 16;
  _m_prefetchw((const void *)v12);
  if ( *(_BYTE *)(v12 + 15) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  if ( Src[31] )
  {
    *(_DWORD *)(v12 + 8) ^= Src[34];
    if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
      sub_180101024((unsigned __int64)Src, v12);
  }
  if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
  {
    v13 = (_WORD *)sub_18006E8DC(v12);
    v14 = v13;
    if ( (Src[28] & 0x8000000) != 0 )
      *v13 = sub_180033C9C(1u);
    else
      *v13 = 0;
    v15 = v14[1];
  }
  else
  {
    v15 = *(unsigned __int8 *)(v12 + 11);
  }
  v20 = v15;
  if ( Src[31] )
  {
    *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
    *(_DWORD *)(v12 + 8) ^= Src[34];
  }
  if ( (Src[28] & 0x20000000) != 0 )
    sub_1801061B8((_DWORD)Src);
  v16 = NtCurrentPeb();
  if ( v19 == (PVOID)qword_1801638E0 )
  {
    if ( v16->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Just allocated block at %p for %Ix bytes\n", (const void *)qword_1801638E0, a3);
LABEL_33:
    sub_180106190();
    goto LABEL_47;
  }
  if ( (v16->NtGlobalFlag & 0x800) != 0 && v20 && v20 == word_1801638E8 && *((_WORD *)Src + 104) == word_1801638EA )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    v17 = sub_1800F0764((__int64)Src, v20);
    DbgPrint("Just allocated block at %p for 0x%Ix bytes with tag %ws\n", v19, a3, v17);
    goto LABEL_33;
  }
LABEL_47:
  if ( v18 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
  return v19;
}
