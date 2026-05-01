/*
 * XREFs of ?GetUnmarshalClass@FtmBase@WRL@Microsoft@@UAGJABU_GUID@@PAXK1KPAU4@@Z @ 0x1000F420
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall Microsoft::WRL::FtmBase::GetUnmarshalClass(
        Microsoft::WRL::FtmBase *this,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        struct _GUID *a7)
{
  int v7; // eax

  v7 = *((_DWORD *)this + 3);
  if ( v7 )
    return (*(int (__thiscall **)(_DWORD, int, const struct _GUID *, void *, unsigned int, void *, unsigned int, struct _GUID *))(*(_DWORD *)v7 + 12))(
             *(_DWORD *)(*(_DWORD *)v7 + 12),
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
