/*
 * XREFs of ?_ParseDisplayIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C02CFA9C
 * Callers:
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02D01BC (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DisplayID_GetColorDataRaw@@YAJPEAUDisplayIDObj@@PEAUDISPLAY_COLOR_DATA_RAW@@PEAW4DISPLAY_NATIVE_COLOR_DEPTH@@PEA_N@Z @ 0x1C0057E18 (-DisplayID_GetColorDataRaw@@YAJPEAUDisplayIDObj@@PEAUDISPLAY_COLOR_DATA_RAW@@PEAW4DISPLAY_NATIVE.c)
 *     ?DisplayID_GetColorimetryData@@YAJPEAUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C0057F64 (-DisplayID_GetColorimetryData@@YAJPEAUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_.c)
 *     ?DisplayID_GetNativeLuminance@@YAJPEAUDisplayIDObj@@PEAK11PEAI@Z @ 0x1C0058014 (-DisplayID_GetNativeLuminance@@YAJPEAUDisplayIDObj@@PEAK11PEAI@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C02D07E4 (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_ParseDisplayIDForHDRParams(DXGMONITOR *this)
{
  int ColorDataRaw; // eax
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  int ColorimetryData; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  int v13; // eax
  char v14; // al
  char v15; // dl
  char v16; // dl
  char v17; // cl
  bool v18; // cl
  __int64 v19; // rax
  int NativeLuminance; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdi
  unsigned int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  __int64 v27; // rax
  _OWORD v29[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v30; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v31; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v32; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v33; // [rsp+98h] [rbp+48h] BYREF

  if ( *((_DWORD *)this + 165) != 2 )
  {
    memset(v29, 0, sizeof(v29));
    ColorDataRaw = DisplayID_GetColorDataRaw(
                     (DXGMONITOR *)((char *)this + 168),
                     (struct DISPLAY_COLOR_DATA_RAW *)v29,
                     (enum DISPLAY_NATIVE_COLOR_DEPTH *)&v31,
                     (bool *)&v30);
    v3 = ColorDataRaw;
    if ( ColorDataRaw < 0 )
    {
      DXGMONITOR::_SetColorPrimariesToBT709(this);
      v7 = WdLogNewEntry5_WdWarning(v5, v4, v6);
      *(_QWORD *)(v7 + 24) = v3;
      *(_QWORD *)(v7 + 32) = *((unsigned int *)this + 11);
      WdLogEvent5_WdWarning(v7);
    }
    else
    {
      *((_DWORD *)this + 157) = LODWORD(v29[0]) >> 2;
      *((_DWORD *)this + 158) = DWORD1(v29[0]) >> 2;
      *((_DWORD *)this + 159) = DWORD2(v29[0]) >> 2;
      *((_DWORD *)this + 160) = HIDWORD(v29[0]) >> 2;
      *((_DWORD *)this + 161) = LODWORD(v29[1]) >> 2;
      *((_DWORD *)this + 162) = DWORD1(v29[1]) >> 2;
      *((_DWORD *)this + 163) = DWORD2(v29[1]) >> 2;
      *((_DWORD *)this + 164) = HIDWORD(v29[1]) >> 2;
      *((_DWORD *)this + 165) = 6;
    }
    LOBYTE(v30) = 0;
    memset(v29, 0, 20);
    ColorimetryData = DisplayID_GetColorimetryData(
                        (DXGMONITOR *)((char *)this + 168),
                        (struct DISPLAYID_COLORIMETRY_DATA *)&v30,
                        (struct DISPLAY_COLOR_DEPTHS *)v29);
    v12 = ColorimetryData;
    if ( ColorimetryData < 0 )
    {
      *(_QWORD *)((char *)this + 620) = 0LL;
      v29[0] = 0uLL;
      *((_BYTE *)this + 700) = 0;
      *(_OWORD *)((char *)this + 600) = 0uLL;
      *((_DWORD *)this + 154) = 0;
      v19 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v19 + 24) = v12;
      *(_QWORD *)(v19 + 32) = *((unsigned int *)this + 11);
      WdLogEvent5_WdWarning(v19);
    }
    else
    {
      v13 = v29[1];
      *(_OWORD *)((char *)this + 600) = v29[0];
      *((_DWORD *)this + 154) = v13;
      v14 = v30;
      v15 = (unsigned __int8)v30 >> 5;
      *((_BYTE *)this + 624) = (v30 & 8) != 0;
      v16 = v15 & 1;
      if ( !v16 || (v17 = 1, (*((_DWORD *)this + 150) & 0x3C) == 0) )
        v17 = 0;
      *((_BYTE *)this + 627) = v17;
      v18 = v16
         && ((*((_DWORD *)this + 151) & 0x3C) != 0
          || (*((_DWORD *)this + 152) & 0x3C) != 0
          || (*((_DWORD *)this + 153) & 0x3C) != 0);
      *((_BYTE *)this + 626) = v18;
      *((_BYTE *)this + 700) = (v14 & 0x40) != 0;
      *((_BYTE *)this + 625) = 0;
      *(_WORD *)((char *)this + 621) = 0;
      *((_BYTE *)this + 623) = 0;
      *((_BYTE *)this + 620) = 0;
    }
    v32 = 0;
    v30 = 0;
    v31 = 0;
    v33 = 0;
    NativeLuminance = DisplayID_GetNativeLuminance((DXGMONITOR *)((char *)this + 168), &v32, &v30, &v31, &v33);
    v23 = NativeLuminance;
    *((_BYTE *)this + 692) = 0;
    if ( NativeLuminance < 0 )
    {
      *((_DWORD *)this + 174) = 3;
      *((_DWORD *)this + 167) = 2700000;
      *((_DWORD *)this + 166) = 5000;
      *((_DWORD *)this + 168) = 2700000;
      *((_DWORD *)this + 170) = 2700000;
      *((_DWORD *)this + 169) = 5000;
      *((_DWORD *)this + 171) = 2700000;
      v27 = WdLogNewEntry5_WdWarning(5000LL, v21, v22);
      *(_QWORD *)(v27 + 24) = v23;
      *(_QWORD *)(v27 + 32) = *((unsigned int *)this + 11);
      WdLogEvent5_WdWarning(v27);
    }
    else
    {
      v24 = v30;
      v25 = v31;
      v26 = v32;
      *((_DWORD *)this + 167) = v30;
      *((_DWORD *)this + 166) = v25;
      *((_DWORD *)this + 168) = v26;
      *((_DWORD *)this + 170) = v24;
      *((_DWORD *)this + 169) = v25;
      *((_DWORD *)this + 171) = v26;
      *((_DWORD *)this + 174) = 7;
    }
  }
  return 0LL;
}
