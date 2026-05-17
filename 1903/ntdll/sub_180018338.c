/*
 * XREFs of sub_180018338 @ 0x180018338
 * Callers:
 *     sub_18003B6C0 @ 0x18003B6C0 (sub_18003B6C0.c)
 * Callees:
 *     sub_1800184BC @ 0x1800184BC (sub_1800184BC.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlInterlockedPopEntrySList @ 0x1800A01B0 (RtlInterlockedPopEntrySList.c)
 *     sub_180103814 @ 0x180103814 (sub_180103814.c)
 */

PSLIST_ENTRY __fastcall sub_180018338(__int64 a1, unsigned __int8 a2, __int64 a3, char a4)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  PSLIST_ENTRY v11; // rbp
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned __int32 v18; // eax
  unsigned __int32 v19; // eax

  v8 = a2;
  v9 = a1 + 48 * (a2 - 5LL);
  ++*(_WORD *)(v9 + 28);
  v11 = RtlInterlockedPopEntrySList((PSLIST_HEADER)v9);
  if ( v11 )
  {
    ++*(_WORD *)(v9 + 32);
LABEL_3:
    v13 = 1LL << LOBYTE(v11[1].Next);
    if ( v13 > 0xF0000 )
      v13 = 983040LL;
    v14 = v13 + WORD1(v11[1].Next);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    else
      v15 = 2147353472LL;
    if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_180103814(*(_QWORD *)(a1 + 24), v11, v14, a3);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v14);
    goto LABEL_9;
  }
  if ( a2 > 7u )
  {
    v8 = a2;
    v11 = RtlInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 48 * (a2 - 6LL)));
    if ( v11 )
      goto LABEL_3;
  }
  LOBYTE(v12) = a4;
  LOBYTE(v10) = a2;
  v11 = (PSLIST_ENTRY)sub_1800184BC(*(_QWORD *)(a1 + 24), v10, a3, v12);
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 48 * v8 - 224));
LABEL_9:
  v16 = *(unsigned __int16 *)(v9 + 28);
  if ( v16 > 0x40 )
  {
    if ( v16 < *(unsigned __int16 *)(v9 + 30) + (*(unsigned __int16 *)(v9 + 30) >> 1)
      && *(unsigned __int16 *)(v9 + 32) < v16 - (v16 >> 1) )
    {
      v18 = *(_DWORD *)(v9 + 20);
      if ( v18 >= 2 )
      {
        v19 = *(_DWORD *)(v9 + 24);
        if ( v19 > 2 )
          _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 24), v19 - 1, v19);
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 20), v18 + 1, v18);
      }
    }
    *(_WORD *)(v9 + 28) = 0;
    *(_WORD *)(v9 + 30) = 0;
    *(_WORD *)(v9 + 32) = 0;
  }
  return v11;
}
