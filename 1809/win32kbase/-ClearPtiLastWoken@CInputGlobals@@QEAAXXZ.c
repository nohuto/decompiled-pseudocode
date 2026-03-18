/*
 * XREFs of ?ClearPtiLastWoken@CInputGlobals@@QEAAXXZ @ 0x1C0004B30
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 */

void __fastcall CInputGlobals::ClearPtiLastWoken(CInputGlobals *this)
{
  RIMLockExclusive();
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 0;
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
