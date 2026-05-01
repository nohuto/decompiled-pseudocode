/*
 * XREFs of ?CrmpActivityWNFSyncCallback@@YGJU_WNF_STATE_NAME@@KPAU_WNF_TYPE_ID@@PAXPBXK@Z @ 0x100134B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall CrmpActivityWNFSyncCallback(
        struct _WNF_STATE_NAME a1,
        unsigned int a2,
        struct _WNF_TYPE_ID *a3,
        HANDLE *a4,
        _DWORD *a5,
        unsigned int a6)
{
  if ( a6 >= 4 && !*a5 )
    SetEvent(a4[11]);
  return 0;
}
