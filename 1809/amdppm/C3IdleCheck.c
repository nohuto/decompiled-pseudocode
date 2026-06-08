/*
 * XREFs of C3IdleCheck @ 0x1C0004FE0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0003898 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00038E8 (WriteGenAddr.c)
 */

__int64 C3IdleCheck()
{
  unsigned int v0; // ebx
  unsigned __int8 GenAddr; // di
  unsigned __int8 v2; // al

  v0 = 0;
  GenAddr = ReadGenAddr((__int64)&dword_1C0011BA4);
  v2 = 0;
  if ( qword_1C0011BB4 )
    v2 = ReadGenAddr((__int64)&dword_1C0011BB0);
  if ( ((GenAddr | v2) & 0x10) != 0 )
  {
    WriteGenAddr(&dword_1C0011BA4, 0x10uLL);
    if ( qword_1C0011BB4 )
      WriteGenAddr(&dword_1C0011BB0, 0x10uLL);
    return (unsigned int)-1073741823;
  }
  return v0;
}
