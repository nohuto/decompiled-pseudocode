/*
 * XREFs of ??1CAsyncFlushResponse@@UEAA@XZ @ 0x1800CD50C
 * Callers:
 *     ??_ECAsyncFlushResponse@@UEAAPEAXI@Z @ 0x1800CD4D0 (--_ECAsyncFlushResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x18004C7A8 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 */

void __fastcall CAsyncFlushResponse::~CAsyncFlushResponse(CDirtyRegion **this)
{
  *this = (CDirtyRegion *)&CAsyncFlushResponse::`vftable';
  ReleaseInterface<CProcessAttribution>(this + 5);
  *this = (CDirtyRegion *)&CResponseItem::`vftable';
}
