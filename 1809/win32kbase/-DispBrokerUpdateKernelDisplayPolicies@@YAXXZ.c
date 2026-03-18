/*
 * XREFs of ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C0099778
 * Callers:
 *     InitVideo @ 0x1C0098C74 (InitVideo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

void DispBrokerUpdateKernelDisplayPolicies(void)
{
  _DWORD *v0; // rax
  unsigned int v1; // ebx

  v0 = DispBroker::DispBrokerClient::s_pSessionBroker;
  v1 = 0;
  if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
    v0 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
  LOBYTE(v1) = *v0 == 0;
  ((void (__fastcall *)(__int64, _QWORD))qword_1C01CDED0)(1LL, v1);
  ((void (__fastcall *)(__int64, _QWORD))qword_1C01CDED0)(2LL, v1);
  ((void (__fastcall *)(__int64, _QWORD))qword_1C01CDED0)(
    3LL,
    *((unsigned __int8 *)DispBroker::DispBrokerClient::s_pSessionBroker + 8));
}
