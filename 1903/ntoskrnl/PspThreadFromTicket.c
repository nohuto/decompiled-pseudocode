/*
 * XREFs of PspThreadFromTicket @ 0x1405D0800
 * Callers:
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PsLookupThreadByThreadId @ 0x1405D0860 (PsLookupThreadByThreadId.c)
 */

NTSTATUS __fastcall PspThreadFromTicket(_QWORD *a1, PETHREAD *a2)
{
  __int64 v3; // rbx
  NTSTATUS result; // eax

  v3 = PspWorkOnBehalfEncodingKey ^ *a1;
  result = PsLookupThreadByThreadId((HANDLE)(int)v3, a2);
  if ( result >= 0 )
  {
    if ( (*a2)[1].Header.LockNV == HIDWORD(v3) )
    {
      return 0;
    }
    else
    {
      ObfDereferenceObject(*a2);
      return -1073741275;
    }
  }
  return result;
}
