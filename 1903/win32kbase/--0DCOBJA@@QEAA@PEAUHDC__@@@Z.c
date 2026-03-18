/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00150FC
 * Callers:
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0015210 (GreLockVisRgnSharedOrExclusive.c)
 *     GreIsRendering @ 0x1C003C970 (GreIsRendering.c)
 *     GreSetDCOrg @ 0x1C003C9C0 (GreSetDCOrg.c)
 *     GreCopyVisRgn @ 0x1C003D6D0 (GreCopyVisRgn.c)
 *     GreGetDCOrgEx @ 0x1C003DAF0 (GreGetDCOrgEx.c)
 *     GreSelectVisRgnShared @ 0x1C00B2F40 (GreSelectVisRgnShared.c)
 *     GreIntersectVisRect @ 0x1C0131B00 (GreIntersectVisRect.c)
 * Callees:
 *     HmgShareLockEx @ 0x1C001BA50 (HmgShareLockEx.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  HDC v3; // rax

  v3 = a2;
  LOBYTE(a2) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = HmgShareLockEx(v3, a2, 0LL);
  return this;
}
