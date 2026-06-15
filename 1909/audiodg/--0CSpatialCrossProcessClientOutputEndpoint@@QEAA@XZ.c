/*
 * XREFs of ??0CSpatialCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x1400575A4
 * Callers:
 *     ??0?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140057024 (--0-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14005720C (--0-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 *     ??0CSpatialCrossProcessClientEndpoint@@QEAA@XZ @ 0x14005750C (--0CSpatialCrossProcessClientEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CSpatialCrossProcessClientOutputEndpoint *__fastcall CSpatialCrossProcessClientOutputEndpoint::CSpatialCrossProcessClientOutputEndpoint(
        CSpatialCrossProcessClientOutputEndpoint *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 250) = 0;
  v2 = (char *)this + 1008;
  memset_0((char *)this + 1008, 0, 0x28uLL);
  v2[40] = 0;
  CSpatialCrossProcessClientEndpoint::CSpatialCrossProcessClientEndpoint(this);
  *((_QWORD *)this + 123) = &CSpatialCrossProcessControl::`vftable';
  *((_QWORD *)this + 124) = this;
  *((_QWORD *)this + 132) = 0LL;
  *((_DWORD *)this + 266) = 0;
  *((_DWORD *)this + 267) = 0;
  *((_DWORD *)this + 268) = 0;
  *((_DWORD *)this + 269) = 0;
  *((_BYTE *)this + 1080) = 0;
  return this;
}
