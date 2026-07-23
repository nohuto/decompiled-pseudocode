/*
 * XREFs of IopAddTriageDumpDataBlock @ 0x140191E80
 * Callers:
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1402811AC (IopAddRunTimeTriageDataBlocks.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x140191F34 (KiIsAddressRangeValid.c)
 */

char __fastcall IopAddTriageDumpDataBlock(
        unsigned int a1,
        __int64 a2,
        unsigned int *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v6; // rdi
  unsigned int v9; // r8d
  unsigned __int64 i; // rdx
  unsigned int v11; // r10d
  unsigned __int64 *j; // rax
  unsigned int v13; // eax
  unsigned __int64 *v14; // rcx
  unsigned __int64 v16; // rcx

  v6 = a4;
  if ( a5 - 1 > 0x3FFFE || !(unsigned __int8)KiIsAddressRangeValid(a4) )
    return 0;
  v9 = 0;
  for ( i = a5 + v6; v9 < a1; a2 += 16LL )
  {
    v11 = 0;
    for ( j = *(unsigned __int64 **)(a2 + 8); v11 < *(_DWORD *)a2; j += 2 )
    {
      v16 = j[1];
      if ( v6 < v16 && i > *j )
      {
        if ( v6 < *j )
        {
          if ( i <= v16 )
            i = *j;
        }
        else
        {
          if ( i <= v16 )
            return 1;
          v6 = j[1];
        }
      }
      ++v11;
    }
    ++v9;
  }
  if ( !a3 )
    return 0;
  v13 = *a3;
  if ( *a3 >= a3[1] )
    return 0;
  v14 = (unsigned __int64 *)(*((_QWORD *)a3 + 1) + 16LL * v13);
  *a3 = v13 + 1;
  *v14 = v6;
  v14[1] = i;
  return 1;
}
