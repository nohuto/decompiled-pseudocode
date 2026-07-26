/*
 * XREFs of ??1KLockThisExclusive@@QEAA@XZ @ 0x1C00FC468
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0103B94 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall KLockThisExclusive::~KLockThisExclusive(KLockThisExclusive *this)
{
  KLockHolder::~KLockHolder(this);
}
