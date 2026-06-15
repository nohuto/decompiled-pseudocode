/*
 * XREFs of ??0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140057818
 * Callers:
 *     ??0?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140057210 (--0-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400573AC (--0-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     ??0CSpatialCrossProcessServerEndpoint@@QEAA@XZ @ 0x140057740 (--0CSpatialCrossProcessServerEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CSpatialCrossProcessServerInputEndpoint *__fastcall CSpatialCrossProcessServerInputEndpoint::CSpatialCrossProcessServerInputEndpoint(
        CSpatialCrossProcessServerInputEndpoint *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 268) = 0;
  v2 = (char *)this + 1080;
  memset_0((char *)this + 1080, 0, 0x28uLL);
  v2[40] = 0;
  CSpatialCrossProcessServerEndpoint::CSpatialCrossProcessServerEndpoint(this);
  *((_DWORD *)this + 282) = 0;
  *((_DWORD *)this + 283) = 0;
  *((_WORD *)this + 568) = 0;
  *((_DWORD *)this + 285) = -2147418113;
  *((_DWORD *)this + 286) = 0;
  return this;
}
