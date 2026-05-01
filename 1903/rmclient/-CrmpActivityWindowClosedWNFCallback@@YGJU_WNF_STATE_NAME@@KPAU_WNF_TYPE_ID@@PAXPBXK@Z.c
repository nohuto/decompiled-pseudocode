/*
 * XREFs of ?CrmpActivityWindowClosedWNFCallback@@YGJU_WNF_STATE_NAME@@KPAU_WNF_TYPE_ID@@PAXPBXK@Z @ 0x10007490
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall CrmpActivityWindowClosedWNFCallback(
        struct _WNF_STATE_NAME a1,
        unsigned int a2,
        struct _WNF_TYPE_ID *a3,
        void *a4,
        const void *a5,
        unsigned int a6)
{
  (*((void (__thiscall **)(_DWORD, _DWORD, void *, _DWORD))a4 + 12))(
    *((_DWORD *)a4 + 12),
    *((_DWORD *)a4 + 4),
    a4,
    *((_DWORD *)a4 + 13));
  return 0;
}
