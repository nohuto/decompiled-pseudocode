/*
 * XREFs of ??1SharedMessagePortRefPtr@@QEAA@XZ @ 0x18039F5F4
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1802C68BB (_KeyboardHosting--TabTipAdapter--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x18039F7F4 (-Release@SharedMessagePortRefPtr@@QEAAXXZ.c)
 */

void __fastcall SharedMessagePortRefPtr::~SharedMessagePortRefPtr(SharedMessagePortRefPtr *this)
{
  SharedMessagePortRefPtr::Release(this);
}
