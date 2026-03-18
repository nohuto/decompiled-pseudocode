/*
 * XREFs of ??1CAsyncFlushResponse@@UEAA@XZ @ 0x1800719F0
 * Callers:
 *     ??_ECAsyncFlushResponse@@UEAAPEAXI@Z @ 0x1800719B0 (--_ECAsyncFlushResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x180028D00 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 */

void __fastcall CAsyncFlushResponse::~CAsyncFlushResponse(CMILRefCountBase **this)
{
  *this = (CMILRefCountBase *)&CAsyncFlushResponse::`vftable';
  ReleaseInterface<CConnection>(this + 5);
  *this = (CMILRefCountBase *)&CResponseItem::`vftable';
}
