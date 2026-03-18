/*
 * XREFs of ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C029102C
 * Callers:
 *     ?VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0291DC8 (-VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02920FC (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C0292154 (-VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z @ 0x1C0292368 (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z.c)
 *     ?VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z @ 0x1C02927B0 (-VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z.c)
 *     ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1C02929C0 (-VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z.c)
 *     ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z @ 0x1C0292BD0 (-VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z.c)
 *     ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C0292DDC (-VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z.c)
 *     ?VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C0292FE0 (-VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C02931FC (-VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z.c)
 *     ?VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z @ 0x1C0293628 (-VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z.c)
 *     ?VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C029397C (-VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C0290FB4 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONDATA::ReleaseVailGuestReference(DXGSESSIONDATA *this)
{
  if ( (*((_DWORD *)this + 4690))-- == 1 )
  {
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2346) + 56LL));
    DXGVAILGUESTOBJECT::ReleaseReference(*((DXGVAILGUESTOBJECT **)this + 2346));
    *((_QWORD *)this + 2346) = 0LL;
  }
}
