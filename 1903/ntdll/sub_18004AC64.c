/*
 * XREFs of sub_18004AC64 @ 0x18004AC64
 * Callers:
 *     sub_18003B6C0 @ 0x18003B6C0 (sub_18003B6C0.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_18004D024 @ 0x18004D024 (sub_18004D024.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_18004AE3C @ 0x18004AE3C (sub_18004AE3C.c)
 *     RtlInterlockedPopEntrySList @ 0x1800A01B0 (RtlInterlockedPopEntrySList.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A01F0 (RtlInterlockedPushEntrySList_0.c)
 *     sub_180103814 @ 0x180103814 (sub_180103814.c)
 *     sub_1801038C4 @ 0x1801038C4 (sub_1801038C4.c)
 *     sub_180103974 @ 0x180103974 (sub_180103974.c)
 */

int __fastcall sub_18004AC64(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  unsigned __int16 *v6; // rbx
  unsigned int v7; // ebp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 UserModeGlobalLogger; // rdi
  PSLIST_ENTRY v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  PSLIST_ENTRY v15; // rbp
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r14
  unsigned __int64 v19; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *a2;
  v6 = (unsigned __int16 *)(a1 + 48 * (*((unsigned __int8 *)a2 + 16) - 5LL));
  if ( *(_WORD *)(v2 + 416) && (*(_BYTE *)(v2 + 112) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(v2 + 352));
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(v2 + 352));
  }
  v7 = *v6;
  if ( v7 <= *((_DWORD *)v6 + 5) || v7 <= *((_DWORD *)v6 + 4) >> *((_DWORD *)v6 + 6) )
  {
    v8 = 1LL << *((_BYTE *)a2 + 16);
    if ( v8 > 0xF0000 )
      v8 = 983040LL;
    v9 = v8 + *((unsigned __int16 *)a2 + 9);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), v9);
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_180103974(*(_QWORD *)(a1 + 24), a2, v9, 16LL * *(unsigned __int16 *)(v3 + 36));
    LODWORD(v11) = (unsigned int)RtlInterlockedPushEntrySList_0((PSLIST_HEADER)v6, (PSLIST_ENTRY)a2);
    ++v6[15];
  }
  else
  {
    v12 = 1LL << *((_BYTE *)a2 + 16);
    if ( v12 > 0xF0000 )
      v12 = 983040LL;
    v19 = v12 + *((unsigned __int16 *)a2 + 9);
    sub_18004AE3C(*(PVOID *)(a1 + 24), a2);
    LODWORD(v11) = RtlGetCurrentServiceSessionId();
    v13 = 2147353472LL;
    if ( (_DWORD)v11 )
    {
      v11 = (PSLIST_ENTRY)NtCurrentPeb();
      v14 = (__int64)&v11[9].Next[34].Next + 6;
    }
    else
    {
      v14 = 2147353472LL;
    }
    if ( *(_BYTE *)v14 )
    {
      v11 = (PSLIST_ENTRY)NtCurrentPeb();
      if ( (*(_BYTE *)(&v11[55].Next + 1) & 1) != 0 )
        LODWORD(v11) = sub_1801038C4(*(_QWORD *)(a1 + 24), a2, v19, 16LL * *(unsigned __int16 *)(v3 + 36));
    }
    _InterlockedDecrement((volatile signed __int32 *)v6 + 4);
    if ( v7 )
    {
      v11 = RtlInterlockedPopEntrySList((PSLIST_HEADER)v6);
      v15 = v11;
      if ( v11 )
      {
        v16 = 1LL << LOBYTE(v11[1].Next);
        if ( v16 > 0xF0000 )
          v16 = 983040LL;
        v17 = v16 + WORD1(v11[1].Next);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v17);
        sub_18004AE3C(*(PVOID *)(a1 + 24), v11);
        LODWORD(v11) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v11 )
        {
          v11 = (PSLIST_ENTRY)NtCurrentPeb();
          v13 = (__int64)&v11[9].Next[34].Next + 6;
        }
        if ( *(_BYTE *)v13 )
        {
          v11 = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&v11[55].Next + 1) & 1) != 0 )
          {
            sub_180103814(*(_QWORD *)(a1 + 24), v15, v17, 0LL);
            LODWORD(v11) = sub_1801038C4(*(_QWORD *)(a1 + 24), v15, v17, 0LL);
          }
        }
        _InterlockedDecrement((volatile signed __int32 *)v6 + 4);
      }
    }
  }
  return (int)v11;
}
