/*
 * XREFs of ?PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ @ 0x140011CD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x14002BE40 (WPP_SF_.c)
 */

void __fastcall CCrossProcessInputEndpoint::PulseEndpoint(CCrossProcessInputEndpoint *this)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_0fa8cc4c0c963450e8c5c6460dd26a0f_Traceguids);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 32LL))(*((_QWORD *)this + 1) + 8LL);
}
