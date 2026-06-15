/*
 * XREFs of ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x1800C96E8
 * Callers:
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800C8E58 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 *     ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x1800E511C (-PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

char **__fastcall std::vector<Microsoft::WRL::WeakRef>::erase(__int64 a1, char **a2, char *a3, char *a4)
{
  char *v4; // rdi
  char *v8; // rbp
  __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *i; // rdi
  __int64 v13; // rcx
  char **result; // rax
  char v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = a4;
  if ( a3 != a4 )
  {
    v8 = *(char **)(a1 + 8);
    v9 = (__int64 *)a3;
    if ( a4 != v8 )
    {
      do
      {
        v10 = 0LL;
        if ( &v15 != v4 )
        {
          v10 = *(_QWORD *)v4;
          *(_QWORD *)v4 = 0LL;
        }
        v11 = *v9;
        *v9 = v10;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        ++v9;
        v4 += 8;
      }
      while ( v4 != v8 );
      v8 = *(char **)(a1 + 8);
    }
    for ( i = v9; i != (__int64 *)v8; ++i )
    {
      v13 = *i;
      if ( *i )
      {
        *i = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}
