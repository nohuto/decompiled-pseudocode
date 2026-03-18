/*
 * XREFs of ??0CSuperWetInkScribbleBase@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@I@Z @ 0x1801B0E44
 * Callers:
 *     ??0CRemoteSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCRemoteSuperWetSharedSection@@I@Z @ 0x1801B0E00 (--0CRemoteSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCRemote.c)
 *     ?CreateScribble@CGenericInk@@UEAAJPEAVID2DContext@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1802137B0 (-CreateScribble@CGenericInk@@UEAAJPEAVID2DContext@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCCom.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

CSuperWetInkScribbleBase *__fastcall CSuperWetInkScribbleBase::CSuperWetInkScribbleBase(
        CSuperWetInkScribbleBase *this,
        struct IDCompositionDirectInkSuperWetStrokePartner *a2,
        int a3)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CSuperWetInkScribbleBase::`vftable';
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkSuperWetStrokePartner *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_DWORD *)this + 6) = a3;
  return this;
}
