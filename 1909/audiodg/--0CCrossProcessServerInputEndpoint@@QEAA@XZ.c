/*
 * XREFs of ??0CCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x14000EB3C
 * Callers:
 *     ??0?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14000F1E4 (--0-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004CC50 (--0-$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ?Initialize@CFadeWindowLUT@@AEAAXXZ @ 0x14000C320 (-Initialize@CFadeWindowLUT@@AEAAXXZ.c)
 *     ??0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x14000E8EC (--0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z.c)
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessServerInputEndpoint *__fastcall CCrossProcessServerInputEndpoint::CCrossProcessServerInputEndpoint(
        CCrossProcessServerInputEndpoint *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 120) = 0;
  v2 = (char *)this + 488;
  memset_0((char *)this + 488, 0, 0x28uLL);
  v2[40] = 0;
  CCrossProcessBaseServerEndpoint::CCrossProcessBaseServerEndpoint(this, eRender);
  *((_QWORD *)this + 57) = &CCrossProcessInputEndpoint::`vftable';
  *((_QWORD *)this + 58) = this;
  *((_DWORD *)this + 118) = 3;
  *((_DWORD *)this + 119) = 0;
  *((_DWORD *)this + 170) = 0;
  *((_DWORD *)this + 171) = 0;
  *((_DWORD *)this + 172) = 16;
  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 1065353216;
  CFadeWindowLUT::Initialize((CCrossProcessServerInputEndpoint *)((char *)this + 544));
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 135) = 0;
  return this;
}
