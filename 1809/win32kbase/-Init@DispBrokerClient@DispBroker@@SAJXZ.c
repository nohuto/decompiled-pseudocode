/*
 * XREFs of ?Init@DispBrokerClient@DispBroker@@SAJXZ @ 0x1C0094060
 * Callers:
 *     Win32UserInitialize @ 0x1C021B110 (Win32UserInitialize.c)
 * Callees:
 *     ??0DispBrokerClient@DispBroker@@QEAA@XZ @ 0x1C00940F8 (--0DispBrokerClient@DispBroker@@QEAA@XZ.c)
 */

__int64 DispBroker::DispBrokerClient::Init(void)
{
  DispBroker::DispBrokerClient *PoolWithTag; // rax
  unsigned int v1; // ebx
  void *v2; // rax
  struct _ERESOURCE *v3; // rax
  NTSTATUS v4; // eax

  PoolWithTag = (DispBroker::DispBrokerClient *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x44535042u);
  v1 = 0;
  if ( PoolWithTag )
    v2 = (void *)DispBroker::DispBrokerClient::DispBrokerClient(PoolWithTag);
  else
    v2 = 0LL;
  DispBroker::DispBrokerClient::s_pSessionBroker = v2;
  v3 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  DispBroker::DispBrokerClient::s_pSessionLock = v3;
  if ( !v3 || !DispBroker::DispBrokerClient::s_pSessionBroker )
    return 3221225495LL;
  v4 = ExInitializeResourceLite(v3);
  if ( v4 < 0 )
    return (unsigned int)v4;
  return v1;
}
