/*
 * XREFs of ??0DMMVIDPNSOURCEMODE@@QEAA@I@Z @ 0x1C0053438
 * Callers:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0053B14 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 * Callees:
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C0005FFC (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

DMMVIDPNSOURCEMODE *__fastcall DMMVIDPNSOURCEMODE::DMMVIDPNSOURCEMODE(DMMVIDPNSOURCEMODE *this, int a2)
{
  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>((__int64)this, a2);
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173006;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNSOURCEMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCEMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCEMODE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
  memset((char *)this + 76, 0, 0x20uLL);
  return this;
}
