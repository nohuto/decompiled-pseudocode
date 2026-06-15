/*
 * XREFs of ??0CProcessSubmix@@QEAA@XZ @ 0x140042068
 * Callers:
 *     ??0?$CComAggObject@VCProcessSubmix@@@ATL@@QEAA@PEAX@Z @ 0x140041FB8 (--0-$CComAggObject@VCProcessSubmix@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSubmixImpl@@QEAA@XZ @ 0x1400104F4 (--0CSubmixImpl@@QEAA@XZ.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 */

CProcessSubmix *__fastcall CProcessSubmix::CProcessSubmix(CProcessSubmix *this)
{
  char *v1; // rbx

  *((_DWORD *)this + 84) = 0;
  v1 = (char *)this + 344;
  memset_0((char *)this + 344, 0, 0x28uLL);
  v1[40] = 0;
  CSubmixImpl::CSubmixImpl((CProcessSubmix *)((char *)this + 16));
  return this;
}
