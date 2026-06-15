/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_6721409c6d8d6be39a12e154768b61d2___ @ 0x1800D5758
 * Callers:
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800D7918 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 *     ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x1800F0604 (-PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x1800D5FC0 (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 */

char **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_6721409c6d8d6be39a12e154768b61d2___(
        char **a1,
        char *a2,
        char *a3)
{
  char *v4; // rdi
  char **i; // r14
  char *j; // rsi
  __int64 v7; // rax
  char **result; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  for ( i = a1; v4 != a3; v4 += 8 )
  {
    if ( (unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(a1, v4) )
      break;
  }
  if ( v4 != a3 )
  {
    for ( j = v4 + 8; j != a3; j += 8 )
    {
      if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(a1, j) )
      {
        v7 = 0LL;
        if ( &v9 != j )
        {
          v7 = *(_QWORD *)j;
          *(_QWORD *)j = 0LL;
        }
        a1 = *(char ***)v4;
        *(_QWORD *)v4 = v7;
        if ( a1 )
          (*((void (__fastcall **)(char **))*a1 + 2))(a1);
        v4 += 8;
      }
    }
  }
  result = i;
  *i = v4;
  return result;
}
