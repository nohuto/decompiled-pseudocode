/*
 * XREFs of ?CrmpActivityWNFCallback@@YGJU_WNF_STATE_NAME@@KPAU_WNF_TYPE_ID@@PAXPBXK@Z @ 0x100073F0
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall CrmpActivityWNFCallback(
        struct _WNF_STATE_NAME a1,
        unsigned int a2,
        struct _WNF_TYPE_ID *a3,
        void *a4,
        _DWORD *a5,
        unsigned int a6)
{
  if ( a6 >= 4 )
    (*((void (__thiscall **)(_DWORD, _DWORD, void *, _DWORD, _DWORD, _DWORD))a4 + 5))(
      *((_DWORD *)a4 + 5),
      *((_DWORD *)a4 + 4),
      a4,
      *a5,
      0,
      *((_DWORD *)a4 + 6));
  return 0;
}
