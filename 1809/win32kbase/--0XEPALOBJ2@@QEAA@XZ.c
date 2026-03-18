/*
 * XREFs of ??0XEPALOBJ2@@QEAA@XZ @ 0x1C00AA2D4
 * Callers:
 *     bDeletePalette @ 0x1C00713D0 (bDeletePalette.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC938 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C00243F0 (PushThreadGuardedObject.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

XEPALOBJ2 *__fastcall XEPALOBJ2::XEPALOBJ2(XEPALOBJ2 *this)
{
  _QWORD *v1; // rbx

  *(_QWORD *)this = 0LL;
  v1 = (_QWORD *)((char *)this + 8);
  memset((char *)this + 8, 0, 0x20uLL);
  PushThreadGuardedObject(
    v1,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)(unsigned __int64)v1 >> 64),
    (__int64)UnexpectedThreadTerminationHandler<XEPALOBJ2>::OnUnexpectedThreadTerminationStatic);
  return this;
}
