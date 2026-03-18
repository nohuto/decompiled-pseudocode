/*
 * XREFs of ??0DXGPROCESS_NONPAGED@@QEAA@XZ @ 0x1C0017540
 * Callers:
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00E0B54 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 */

DXGPROCESS_NONPAGED *__fastcall DXGPROCESS_NONPAGED::DXGPROCESS_NONPAGED(DXGPROCESS_NONPAGED *this)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)((char *)this + 88);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 13);
  v1[1] = v1;
  *v1 = v1;
  memset(this, 0, 0x20uLL);
  memset((char *)this + 40, 0, 0x20uLL);
  return this;
}
