/*
 * XREFs of ?GetMessageProxy@MessageProxyReconnectAdapter@@UEAAJPEAPEAUIMessageProxy@@@Z @ 0x18005A0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     McTemplateU0sqq @ 0x18005A424 (McTemplateU0sqq.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::GetMessageProxy(
        MessageProxyReconnectAdapter *this,
        struct IMessageProxy **a2)
{
  unsigned int v2; // edi
  struct IMessageProxy **v4; // rbx

  v2 = 0;
  if ( a2 )
  {
    v4 = (struct IMessageProxy **)((char *)this + 64);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 8);
    *a2 = *v4;
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq((_DWORD)this, 0, (unsigned int)"MessageProxyReconnectAdapter::GetMessageProxy", 103, 87);
  }
  return v2;
}
