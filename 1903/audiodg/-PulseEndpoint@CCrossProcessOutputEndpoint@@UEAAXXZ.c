/*
 * XREFs of ?PulseEndpoint@CCrossProcessOutputEndpoint@@UEAAXXZ @ 0x14004FD50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x14002BF00 (WPP_SF_.c)
 */

void __fastcall CCrossProcessOutputEndpoint::PulseEndpoint(CCrossProcessOutputEndpoint *this)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_0fa8cc4c0c963450e8c5c6460dd26a0f_Traceguids);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 32LL))(*((_QWORD *)this + 1) + 8LL);
}
