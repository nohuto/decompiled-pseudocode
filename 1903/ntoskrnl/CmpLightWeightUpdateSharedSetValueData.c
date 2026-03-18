/*
 * XREFs of CmpLightWeightUpdateSharedSetValueData @ 0x1406E2894
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406E23D8 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14083DCC8 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     CmListGetNextElement @ 0x140633584 (CmListGetNextElement.c)
 */

char *__fastcall CmpLightWeightUpdateSharedSetValueData(__int64 a1, __int64 a2)
{
  _QWORD **v2; // r10
  char *result; // rax
  _DWORD *v4; // r9
  _QWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = (_QWORD **)(a2 + 208);
  while ( 1 )
  {
    result = CmListGetNextElement(v2, &v5, 32);
    if ( !result )
      break;
    if ( (unsigned int)(*((_DWORD *)result + 17) - 4) <= 2 )
    {
      *((_QWORD *)result + 13) = v4;
      ++*v4;
    }
  }
  return result;
}
