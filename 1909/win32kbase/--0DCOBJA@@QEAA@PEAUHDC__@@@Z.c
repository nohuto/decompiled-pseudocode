/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C002C700
 * Callers:
 *     GreLockVisRgnSharedOrExclusive @ 0x1C002C1B0 (GreLockVisRgnSharedOrExclusive.c)
 *     GreIsRendering @ 0x1C002DE90 (GreIsRendering.c)
 *     GreGetDCOrgEx @ 0x1C003FA80 (GreGetDCOrgEx.c)
 *     GreSetDCOrg @ 0x1C0076FD0 (GreSetDCOrg.c)
 *     GreCopyVisRgn @ 0x1C0077730 (GreCopyVisRgn.c)
 *     GreSelectVisRgnShared @ 0x1C00B0010 (GreSelectVisRgnShared.c)
 *     GreIntersectVisRect @ 0x1C012F460 (GreIntersectVisRect.c)
 * Callees:
 *     HmgShareLockEx @ 0x1C001CDA0 (HmgShareLockEx.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = HmgShareLockEx((unsigned int)a2, 1, 0);
  return this;
}
