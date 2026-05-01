/*
 * XREFs of ?GetMarshalSizeMax@FtmBase@WRL@Microsoft@@UAGJABU_GUID@@PAXK1KPAK@Z @ 0x1000F380
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall Microsoft::WRL::FtmBase::GetMarshalSizeMax(
        Microsoft::WRL::FtmBase *this,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  int v7; // eax

  v7 = *((_DWORD *)this + 3);
  if ( v7 )
    return (*(int (__thiscall **)(_DWORD, int, const struct _GUID *, void *, unsigned int, void *, unsigned int, unsigned int *))(*(_DWORD *)v7 + 16))(
             *(_DWORD *)(*(_DWORD *)v7 + 16),
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
