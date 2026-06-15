/*
 * XREFs of ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140015880
 * Callers:
 *     ??1?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x1400157F8 (--1-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x14004FA30 (--1-$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14004FA98 (--1-$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x14004FB34 (--1-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14004FB68 (--1-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14004FD14 (--1-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??_G?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400500F0 (--_G-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140050170 (--_G-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_GCCrossProcessBaseServerEndpoint@@UEAAPEAXI@Z @ 0x1400503C0 (--_GCCrossProcessBaseServerEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint(
        CCrossProcessBaseServerEndpoint *this)
{
  char *v2; // rcx
  char *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx

  *(_QWORD *)this = &CCrossProcessBaseServerEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseServerEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 50) = &CCrossProcessBaseServerEndpoint::`vftable';
  v2 = (char *)*((_QWORD *)this + 52);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 52) = 0LL;
  }
  v3 = (char *)*((_QWORD *)this + 53);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 53) = 0LL;
  }
  v4 = (char *)*((_QWORD *)this + 51);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 51) = 0LL;
  }
  v5 = (char *)*((_QWORD *)this + 18);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v5);
    *((_QWORD *)this + 18) = 0LL;
  }
  CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(this);
}
