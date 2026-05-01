/*
 * XREFs of ??_EResourceManagerProxy@@UAEPAXI@Z @ 0x10011DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPAX@Z @ 0x1000C461 (--3@YAXPAX@Z.c)
 */

RPC_BINDING_HANDLE *__thiscall ResourceManagerProxy::`vector deleting destructor'(RPC_BINDING_HANDLE *this, char a2)
{
  _DWORD *v3; // esi

  v3 = this + 1;
  *this = &ResourceManagerProxy::`vftable';
  RpcBindingFree(this + 1);
  *v3 = 0;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
