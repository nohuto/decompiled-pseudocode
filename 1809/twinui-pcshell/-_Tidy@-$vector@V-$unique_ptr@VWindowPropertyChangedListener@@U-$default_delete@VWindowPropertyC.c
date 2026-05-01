/*
 * XREFs of ?_Tidy@?$vector@V?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@V?$allocator@V?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180201408
 * Callers:
 *     ??1?$vector@V?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@V?$allocator@V?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1801FD8D8 (--1-$vector@V-$unique_ptr@VWindowPropertyChangedListener@@U-$default_delete@VWindowPropertyChang.c)
 *     ??1DefaultIconManager@@EEAA@XZ @ 0x1801FD8E4 (--1DefaultIconManager@@EEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800DEBE0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z @ 0x1800E6274 (-Destroy@-$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18017B930 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

void __fastcall std::vector<std::unique_ptr<WindowPropertyChangedListener>>::_Tidy(__int64 a1, void *a2)
{
  _QWORD **v2; // rbx
  _QWORD **v4; // rbp
  _QWORD *v5; // rsi
  struct _TP_WAIT *v6; // rcx
  wil::details *v7; // rcx

  v2 = *(_QWORD ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(_QWORD ***)(a1 + 8);
    if ( v2 != v4 )
    {
      do
      {
        v5 = *v2;
        if ( *v2 )
        {
          v6 = (struct _TP_WAIT *)v5[10];
          if ( v6 )
            wil::details::DestroyThreadPoolWait<0>::Destroy(v6);
          v7 = (wil::details *)v5[9];
          if ( v7 )
            wil::details::CloseHandle(v7, a2);
          std::_Func_class<void,>::_Tidy((__int64)v5, (__int64)a2);
          operator delete(v5, (const struct std::nothrow_t *)0x58);
        }
        ++v2;
      }
      while ( v2 != v4 );
      v2 = *(_QWORD ***)a1;
    }
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
