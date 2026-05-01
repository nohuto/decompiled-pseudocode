/*
 * XREFs of ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x180010780
 * Callers:
 *     ??_GResourceManagerClientProxy@@MEAAPEAXI@Z @ 0x180010890 (--_GResourceManagerClientProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     RmpClientWnfDestroySubscription @ 0x180005C6C (RmpClientWnfDestroySubscription.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800099DC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ResourceManagerClientProxy::~ResourceManagerClientProxy(ResourceManagerClientProxy *this)
{
  bool v1; // zf
  __int64 **v3; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rax
  void *v7; // rcx

  v1 = *((_BYTE *)this + 568) == 0;
  *(_QWORD *)this = &ResourceManagerClientProxy::`vftable';
  if ( !v1 )
  {
    RmpClientWnfDestroySubscription(*((_DWORD **)this + 5));
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180013CC0, 1u, 0LL, (char *)this + 24);
    RpcBindingFree((RPC_BINDING_HANDLE *)this + 2);
    *((_QWORD *)this + 2) = 0LL;
  }
  v3 = (__int64 **)((char *)this + 616);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (__int64 *)v3 )
      break;
    v5 = (__int64 *)v4[1];
    v6 = *v4;
    *v5 = *v4;
    *(_QWORD *)(v6 + 8) = v5;
    operator delete(v4);
  }
  *((_QWORD *)this + 80) = 0LL;
  v7 = (void *)*((_QWORD *)this + 79);
  if ( v7 )
    operator delete(v7);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 576));
}
