/*
 * XREFs of ?_Destroy@?$vector@V?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@V?$allocator@V?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@@2@@std@@AEAAXPEAV?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@2@0@Z @ 0x18020117C
 * Callers:
 *     _std::vector_std::unique_ptr_WindowPropertyChangedListener_std::default_delete_WindowPropertyChangedListener____std::allocator_std::unique_ptr_WindowPropertyChangedListener_std::default_delete_WindowPropertyChangedListener_______::_Emplace_reallocate_std::unique_ptr_WindowPropertyChangedListener_std::default_delete_WindowPropertyChangedListener______::_1_::catch$110 @ 0x1801FC211 (_std--vector_std--unique_ptr_WindowPropertyChangedListener_std--default_delete_WindowPropertyCha.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800DEBE0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z @ 0x1800E6274 (-Destroy@-$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18017B930 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

void __fastcall std::vector<std::unique_ptr<WindowPropertyChangedListener>>::_Destroy(
        __int64 a1,
        _QWORD **a2,
        _QWORD **a3)
{
  _QWORD **v4; // rbx
  _QWORD *v5; // rdi
  struct _TP_WAIT *v6; // rcx
  wil::details *v7; // rcx

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      v5 = *v4;
      if ( *v4 )
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
      ++v4;
    }
    while ( v4 != a3 );
  }
}
