/*
 * XREFs of ?OnShellHookMessage@Win32BackedViewHostItem@@UEAAJ_K_J@Z @ 0x1801BF240
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckWindowTextChanged@Win32BackedViewHostItem@@AEAA_NXZ @ 0x1801BD500 (-CheckWindowTextChanged@Win32BackedViewHostItem@@AEAA_NXZ.c)
 *     ?_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@@AEAAJXZ @ 0x1801C0908 (-_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@@AEAAJXZ.c)
 */

__int64 __fastcall Win32BackedViewHostItem::OnShellHookMessage(Win32BackedViewHostItem *this, __int64 a2, __int64 a3)
{
  Win32BackedViewHostItem *v3; // rbx

  if ( a3 == *((_QWORD *)this + 8) && a2 == 6 )
  {
    v3 = (Win32BackedViewHostItem *)((char *)this - 48);
    if ( Win32BackedViewHostItem::CheckWindowTextChanged((Win32BackedViewHostItem *)((char *)this - 48)) )
      Win32BackedViewHostItem::_RaiseTitleBarChangedEvent(v3);
  }
  return 0LL;
}
