/*
 * XREFs of RawInputManagerDeviceObjectCreate @ 0x1C0051DE4
 * Callers:
 *     rimCreateDev @ 0x1C0051C14 (rimCreateDev.c)
 * Callees:
 *     isChildPartition @ 0x1C00323E8 (isChildPartition.c)
 *     rimAddToObTrackList @ 0x1C0054B68 (rimAddToObTrackList.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PHANDLE Handle)
{
  NTSTATUS Object; // ebx
  __int64 v6; // rdx

  LOBYTE(a1) = 1;
  Object = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL);
  if ( Object >= 0 )
  {
    memset(0LL, 0, 0x8F0uLL);
    MEMORY[0] = gSessionId;
    MEMORY[4] = 2;
    MEMORY[0x18] = 16LL;
    MEMORY[0x10] = 16LL;
    MEMORY[0xE8] = 224LL;
    MEMORY[0xE0] = 224LL;
    MEMORY[0xD8] = 208LL;
    MEMORY[0xD0] = 208LL;
    MEMORY[0x20] = PsGetCurrentProcess(0LL, v6);
    MEMORY[0x28] = KeGetCurrentThread();
    MEMORY[0x40] = isChildPartition();
    Object = ObInsertObject(0LL, 0LL, 3u, 0, 0LL, Handle);
    if ( Object >= 0 )
      rimAddToObTrackList(0LL);
  }
  return (unsigned int)Object;
}
