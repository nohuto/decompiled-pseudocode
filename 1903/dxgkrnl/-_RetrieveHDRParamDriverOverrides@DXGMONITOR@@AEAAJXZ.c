/*
 * XREFs of ?_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ @ 0x1C016FF0C
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C017001C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02D01BC (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DpiGetMonitorColorimetryOverride @ 0x1C016FF84 (DpiGetMonitorColorimetryOverride.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveHDRParamDriverOverrides(DXGMONITOR *this)
{
  int MonitorColorimetryOverride; // r9d
  unsigned int v4; // edx
  char v5; // r8
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  _DWORD v11[14]; // [rsp+20h] [rbp-40h] BYREF

  memset(v11, 0, 0x34uLL);
  MonitorColorimetryOverride = DpiGetMonitorColorimetryOverride(
                                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 192LL),
                                 *((unsigned int *)this + 11),
                                 v11);
  if ( MonitorColorimetryOverride >= 0 )
  {
    *((_DWORD *)this + 155) = 0;
    *((_WORD *)this + 312) = 0;
    v4 = v11[11];
    v5 = v11[12];
    v6 = v11[11] >> 2;
    *((_DWORD *)this + 152) = (v11[11] >> 14) & 0x3F;
    *((_DWORD *)this + 150) = v6 & 0x3F;
    *((_DWORD *)this + 153) = (v4 >> 20) & 0x3F;
    *((_DWORD *)this + 151) = (v4 >> 8) & 0x3F;
    v7 = v11[8];
    *((_BYTE *)this + 626) = v5 & 1;
    *((_BYTE *)this + 627) = (v5 & 2) != 0;
    v8 = v11[0];
    *((_DWORD *)this + 154) = v4 >> 26;
    v9 = v11[9];
    *((_DWORD *)this + 157) = v8;
    *((_DWORD *)this + 158) = v11[1];
    *((_DWORD *)this + 159) = v11[2];
    *((_DWORD *)this + 160) = v11[3];
    *((_DWORD *)this + 161) = v11[4];
    *((_DWORD *)this + 162) = v11[5];
    *((_DWORD *)this + 163) = v11[6];
    *((_DWORD *)this + 164) = v11[7];
    v10 = v11[10];
    *((_DWORD *)this + 168) = v11[10];
    *((_DWORD *)this + 171) = v10;
    *((_DWORD *)this + 165) = 2;
    *((_DWORD *)this + 167) = v9;
    *((_DWORD *)this + 166) = v7;
    *((_DWORD *)this + 170) = v9;
    *((_DWORD *)this + 169) = v7;
    *((_BYTE *)this + 692) = 0;
    *((_DWORD *)this + 174) = 2;
    *((_BYTE *)this + 700) = (v5 & 4) != 0;
  }
  return (unsigned int)MonitorColorimetryOverride;
}
