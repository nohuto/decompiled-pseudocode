/*
 * XREFs of IoQueryVhdBootInformation @ 0x14078B970
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 */

__int64 __fastcall IoQueryVhdBootInformation(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  int v6; // edi

  v5 = 0;
  *a4 = 0;
  v6 = dword_14042B370;
  if ( a3 < (unsigned int)dword_14042B370 )
    v5 = -1073741789;
  else
    memmove(a2, off_140427A40, (unsigned int)dword_14042B370);
  *a4 = v6;
  return v5;
}
