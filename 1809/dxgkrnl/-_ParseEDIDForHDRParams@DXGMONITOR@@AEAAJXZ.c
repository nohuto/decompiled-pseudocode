/*
 * XREFs of ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C029C950
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C029DDC8 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x1C004F4EC (-EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z.c)
 *     ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C004F638 (-EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z.c)
 *     ?EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z @ 0x1C004F8EC (-EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z.c)
 *     ?EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C004FB4C (-EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z.c)
 *     ?EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z @ 0x1C004FE2C (-EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z.c)
 *     ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C029AF1C (-_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z.c)
 *     ?_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z @ 0x1C029B054 (-_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z.c)
 *     ?_GetFinalMinLuminanceValueFromRaw@DXGMONITOR@@AEAAKKK@Z @ 0x1C029B0A4 (-_GetFinalMinLuminanceValueFromRaw@DXGMONITOR@@AEAAKKK@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C029DD64 (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_ParseEDIDForHDRParams(DXGMONITOR *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // r14d
  __int64 v6; // rax
  unsigned __int8 *v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // r14d
  unsigned __int8 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  _OWORD *v16; // r14
  __int64 v17; // rax
  int ColorDepths; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r15
  __int64 v23; // rax
  int ColorimetryData; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r15
  __int64 v30; // rax
  int ColorDataRaw; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r14
  __int64 v36; // rax
  __int128 v37; // xmm1
  int HDRCaps; // eax
  __int64 v39; // rdx
  DXGMONITOR *v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r14
  unsigned int FinalMaxLuminanceValueFromRaw; // eax
  int v45; // edx
  DXGMONITOR *v46; // rcx
  int FinalMinLuminanceValueFromRaw; // eax
  unsigned int v48; // edx
  DXGMONITOR *v49; // rcx
  int v50; // eax
  int v51; // r9d
  int v52; // r8d
  __int64 v53; // rax
  int v54; // ecx
  double v55; // xmm0_8
  double v56; // xmm1_8
  int v57; // eax
  double v58; // xmm0_8
  int v59; // eax
  double v60; // xmm0_8
  int v61; // eax
  double v62; // xmm1_8
  int v63; // eax
  double v64; // xmm0_8
  int v65; // eax
  double v66; // xmm1_8
  int v67; // eax
  double v68; // xmm0_8
  _OWORD v70[2]; // [rsp+20h] [rbp-39h] BYREF
  double v71[10]; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v72; // [rsp+C0h] [rbp+67h] BYREF
  unsigned __int8 v73; // [rsp+C5h] [rbp+6Ch]
  unsigned __int8 v74; // [rsp+C6h] [rbp+6Dh]
  unsigned __int8 v75; // [rsp+C7h] [rbp+6Eh]

  if ( !*((_QWORD *)this + 18) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *((_DWORD *)this + 32);
  if ( !v5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
    v5 = *((_DWORD *)this + 32);
  }
  v72 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( v5 )
  {
    v9 = v5 << 7;
    v10 = (unsigned __int8 *)operator new(v9, 0x4D677844u, PagedPool);
    v7 = v10;
    if ( v10 )
    {
      DXGMONITOR::_GetContiguousEDID(this, v9, &v72, v10);
      v8 = v72;
      if ( v9 != v72 )
      {
        v14 = WdLogNewEntry5_WdAssertion(this);
        WdLogEvent5_WdAssertion(v14);
      }
    }
    else
    {
      v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      WdLogEvent5_WdWarning(v15);
    }
  }
  v16 = (_OWORD *)((char *)this + 596);
  if ( v8 )
  {
    ColorDepths = EDID_V1_GetColorDepths(v8, v7, (DXGMONITOR *)((char *)this + 596));
    v22 = ColorDepths;
    if ( ColorDepths < 0 )
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v23 + 24) = v22;
      *(_QWORD *)(v23 + 32) = *((unsigned int *)this + 11);
      WdLogEvent5_WdWarning(v23);
      v70[0] = 0uLL;
      *v16 = 0uLL;
      *((_DWORD *)this + 153) = 0;
    }
    ColorimetryData = EDID_V1_GetColorimetryData(v8, v7, (DXGMONITOR *)((char *)this + 616));
    v29 = ColorimetryData;
    if ( ColorimetryData < 0 )
    {
      v30 = WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
      *(_QWORD *)(v30 + 24) = v29;
      *(_QWORD *)(v30 + 32) = *((unsigned int *)this + 11);
      *((_QWORD *)this + 77) = 0LL;
    }
    if ( *((_DWORD *)this + 164) != 2 )
    {
      ColorDataRaw = EDID_V1_GetColorDataRaw(v8, v7, (struct DISPLAY_COLOR_DATA_RAW *)v70);
      v35 = ColorDataRaw;
      if ( ColorDataRaw < 0 )
      {
        v36 = WdLogNewEntry5_WdWarning(v33, v32, v34);
        *(_QWORD *)(v36 + 24) = v35;
        *(_QWORD *)(v36 + 32) = *((unsigned int *)this + 11);
        WdLogEvent5_WdWarning(v36);
        memset(v70, 0, sizeof(v70));
        v37 = v70[1];
        *((_OWORD *)this + 39) = v70[0];
        *((_OWORD *)this + 40) = v37;
      }
      else
      {
        *((_OWORD *)this + 39) = v70[0];
        *((_OWORD *)this + 40) = v70[1];
        *((_DWORD *)this + 164) = 1;
      }
    }
    HDRCaps = EDID_V1_GetHDRCaps(v8, v7, (struct DISPLAY_HDR_CAPS *)&v72);
    v43 = HDRCaps;
    if ( HDRCaps < 0 )
    {
      v53 = WdLogNewEntry5_WdTrace(v40, v39, v41, v42);
      *(_QWORD *)(v53 + 24) = v43;
      *(_QWORD *)(v53 + 32) = *((unsigned int *)this + 11);
      *(_QWORD *)((char *)this + 660) = 0LL;
      *(_QWORD *)((char *)this + 668) = 0LL;
      *(_QWORD *)((char *)this + 676) = 0LL;
      *((_BYTE *)this + 696) = 0;
    }
    else
    {
      if ( !*((_DWORD *)this + 166) )
      {
        FinalMaxLuminanceValueFromRaw = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(v40, v73);
        v45 = v75;
        *((_DWORD *)this + 166) = FinalMaxLuminanceValueFromRaw;
        FinalMinLuminanceValueFromRaw = DXGMONITOR::_GetFinalMinLuminanceValueFromRaw(
                                          v46,
                                          v45,
                                          FinalMaxLuminanceValueFromRaw);
        v48 = v74;
        *((_DWORD *)this + 165) = FinalMinLuminanceValueFromRaw;
        v50 = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(v49, v48);
        *((_DWORD *)this + 167) = v50;
        *((_DWORD *)this + 170) = v50;
        *((_DWORD *)this + 169) = v51;
        *((_DWORD *)this + 168) = v52;
        *((_BYTE *)this + 688) = 0;
        *((_DWORD *)this + 173) = 1;
      }
      *((_BYTE *)this + 696) = BYTE2(v72);
    }
    v54 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 308LL);
    if ( (v54 & 0x200) != 0 || (v54 & 8) != 0 )
    {
      memset(v71, 0, 0x48uLL);
      if ( (int)EDID_V1_GetDolbyVisionCaps(v8, v7, (struct DISPLAY_DVLL_CAPS *)v71) >= 0 )
      {
        v55 = v71[1] * 10000.0;
        v56 = v71[3] * 1024.0;
        *((_BYTE *)this + 698) = LOBYTE(v71[0]) != 0;
        v57 = (int)v55;
        v58 = v71[2] * 10000.0;
        *((_DWORD *)this + 183) = v57;
        v59 = (int)v58;
        v60 = v71[4];
        *((_DWORD *)this + 184) = v59;
        v61 = (int)(v56 + 0.5);
        v62 = v71[5];
        *((_DWORD *)this + 175) = v61;
        v63 = (int)(v60 * 1024.0 + 0.5);
        v64 = v71[6];
        *((_DWORD *)this + 176) = v63;
        v65 = (int)(v62 * 1024.0 + 0.5);
        v66 = v71[7];
        *((_DWORD *)this + 177) = v65;
        v67 = (int)(v64 * 1024.0 + 0.5);
        v68 = v71[8];
        *((_DWORD *)this + 178) = v67;
        *((_DWORD *)this + 179) = (int)(v66 * 1024.0 + 0.5);
        *((_DWORD *)this + 180) = (int)(v68 * 1024.0 + 0.5);
        *((_DWORD *)this + 181) = *((_DWORD *)this + 162);
        *((_DWORD *)this + 182) = *((_DWORD *)this + 163);
      }
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v17 + 24) = *((unsigned int *)this + 11);
    WdLogEvent5_WdWarning(v17);
    v70[0] = 0uLL;
    *((_QWORD *)this + 77) = 0LL;
    *v16 = 0uLL;
    *((_DWORD *)this + 153) = 0;
    DXGMONITOR::_SetColorPrimariesToBT709(this);
    *((_BYTE *)this + 688) = 0;
    *((_DWORD *)this + 166) = 2700000;
    *((_DWORD *)this + 165) = 5000;
    *((_DWORD *)this + 167) = 2700000;
    *((_DWORD *)this + 169) = 2700000;
    *((_DWORD *)this + 168) = 5000;
    *((_DWORD *)this + 170) = 2700000;
    *((_DWORD *)this + 173) = 3;
    *((_BYTE *)this + 696) = 0;
  }
  if ( v7 )
    operator delete[](v7);
  return 0LL;
}
