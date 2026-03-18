/*
 * XREFs of rimObsReadMaxQueueSize @ 0x1C012D35C
 * Callers:
 *     RawInputManagerInputObserverObjectCreate @ 0x1C011CB8C (RawInputManagerInputObserverObjectCreate.c)
 * Callees:
 *     rimRegQueryRegistryDWord @ 0x1C0006ED0 (rimRegQueryRegistryDWord.c)
 */

__int64 rimObsReadMaxQueueSize()
{
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  result = rimRegQueryRegistryDWord(&DestinationString, L"RimObserverQueueSize", 0x100u);
  if ( (unsigned int)result > 0xFA00 )
    return 64000LL;
  return result;
}
