/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_11c73b79c6cf466e07ba164f9ce0ac9e___ @ 0x1C00E0428
 * Callers:
 *     ?DispBrokerAsyncRotationLockToggleKey@@YAJXZ @ 0x1C00E0C40 (-DispBrokerAsyncRotationLockToggleKey@@YAJXZ.c)
 * Callees:
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C00951B0 (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??$InitMessage@U?$AlpcDatagram@$04@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU?$AlpcDatagram@$04@1@@Z @ 0x1C00E05A4 (--$InitMessage@U-$AlpcDatagram@$04@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU-$AlpcData.c)
 *     ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00E0F64 (-ReferencePort@DispBrokerClient@DispBroker@@QEAA-AVDispBrokerClientReference@2@XZ.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_11c73b79c6cf466e07ba164f9ce0ac9e___(
        __int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  void *v5[2]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v6[64]; // [rsp+50h] [rbp-58h] BYREF

  v1 = -1073741823;
  DispBroker::DispBrokerClient::ReferencePort(a1, v5);
  v3 = v5[0];
  if ( v5[0] )
  {
    DispBroker::DispBrokerClient::InitMessage<DispBroker::AlpcDatagram<5>>(v2, v6);
    v1 = ZwAlpcSendWaitReceivePort(v3[1], 0LL, v6, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  DispBroker::DispBrokerClientReference::Assign(v5, 0LL);
  return v1;
}
