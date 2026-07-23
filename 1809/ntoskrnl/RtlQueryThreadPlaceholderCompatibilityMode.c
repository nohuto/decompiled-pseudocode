/*
 * XREFs of RtlQueryThreadPlaceholderCompatibilityMode @ 0x140898EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR RtlQueryThreadPlaceholderCompatibilityMode(void)
{
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE *Teb; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = CurrentThread->Teb;
  if ( Teb )
    return Teb[640];
  else
    return -2;
}
