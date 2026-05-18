/*
 * XREFs of sub_1800DF0F0 @ 0x1800DF0F0
 * Callers:
 *     sub_1800E0B70 @ 0x1800E0B70 (sub_1800E0B70.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

_QWORD *__fastcall sub_1800DF0F0(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *result; // rax
  __int64 v4; // rbp
  _QWORD *v5; // rsi

  *(_BYTE *)(a1 + 3468) = 1;
  v2 = 0LL;
  do
  {
    result = (_QWORD *)*(unsigned int *)(a1 + 3464);
    if ( _bittest((const int *)&result, v2) )
    {
      v4 = 12LL;
      v5 = (_QWORD *)(192 * v2 + a1 + 8);
      do
      {
        result = std::shared_ptr<__ExceptionPtr>::operator=(v5, v5 + 288);
        v5 += 2;
        --v4;
      }
      while ( v4 );
    }
    v2 = (unsigned int)(v2 + 1);
  }
  while ( (unsigned int)v2 < 6 );
  return result;
}
