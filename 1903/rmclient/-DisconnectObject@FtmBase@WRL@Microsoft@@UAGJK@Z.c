/*
 * XREFs of ?DisconnectObject@FtmBase@WRL@Microsoft@@UAGJK@Z @ 0x1000F170
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall Microsoft::WRL::FtmBase::DisconnectObject(Microsoft::WRL::FtmBase *this, unsigned int a2)
{
  int v2; // ecx

  v2 = *((_DWORD *)this + 3);
  if ( v2 )
    return (*(int (__thiscall **)(_DWORD, int, unsigned int))(*(_DWORD *)v2 + 32))(
             *(_DWORD *)(*(_DWORD *)v2 + 32),
             v2,
             a2);
  else
    return -2147024882;
}
