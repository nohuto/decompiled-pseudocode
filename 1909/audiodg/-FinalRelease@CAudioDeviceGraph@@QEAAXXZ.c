/*
 * XREFs of ?FinalRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x14003780C
 * Callers:
 *     ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14002611C (--1-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14002617C (--1-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     WPP_SF_ @ 0x14002BE40 (WPP_SF_.c)
 */

void __fastcall CAudioDeviceGraph::FinalRelease(CAudioDeviceGraph *this)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids);
  }
}
