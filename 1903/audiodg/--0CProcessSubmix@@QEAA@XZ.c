/*
 * XREFs of ??0CProcessSubmix@@QEAA@XZ @ 0x140010F54
 * Callers:
 *     ??0?$CComObject@VCProcessSubmix@@@ATL@@QEAA@PEAX@Z @ 0x140010FA0 (--0-$CComObject@VCProcessSubmix@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComAggObject@VCProcessSubmix@@@ATL@@QEAA@PEAX@Z @ 0x14003EF08 (--0-$CComAggObject@VCProcessSubmix@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSubmixImpl@@QEAA@XZ @ 0x140010D30 (--0CSubmixImpl@@QEAA@XZ.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
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
