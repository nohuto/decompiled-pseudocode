/*
 * XREFs of ?UnmarshalInterface@FtmBase@WRL@Microsoft@@UAGJPAUIStream@@ABU_GUID@@PAPAX@Z @ 0x1000F5A0
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall Microsoft::WRL::FtmBase::UnmarshalInterface(
        Microsoft::WRL::FtmBase *this,
        struct IStream *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v4; // eax

  v4 = *((_DWORD *)this + 3);
  if ( v4 )
    return (*(int (__thiscall **)(_DWORD, int, struct IStream *, const struct _GUID *, void **))(*(_DWORD *)v4 + 24))(
             *(_DWORD *)(*(_DWORD *)v4 + 24),
             v4,
             a2,
             a3,
             a4);
  else
    return -2147024882;
}
