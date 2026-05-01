/*
 * XREFs of ?GetMessageProxy@MessageProxyReconnectAdapter@@UEAAJPEAPEAUIMessageProxy@@@Z @ 0x180404530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0sqq @ 0x180404B4C (McTemplateU0sqq.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::GetMessageProxy(
        MessageProxyReconnectAdapter *this,
        struct IMessageProxy **a2)
{
  unsigned int v2; // ebx
  struct IMessageProxy *v5; // rax

  v2 = 0;
  if ( a2 )
  {
    v5 = (struct IMessageProxy *)*((_QWORD *)this + 8);
    if ( v5 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*((_QWORD *)this + 8));
      v5 = (struct IMessageProxy *)*((_QWORD *)this + 8);
    }
    *a2 = v5;
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq((_DWORD)this, 0, (unsigned int)"MessageProxyReconnectAdapter::GetMessageProxy", 103, 87);
  }
  return v2;
}
