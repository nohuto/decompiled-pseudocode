/*
 * XREFs of KiSynchCounterSetCallback @ 0x14087EF50
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400040E8 (RtlStringCbPrintfW.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400052B0 (KeQueryActiveProcessorCountEx.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PcwAddInstance @ 0x1406AEA80 (PcwAddInstance.c)
 *     EtwDereferenceSpinLockCounters @ 0x1408FA8F0 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1408FA94C (EtwReferenceSpinLockCounters.c)
 */

NTSTATUS __fastcall KiSynchCounterSetCallback(int a1, __int64 a2)
{
  NTSTATUS result; // eax
  int v3; // ecx
  struct _PCW_BUFFER *v4; // r14
  ULONG v5; // edi
  ULONG ActiveProcessorCount; // ebp
  __int64 *i; // rsi
  __int64 v8; // rbx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-58h] BYREF
  struct _PCW_DATA Data; // [rsp+40h] [rbp-48h] BYREF
  wchar_t pszDest[12]; // [rsp+50h] [rbp-38h] BYREF

  result = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( !a1 )
  {
    EtwReferenceSpinLockCounters();
    return 0;
  }
  v3 = a1 - 1;
  if ( !v3 )
  {
    EtwDereferenceSpinLockCounters();
    return 0;
  }
  if ( (unsigned int)(v3 - 1) > 1 )
    return result;
  v4 = *(struct _PCW_BUFFER **)(a2 + 24);
  v5 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( !ActiveProcessorCount )
    return 0;
  for ( i = KiProcessorBlock; ; ++i )
  {
    v8 = *i;
    RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u", v5);
    RtlInitUnicodeString(&DestinationString, pszDest);
    Data.Size = 184;
    Data.Data = (const void *)(v8 + 25024);
    result = PcwAddInstance(v4, &DestinationString, v5, 1u, &Data);
    if ( result < 0 )
      break;
    if ( ++v5 >= ActiveProcessorCount )
      return 0;
  }
  return result;
}
