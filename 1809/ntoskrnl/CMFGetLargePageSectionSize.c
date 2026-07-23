/*
 * XREFs of CMFGetLargePageSectionSize @ 0x1408DA1FC
 * Callers:
 *     CMFSystemThreadRoutine @ 0x1408DA760 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMFGetLargePageSectionSize(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r10

  v2 = 0;
  v5 = (unsigned __int64)MEMORY[0xFFFFF78000000244] >> 12;
  if ( v5 )
  {
    v6 = *a1;
    v7 = (*a1 >> 12) + ((*a1 & 0xFFF) != 0);
    v8 = (unsigned int)v7 % v5;
    if ( v8 )
    {
      v9 = (v7 << 12) - (v8 << 12) + (v5 << 12) - 4095;
      *a2 = v9;
      if ( (((v9 & 0xFFF) != 0) + (v9 >> 12)) % v5 || HIDWORD(v9) || (unsigned int)v9 < *(_DWORD *)a1 )
        return (unsigned int)-1073741823;
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
