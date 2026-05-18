/*
 * XREFs of sub_180097CF0 @ 0x180097CF0
 * Callers:
 *     sub_180097AF4 @ 0x180097AF4 (sub_180097AF4.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall sub_180097CF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi

  if ( a1 != a2 )
  {
    v5 = a1 + 20;
    do
    {
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)a3, (_QWORD *)(v5 - 20));
      *(_BYTE *)(a3 + 16) = *(_BYTE *)(v5 - 4);
      *(_DWORD *)(a3 + 20) = *(_DWORD *)v5;
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a3 + 24), (_QWORD *)(v5 + 4));
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a3 + 40), (_QWORD *)(v5 + 20));
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a3 + 56), (_QWORD *)(v5 + 36));
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a3 + 72), (_QWORD *)(v5 + 52));
      v5 += 88LL;
      a3 += 88LL;
    }
    while ( v5 - 20 != a2 );
  }
  return a3;
}
