/*
 * XREFs of ?RecordGlitch@CTelemetryTouchLatencyAnalysis@@QEAAX_KI@Z @ 0x1800A5B0C
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x1800A52D4 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     McTemplateU0zxqqqqhqttxq @ 0x180192AC4 (McTemplateU0zxqqqqhqttxq.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::RecordGlitch(
        CTelemetryTouchLatencyAnalysis *this,
        unsigned __int64 a2,
        unsigned __int16 a3)
{
  __int64 v3; // rbp
  char *v4; // rbx
  unsigned __int16 v7; // ax

  v3 = 10LL;
  v4 = (char *)this + 136;
  do
  {
    if ( *((_DWORD *)v4 - 10) && a2 >= *(_QWORD *)v4 )
    {
      if ( a2 == *(_QWORD *)v4 )
      {
        v4[54] += a3;
        v4[53] = 1;
      }
      else
      {
        v7 = *((_WORD *)v4 + 66);
        ++*((_WORD *)v4 + 65);
        *((_WORD *)v4 + 67) += a3;
        if ( v7 <= a3 )
          v7 = a3;
        *((_WORD *)v4 + 66) = v7;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
        McTemplateU0zxqqqqhqttxq(
          (unsigned __int8)*(v4 - 44),
          (unsigned __int8)*(v4 - 8),
          *((_QWORD *)v4 - 14),
          *((_QWORD *)v4 - 15),
          *((_DWORD *)v4 - 23),
          *((_DWORD *)v4 - 22),
          *((_DWORD *)v4 - 21),
          *((_DWORD *)v4 - 20),
          *(v4 - 8),
          *((_DWORD *)v4 - 14),
          *(v4 - 44),
          v4[12],
          a2,
          a3);
    }
    v4 += 312;
    --v3;
  }
  while ( v3 );
}
