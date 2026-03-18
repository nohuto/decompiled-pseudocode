/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_11c73b79c6cf466e07ba164f9ce0ac9e___ @ 0x1C00A0100
 * Callers:
 *     ?DispBrokerAsyncRotationLockToggleKey@@YAJXZ @ 0x1C00A03E0 (-DispBrokerAsyncRotationLockToggleKey@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ??$InitMessage@U?$AlpcDatagram@$04@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU?$AlpcDatagram@$04@1@@Z @ 0x1C00A0250 (--$InitMessage@U-$AlpcDatagram@$04@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU-$AlpcData.c)
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C00A0378 (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 *     ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00A0778 (-ReferencePort@DispBrokerClient@DispBroker@@QEAA-AVDispBrokerClientReference@2@XZ.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_11c73b79c6cf466e07ba164f9ce0ac9e___(
        __int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v5; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v6[56]; // [rsp+48h] [rbp-50h] BYREF

  v1 = -1073741823;
  DispBroker::DispBrokerClient::ReferencePort(a1, &v5);
  v3 = v5;
  if ( v5 )
  {
    DispBroker::DispBrokerClient::InitMessage<DispBroker::AlpcDatagram<5>>(v2, v6);
    v1 = ZwAlpcSendWaitReceivePort(*(_QWORD *)(v3 + 8), 0LL, v6, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  DispBroker::DispBrokerClientReference::Assign((DispBroker::DispBrokerClientReference *)&v5, 0LL);
  return v1;
}
