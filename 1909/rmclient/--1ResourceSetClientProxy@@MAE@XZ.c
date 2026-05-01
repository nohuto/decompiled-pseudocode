/*
 * XREFs of ??1ResourceSetClientProxy@@MAE@XZ @ 0x10013BB8
 * Callers:
 *     ??_GResourceSetClientProxy@@MAEPAXI@Z @ 0x10013C50 (--_GResourceSetClientProxy@@MAEPAXI@Z.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     ?ReleaseResources@ResourceSetClientProxy@@UAGJXZ @ 0x10014B30 (-ReleaseResources@ResourceSetClientProxy@@UAGJXZ.c)
 */

void __thiscall ResourceSetClientProxy::~ResourceSetClientProxy(ResourceSetClientProxy *this)
{
  bool v2; // zf
  int v3; // ecx

  v2 = *((_DWORD *)this + 112) == 2;
  *(_DWORD *)this = &ResourceSetClientProxy::`vftable';
  if ( !v2 )
    ResourceSetClientProxy::ReleaseResources(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 424));
  v3 = *((_DWORD *)this + 104);
  if ( v3 )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v3 + 8))(
      *(_DWORD *)(*(_DWORD *)v3 + 8),
      *((_DWORD *)this + 104));
}
