/*
 * XREFs of ??0CCrossProcessServerOutputEndpoint@@QEAA@XZ @ 0x14004D2B8
 * Callers:
 *     ??0?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004CE38 (--0-$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004D060 (--0-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x14000E8FC (--0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessServerOutputEndpoint *__fastcall CCrossProcessServerOutputEndpoint::CCrossProcessServerOutputEndpoint(
        CCrossProcessServerOutputEndpoint *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 122) = 0;
  v2 = (char *)this + 496;
  memset_0((char *)this + 496, 0, 0x28uLL);
  v2[40] = 0;
  CCrossProcessBaseServerEndpoint::CCrossProcessBaseServerEndpoint(this, eCapture);
  *((_QWORD *)this + 57) = &CCrossProcessOutputEndpoint::`vftable';
  *((_QWORD *)this + 58) = this;
  *((_DWORD *)this + 118) = 3;
  *((_DWORD *)this + 119) = 0;
  *((_DWORD *)this + 136) = 0;
  return this;
}
