/*
 * XREFs of ?ProcessSetInertiaCenterpointY@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTY@@@Z @ 0x1801A088C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x18019DC38 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18019E4BC (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetInertiaCenterpointY(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTY *a3)
{
  __int64 *v4; // rbx
  __int64 Resource; // rax

  v4 = (__int64 *)((char *)this + 368);
  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x26u);
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=(v4, Resource);
  if ( *v4 )
    *(_DWORD *)(*v4 + 200) = *((_DWORD *)a3 + 1);
  if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 224LL) + 416LL) |= 4u;
  return 0LL;
}
