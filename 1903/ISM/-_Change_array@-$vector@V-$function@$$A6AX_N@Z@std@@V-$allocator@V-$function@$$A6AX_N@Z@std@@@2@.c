/*
 * XREFs of ?_Change_array@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@AEAAXQEAV?$function@$$A6AX_N@Z@2@_K1@Z @ 0x18007C71C
 * Callers:
 *     ??$_Emplace_reallocate@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AX_N@Z@1@QEAV21@AEAV21@@Z @ 0x18007BB38 (--$_Emplace_reallocate@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$a.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ @ 0x180028AE4 (-_Tidy@-$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ.c)
 */

void __fastcall std::vector<std::function<void (bool)>>::_Change_array(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rbx
  char *v9; // r14

  v4 = (char *)*a1;
  if ( *a1 )
  {
    v9 = (char *)a1[1];
    if ( v4 != v9 )
    {
      do
      {
        std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Tidy((__int64)v4, a2);
        v4 += 64;
      }
      while ( v4 != v9 );
      v4 = (char *)*a1;
    }
    std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)((a1[2] - (_QWORD)v4) & 0xFFFFFFFFFFFFFFC0uLL));
  }
  *a1 = a2;
  a1[1] = a2 + (a3 << 6);
  a1[2] = a2 + (a4 << 6);
}
