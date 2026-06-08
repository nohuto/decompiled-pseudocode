/*
 * XREFs of MWaitIdleCheck @ 0x1C00079F0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C00082E0 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0008574 (WriteGenAddr.c)
 */

__int64 __fastcall MWaitIdleCheck(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int8 GenAddr; // di
  unsigned __int8 v3; // al

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 16) & 2) != 0 )
  {
    GenAddr = ReadGenAddr(&dword_1C001BD94);
    v3 = 0;
    if ( qword_1C001BDA4 )
      v3 = ReadGenAddr(&dword_1C001BDA0);
    if ( ((GenAddr | v3) & 0x10) != 0 )
    {
      WriteGenAddr(&dword_1C001BD94, 16LL);
      if ( qword_1C001BDA4 )
        WriteGenAddr(&dword_1C001BDA0, 16LL);
      return (unsigned int)-1073741823;
    }
  }
  return v1;
}
