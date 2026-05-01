/*
 * XREFs of wistd::function_long___cdecl(unsigned_long)_::operator___lambda_3803b137a98e853d51e138d29b83a3a8__void_ @ 0x1803CEDAC
 * Callers:
 *     ??$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAVJointResize@@@SmartCookie@@QEAAJPEAUIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAVJointResize@@@Z @ 0x1803CF134 (--$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81.c)
 * Callees:
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 *     ??4?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180107C84 (--4-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 */

__int64 __fastcall wistd::function_long___cdecl_unsigned_long__::operator___lambda_3803b137a98e853d51e138d29b83a3a8__void_(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax

  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *> *)>::operator=(a1);
  v5 = operator new(v4, (void *)(a1 + 8));
  *v5 = &off_180430120;
  v5[1] = 0LL;
  if ( v5 + 1 != a2 )
  {
    v5[1] = *a2;
    *a2 = 0LL;
  }
  v5[2] = a2[1];
  *(_QWORD *)(a1 + 112) = v5;
  return a1;
}
