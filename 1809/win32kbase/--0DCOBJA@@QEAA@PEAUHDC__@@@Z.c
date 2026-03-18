/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00273F4
 * Callers:
 *     GreGetBounds @ 0x1C0026520 (GreGetBounds.c)
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     GreValidateVisrgn @ 0x1C0027468 (GreValidateVisrgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0027DBC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgnShared @ 0x1C0029E90 (GreSelectVisRgnShared.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C002A080 (GreLockVisRgnSharedOrExclusive.c)
 *     GreIsRendering @ 0x1C002A550 (GreIsRendering.c)
 *     GreSetDCOrg @ 0x1C006AE40 (GreSetDCOrg.c)
 *     GreGetDCOrgEx @ 0x1C00760E0 (GreGetDCOrgEx.c)
 *     GreCopyVisRgn @ 0x1C009D9C0 (GreCopyVisRgn.c)
 *     GreIntersectVisRect @ 0x1C0107810 (GreIntersectVisRect.c)
 * Callees:
 *     HmgShareLockEx @ 0x1C0021C50 (HmgShareLockEx.c)
 *     PushThreadGuardedObject @ 0x1C00243F0 (PushThreadGuardedObject.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  _QWORD *v2; // rbx
  unsigned int v3; // edi

  v2 = (_QWORD *)((char *)this + 16);
  v3 = (unsigned int)a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  memset((char *)this + 16, 0, 0x20uLL);
  PushThreadGuardedObject(
    v2,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64),
    (__int64)UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
  *(_QWORD *)this = HmgShareLockEx(v3, 1, 0);
  return this;
}
