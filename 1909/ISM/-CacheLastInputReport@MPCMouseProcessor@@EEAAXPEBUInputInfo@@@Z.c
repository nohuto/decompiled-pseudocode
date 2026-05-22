/*
 * XREFs of ?CacheLastInputReport@MPCMouseProcessor@@EEAAXPEBUInputInfo@@@Z @ 0x18000F9A0
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 */

void __fastcall MPCMouseProcessor::CacheLastInputReport(MPCMouseProcessor *this, const struct InputInfo *a2)
{
  memcpy_0((char *)this + 6384, a2, 0x7F0uLL);
  *((_BYTE *)this + 6336) = 1;
  *(_QWORD *)((char *)this + 6340) = 0LL;
  *((_DWORD *)this + 1587) = 0;
}
