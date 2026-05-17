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

struct _PEB *__fastcall sub_18004AC64(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  unsigned __int16 *v6; // rbx
  unsigned int v7; // ebp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rdi
  struct _PEB *result; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  struct _PEB *v15; // rbp
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *a2;
  v6 = (unsigned __int16 *)(a1 + 48 * (*((unsigned __int8 *)a2 + 16) - 5LL));
  if ( *(_WORD *)(v2 + 416) && (*(_BYTE *)(v2 + 112) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(v2 + 352));
    RtlLeaveCriticalSection(*(_QWORD *)(v2 + 352));
  }
  v7 = *v6;
  if ( v7 <= *((_DWORD *)v6 + 5) || v7 <= *((_DWORD *)v6 + 4) >> *((_DWORD *)v6 + 6) )
  {
    v8 = 1LL << *((_BYTE *)a2 + 16);
    if ( v8 > 0xF0000 )
      v8 = 983040LL;
    v9 = v8 + *((unsigned __int16 *)a2 + 9);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), v9);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    else
      v10 = 2147353472LL;
    if ( *(_BYTE *)v10 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        sub_180103974(*(_QWORD *)(a1 + 24), a2, v9, 16LL * *(unsigned __int16 *)(v3 + 36));
    }
    result = (struct _PEB *)RtlInterlockedPushEntrySList_0((PSLIST_HEADER)v6, (PSLIST_ENTRY)a2);
    ++v6[15];
  }
  else
  {
    v12 = 1LL << *((_BYTE *)a2 + 16);
    if ( v12 > 0xF0000 )
      v12 = 983040LL;
    v18 = v12 + *((unsigned __int16 *)a2 + 9);
    sub_18004AE3C(*(_QWORD *)(a1 + 24), a2);
    result = (struct _PEB *)RtlGetCurrentServiceSessionId();
    v13 = 2147353472LL;
    if ( (_DWORD)result )
    {
      result = NtCurrentPeb();
      v14 = (__int64)result->HotpatchInformation + 550;
    }
    else
    {
      v14 = 2147353472LL;
    }
    if ( *(_BYTE *)v14 )
    {
      result = NtCurrentPeb();
      if ( (result->TracingFlags & 1) != 0 )
        result = (struct _PEB *)sub_1801038C4(*(_QWORD *)(a1 + 24), a2, v18, 16LL * *(unsigned __int16 *)(v3 + 36));
    }
    _InterlockedDecrement((volatile signed __int32 *)v6 + 4);
    if ( v7 )
    {
      result = (struct _PEB *)RtlInterlockedPopEntrySList((PSLIST_HEADER)v6);
      v15 = result;
      if ( result )
      {
        v16 = 1LL << LOBYTE(result->ImageBaseAddress);
        if ( v16 > 0xF0000 )
          v16 = 983040LL;
        v17 = v16 + WORD1(result->ImageBaseAddress);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v17);
        sub_18004AE3C(*(_QWORD *)(a1 + 24), result);
        result = (struct _PEB *)RtlGetCurrentServiceSessionId();
        if ( (_DWORD)result )
        {
          result = NtCurrentPeb();
          v13 = (__int64)result->HotpatchInformation + 550;
        }
        if ( *(_BYTE *)v13 )
        {
          result = NtCurrentPeb();
          if ( (result->TracingFlags & 1) != 0 )
          {
            sub_180103814(*(_QWORD *)(a1 + 24), v15, v17, 0LL);
            result = (struct _PEB *)sub_1801038C4(*(_QWORD *)(a1 + 24), v15, v17, 0LL);
          }
        }
        _InterlockedDecrement((volatile signed __int32 *)v6 + 4);
      }
    }
  }
  return result;
}
