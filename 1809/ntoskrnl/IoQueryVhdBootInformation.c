/*
 * XREFs of IoQueryVhdBootInformation @ 0x1407629C4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x1401D1440 (memmove.c)
 */

__int64 __fastcall IoQueryVhdBootInformation(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  int v6; // edi

  v5 = 0;
  *a4 = 0;
  v6 = dword_140404E90;
  if ( a3 < (unsigned int)dword_140404E90 )
    v5 = -1073741789;
  else
    memmove(a2, off_140401640, (unsigned int)dword_140404E90);
  *a4 = v6;
  return v5;
}
