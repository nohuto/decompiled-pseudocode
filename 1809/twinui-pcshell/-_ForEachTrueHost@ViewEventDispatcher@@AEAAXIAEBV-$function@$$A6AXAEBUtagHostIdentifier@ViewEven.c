/*
 * XREFs of ?_ForEachTrueHost@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z@std@@@Z @ 0x18021EC1C
 * Callers:
 *     ?GetTopLevelHost@ViewEventDispatcher@@UEAAJIPEAUClientIdentifier@Popups@Shell@Internal@Windows@@@Z @ 0x1802152F0 (-GetTopLevelHost@ViewEventDispatcher@@UEAAJIPEAUClientIdentifier@Popups@Shell@Internal@Windows@@.c)
 *     ?_ChangePopupUIShowingCount@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4PopupCountOperation@@_K@Z @ 0x18021DADC (-_ChangePopupUIShowingCount@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4PopupCountOper.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetHostIdentifierForComponent@ViewEventDispatcher@@UEAAJIPEAW4CRSComponentRelationshipFlags@ViewEventHandlers@OneCore@Internal@Windows@@PEAUtagHostIdentifier@3456@@Z @ 0x180214B30 (-GetHostIdentifierForComponent@ViewEventDispatcher@@UEAAJIPEAW4CRSComponentRelationshipFlags@Vie.c)
 */

__int64 __fastcall ViewEventDispatcher::_ForEachTrueHost(__int64 a1, __int64 a2, __int64 a3)
{
  ViewEventDispatcher *v4; // rdi
  __int64 result; // rax
  __int64 v6; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v9; // [rsp+2Ch] [rbp-1Ch]

  v4 = (ViewEventDispatcher *)(a1 + 200);
  do
  {
    result = ViewEventDispatcher::GetHostIdentifierForComponent(
               v4,
               a2,
               (enum Windows::Internal::OneCore::ViewEventHandlers::CRSComponentRelationshipFlags *)v7,
               (struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *)&v8);
    if ( (int)result < 0 || (v7[0] & 1) == 0 )
      break;
    v6 = *(_QWORD *)(a3 + 56);
    if ( !v6 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x18021ECA4LL);
    }
    result = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 16LL))(v6, &v8);
    if ( v8 )
      break;
    a2 = v9;
  }
  while ( v9 );
  return result;
}
