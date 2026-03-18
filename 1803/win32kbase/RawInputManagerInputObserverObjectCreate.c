/*
 * XREFs of RawInputManagerInputObserverObjectCreate @ 0x1C00F1EC4
 * Callers:
 *     rimObsAddInputObserver @ 0x1C0104A1C (rimObsAddInputObserver.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     rimAddToObTrackList @ 0x1C00DE964 (rimAddToObTrackList.c)
 *     rimRegQueryRegistryDWord @ 0x1C0109414 (rimRegQueryRegistryDWord.c)
 */

__int64 __fastcall RawInputManagerInputObserverObjectCreate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PHANDLE Handle)
{
  NTSTATUS Object; // ebx
  unsigned int v6; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  Object = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL);
  if ( Object >= 0 )
  {
    memset(0LL, 0, 0xB8uLL);
    MEMORY[0] = gSessionId;
    MEMORY[4] = 3;
    MEMORY[0x18] = 16LL;
    MEMORY[0x10] = 16LL;
    MEMORY[0x20] = PsGetCurrentProcess(0LL);
    MEMORY[0x28] = KeGetCurrentThread();
    MEMORY[0x80] = 120LL;
    MEMORY[0x78] = 120LL;
    MEMORY[0x90] = 136LL;
    MEMORY[0x88] = 136LL;
    MEMORY[0x98] = 0;
    MEMORY[0x9C] = 0;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
    v6 = rimRegQueryRegistryDWord(&DestinationString, L"RimObserverQueueSize", 256LL);
    if ( v6 > 0xFA00 )
      v6 = 64000;
    MEMORY[0xA0] = v6;
    MEMORY[0xA8] = 0LL;
    MEMORY[0xB0] = 0LL;
    Object = ObInsertObject(0LL, 0LL, 3u, 0, 0LL, Handle);
    if ( Object >= 0 )
      rimAddToObTrackList(0LL);
  }
  return (unsigned int)Object;
}
