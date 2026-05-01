/*
 * XREFs of ??1ViewChangeListener@PeoplePaneViewManager@@QEAA@XZ @ 0x1801C7AD0
 * Callers:
 *     __lambda_4f9db91f7b3ef4e45d712402b4d08f96_::operator()_::_1_::dtor$0 @ 0x1801C7D8D (__lambda_4f9db91f7b3ef4e45d712402b4d08f96_--operator()_--_1_--dtor$0.c)
 *     _PeoplePaneViewManager::SubscribeToViewChangeNotifications_::_1_::dtor$0 @ 0x1801CC11C (_PeoplePaneViewManager--SubscribeToViewChangeNotifications_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PeoplePaneViewManager::ViewChangeListener::~ViewChangeListener(
        PeoplePaneViewManager::ViewChangeListener *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
