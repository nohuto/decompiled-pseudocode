/*
 * XREFs of sub_1800DADBC @ 0x1800DADBC
 * Callers:
 *     sub_1800DA990 @ 0x1800DA990 (sub_1800DA990.c)
 *     sub_1800DAEA4 @ 0x1800DAEA4 (sub_1800DAEA4.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DADBC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 (__fastcall *a5)(__int64, __int64))
{
  int v5; // r15d
  __int64 v6; // r14
  __int64 v9; // rbx
  __int64 i; // rdi
  int v13; // [rsp+68h] [rbp+10h]

  v5 = a3 - 1;
  v13 = a2;
  v6 = (a3 - 1) >> 1;
  v9 = a2;
  for ( i = a2; i < v6; v9 = i )
  {
    i = 2 * i + 2;
    if ( a5(a1 + 16 * i, a1 + 16 * i - 16) )
      --i;
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16 * v9), (__int64 *)(a1 + 16 * i));
  }
  if ( i == v6 && (a3 & 1) == 0 )
  {
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16 * v9), (__int64 *)(16 * a3 + a1 - 16));
    LODWORD(v9) = v5;
  }
  return sub_1800DAF90(a1, v9, v13, a4, (__int64)a5);
}
