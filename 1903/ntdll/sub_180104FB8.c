/*
 * XREFs of sub_180104FB8 @ 0x180104FB8
 * Callers:
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 * Callees:
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
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

__int64 __fastcall sub_180104FB8(PRTL_CRITICAL_SECTION *Src, int a2, char *a3)
{
  LOGICAL v6; // r14d
  int v8; // esi
  unsigned __int64 v9; // rdx
  struct _PEB *v10; // rax
  __int16 v11; // dx
  unsigned __int16 v12; // cx
  wchar_t *v13; // rax
  char v14; // [rsp+20h] [rbp-38h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]
  int Flags; // [rsp+68h] [rbp+10h]
  unsigned __int16 v17; // [rsp+78h] [rbp+20h]

  v6 = 0;
  v14 = 0;
  if ( (*((_DWORD *)Src + 29) & 0x1000000) != 0 )
    return (unsigned __int8)_guard_dispatch_icall_fptr();
  if ( sub_180019C74(Src, "RtlFreeHeap") )
  {
    v8 = *((_DWORD *)Src + 29) | 0x10000000 | a2;
    Flags = v8;
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(Src[44]);
      v14 = 1;
      Flags = v8 | 1;
    }
    sub_1801061B8((_DWORD)Src);
    v9 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
    v15 = v9;
    if ( !sub_1800704A4((unsigned __int64)Src, v9, "RtlFreeHeap") )
      goto LABEL_34;
    v10 = NtCurrentPeb();
    if ( a3 == (char *)qword_180163900 )
    {
      if ( v10->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to free block at %p\n", (const void *)qword_180163900);
    }
    else
    {
      if ( (v10->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_33;
      v11 = unk_180163908;
      if ( !unk_180163908 )
        goto LABEL_33;
      if ( *((_DWORD *)Src + 31) )
      {
        *(_DWORD *)(v15 + 8) ^= *((_DWORD *)Src + 34);
        if ( *(_BYTE *)(v15 + 11) != (*(_BYTE *)(v15 + 8) ^ (unsigned __int8)(*(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10))) )
        {
          sub_180101024((unsigned __int64)Src, v15);
          v11 = unk_180163908;
        }
      }
      if ( (*(_BYTE *)(v15 + 10) & 2) != 0 )
        v12 = *(_WORD *)(sub_18006E8DC(v15) + 2);
      else
        v12 = *(unsigned __int8 *)(v15 + 11);
      v17 = v12;
      if ( *((_DWORD *)Src + 31) )
      {
        *(_BYTE *)(v15 + 11) = *(_BYTE *)(v15 + 8) ^ *(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10);
        *(_DWORD *)(v15 + 8) ^= *((_DWORD *)Src + 34);
      }
      if ( !v12 || v12 != v11 || *((_WORD *)Src + 104) != word_18016390A )
        goto LABEL_33;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v13 = sub_1800F0764((__int64)Src, v17);
      DbgPrint("About to free block at %p with tag %ws\n", a3, v13);
    }
    sub_180106190();
LABEL_33:
    v6 = RtlFreeHeap(Src, Flags, a3);
    sub_180106798(Src);
    sub_1801061B8((_DWORD)Src);
    goto LABEL_34;
  }
  v6 = 0;
LABEL_34:
  if ( v14 )
    RtlLeaveCriticalSection(Src[44]);
  return v6;
}
