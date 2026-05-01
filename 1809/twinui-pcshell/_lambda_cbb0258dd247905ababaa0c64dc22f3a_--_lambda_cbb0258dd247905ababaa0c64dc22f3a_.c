/*
 * XREFs of _lambda_cbb0258dd247905ababaa0c64dc22f3a_::_lambda_cbb0258dd247905ababaa0c64dc22f3a_ @ 0x1801D39D0
 * Callers:
 *     ?RegisterForTabTransferEvents@TabViewManager@@AEAAJXZ @ 0x1801E3A38 (-RegisterForTabTransferEvents@TabViewManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall lambda_cbb0258dd247905ababaa0c64dc22f3a_::_lambda_cbb0258dd247905ababaa0c64dc22f3a_(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6)
{
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  *a1 = a2;
  v7 = a1 + 1;
  *v7 = 0LL;
  if ( v7 != a3 )
  {
    *v7 = *a3;
    *a3 = 0LL;
  }
  v8 = *a4;
  a1[2] = *a4;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = *a5;
  a1[3] = *a5;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = *a6;
  a1[4] = *a6;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  return a1;
}
