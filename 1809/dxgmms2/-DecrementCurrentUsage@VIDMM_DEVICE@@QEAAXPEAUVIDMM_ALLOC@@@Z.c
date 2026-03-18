/*
 * XREFs of ?DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C007D2E4
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066E20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C007D270 (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DEVICE::DecrementCurrentUsage(VIDMM_DEVICE *this, __int64 **a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx

  v2 = **a2;
  v3 = HIWORD(*(_DWORD *)(v2 + 76)) & 0xF;
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) + 296LL * (*(_DWORD *)(v2 + 76) & 0x3F);
  if ( (*((_BYTE *)a2 + 36) & 1) != 0 && (_DWORD)v3 == 2 )
    v3 = 0LL;
  *(_QWORD *)(v4 + 8 * v3 + 72) -= *(_QWORD *)(v2 + 16);
  v5 = (unsigned __int8)HIBYTE(*(_WORD *)(v2 + 76)) >> 4;
  *(_QWORD *)(v4 + 8 * v5 + 136) -= *(_QWORD *)(v2 + 16);
}
