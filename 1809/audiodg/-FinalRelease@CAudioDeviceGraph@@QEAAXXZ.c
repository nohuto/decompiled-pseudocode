/*
 * XREFs of ?FinalRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x1400018BC
 * Callers:
 *     ??1?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x1400018E8 (--1-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14002DF98 (--1-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioDeviceGraph::FinalRelease(CAudioDeviceGraph *this)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_c996c122903733bc288a845a1996e411_Traceguids);
  }
}
