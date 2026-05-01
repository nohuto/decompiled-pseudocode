/*
 * XREFs of ?CrmpActivityWNFCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180006EE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmpActivityWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        void (__fastcall **a4)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        unsigned int *a5,
        unsigned int a6)
{
  if ( a6 >= 4 )
    a4[3](a4[2], a4, *a5, 0LL, a4[4]);
  return 0LL;
}
