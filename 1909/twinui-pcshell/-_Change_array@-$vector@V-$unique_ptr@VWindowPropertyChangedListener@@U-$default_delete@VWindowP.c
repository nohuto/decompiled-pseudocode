/*
 * XREFs of ?_Change_array@?$vector@V?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@V?$allocator@V?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@2@_K1@Z @ 0x1802736F0
 * Callers:
 *     ??$_Emplace_reallocate@V?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@@?$vector@V?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@V?$allocator@V?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18026E20C (--$_Emplace_reallocate@V-$unique_ptr@VWindowPropertyChangedListener@@U-$default_delete@VWindowPr.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18011FB88 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z @ 0x1801275C4 (-Destroy@-$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1801C9F14 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

char *__fastcall std::vector<std::unique_ptr<WindowPropertyChangedListener>>::_Change_array(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD **v4; // rbx
  _QWORD **v9; // rbp
  _QWORD *v10; // rsi
  struct _TP_WAIT *v11; // rcx
  wil::details *v12; // rcx
  char *result; // rax

  v4 = *(_QWORD ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(_QWORD ***)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        v10 = *v4;
        if ( *v4 )
        {
          v11 = (struct _TP_WAIT *)v10[10];
          if ( v11 )
            wil::details::DestroyThreadPoolWait<0>::Destroy(v11);
          v12 = (wil::details *)v10[9];
          if ( v12 )
            wil::details::CloseHandle(v12, a2);
          std::_Func_class<void,>::_Tidy((__int64)v10, (__int64)a2);
          operator delete(v10, (const struct std::nothrow_t *)0x58);
        }
        ++v4;
      }
      while ( v4 != v9 );
      v4 = *(_QWORD ***)a1;
    }
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = &a2[8 * a3];
  result = &a2[8 * a4];
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
