/*
 * XREFs of RawInputManagerDeviceObjectCreate @ 0x1C00F1C60
 * Callers:
 *     rimCreateDev @ 0x1C00F86B0 (rimCreateDev.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     rimAddToObTrackList @ 0x1C00DE964 (rimAddToObTrackList.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PHANDLE Handle)
{
  NTSTATUS Object; // ebx

  LOBYTE(a1) = 1;
  Object = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL);
  if ( Object >= 0 )
  {
    memset(0LL, 0, 0x6D8uLL);
    MEMORY[0] = gSessionId;
    MEMORY[4] = 2;
    MEMORY[0x18] = 16LL;
    MEMORY[0x10] = 16LL;
    MEMORY[0xE0] = 216LL;
    MEMORY[0xD8] = 216LL;
    MEMORY[0xD0] = 200LL;
    MEMORY[0xC8] = 200LL;
    MEMORY[0x20] = PsGetCurrentProcess(0LL);
    MEMORY[0x28] = KeGetCurrentThread();
    Object = ObInsertObject(0LL, 0LL, 3u, 0, 0LL, Handle);
    if ( Object >= 0 )
      rimAddToObTrackList(0LL);
  }
  return (unsigned int)Object;
}
