/*
 * XREFs of ?MarshalInterface@FtmBase@WRL@Microsoft@@UAGJPAUIStream@@ABU_GUID@@PAXK2K@Z @ 0x1000F460
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall Microsoft::WRL::FtmBase::MarshalInterface(
        Microsoft::WRL::FtmBase *this,
        struct IStream *a2,
        const struct _GUID *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  int v7; // eax

  v7 = *((_DWORD *)this + 3);
  if ( v7 )
    return (*(int (__thiscall **)(_DWORD, int, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_DWORD *)v7 + 20))(
             *(_DWORD *)(*(_DWORD *)v7 + 20),
             v7,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  else
    return -2147024882;
}
