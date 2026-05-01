/*
 * XREFs of ?ReleaseMarshalData@FtmBase@WRL@Microsoft@@UAGJPAUIStream@@@Z @ 0x1000F570
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall Microsoft::WRL::FtmBase::ReleaseMarshalData(Microsoft::WRL::FtmBase *this, struct IStream *a2)
{
  int v2; // ecx

  v2 = *((_DWORD *)this + 3);
  if ( v2 )
    return (*(int (__thiscall **)(_DWORD, int, struct IStream *))(*(_DWORD *)v2 + 28))(
             *(_DWORD *)(*(_DWORD *)v2 + 28),
             v2,
             a2);
  else
    return -2147024882;
}
