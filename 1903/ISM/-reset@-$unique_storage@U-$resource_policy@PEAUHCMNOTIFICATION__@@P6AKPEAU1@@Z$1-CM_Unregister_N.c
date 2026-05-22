/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1?CM_Unregister_Notification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHCMNOTIFICATION__@@@Z @ 0x180161A18
 * Callers:
 *     ??_GCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAPEAXI@Z @ 0x180152B68 (--_GCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAPEAXI@Z.c)
 *     ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJXZ @ 0x18015AE58 (-OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    CM_Unregister_Notification(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
