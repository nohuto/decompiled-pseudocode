/*
 * XREFs of ?PulseEndpoint@CCrossProcessOutputEndpoint@@UEAAXXZ @ 0x1400520A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x140032818 (WPP_SF_.c)
 */

void __fastcall CCrossProcessOutputEndpoint::PulseEndpoint(CCrossProcessOutputEndpoint *this)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_8c7d5060b2be33924f816ff2c067e6b5_Traceguids);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 32LL))(*((_QWORD *)this + 1) + 8LL);
}
