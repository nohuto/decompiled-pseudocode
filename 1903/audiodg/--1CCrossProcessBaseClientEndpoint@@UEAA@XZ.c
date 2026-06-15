/*
 * XREFs of ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x14004D8E4
 * Callers:
 *     ??1?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ @ 0x14004D3E0 (--1-$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14004D448 (--1-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14004D580 (--1-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ @ 0x14004D61C (--1-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14004D6D8 (--1-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??_E?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14004DC40 (--_E-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14004DCC0 (--_E-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_GCCrossProcessBaseClientEndpoint@@UEAAPEAXI@Z @ 0x14004E000 (--_GCCrossProcessBaseClientEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCrossProcessBaseClientEndpoint::~CCrossProcessBaseClientEndpoint(
        CCrossProcessBaseClientEndpoint *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 54);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 53);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(this);
}
