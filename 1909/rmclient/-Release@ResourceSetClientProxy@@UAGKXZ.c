/*
 * XREFs of ?Release@ResourceSetClientProxy@@UAGKXZ @ 0x100149D0
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QAEJ_K@Z @ 0x10014C71 (-RemoveProxyResourceSet@ResourceManagerClientProxy@@QAEJ_K@Z.c)
 */

signed __int32 __stdcall ResourceSetClientProxy::Release(ResourceSetClientProxy *this)
{
  ResourceSetClientProxy *v1; // edi
  signed __int32 *v2; // eax
  signed __int32 v3; // esi
  char v4; // dl
  signed __int32 v5; // ebx

  v1 = this;
  v2 = (signed __int32 *)((char *)this + 412);
  while ( 1 )
  {
    v3 = *v2;
    v4 = 0;
    v5 = *v2 - 1;
    if ( *v2 == 1 && *((_QWORD *)v1 + 2) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(*((_DWORD *)v1 + 105) + 552));
      v4 = 1;
    }
    v1 = this;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 103, v5, v3) == v3 )
      break;
    v2 = (signed __int32 *)((char *)this + 412);
    if ( v4 )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_DWORD *)this + 105) + 552));
      v2 = (signed __int32 *)((char *)this + 412);
    }
  }
  if ( !v5 )
  {
    if ( v4 )
    {
      ResourceManagerClientProxy::RemoveProxyResourceSet(
        *((ResourceManagerClientProxy **)this + 105),
        *((_QWORD *)this + 2));
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_DWORD *)this + 105) + 552));
    }
    if ( this )
      (*(void (__thiscall **)(ResourceSetClientProxy *, int))(*(_DWORD *)this + 84))(this, 1);
  }
  return v5;
}
