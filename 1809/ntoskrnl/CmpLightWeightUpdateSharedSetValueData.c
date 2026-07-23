/*
 * XREFs of CmpLightWeightUpdateSharedSetValueData @ 0x140694A38
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406962A4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140805610 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     CmListGetNextElement @ 0x140695A80 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpLightWeightUpdateSharedSetValueData(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 result; // rax
  _DWORD *v4; // r9
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = a2 + 200;
  while ( 1 )
  {
    result = CmListGetNextElement(v2, &v5, 32LL);
    if ( !result )
      break;
    if ( (unsigned int)(*(_DWORD *)(result + 68) - 4) <= 2 )
    {
      *(_QWORD *)(result + 104) = v4;
      ++*v4;
    }
  }
  return result;
}
