/*
 * XREFs of ??0?$COPMSimpleBufferPool@U_DXGKMDT_OPM_GET_INFO_PARAMETERS@@@@QEAA@PEAJ@Z @ 0x1C008F268
 * Callers:
 *     ??0COPM@@QEAA@PEAJ@Z @ 0x1C008F0F4 (--0COPM@@QEAA@PEAJ@Z.c)
 * Callees:
 *     <none>
 */

struct _LOOKASIDE_LIST_EX **__fastcall COPMSimpleBufferPool<_DXGKMDT_OPM_GET_INFO_PARAMETERS>::COPMSimpleBufferPool<_DXGKMDT_OPM_GET_INFO_PARAMETERS>(
        struct _LOOKASIDE_LIST_EX **a1,
        NTSTATUS *a2)
{
  struct _LOOKASIDE_LIST_EX *PoolWithTag; // rax

  *a1 = 0LL;
  if ( *a2 >= 0 )
  {
    PoolWithTag = (struct _LOOKASIDE_LIST_EX *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x60uLL, 0x4D504F47u);
    *a1 = PoolWithTag;
    if ( PoolWithTag )
      *a2 = ExInitializeLookasideListEx(PoolWithTag, 0LL, 0LL, PagedPool, 2u, 0x1010uLL, 0x4D504F47u, 0);
    else
      *a2 = -1073741670;
  }
  return a1;
}
