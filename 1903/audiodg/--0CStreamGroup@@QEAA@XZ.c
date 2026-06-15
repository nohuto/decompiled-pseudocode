/*
 * XREFs of ??0CStreamGroup@@QEAA@XZ @ 0x140010CE4
 * Callers:
 *     ??0?$CComObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x140010E0C (--0-$CComObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComAggObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x140029A58 (--0-$CComAggObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSubmixImpl@@QEAA@XZ @ 0x140010D30 (--0CSubmixImpl@@QEAA@XZ.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
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
