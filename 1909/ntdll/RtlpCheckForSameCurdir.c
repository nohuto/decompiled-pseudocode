/*
 * XREFs of RtlpCheckForSameCurdir @ 0x180076B5C
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x1800769C0 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180022950 (RtlEqualUnicodeString.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpReferenceCurrentDirectory @ 0x180076D08 (RtlpReferenceCurrentDirectory.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 */

bool __fastcall RtlpCheckForSameCurdir(_WORD *a1, __int64 a2)
{
  bool v3; // di
  __int64 v4; // rax
  __int64 v5; // rbx
  _UNICODE_STRING DosPath; // xmm0
  _UNICODE_STRING v8; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v4 = RtlpReferenceCurrentDirectory(0LL, a2);
  v5 = v4;
  if ( v4 )
    DosPath = *(_UNICODE_STRING *)(v4 + 24);
  else
    DosPath = NtCurrentPeb()->ProcessParameters->CurrentDirectory.DosPath;
  v8 = DosPath;
  if ( DosPath.Length > 6u )
  {
    if ( DosPath.Length - 2 != (unsigned __int16)*a1 )
      goto LABEL_7;
    v8.Length = DosPath.Length - 2;
    goto LABEL_6;
  }
  if ( DosPath.Length == *a1 )
LABEL_6:
    v3 = RtlEqualUnicodeString(&v8.Length, (__int64)a1, 1) != 0;
LABEL_7:
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
    {
      NtClose(*(HANDLE *)(v5 + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
    }
  }
  else
  {
    RtlLeaveCriticalSection((__int64)&FastPebLock);
  }
  return v3;
}
