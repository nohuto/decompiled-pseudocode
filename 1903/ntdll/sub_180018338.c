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

PSLIST_ENTRY __fastcall sub_180018338(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  PSLIST_ENTRY v8; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 UserModeGlobalLogger; // rcx
  unsigned int v12; // edx
  unsigned __int32 v14; // eax
  unsigned __int32 v15; // eax

  v6 = a2;
  v7 = a1 + 48 * (a2 - 5LL);
  ++*(_WORD *)(v7 + 28);
  v8 = RtlInterlockedPopEntrySList((PSLIST_HEADER)v7);
  if ( v8 )
  {
    ++*(_WORD *)(v7 + 32);
LABEL_3:
    v9 = 1LL << LOBYTE(v8[1].Next);
    if ( v9 > 0xF0000 )
      v9 = 983040LL;
    v10 = v9 + WORD1(v8[1].Next);
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_180103814(*(_QWORD *)(a1 + 24), v8, v10, a3);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v10);
    goto LABEL_9;
  }
  if ( a2 > 7u )
  {
    v6 = a2;
    v8 = RtlInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 48 * (a2 - 6LL)));
    if ( v8 )
      goto LABEL_3;
  }
  v8 = (PSLIST_ENTRY)sub_1800184BC(*(PVOID *)(a1 + 24));
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 48 * v6 - 224));
LABEL_9:
  v12 = *(unsigned __int16 *)(v7 + 28);
  if ( v12 > 0x40 )
  {
    if ( v12 < *(unsigned __int16 *)(v7 + 30) + (*(unsigned __int16 *)(v7 + 30) >> 1)
      && *(unsigned __int16 *)(v7 + 32) < v12 - (v12 >> 1) )
    {
      v14 = *(_DWORD *)(v7 + 20);
      if ( v14 >= 2 )
      {
        v15 = *(_DWORD *)(v7 + 24);
        if ( v15 > 2 )
          _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 24), v15 - 1, v15);
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 20), v14 + 1, v14);
      }
    }
    *(_WORD *)(v7 + 28) = 0;
    *(_WORD *)(v7 + 30) = 0;
    *(_WORD *)(v7 + 32) = 0;
  }
  return v8;
}
