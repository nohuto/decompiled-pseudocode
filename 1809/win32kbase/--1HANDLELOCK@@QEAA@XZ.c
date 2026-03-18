/*
 * XREFs of ??1HANDLELOCK@@QEAA@XZ @ 0x1C0023860
 * Callers:
 *     HmgSetOwner @ 0x1C001E160 (HmgSetOwner.c)
 *     NtGdiDeleteObjectApp @ 0x1C00207E0 (NtGdiDeleteObjectApp.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0022880 (HmgDecrementShareReferenceCountEx.c)
 *     HmgLockEx @ 0x1C0023060 (HmgLockEx.c)
 *     HmgReplaceObject @ 0x1C0025270 (HmgReplaceObject.c)
 *     GreSetDCOwnerEx @ 0x1C0027700 (GreSetDCOwnerEx.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00436E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgFree @ 0x1C0062E00 (HmgFree.c)
 *     bDeleteBrush @ 0x1C007DE80 (bDeleteBrush.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00AA958 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgUnlock @ 0x1C00AACB0 (HmgUnlock.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC538 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC624 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC740 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC84C (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC938 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 *     HmgSwapLockedHandleContents @ 0x1C00F9430 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0023220 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 */

void __fastcall HANDLELOCK::~HANDLELOCK(HANDLELOCK *this)
{
  if ( *((_DWORD *)this + 2) )
    HANDLELOCK::vUnlock(this);
}
