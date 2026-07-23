/*
 * XREFs of CmpGetEffectiveCellType @ 0x1405822FC
 * Callers:
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 * Callees:
 *     CmListGetPrevElement @ 0x1406C188C (CmListGetPrevElement.c)
 */

__int64 __fastcall CmpGetEffectiveCellType(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 PrevElement; // rax
  int v6; // r10d
  unsigned int v7; // eax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = a1;
  if ( a2 && *(_QWORD *)(a1 + 232) )
  {
    v9 = 0LL;
    v4 = a1 + 200;
    do
    {
      PrevElement = CmListGetPrevElement(v4, &v9, a3, v3);
      if ( !PrevElement )
      {
        v7 = *(_DWORD *)(v3 + 32);
        return v7 >> 31;
      }
    }
    while ( *(_DWORD *)(PrevElement + 68) != v6 );
    return *(unsigned int *)(PrevElement + 72);
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 32);
    return v7 >> 31;
  }
}
