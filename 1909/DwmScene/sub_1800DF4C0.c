/*
 * XREFs of sub_1800DF4C0 @ 0x1800DF4C0
 * Callers:
 *     sub_1800E0CA0 @ 0x1800E0CA0 (sub_1800E0CA0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DF4C0(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v4; // r14
  __int64 result; // rax
  unsigned int v7; // ebp
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rbx

  v2 = 0;
  v4 = 0LL;
  do
  {
    result = *(unsigned int *)(a1 + 4616);
    if ( _bittest((const int *)&result, v2) )
    {
      v7 = 0;
      v8 = 0LL;
      do
      {
        if ( *(_BYTE *)(a1 + 4620)
          || (result = *(_QWORD *)(a1 + 16 * (v4 + v8) + 8), *(_QWORD *)(a1 + 16 * (v4 + v8) + 1544) != result) )
        {
          v9 = 16 * (v7 + 16LL * v2);
          v10 = v9 + a1;
          std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v9 + a1 + 1544), (_QWORD *)(v9 + a1 + 8));
          result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a2 + 128LL))(
                     a2,
                     v2,
                     v10 + 1544,
                     v7);
        }
        ++v7;
        ++v8;
      }
      while ( v7 < 0x10 );
    }
    ++v2;
    v4 += 16LL;
  }
  while ( v2 < 6 );
  *(_BYTE *)(a1 + 4620) = 0;
  return result;
}
