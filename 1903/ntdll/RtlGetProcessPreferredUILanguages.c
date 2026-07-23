/*
 * XREFs of RtlGetProcessPreferredUILanguages @ 0x180088AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012D4C @ 0x180012D4C (sub_180012D4C.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_180014248 @ 0x180014248 (sub_180014248.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 */

NTSTATUS __cdecl RtlGetProcessPreferredUILanguages(
        ULONG Flags,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  char v7; // bl
  NTSTATUS result; // eax
  __int64 v9; // rsi
  NTSTATUS v10; // ebx
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v7 = Flags;
  if ( !ReturnLength || !NumberOfLanguages || !Languages && *ReturnLength )
    return -1073741811;
  if ( Flags )
  {
    if ( (Flags & 0xFFFFFFF3) == 0 && (Flags & 0xC) != 12 )
      goto LABEL_7;
    return -1073741811;
  }
  v7 = 8;
LABEL_7:
  result = RtlpCreateProcessRegistryInfo(&v11);
  if ( result >= 0 )
  {
    v9 = v11;
    if ( !*(_QWORD *)(v11 + 72) )
      return sub_180014248(0LL, v11, Languages, ReturnLength, v7, 0, (int *)NumberOfLanguages);
    sub_180012D4C();
    RtlEnterCriticalSection(&CriticalSection);
    v10 = sub_180014248(*(_QWORD *)(v9 + 72), v9, Languages, ReturnLength, v7, 0, (int *)NumberOfLanguages);
    RtlLeaveCriticalSection(&CriticalSection);
    return v10;
  }
  return result;
}
