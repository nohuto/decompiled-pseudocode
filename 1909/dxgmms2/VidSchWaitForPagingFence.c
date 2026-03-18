/*
 * XREFs of VidSchWaitForPagingFence @ 0x1C00CCAA4
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005E960 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B600 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0077A60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     VidSchWaitForSingleSyncObject @ 0x1C0003C30 (VidSchWaitForSingleSyncObject.c)
 *     VidSchSubmitWaitToHwQueue @ 0x1C0038350 (VidSchSubmitWaitToHwQueue.c)
 */

_UNKNOWN **__fastcall VidSchWaitForPagingFence(
        __int64 a1,
        struct _VIDSCH_SYNC_OBJECT *a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  _UNKNOWN **result; // rax
  char v5; // r12
  unsigned int v6; // ebx
  __int64 v10; // rdi
  unsigned int v11; // ebp
  struct VIDSCH_HW_QUEUE *v12; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  if ( a4 )
  {
    result = &retaddr;
    v5 = *(_BYTE *)(a1 + 55);
    v6 = a4;
    v10 = 0LL;
    do
    {
      v11 = v6;
      if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 64) )
        break;
      if ( (v6 & 1) != 0 )
      {
        if ( v5 )
        {
          result = *(_UNKNOWN ***)(a1 + 264);
          v12 = (struct VIDSCH_HW_QUEUE *)result[v10];
          if ( v12 )
            result = (_UNKNOWN **)VidSchSubmitWaitToHwQueue(v12, a2, a3);
        }
        else
        {
          result = (_UNKNOWN **)VidSchWaitForSingleSyncObject(
                                  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8 * v10),
                                  (__int64)a2,
                                  a3);
        }
      }
      v6 >>= 1;
      v10 = (unsigned int)(v10 + 1);
    }
    while ( v11 >= 2 );
  }
  return result;
}
