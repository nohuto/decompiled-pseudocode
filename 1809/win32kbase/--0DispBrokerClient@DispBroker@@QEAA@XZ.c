/*
 * XREFs of ??0DispBrokerClient@DispBroker@@QEAA@XZ @ 0x1C00940F8
 * Callers:
 *     ?Init@DispBrokerClient@DispBroker@@SAJXZ @ 0x1C0094060 (-Init@DispBrokerClient@DispBroker@@SAJXZ.c)
 * Callees:
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C00951B0 (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 */

DispBroker::DispBrokerClient *__fastcall DispBroker::DispBrokerClient::DispBrokerClient(
        DispBroker::DispBrokerClient *this)
{
  int CurrentModeImpl; // edi
  DispBroker::DispBrokerClientReference *v3; // rcx

  CurrentModeImpl = 0;
  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 8) = 0;
  v3 = (DispBroker::DispBrokerClient *)((char *)this + 16);
  *(_QWORD *)v3 = 0LL;
  DispBroker::DispBrokerClientReference::Assign(v3, 0LL);
  *((_QWORD *)this + 3) = -50000000LL;
  if ( (int)IsDispBrokerGetCurrentModeImplSupported() >= 0 )
    CurrentModeImpl = DispBrokerGetCurrentModeImpl();
  *(_DWORD *)this = CurrentModeImpl;
  return this;
}
