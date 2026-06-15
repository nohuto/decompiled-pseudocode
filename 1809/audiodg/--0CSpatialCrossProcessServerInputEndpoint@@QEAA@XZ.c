/*
 * XREFs of ??0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140059684
 * Callers:
 *     ??0?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140059094 (--0-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140059230 (--0-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     ??0CSpatialCrossProcessServerEndpoint@@QEAA@XZ @ 0x140059598 (--0CSpatialCrossProcessServerEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CSpatialCrossProcessServerInputEndpoint *__fastcall CSpatialCrossProcessServerInputEndpoint::CSpatialCrossProcessServerInputEndpoint(
        CSpatialCrossProcessServerInputEndpoint *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 276) = 0;
  v2 = (char *)this + 1112;
  memset_0((char *)this + 1112, 0, 0x28uLL);
  v2[40] = 0;
  CSpatialCrossProcessServerEndpoint::CSpatialCrossProcessServerEndpoint(this);
  *((_DWORD *)this + 290) = 0;
  *((_DWORD *)this + 291) = 0;
  *((_WORD *)this + 584) = 0;
  *((_DWORD *)this + 293) = -2147418113;
  *((_DWORD *)this + 294) = 0;
  return this;
}
