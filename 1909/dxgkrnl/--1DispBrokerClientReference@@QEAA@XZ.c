/*
 * XREFs of ??1DispBrokerClientReference@@QEAA@XZ @ 0x1C003FA74
 * Callers:
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C0150154 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 * Callees:
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001B560 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 */

void __fastcall DispBrokerClientReference::~DispBrokerClientReference(HANDLE **this)
{
  DispBrokerClientReference::Assign(this, 0LL);
}
