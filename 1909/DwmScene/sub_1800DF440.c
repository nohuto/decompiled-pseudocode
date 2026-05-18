/*
 * XREFs of sub_1800DF440 @ 0x1800DF440
 * Callers:
 *     sub_1800E0B70 @ 0x1800E0B70 (sub_1800E0B70.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

_QWORD *__fastcall sub_1800DF440(__int64 a1)
{
  unsigned int i; // ebx
  _QWORD *result; // rax
  __int64 v4; // rbp
  _QWORD *v5; // rsi

  *(_BYTE *)(a1 + 4620) = 1;
  for ( i = 0; i < 6; ++i )
  {
    result = (_QWORD *)*(unsigned int *)(a1 + 4616);
    if ( _bittest((const int *)&result, i) )
    {
      v4 = 16LL;
      v5 = (_QWORD *)(((unsigned __int64)i << 8) + a1 + 8);
      do
      {
        result = std::shared_ptr<__ExceptionPtr>::operator=(v5, v5 + 384);
        v5 += 2;
        --v4;
      }
      while ( v4 );
    }
  }
  return result;
}
