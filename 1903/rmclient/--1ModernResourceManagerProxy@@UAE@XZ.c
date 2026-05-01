/*
 * XREFs of ??1ModernResourceManagerProxy@@UAE@XZ @ 0x10012027
 * Callers:
 *     ??_GModernResourceManagerProxy@@UAEPAXI@Z @ 0x10012060 (--_GModernResourceManagerProxy@@UAEPAXI@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall ModernResourceManagerProxy::~ModernResourceManagerProxy(ModernResourceManagerProxy *this)
{
  bool v2; // zf

  v2 = *((_DWORD *)this + 9) == 0;
  *(_DWORD *)this = &ModernResourceManagerProxy::`vftable';
  if ( !v2 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(*((_DWORD *)this + 9));
  if ( *((_DWORD *)this + 10) )
    RtlUnsubscribeWnfNotificationWaitForCompletion(*((_DWORD *)this + 10));
  RpcBindingFree((RPC_BINDING_HANDLE *)this + 2);
}
