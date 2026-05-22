/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?BCryptDestroyHash@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800ABD54
 * Callers:
 *     ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x1800A9B8C (-NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long BCryptDestroyHash(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    BCryptDestroyHash(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
