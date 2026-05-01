/*
 * XREFs of HampConnectionAllocateState @ 0x1800074E0
 * Callers:
 *     HampConnectionCreate @ 0x180007080 (HampConnectionCreate.c)
 *     HamConnectForExtendedExecution @ 0x1800073B0 (HamConnectForExtendedExecution.c)
 * Callees:
 *     __security_check_cookie @ 0x1800092F0 (__security_check_cookie.c)
 */

__int64 __fastcall HampConnectionAllocateState(__int64 a1, void *a2)
{
  char v4; // r15
  RPC_STATUS v5; // eax
  signed int Pointer; // ebx
  bool v7; // cc
  int v8; // eax
  CLIENT_CALL_RETURN v9; // rax
  CLIENT_CALL_RETURN v10; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // r12
  _QWORD *Heap; // rbx
  int v14; // esi
  int v16; // [rsp+40h] [rbp-128h]
  RPC_BINDING_HANDLE Binding; // [rsp+48h] [rbp-120h] BYREF
  RPC_BINDING_HANDLE v18; // [rsp+50h] [rbp-118h] BYREF
  __int64 v19; // [rsp+58h] [rbp-110h] BYREF
  CLIENT_CALL_RETURN v20; // [rsp+60h] [rbp-108h] BYREF
  CLIENT_CALL_RETURN v21; // [rsp+68h] [rbp-100h] BYREF
  CLIENT_CALL_RETURN v22; // [rsp+70h] [rbp-F8h] BYREF
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-C8h] BYREF
  int v25; // [rsp+A8h] [rbp-C0h]
  int v26; // [rsp+ACh] [rbp-BCh]
  __int64 v27; // [rsp+B0h] [rbp-B8h]
  __int64 v28; // [rsp+B8h] [rbp-B0h]
  __int64 v29; // [rsp+C0h] [rbp-A8h]
  __int64 v30; // [rsp+C8h] [rbp-A0h]
  __int64 v31; // [rsp+D0h] [rbp-98h]
  CLIENT_CALL_RETURN v32; // [rsp+D8h] [rbp-90h]
  CLIENT_CALL_RETURN v33; // [rsp+E0h] [rbp-88h]
  RPC_BINDING_HANDLE_OPTIONS_V1 v34; // [rsp+E8h] [rbp-80h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W v35; // [rsp+F8h] [rbp-70h] BYREF

  v19 = a1;
  v4 = 0;
  Binding = 0LL;
  *(_QWORD *)&v35.Version = 1LL;
  *(_QWORD *)&v35.ProtocolSequence = 3LL;
  memset(&v35.NetworkAddress, 0, 40);
  *(_QWORD *)&v34.Version = 0x100000001LL;
  *(_QWORD *)&v34.ComTimeout = 5LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  *(&Security.Version + 1) = 0;
  Security.ServerPrincName = 0LL;
  Security.AuthIdentity = 0LL;
  v24 = 5LL;
  v25 = 1;
  v26 = 3;
  Security.Version = 1;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 10;
  Security.SecurityQos = (RPC_SECURITY_QOS *)&v24;
  v5 = RpcBindingCreateW(&v35, &Security, &v34, &Binding);
  Pointer = v5;
  v7 = v5 <= 0;
  if ( v5 || (v5 = RpcBindingBind(0LL, Binding, a2), Pointer = v5, v7 = v5 <= 0, v5) )
  {
    if ( !v7 )
      Pointer = (unsigned __int16)v5 | 0xC0070000;
  }
  else
  {
    v18 = Binding;
    Binding = 0LL;
    Pointer = 0;
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  if ( Pointer >= 0 )
  {
    v4 = 1;
    v8 = *(_DWORD *)(a1 + 112);
    if ( v8 == 2 )
    {
      v9.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800138A0, 0, 0LL).Pointer;
      *(CLIENT_CALL_RETURN *)&v34.Version = v9;
LABEL_9:
      Pointer = (signed int)v9.Pointer;
      v16 = (int)v9.Pointer;
    }
    else
    {
      switch ( v8 )
      {
        case 0:
          v10.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800138D0, 0, 0LL).Pointer;
          Pointer = (signed int)v10.Pointer;
          v20.Pointer = v10.Pointer;
          v16 = (int)v10.Pointer;
          break;
        case 1:
          Binding = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180013B70, 0, 0LL).Pointer;
          Pointer = (int)Binding;
          v16 = (int)Binding;
          break;
        case 3:
          v9.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180013DD0, 0, 0LL).Pointer;
          v22.Pointer = v9.Pointer;
          goto LABEL_9;
        case 4:
          v32.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180013B10, 0, 0LL).Pointer;
          Pointer = (signed int)v32.Pointer;
          v16 = (int)v32.Pointer;
          break;
        case 5:
          v33.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180013AE0, 0, 0LL).Pointer;
          Pointer = (signed int)v33.Pointer;
          v16 = (int)v33.Pointer;
          break;
        case 6:
          v21.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180013B40, 0, 0LL).Pointer;
          Pointer = (signed int)v21.Pointer;
          v16 = (int)v21.Pointer;
          break;
        default:
          Pointer = -1073741127;
          v16 = -1073741127;
          break;
      }
    }
    if ( Pointer >= 0 )
    {
      if ( *(_DWORD *)(a1 + 112) >= 4u )
        goto LABEL_34;
      v11 = (_QWORD *)(a1 + 8);
      v12 = (_QWORD *)(a1 + 16);
      v19 = 0LL;
      v20.Simple = 0LL;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x48uLL);
      if ( Heap )
      {
        *Heap = 0LL;
        Heap[1] = 0LL;
        Heap[2] = 0LL;
        Heap[3] = 0LL;
        Heap[4] = 0LL;
        Heap[5] = 0LL;
        Heap[6] = 0LL;
        Heap[7] = 0LL;
        Heap[8] = 0LL;
        v14 = TpAllocWork(&v20, RmpClientWnfMessageQueueWorker, Heap, 0LL);
        if ( v14 >= 0 )
        {
          LODWORD(v21.Pointer) = 0;
          v14 = NtQueryWnfStateData(v11, 0LL, 0LL, &v22, 0LL, &v21);
          if ( (int)(v14 + 0x80000000) < 0 || v14 == -1073741789 )
          {
            v14 = RtlSubscribeWnfStateChangeNotification(
                    &v19,
                    *v11,
                    LODWORD(v22.Pointer),
                    RmpClientWnfSubscriptionWorker,
                    Heap,
                    0LL,
                    0,
                    0,
                    v16);
            if ( v14 >= 0 )
            {
              Heap[6] = *v11;
              RtlInitializeSRWLock(Heap + 4);
              Heap[3] = Heap + 2;
              Heap[2] = Heap + 2;
              Heap[5] = HampIpcChannelWnfCallback;
              Heap[1] = v12;
              *((_DWORD *)Heap + 16) &= ~1u;
              *Heap = v19;
              v19 = 0LL;
              Heap[7] = v20.Simple;
              v20.Simple = 0LL;
              *v12 = Heap;
              Heap = 0LL;
              v14 = 0;
            }
          }
        }
      }
      else
      {
        v14 = -1073741801;
      }
      if ( Heap )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      if ( v20.Simple )
        ((void (__fastcall *)(_QWORD))TpReleaseWork)((CLIENT_CALL_RETURN)v20.Simple);
      if ( v19 )
        RtlUnsubscribeWnfNotificationWaitForCompletion(v19);
      if ( v14 >= 0 )
        v14 = 0;
      Pointer = v14;
      if ( v14 >= 0 )
LABEL_34:
        Pointer = 0;
    }
  }
  if ( v4 )
    RpcBindingFree(&v18);
  return (unsigned int)Pointer;
}
