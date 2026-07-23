/*
 * XREFs of CmGetKeyLastWriteTime @ 0x1406BAA24
 * Callers:
 *     CmpQueryKeyDataFromNode @ 0x1405D4570 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     CmEqualTrans @ 0x1405AA4E8 (CmEqualTrans.c)
 *     CmListGetPrevElement @ 0x1406C188C (CmListGetPrevElement.c)
 */

__int64 __fastcall CmGetKeyLastWriteTime(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v7; // rbp
  __int64 PrevElement; // rax
  __int64 v9; // rdi
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  if ( a2 )
  {
    v5 = *(_QWORD *)(a2 + 4);
    if ( !a1 )
      return v5;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 160);
  }
  if ( a3 )
  {
    v7 = a1 + 200;
    while ( 1 )
    {
      PrevElement = CmListGetPrevElement(v7, &v10, a3, a4);
      v9 = PrevElement;
      if ( !PrevElement )
        break;
      if ( CmEqualTrans(*(_QWORD *)(PrevElement + 56), a3) && *(_DWORD *)(v9 + 68) == 8 )
        return *(_QWORD *)(v9 + 88);
    }
  }
  return v5;
}
