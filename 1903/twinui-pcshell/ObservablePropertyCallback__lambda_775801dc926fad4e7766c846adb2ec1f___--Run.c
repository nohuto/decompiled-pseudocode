/*
 * XREFs of ObservablePropertyCallback__lambda_775801dc926fad4e7766c846adb2ec1f___::Run @ 0x180362C80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_RenderLabel@CSwitchItemElement@@IEAAXXZ @ 0x18036381C (-_RenderLabel@CSwitchItemElement@@IEAAXXZ.c)
 */

__int64 __fastcall ObservablePropertyCallback__lambda_775801dc926fad4e7766c846adb2ec1f___::Run(__int64 a1)
{
  CSwitchItemElement *v1; // rbx
  __int64 result; // rax

  v1 = *(CSwitchItemElement **)(*(_QWORD *)(a1 + 16) + 16LL);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL));
    CSwitchItemElement::_RenderLabel(v1);
    return (*(__int64 (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
