/*
 * XREFs of sub_1801055A0 @ 0x1801055A0
 * Callers:
 *     sub_180043280 @ 0x180043280 (sub_180043280.c)
 *     sub_180043550 @ 0x180043550 (sub_180043550.c)
 * Callees:
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     sub_180033C9C @ 0x180033C9C (sub_180033C9C.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlReAllocateHeap @ 0x1800431F0 (RtlReAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     sub_18006E8DC @ 0x18006E8DC (sub_18006E8DC.c)
 *     sub_1800704A4 @ 0x1800704A4 (sub_1800704A4.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800F0764 @ 0x1800F0764 (sub_1800F0764.c)
 *     sub_180101024 @ 0x180101024 (sub_180101024.c)
 *     sub_180106190 @ 0x180106190 (sub_180106190.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 *     sub_180106798 @ 0x180106798 (sub_180106798.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

__int64 __fastcall sub_1801055A0(_DWORD *Src, int a2, __int64 a3, unsigned __int64 a4)
{
  int v9; // esi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  struct _PEB *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int16 v16; // dx
  unsigned __int16 v17; // cx
  wchar_t *v18; // rax
  __int64 Heap; // rax
  unsigned __int64 v20; // rsi
  _WORD *v21; // rax
  _WORD *v22; // r14
  unsigned __int16 v23; // ax
  struct _PEB *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  wchar_t *v27; // rax
  char v28; // [rsp+30h] [rbp-48h]
  unsigned __int16 v29; // [rsp+34h] [rbp-44h]
  __int64 v30; // [rsp+38h] [rbp-40h]
  unsigned __int64 v31; // [rsp+40h] [rbp-38h]
  unsigned int v32; // [rsp+88h] [rbp+10h]

  v28 = 0;
  v30 = 0LL;
  if ( (Src[29] & 0x1000000) != 0 )
    return _guard_dispatch_icall_fptr();
  if ( !sub_180019C74(Src, "RtlReAllocateHeap") )
    goto LABEL_68;
  v9 = Src[29] | 0x10000100 | a2;
  v32 = v9;
  v10 = a4;
  if ( !a4 )
    v10 = 1LL;
  v11 = (*((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v10)) + 16;
  if ( v11 < a4 || v11 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a4, *((_QWORD *)Src + 25));
LABEL_68:
    v30 = 0LL;
    goto LABEL_69;
  }
  v29 = 0;
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    v28 = 1;
    v32 = v9 | 1;
  }
  sub_1801061B8(Src, 0LL);
  v12 = a3 - 16;
  _m_prefetchw((const void *)(a3 - 16));
  if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  v31 = v12;
  if ( sub_1800704A4((unsigned __int64)Src, v12, "RtlReAllocateHeap") )
  {
    v13 = NtCurrentPeb();
    if ( a3 == qword_1801638F0 )
    {
      if ( v13->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)qword_1801638F0, a4);
    }
    else
    {
      if ( (v13->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_36;
      v16 = dword_1801638F8;
      if ( !dword_1801638F8 )
        goto LABEL_36;
      if ( Src[31] )
      {
        *(_DWORD *)(v31 + 8) ^= Src[34];
        if ( *(_BYTE *)(v31 + 11) != (*(_BYTE *)(v31 + 8) ^ (unsigned __int8)(*(_BYTE *)(v31 + 9) ^ *(_BYTE *)(v31 + 10))) )
        {
          sub_180101024((unsigned __int64)Src, v31);
          v16 = dword_1801638F8;
        }
      }
      if ( (*(_BYTE *)(v31 + 10) & 2) != 0 )
        v17 = *(_WORD *)(sub_18006E8DC(v31) + 2);
      else
        v17 = *(unsigned __int8 *)(v31 + 11);
      v29 = v17;
      if ( Src[31] )
      {
        *(_BYTE *)(v31 + 11) = *(_BYTE *)(v31 + 8) ^ *(_BYTE *)(v31 + 9) ^ *(_BYTE *)(v31 + 10);
        *(_DWORD *)(v31 + 8) ^= Src[34];
      }
      if ( !v17 || v17 != v16 || *((_WORD *)Src + 104) != HIWORD(dword_1801638F8) )
        goto LABEL_36;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v18 = sub_1800F0764((__int64)Src, v29);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, v18);
    }
    sub_180106190(v15, v14);
LABEL_36:
    Heap = RtlReAllocateHeap((__int64)Src, v32, a3, a4);
    v30 = Heap;
    if ( Heap )
    {
      v20 = Heap - 16;
      _m_prefetchw((const void *)(Heap - 16));
      if ( *(_BYTE *)(Heap - 16 + 15) == 5 )
        v20 -= 16LL * *(unsigned __int8 *)(v20 + 14);
      if ( Src[31] )
      {
        *(_DWORD *)(v20 + 8) ^= Src[34];
        if ( *(_BYTE *)(v20 + 11) != (*(_BYTE *)(v20 + 8) ^ (unsigned __int8)(*(_BYTE *)(v20 + 9) ^ *(_BYTE *)(v20 + 10))) )
          sub_180101024((unsigned __int64)Src, v20);
      }
      if ( (*(_BYTE *)(v20 + 10) & 2) != 0 )
      {
        v21 = (_WORD *)sub_18006E8DC(v20);
        v22 = v21;
        if ( (Src[28] & 0x8000000) != 0 )
          *v21 = sub_180033C9C(1u);
        else
          *v21 = 0;
        v23 = v22[1];
      }
      else
      {
        v23 = *(unsigned __int8 *)(v20 + 11);
      }
      v29 = v23;
      if ( Src[31] )
      {
        *(_BYTE *)(v20 + 11) = *(_BYTE *)(v20 + 8) ^ *(_BYTE *)(v20 + 9) ^ *(_BYTE *)(v20 + 10);
        *(_DWORD *)(v20 + 8) ^= Src[34];
      }
    }
    sub_180106798(Src);
    sub_1801061B8(Src, 0LL);
  }
  if ( v30 )
  {
    v24 = NtCurrentPeb();
    if ( v30 == qword_1801638F0 )
    {
      if ( v24->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_1801638F0, a4);
LABEL_57:
      sub_180106190(v26, v25);
      goto LABEL_69;
    }
    if ( (v24->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*((_WORD *)Src + 104), v29) == dword_1801638F8 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v27 = sub_1800F0764((__int64)Src, v29);
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v30, a4, v27);
      goto LABEL_57;
    }
  }
LABEL_69:
  if ( v28 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return v30;
}
