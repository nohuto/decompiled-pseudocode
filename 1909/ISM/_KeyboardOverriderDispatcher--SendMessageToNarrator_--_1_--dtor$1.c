/*
 * XREFs of _KeyboardOverriderDispatcher::SendMessageToNarrator_::_1_::dtor$1 @ 0x1800C11AE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardOverriderDispatcher::SendMessageToNarrator_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<MsgBlob *,void (*)(MsgBuffer *),&void MsgRelease(MsgBuffer *),wistd::integral_constant<unsigned __int64,0>,MsgBlob *,MsgBlob *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<MsgBlob *,void (*)(MsgBuffer *),&void MsgRelease(MsgBuffer *),wistd::integral_constant<unsigned __int64,0>,MsgBlob *,MsgBlob *,0,std::nullptr_t>>>((_QWORD *)(a2 + 720));
}
