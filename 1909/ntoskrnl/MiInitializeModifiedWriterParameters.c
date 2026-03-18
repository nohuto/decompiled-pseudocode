/*
 * XREFs of MiInitializeModifiedWriterParameters @ 0x1409F1784
 * Callers:
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 MiInitializeModifiedWriterParameters()
{
  int v0; // eax
  __int64 result; // rax

  v0 = dword_14057119C;
  if ( (unsigned int)dword_14057119C > 0x40 )
  {
    v0 = 64;
  }
  else if ( !dword_14057119C )
  {
    v0 = 1;
  }
  result = (unsigned int)(v0 << 8);
  dword_14057119C = result;
  if ( (dword_140571190 & 0xFFFFFFFE) != 0 )
    dword_140571190 = 0;
  return result;
}
