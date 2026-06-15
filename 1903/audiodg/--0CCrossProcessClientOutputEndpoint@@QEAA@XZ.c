/*
 * XREFs of ??0CCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x14004D208
 * Callers:
 *     ??0?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004CC7C (--0-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004CFB8 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x14004D0EC (--0CCrossProcessBaseClientEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessClientOutputEndpoint *__fastcall CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint(
        CCrossProcessClientOutputEndpoint *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 122) = 0;
  v2 = (char *)this + 496;
  memset_0((char *)this + 496, 0, 0x28uLL);
  v2[40] = 0;
  CCrossProcessBaseClientEndpoint::CCrossProcessBaseClientEndpoint(this);
  *((_QWORD *)this + 56) = &CCrossProcessOutputEndpoint::`vftable';
  *((_QWORD *)this + 57) = this;
  *((_DWORD *)this + 116) = 3;
  *((_DWORD *)this + 117) = 0;
  *((_QWORD *)this + 59) = &CCrossProcessControl::`vftable';
  *((_QWORD *)this + 60) = this;
  *((_QWORD *)this + 68) = 0LL;
  return this;
}
