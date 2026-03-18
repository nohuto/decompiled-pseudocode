/*
 * XREFs of PubSebRegisterRpc @ 0x1800D5AE8
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x18004C730 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ @ 0x1800D88E0 (-EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?Add@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHAEBQEAU_SEB_RPC_PUBLISH_DATA@@AEBQEAX@Z @ 0x1800D5BF8 (-Add@-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_D.c)
 *     ?PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z @ 0x1800D5CB0 (-PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180222118 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall PubSebRegisterRpc(__int64 a1, _QWORD *a2)
{
  int RpcBindingHandle; // ebx
  _QWORD *Heap; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // edi
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v11; // [rsp+38h] [rbp-20h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  void *v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0LL;
  RpcBindingHandle = PubSebiGetRpcBindingHandle(&v13);
  if ( RpcBindingHandle )
  {
LABEL_15:
    if ( RpcBindingHandle <= 0 )
      return (unsigned int)RpcBindingHandle;
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
  if ( !Heap )
  {
    LOWORD(RpcBindingHandle) = 8;
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  }
  *Heap = 0LL;
  Heap[1] = 0LL;
  RtlInitializeSRWLock(Heap);
  RpcBindingHandle = (unsigned int)NdrClientCall3(
                                     (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                     0,
                                     0LL,
                                     v13,
                                     a1,
                                     &v12).Pointer;
  if ( RpcBindingHandle )
    goto LABEL_14;
  v6 = v12;
  if ( !v12 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
    v6 = v12;
  }
  v10 = v6;
  v11 = Heap;
  RtlAcquireSRWLockExclusive(&unk_18030BE18);
  v8 = 0;
  if ( !(unsigned int)ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::Add(
                        v7,
                        &v11,
                        &v10) )
    v8 = 1359;
  RtlReleaseSRWLockExclusive(&unk_18030BE18);
  RpcBindingHandle = v8;
  if ( v8 )
    RpcBindingHandle = (unsigned int)NdrClientCall3(
                                       (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                       2u,
                                       0LL,
                                       v13,
                                       &v12).Pointer;
  else
    *a2 = Heap;
  if ( RpcBindingHandle )
  {
LABEL_14:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    goto LABEL_15;
  }
  return (unsigned int)RpcBindingHandle;
}
