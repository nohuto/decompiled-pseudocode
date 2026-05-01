/*
 * XREFs of ??1SharedMessagePortRefPtr@@QEAA@XZ @ 0x180404BF4
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180324DBA (_KeyboardHosting--TabTipAdapter--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x180404DF0 (-Release@SharedMessagePortRefPtr@@QEAAXXZ.c)
 */

void __fastcall SharedMessagePortRefPtr::~SharedMessagePortRefPtr(SharedMessagePortRefPtr *this)
{
  SharedMessagePortRefPtr::Release(this);
}
