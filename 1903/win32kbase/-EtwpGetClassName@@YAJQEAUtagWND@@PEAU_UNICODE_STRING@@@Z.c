/*
 * XREFs of ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C009B100
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C0035600 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0035E30 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetClassName(struct tagWND *const a1, struct _UNICODE_STRING *a2)
{
  unsigned int v4; // ebx
  struct _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = 0;
  RtlInitUnicodeString(a2, 0LL);
  if ( a1 )
  {
    RtlInitAnsiString(&DestinationString, *(PCSZ *)(*((_QWORD *)a1 + 17) + 104LL));
    return (unsigned int)RtlAnsiStringToUnicodeString(a2, &DestinationString, 1u);
  }
  return v4;
}
