/*
 * XREFs of ??1ResourceManagerClientProxy@@MAE@XZ @ 0x10013B2A
 * Callers:
 *     ??_GResourceManagerClientProxy@@MAEPAXI@Z @ 0x10013C20 (--_GResourceManagerClientProxy@@MAEPAXI@Z.c)
 * Callees:
 *     _RmpClientWnfDestroySubscription@4 @ 0x10007170 (_RmpClientWnfDestroySubscription@4.c)
 *     ??3@YAXPAXABUnothrow_t@std@@@Z @ 0x1000D01C (--3@YAXPAXABUnothrow_t@std@@@Z.c)
 */

void __thiscall ResourceManagerClientProxy::~ResourceManagerClientProxy(ResourceManagerClientProxy *this)
{
  bool v2; // zf
  int **v3; // esi
  int *v4; // edx
  int *v5; // ecx
  int v6; // eax

  v2 = *((_BYTE *)this + 548) == 0;
  *(_DWORD *)this = &ResourceManagerClientProxy::`vftable';
  if ( !v2 )
  {
    RmpClientWnfDestroySubscription(*((_DWORD **)this + 6));
    _NdrClientCall4(&stru_100016E8, &byte_10003718, (char *)this + 12);
    RpcBindingFree((RPC_BINDING_HANDLE *)this + 2);
    *((_DWORD *)this + 2) = 0;
  }
  v3 = (int **)((char *)this + 576);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (int *)v3 )
      break;
    v5 = (int *)v4[1];
    v6 = *v4;
    *v5 = *v4;
    *(_DWORD *)(v6 + 4) = v5;
    operator delete(v4);
  }
  *((_DWORD *)this + 147) = 0;
  if ( *((_DWORD *)this + 146) )
    operator delete(*((void **)this + 146));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 23);
}
