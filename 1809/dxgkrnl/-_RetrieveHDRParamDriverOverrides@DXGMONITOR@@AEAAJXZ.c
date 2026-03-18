/*
 * XREFs of ?_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ @ 0x1C029D420
 * Callers:
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029CE54 (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C029DDC8 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     DpiGetMonitorColorimetryOverride @ 0x1C0274178 (DpiGetMonitorColorimetryOverride.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveHDRParamDriverOverrides(DXGMONITOR *this)
{
  int MonitorColorimetryOverride; // r9d
  unsigned int v3; // edx
  char v4; // r8
  unsigned int v5; // ecx
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // edx
  int v9; // eax
  __int128 v11; // [rsp+20h] [rbp-40h] BYREF
  int v12; // [rsp+30h] [rbp-30h]
  int v13; // [rsp+34h] [rbp-2Ch]
  int v14; // [rsp+38h] [rbp-28h]
  int v15; // [rsp+3Ch] [rbp-24h]
  int v16; // [rsp+40h] [rbp-20h]
  int v17; // [rsp+44h] [rbp-1Ch]
  int v18; // [rsp+48h] [rbp-18h]
  unsigned int v19; // [rsp+4Ch] [rbp-14h]
  int v20; // [rsp+50h] [rbp-10h]

  MonitorColorimetryOverride = DpiGetMonitorColorimetryOverride(
                                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 192LL),
                                 *((_DWORD *)this + 11),
                                 &v11);
  if ( MonitorColorimetryOverride >= 0 )
  {
    *((_DWORD *)this + 154) = 0;
    *((_WORD *)this + 310) = 0;
    v3 = v19;
    v4 = v20;
    v5 = v19 >> 2;
    *((_DWORD *)this + 151) = (v19 >> 14) & 0x3F;
    *((_DWORD *)this + 149) = v5 & 0x3F;
    *((_DWORD *)this + 152) = (v3 >> 20) & 0x3F;
    *((_DWORD *)this + 150) = (v3 >> 8) & 0x3F;
    v6 = v16;
    *((_BYTE *)this + 622) = v4 & 1;
    *((_BYTE *)this + 623) = (v4 & 2) != 0;
    v7 = v11;
    *((_DWORD *)this + 153) = v3 >> 26;
    v8 = v17;
    *((_QWORD *)this + 78) = __PAIR64__(DWORD1(v11), v7);
    *((_QWORD *)this + 79) = *((_QWORD *)&v11 + 1);
    *((_DWORD *)this + 160) = v12;
    *((_DWORD *)this + 161) = v13;
    *((_DWORD *)this + 162) = v14;
    *((_DWORD *)this + 163) = v15;
    v9 = v18;
    *((_DWORD *)this + 167) = v18;
    *((_DWORD *)this + 170) = v9;
    *((_DWORD *)this + 164) = 2;
    *((_DWORD *)this + 166) = v8;
    *((_DWORD *)this + 165) = v6;
    *((_DWORD *)this + 169) = v8;
    *((_DWORD *)this + 168) = v6;
    *((_BYTE *)this + 688) = 0;
    *((_DWORD *)this + 173) = 2;
    *((_BYTE *)this + 696) = (v4 & 4) != 0;
  }
  return (unsigned int)MonitorColorimetryOverride;
}
