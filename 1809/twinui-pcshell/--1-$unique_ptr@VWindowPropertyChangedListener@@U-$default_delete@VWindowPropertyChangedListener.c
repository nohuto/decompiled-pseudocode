/*
 * XREFs of ??1?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@QEAA@XZ @ 0x1801FD868
 * Callers:
 *     _DefaultIconManager::SetupAppSpecifiedIconsForView_::_1_::dtor$1 @ 0x180200479 (_DefaultIconManager--SetupAppSpecifiedIconsForView_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800DEBE0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z @ 0x1800E6274 (-Destroy@-$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18017B930 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

void __fastcall std::unique_ptr<WindowPropertyChangedListener>::~unique_ptr<WindowPropertyChangedListener>(
        _QWORD **a1,
        void *a2)
{
  _QWORD *v2; // rbx
  struct _TP_WAIT *v3; // rcx
  wil::details *v4; // rcx

  v2 = *a1;
  if ( *a1 )
  {
    v3 = (struct _TP_WAIT *)v2[10];
    if ( v3 )
      wil::details::DestroyThreadPoolWait<0>::Destroy(v3);
    v4 = (wil::details *)v2[9];
    if ( v4 )
      wil::details::CloseHandle(v4, a2);
    std::_Func_class<void,>::_Tidy((__int64)v2, (__int64)a2);
    operator delete(v2, (const struct std::nothrow_t *)0x58);
  }
}
