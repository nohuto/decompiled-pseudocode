/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_d468e85fa23a2f0e45bbf885a2407a22___ @ 0x1C00E04D4
 * Callers:
 *     ?DispBrokerAsyncRefreshOrientation@@YAJKW4ORIENTATION_PREFERENCE@@@Z @ 0x1C00E0C00 (-DispBrokerAsyncRefreshOrientation@@YAJKW4ORIENTATION_PREFERENCE@@@Z.c)
 * Callees:
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C00951B0 (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??$InitMessage@U?$AlpcDatagram@$05@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU?$AlpcDatagram@$05@1@@Z @ 0x1C00E0640 (--$InitMessage@U-$AlpcDatagram@$05@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU-$AlpcData.c)
 *     ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00E0F64 (-ReferencePort@DispBrokerClient@DispBroker@@QEAA-AVDispBrokerClientReference@2@XZ.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_d468e85fa23a2f0e45bbf885a2407a22___(
        __int64 a1,
        int **a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  int *v6; // rax
  void *v8[2]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v9[64]; // [rsp+50h] [rbp-68h] BYREF
  int v10; // [rsp+90h] [rbp-28h]
  int v11; // [rsp+94h] [rbp-24h]

  v3 = -1073741823;
  DispBroker::DispBrokerClient::ReferencePort(a1, v8);
  v5 = v8[0];
  if ( v8[0] )
  {
    DispBroker::DispBrokerClient::InitMessage<DispBroker::AlpcDatagram<6>>(v4, v9);
    v6 = a2[1];
    v10 = **a2;
    v11 = *v6;
    v3 = ZwAlpcSendWaitReceivePort(v5[1], 0LL, v9, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  DispBroker::DispBrokerClientReference::Assign(v8, 0LL);
  return v3;
}
