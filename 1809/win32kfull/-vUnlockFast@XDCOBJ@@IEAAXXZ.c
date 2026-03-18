/*
 * XREFs of ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C015EA8C
 * Callers:
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C015F778 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C00E32F0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::vUnlockFast(XDCOBJ *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  XDCOBJ::RestoreAttributes(this);
  v2 = *(__int64 **)this;
  v4 = 0;
  v3 = *v2;
  HmgDecrementExclusiveReferenceCountEx(v2, *((unsigned int *)this + 3), &v4);
  if ( v4 )
    bDeleteDCInternalEx(v3, 0LL);
}
