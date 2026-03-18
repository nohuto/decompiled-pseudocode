/*
 * XREFs of ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C0171D68
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C017001C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C00200D4 (-EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z.c)
 *     ?EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z @ 0x1C0020170 (-EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z.c)
 *     ?EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z @ 0x1C00201EC (-EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z.c)
 *     ?EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x1C00216A0 (-EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C0056740 (-EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z.c)
 *     ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C0149100 (-_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z.c)
 *     ?_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z @ 0x1C02CF380 (-_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z.c)
 *     ?_GetFinalMinLuminanceValueFromRaw@DXGMONITOR@@AEAAKKK@Z @ 0x1C02CF3D0 (-_GetFinalMinLuminanceValueFromRaw@DXGMONITOR@@AEAAKKK@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C02D07E4 (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_ParseEDIDForHDRParams(DXGMONITOR *this, __int64 a2, __int64 a3)
{
  int v4; // esi
  unsigned __int8 *v5; // rdi
  unsigned int v6; // r14d
  unsigned int v7; // esi
  unsigned __int8 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _OWORD *v12; // rsi
  int ColorDepths; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r15
  __int64 v18; // rax
  int ColorimetryData; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r15
  __int64 v23; // rax
  int ColorDataRaw; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rsi
  int HDRCaps; // eax
  __int64 v30; // rdx
  DXGMONITOR *v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rax
  int v34; // ecx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int128 v42; // xmm1
  unsigned int FinalMaxLuminanceValueFromRaw; // eax
  unsigned int v44; // edx
  DXGMONITOR *v45; // rcx
  unsigned int FinalMinLuminanceValueFromRaw; // eax
  unsigned int v47; // edx
  DXGMONITOR *v48; // rcx
  unsigned int v49; // eax
  int v50; // r9d
  int v51; // r8d
  double v52; // xmm0_8
  double v53; // xmm1_8
  int v54; // eax
  double v55; // xmm0_8
  int v56; // eax
  double v57; // xmm0_8
  int v58; // eax
  double v59; // xmm1_8
  int v60; // eax
  double v61; // xmm0_8
  int v62; // eax
  double v63; // xmm1_8
  int v64; // eax
  double v65; // xmm0_8
  _OWORD v66[2]; // [rsp+20h] [rbp-39h] BYREF
  double v67[10]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v68; // [rsp+C0h] [rbp+67h] BYREF

  if ( !*((_QWORD *)this + 18) )
  {
    v36 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v36);
  }
  v4 = *((_DWORD *)this + 32);
  if ( !v4 )
  {
    v37 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v37);
    v4 = *((_DWORD *)this + 32);
  }
  LODWORD(v68) = 0;
  v5 = 0LL;
  v6 = 0;
  if ( v4 )
  {
    v7 = v4 << 7;
    v8 = (unsigned __int8 *)operator new[](v7, 0x4D677844u, PagedPool);
    v5 = v8;
    if ( v8 )
    {
      DXGMONITOR::_GetContiguousEDID(this, v7, (unsigned int *)&v68, v8);
      v6 = v68;
      if ( v7 != (_DWORD)v68 )
      {
        v38 = WdLogNewEntry5_WdAssertion(this, a2);
        WdLogEvent5_WdAssertion(v38);
      }
    }
    else
    {
      v39 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      WdLogEvent5_WdWarning(v39);
    }
  }
  v12 = (_OWORD *)((char *)this + 600);
  if ( v6 )
  {
    ColorDepths = EDID_V1_GetColorDepths(v6, v5, (DXGMONITOR *)((char *)this + 600));
    v17 = ColorDepths;
    if ( ColorDepths < 0 )
    {
      v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v18 + 24) = v17;
      *(_QWORD *)(v18 + 32) = *((unsigned int *)this + 11);
      WdLogEvent5_WdWarning(v18);
      v66[0] = 0uLL;
      *v12 = 0uLL;
      *((_DWORD *)this + 154) = 0;
    }
    ColorimetryData = EDID_V1_GetColorimetryData(v6, v5, (DXGMONITOR *)((char *)this + 620));
    v22 = ColorimetryData;
    if ( ColorimetryData < 0 )
    {
      v23 = WdLogNewEntry5_WdTrace(v21, v20);
      *(_QWORD *)(v23 + 24) = v22;
      *(_QWORD *)(v23 + 32) = *((unsigned int *)this + 11);
      *(_QWORD *)((char *)this + 620) = 0LL;
    }
    if ( *((_DWORD *)this + 165) != 2 )
    {
      memset(v66, 0, sizeof(v66));
      ColorDataRaw = EDID_V1_GetColorDataRaw(v6, v5, (struct DISPLAY_COLOR_DATA_RAW *)v66);
      v28 = ColorDataRaw;
      if ( ColorDataRaw < 0 )
      {
        v41 = WdLogNewEntry5_WdWarning(v26, v25, v27);
        *(_QWORD *)(v41 + 24) = v28;
        *(_QWORD *)(v41 + 32) = *((unsigned int *)this + 11);
        WdLogEvent5_WdWarning(v41);
        memset(v66, 0, sizeof(v66));
        v42 = v66[1];
        *(_OWORD *)((char *)this + 628) = v66[0];
        *(_OWORD *)((char *)this + 644) = v42;
      }
      else
      {
        *(_OWORD *)((char *)this + 628) = v66[0];
        *(_OWORD *)((char *)this + 644) = v66[1];
        *((_DWORD *)this + 165) = 1;
      }
    }
    v68 = 0LL;
    HDRCaps = EDID_V1_GetHDRCaps(v6, v5, (struct DISPLAY_HDR_CAPS *)&v68);
    v32 = HDRCaps;
    if ( HDRCaps >= 0 )
    {
      if ( !*((_DWORD *)this + 167) )
      {
        FinalMaxLuminanceValueFromRaw = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(v31, BYTE5(v68));
        v44 = HIBYTE(v68);
        *((_DWORD *)this + 167) = FinalMaxLuminanceValueFromRaw;
        FinalMinLuminanceValueFromRaw = DXGMONITOR::_GetFinalMinLuminanceValueFromRaw(
                                          v45,
                                          v44,
                                          FinalMaxLuminanceValueFromRaw);
        v47 = BYTE6(v68);
        *((_DWORD *)this + 166) = FinalMinLuminanceValueFromRaw;
        v49 = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(v48, v47);
        *((_DWORD *)this + 168) = v49;
        *((_DWORD *)this + 171) = v49;
        *((_DWORD *)this + 170) = v50;
        *((_DWORD *)this + 169) = v51;
        *((_BYTE *)this + 692) = 0;
        *((_DWORD *)this + 174) = 1;
      }
      *((_BYTE *)this + 700) = BYTE2(v68);
    }
    else
    {
      v33 = WdLogNewEntry5_WdTrace(v31, v30);
      *(_QWORD *)(v33 + 24) = v32;
      *(_QWORD *)(v33 + 32) = *((unsigned int *)this + 11);
      *((_QWORD *)this + 83) = 0LL;
      *((_QWORD *)this + 84) = 0LL;
      *((_QWORD *)this + 85) = 0LL;
      *((_BYTE *)this + 700) = 0;
    }
    v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 308LL);
    if ( (v34 & 0x200) != 0 || (v34 & 8) != 0 )
    {
      memset(v67, 0, 0x48uLL);
      if ( (int)EDID_V1_GetDolbyVisionCaps(v6, v5, (struct DISPLAY_DVLL_CAPS *)v67) >= 0 )
      {
        v52 = v67[1] * 10000.0;
        v53 = v67[3] * 1024.0;
        *((_BYTE *)this + 702) = LOBYTE(v67[0]) != 0;
        v54 = (int)v52;
        v55 = v67[2] * 10000.0;
        *((_DWORD *)this + 184) = v54;
        v56 = (int)v55;
        v57 = v67[4];
        *((_DWORD *)this + 185) = v56;
        v58 = (int)(v53 + 0.5);
        v59 = v67[5];
        *((_DWORD *)this + 176) = v58;
        v60 = (int)(v57 * 1024.0 + 0.5);
        v61 = v67[6];
        *((_DWORD *)this + 177) = v60;
        v62 = (int)(v59 * 1024.0 + 0.5);
        v63 = v67[7];
        *((_DWORD *)this + 178) = v62;
        v64 = (int)(v61 * 1024.0 + 0.5);
        v65 = v67[8];
        *((_DWORD *)this + 179) = v64;
        *((_DWORD *)this + 180) = (int)(v63 * 1024.0 + 0.5);
        *((_DWORD *)this + 181) = (int)(v65 * 1024.0 + 0.5);
        *((_DWORD *)this + 182) = *((_DWORD *)this + 163);
        *((_DWORD *)this + 183) = *((_DWORD *)this + 164);
      }
    }
  }
  else
  {
    v40 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v40 + 24) = *((unsigned int *)this + 11);
    WdLogEvent5_WdWarning(v40);
    *(_QWORD *)((char *)this + 620) = 0LL;
    v66[0] = 0uLL;
    *v12 = 0uLL;
    *((_DWORD *)this + 154) = 0;
    DXGMONITOR::_SetColorPrimariesToBT709(this);
    *((_BYTE *)this + 692) = 0;
    *((_DWORD *)this + 167) = 2700000;
    *((_DWORD *)this + 166) = 5000;
    *((_DWORD *)this + 168) = 2700000;
    *((_DWORD *)this + 170) = 2700000;
    *((_DWORD *)this + 169) = 5000;
    *((_DWORD *)this + 171) = 2700000;
    *((_DWORD *)this + 174) = 3;
    *((_BYTE *)this + 700) = 0;
  }
  if ( v5 )
    operator delete[](v5);
  return 0LL;
}
