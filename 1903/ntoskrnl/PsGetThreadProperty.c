/*
 * XREFs of PsGetThreadProperty @ 0x1400BC150
 * Callers:
 *     <none>
 * Callees:
 *     PsGetJobProperty @ 0x1400B8FE0 (PsGetJobProperty.c)
 *     PspGetProperty @ 0x1400BD130 (PspGetProperty.c)
 *     PspValidateThread @ 0x1400BEF00 (PspValidateThread.c)
 */

PVOID __stdcall PsGetThreadProperty(PETHREAD Thread, ULONG_PTR Key, ULONG Flags)
{
  char v3; // di
  __int64 v6; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  void *v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v3 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 || (int)PspValidateThread() < 0 )
    return 0LL;
  if ( (int)PspGetProperty(v6 + 1936, Key, &v9) < 0 && (v3 & 1) == 0 )
  {
    Blink = Thread[1].WaitBlock[3].WaitListEntry.Blink;
    if ( Blink == (struct _LIST_ENTRY *)-3LL )
      Blink = (struct _LIST_ENTRY *)Thread->Process[1].Affinity.Bitmap[16];
    if ( Blink )
      return (PVOID)PsGetJobProperty((__int64)Blink, Key);
  }
  return v9;
}
