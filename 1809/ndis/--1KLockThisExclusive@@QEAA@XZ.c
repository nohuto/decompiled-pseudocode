/*
 * XREFs of ??1KLockThisExclusive@@QEAA@XZ @ 0x1C00B41A8
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00C0AFC (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall KLockThisExclusive::~KLockThisExclusive(KLockThisExclusive *this)
{
  KLockHolder::~KLockHolder(this);
}
