/*
 * XREFs of ?SetLuminanceValuesWithBrightnessCompensation@DXGMONITOR@@QEAAJXZ @ 0x1C0297170
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C013E8B4 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     MonitorSetAdvancedColorParams @ 0x1C0291664 (MonitorSetAdvancedColorParams.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C0291ABC (MonitorSetSDRWhiteLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::SetLuminanceValuesWithBrightnessCompensation(DXGMONITOR *this)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rax
  int v5; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  float v9; // xmm2_4
  signed int v10; // edx
  float v11; // xmm0_4

  if ( (unsigned int)(80 * *((_DWORD *)this + 171)) < 0x3E8 )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = *((_DWORD *)this + 185);
  if ( !v3 )
  {
    if ( *((_BYTE *)this + 688) )
    {
      v4 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v4);
    }
    *((_DWORD *)this + 169) = *((_DWORD *)this + 166);
    *((_DWORD *)this + 170) = *((_DWORD *)this + 167);
    v5 = *((_DWORD *)this + 165);
LABEL_7:
    *((_DWORD *)this + 168) = v5;
    return 0LL;
  }
  v7 = *((unsigned int *)this + 171);
  if ( (unsigned int)(80 * v7) >= 0x3E8 )
  {
    if ( *((_BYTE *)this + 688) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v8);
      v3 = *((_DWORD *)this + 185);
      LODWORD(v7) = *((_DWORD *)this + 171);
    }
    v9 = (float)v3 / (float)(80 * (int)v7 / 0x3E8u);
    v10 = *((_DWORD *)this + 167) / 0x2710u;
    *((_DWORD *)this + 169) = (int)(float)((float)((float)(*((_DWORD *)this + 166) / 0x2710u) / v9) * 10000.0);
    v11 = (float)(*((_DWORD *)this + 165) / 0x2710u);
    *((_DWORD *)this + 170) = (int)(float)((float)((float)v10 / v9) * 10000.0);
    v5 = (int)(float)((float)(v11 / v9) * 10000.0);
    goto LABEL_7;
  }
  return 3221225473LL;
}
