/*
 * XREFs of ??1CAsyncFlushResponse@@UEAA@XZ @ 0x1800CD61C
 * Callers:
 *     ??_ECAsyncFlushResponse@@UEAAPEAXI@Z @ 0x1800CD5E0 (--_ECAsyncFlushResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x180040280 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 */

void __fastcall CAsyncFlushResponse::~CAsyncFlushResponse(CDirtyRegion **this)
{
  *this = (CDirtyRegion *)&CAsyncFlushResponse::`vftable';
  ReleaseInterface<CProcessAttribution>(this + 5);
  *this = (CDirtyRegion *)&CResponseItem::`vftable';
}
