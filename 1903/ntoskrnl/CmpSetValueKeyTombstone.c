/*
 * XREFs of CmpSetValueKeyTombstone @ 0x14082AD8C
 * Callers:
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1405D4FF0 (HvpMarkCellDirty.c)
 *     CmpFreeValue @ 0x14062ED1C (CmpFreeValue.c)
 *     CmpAddValueToListEx @ 0x14062EEC0 (CmpAddValueToListEx.c)
 *     CmpAddValueKeyTombstone @ 0x14082A490 (CmpAddValueKeyTombstone.c)
 */

__int64 __fastcall CmpSetValueKeyTombstone(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int *v5; // rbx
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // edi

  v5 = (unsigned int *)(a2 + 36);
  if ( !*(_DWORD *)(a2 + 36) || HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(a2 + 40), 0) )
  {
    v10 = CmpAddValueKeyTombstone(BugCheckParameter2, a3);
    v11 = v10;
    if ( v10 == -1 )
    {
      return (unsigned int)-1073741670;
    }
    else
    {
      v9 = CmpAddValueToListEx(BugCheckParameter2, v10, a4, a5, v5, 1);
      if ( v9 >= 0 )
      {
        v11 = -1;
        v9 = 0;
      }
      if ( v11 != -1 )
        CmpFreeValue(BugCheckParameter2, v11);
    }
  }
  else
  {
    return (unsigned int)-1073741443;
  }
  return (unsigned int)v9;
}
