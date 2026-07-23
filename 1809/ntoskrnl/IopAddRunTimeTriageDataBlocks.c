/*
 * XREFs of IopAddRunTimeTriageDataBlocks @ 0x1402811AC
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x14027FA84 (IoFillTriageDumpBuffer.c)
 * Callees:
 *     MiIsAddressValid @ 0x140068590 (MiIsAddressValid.c)
 *     IopAddTriageDumpDataBlock @ 0x140191E80 (IopAddTriageDumpDataBlock.c)
 *     IopGetMaxValidMemorySize @ 0x140281828 (IopGetMaxValidMemorySize.c)
 */

__int64 __fastcall IopAddRunTimeTriageDataBlocks(
        unsigned int a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v6; // edi
  unsigned int v11; // esi
  unsigned __int64 v12; // rbx
  int v13; // ebp
  int MaxValidMemorySize; // eax
  unsigned __int16 v15; // cx
  unsigned __int16 *v16; // rbx
  unsigned __int64 v17; // r9
  __int64 result; // rax

  v6 = 0;
  v11 = 0;
  v12 = (*(_QWORD *)(a4 + 248) - 1LL) & 0xFFFFFFFFFFFFF000uLL;
  if ( v12 )
  {
    v13 = 0;
    do
    {
      if ( !MiIsAddressValid(v12) )
        break;
      v11 += v13;
      if ( !v12 )
        break;
      v12 -= 4096LL;
      v13 = 4096;
    }
    while ( v11 < 0x100 );
    v6 = 256;
    if ( v11 < 0x100 )
      v6 = v11;
  }
  MaxValidMemorySize = IopGetMaxValidMemorySize(*(_QWORD *)(a4 + 248), 256LL);
  IopAddTriageDumpDataBlock(a1, a2, a3, *(_QWORD *)(a4 + 248) - v6, MaxValidMemorySize + v6);
  v15 = 144;
  v16 = (unsigned __int16 *)&IopRunTimeContextOffsets;
  do
  {
    v17 = *(_QWORD *)(v15 + a4);
    if ( v17 < a5 || v17 >= a6 )
      IopAddTriageDumpDataBlock(a1, a2, a3, v17 & 0xFFFFFFFFFFFFF000uLL, 0x1000u);
    result = *++v16;
    v15 = result;
  }
  while ( (_WORD)result != 0xFFFF );
  return result;
}
