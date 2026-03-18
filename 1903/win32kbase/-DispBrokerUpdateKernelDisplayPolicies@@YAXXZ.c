/*
 * XREFs of ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C0076A08
 * Callers:
 *     InitVideo @ 0x1C00767BC (InitVideo.c)
 *     ?DispBrokerAsyncSessionSwitched@@YAJXZ @ 0x1C0076920 (-DispBrokerAsyncSessionSwitched@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x1C0076D40 (xxxRemoteConnect.c)
 * Callees:
 *     ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1C0076AB0 (-LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

void DispBrokerUpdateKernelDisplayPolicies(void)
{
  unsigned int *v0; // rax
  unsigned int v1; // edi
  unsigned int v2; // ebx

  DispBroker::DispBrokerClient::LoadRegistrySettings((DispBroker::DispBrokerClient *)DispBroker::DispBrokerClient::s_pSessionBroker);
  v0 = (unsigned int *)DispBroker::DispBrokerClient::s_pSessionBroker;
  v1 = 0;
  if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
    v0 = (unsigned int *)((char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4);
  v2 = *v0;
  ((void (__fastcall *)(__int64, bool))qword_1C0215318)(1LL, *v0 != 0);
  ((void (__fastcall *)(__int64, bool))qword_1C0215318)(2LL, v2 == 0);
  LOBYTE(v1) = v2 <= 1;
  ((void (__fastcall *)(__int64, _QWORD))qword_1C0215318)(3LL, v1);
  ((void (__fastcall *)(__int64, _QWORD))qword_1C0215318)(
    4LL,
    *((unsigned __int8 *)DispBroker::DispBrokerClient::s_pSessionBroker + 8));
}
