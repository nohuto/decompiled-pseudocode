/*
 * XREFs of LdrUnlockLoaderLock @ 0x18007CC60
 * Callers:
 *     sub_180032F0C @ 0x180032F0C (sub_180032F0C.c)
 *     sub_180033520 @ 0x180033520 (sub_180033520.c)
 * Callees:
 *     sub_18002D75C @ 0x18002D75C (sub_18002D75C.c)
 *     sub_18007E384 @ 0x18007E384 (sub_18007E384.c)
 *     sub_1800D5848 @ 0x1800D5848 (sub_1800D5848.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl LdrUnlockLoaderLock(ULONG Flags, PVOID Cookie)
{
  NTSTATUS v2; // ebx

  if ( (Flags & 0xFFFFFFFE) == 0 )
  {
    v2 = 0;
    if ( !Cookie )
      return v2;
    if ( (unsigned __int64)Cookie >= 0x1000000000000000LL )
    {
      if ( (Flags & 1) != 0 )
        RtlRaiseStatus(-1073741584);
    }
    else
    {
      if ( ((LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ ((unsigned __int64)Cookie >> 48)) & 0xFFF) == 0 )
      {
        if ( (Flags & 1) != 0 )
          sub_18002D75C(*(__int64 *)&Flags, 13, 0);
        else
          sub_18002D75C(*(__int64 *)&Flags, 14, 0);
        return v2;
      }
      if ( (Flags & 1) != 0 )
        RtlRaiseStatus(-1073741584);
    }
    return -1073741584;
  }
  if ( (Flags & 1) != 0 )
    RtlRaiseStatus(-1073741585);
  return -1073741585;
}
