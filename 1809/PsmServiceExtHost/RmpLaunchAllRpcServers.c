/*
 * XREFs of RmpLaunchAllRpcServers @ 0x1800413C0
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180041050 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     RmpLaunchRpcServer @ 0x1800414F8 (RmpLaunchRpcServer.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 RmpLaunchAllRpcServers()
{
  unsigned int v0; // edi
  __int64 v1; // rbx
  __int64 v2; // rbp
  unsigned int v3; // esi
  RPC_IF_HANDLE **v4; // rdi
  int v5; // ebx
  void **v6; // rdi
  __int64 v8; // rsi
  RPC_IF_HANDLE *v9; // rdi
  RPC_BINDING_VECTOR *v10; // rdx
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+20h] [rbp-38h] BYREF
  void *v12[4]; // [rsp+28h] [rbp-30h] BYREF

  memset_0(v12, 0, sizeof(v12));
  v0 = 0;
  v1 = 0LL;
  v2 = 4LL;
  do
  {
    if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(RmpRpcSddlStrings[v1], 1u, &SecurityDescriptor, 0LL) )
    {
      v12[v1] = 0LL;
      goto LABEL_19;
    }
    ++v0;
    v12[v1++] = SecurityDescriptor;
  }
  while ( v0 < 4 );
  if ( RpcServerUseProtseqW((RPC_WSTR)L"ncalrpc", 0xAu, v12[0]) )
  {
LABEL_19:
    v5 = -1073741823;
    goto LABEL_8;
  }
  v3 = 0;
  v4 = (RPC_IF_HANDLE **)&RmpRpcBindings;
  while ( 1 )
  {
    v5 = RmpLaunchRpcServer(**v4);
    if ( v5 < 0 )
      break;
    ++v3;
    v4 += 3;
    if ( v3 >= 0xE )
      goto LABEL_8;
  }
  v8 = 0LL;
  v9 = (RPC_IF_HANDLE *)&RmpRpcBindings;
  do
  {
    v10 = (RPC_BINDING_VECTOR *)v9[2];
    if ( v10 )
    {
      RpcEpUnregister(*v9, v10, 0LL);
      RpcBindingVectorFree((RPC_BINDING_VECTOR **)&(&(&RmpRpcBindings)[2 * v8 + 2])[v8]);
      RpcServerUnregisterIf(*v9, 0LL, 0);
    }
    v8 = (unsigned int)(v8 + 1);
    v9 += 3;
  }
  while ( (unsigned int)v8 < 0xE );
LABEL_8:
  v6 = v12;
  do
  {
    if ( *v6 )
      LocalFree(*v6);
    ++v6;
    --v2;
  }
  while ( v2 );
  return (unsigned int)v5;
}
