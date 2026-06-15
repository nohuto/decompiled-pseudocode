/*
 * XREFs of ??0CStreamGroup@@QEAA@XZ @ 0x1400315C8
 * Callers:
 *     ??0?$CComAggObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x14003150C (--0-$CComAggObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSubmixImpl@@QEAA@XZ @ 0x1400104F4 (--0CSubmixImpl@@QEAA@XZ.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 */

CStreamGroup *__fastcall CStreamGroup::CStreamGroup(CStreamGroup *this)
{
  char *v1; // rbx

  *((_DWORD *)this + 86) = 0;
  v1 = (char *)this + 352;
  memset_0((char *)this + 352, 0, 0x28uLL);
  v1[40] = 0;
  CSubmixImpl::CSubmixImpl((CStreamGroup *)((char *)this + 24));
  return this;
}
