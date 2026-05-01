/*
 * XREFs of ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UAGJABU_GUID@@PAPAUIInspectable@@@Z @ 0x100110F0
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall Microsoft::WRL::Details::WeakReferenceImpl::Resolve(
        Microsoft::WRL::Details::WeakReferenceImpl *this,
        const struct _GUID *a2,
        struct IInspectable **a3)
{
  volatile signed __int32 *v3; // esi
  signed __int32 v4; // edx
  int v6; // edi

  v3 = (volatile signed __int32 *)((char *)this + 12);
  *a3 = 0;
  do
  {
    if ( !*v3 )
      return 0;
    v4 = *v3;
  }
  while ( _InterlockedCompareExchange(v3, v4 + 1, v4) != v4 );
  v6 = (***((int (__thiscall ****)(_DWORD, _DWORD, const struct _GUID *, struct IInspectable **))this + 4))(
         ***((_DWORD ***)this + 4),
         *((_DWORD *)this + 4),
         a2,
         a3);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 4) + 8))(
    *(_DWORD *)(**((_DWORD **)this + 4) + 8),
    *((_DWORD *)this + 4));
  return v6;
}
