/*
 * XREFs of CmpSearchForTrans @ 0x1406FBB88
 * Callers:
 *     CmpTransSearchAddTrans @ 0x1406FB968 (CmpTransSearchAddTrans.c)
 * Callees:
 *     CmListGetNextElement @ 0x140695A80 (CmListGetNextElement.c)
 *     CmpTransUowIsEqual @ 0x1407F76F0 (CmpTransUowIsEqual.c)
 */

char *__fastcall CmpSearchForTrans(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD **v3; // rbp
  char *result; // rax
  char *v7; // rdi
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    result = CmListGetNextElement(v3, &v8, 0);
    v7 = result;
    if ( !result )
      break;
    if ( a2 && a2 == *((_QWORD *)result + 7) || a3 && (unsigned __int8)CmpTransUowIsEqual(a3, result + 88) )
      return v7;
  }
  return result;
}
