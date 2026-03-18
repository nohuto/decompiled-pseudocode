/*
 * XREFs of ?_ParseDisplayIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C029BC90
 * Callers:
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029CE54 (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?DisplayID_GetColorDataRaw@@YAJPEAUDisplayIDObj@@PEAUDISPLAY_COLOR_DATA_RAW@@PEAW4DISPLAY_NATIVE_COLOR_DEPTH@@PEA_N@Z @ 0x1C00514C8 (-DisplayID_GetColorDataRaw@@YAJPEAUDisplayIDObj@@PEAUDISPLAY_COLOR_DATA_RAW@@PEAW4DISPLAY_NATIVE.c)
 *     ?DisplayID_GetColorimetryData@@YAJPEAUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C0051614 (-DisplayID_GetColorimetryData@@YAJPEAUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_.c)
 *     ?DisplayID_GetNativeLuminance@@YAJPEAUDisplayIDObj@@PEAK11PEAI@Z @ 0x1C00516C4 (-DisplayID_GetNativeLuminance@@YAJPEAUDisplayIDObj@@PEAK11PEAI@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C029DD64 (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_ParseDisplayIDForHDRParams(DXGMONITOR *this)
{
  struct DisplayIDObj *v2; // rsi
  int ColorDataRaw; // eax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  int ColorimetryData; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdi
  unsigned int v13; // eax
  char v14; // al
  char v15; // dl
  char v16; // dl
  bool v17; // cl
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
  __int128 v29; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v30; // [rsp+40h] [rbp-18h]
  unsigned int v31; // [rsp+44h] [rbp-14h]
  unsigned int v32; // [rsp+48h] [rbp-10h]
  unsigned int v33; // [rsp+4Ch] [rbp-Ch]
  unsigned int v34; // [rsp+80h] [rbp+28h] BYREF
  unsigned int v35; // [rsp+88h] [rbp+30h] BYREF
  unsigned int v36; // [rsp+90h] [rbp+38h] BYREF
  unsigned int v37; // [rsp+98h] [rbp+40h] BYREF

  if ( *((_DWORD *)this + 164) != 2 )
  {
    v2 = (DXGMONITOR *)((char *)this + 168);
    ColorDataRaw = DisplayID_GetColorDataRaw(
                     (DXGMONITOR *)((char *)this + 168),
                     (struct DISPLAY_COLOR_DATA_RAW *)&v29,
                     (enum DISPLAY_NATIVE_COLOR_DEPTH *)&v35,
                     (bool *)&v34);
    v4 = ColorDataRaw;
    if ( ColorDataRaw < 0 )
    {
      DXGMONITOR::_SetColorPrimariesToBT709(this);
      v8 = WdLogNewEntry5_WdWarning(v6, v5, v7);
      *(_QWORD *)(v8 + 24) = v4;
      *(_QWORD *)(v8 + 32) = *((unsigned int *)this + 11);
      WdLogEvent5_WdWarning(v8);
    }
    else
    {
      *((_DWORD *)this + 156) = (unsigned int)v29 >> 2;
      *((_DWORD *)this + 157) = DWORD1(v29) >> 2;
      *((_DWORD *)this + 158) = DWORD2(v29) >> 2;
      *((_DWORD *)this + 159) = HIDWORD(v29) >> 2;
      *((_DWORD *)this + 160) = v30 >> 2;
      *((_DWORD *)this + 161) = v31 >> 2;
      *((_DWORD *)this + 162) = v32 >> 2;
      *((_DWORD *)this + 163) = v33 >> 2;
      *((_DWORD *)this + 164) = 6;
    }
    ColorimetryData = DisplayID_GetColorimetryData(
                        v2,
                        (struct DISPLAYID_COLORIMETRY_DATA *)&v34,
                        (struct DISPLAY_COLOR_DEPTHS *)&v29);
    v12 = ColorimetryData;
    if ( ColorimetryData < 0 )
    {
      v29 = 0uLL;
      *((_QWORD *)this + 77) = 0LL;
      *((_BYTE *)this + 696) = 0;
      *(_OWORD *)((char *)this + 596) = 0uLL;
      *((_DWORD *)this + 153) = 0;
      v19 = WdLogNewEntry5_WdWarning(0LL, v10, v11);
      *(_QWORD *)(v19 + 24) = v12;
      *(_QWORD *)(v19 + 32) = *((unsigned int *)this + 11);
      WdLogEvent5_WdWarning(v19);
    }
    else
    {
      v13 = v30;
      *(_OWORD *)((char *)this + 596) = v29;
      *((_DWORD *)this + 153) = v13;
      v14 = v34;
      v15 = (unsigned __int8)v34 >> 5;
      *((_BYTE *)this + 620) = (v34 & 8) != 0;
      v16 = v15 & 1;
      v17 = v16 && (*((_DWORD *)this + 149) & 0x3C) != 0;
      *((_BYTE *)this + 623) = v17;
      v18 = v16
         && ((*((_DWORD *)this + 150) & 0x3C) != 0
          || (*((_DWORD *)this + 151) & 0x3C) != 0
          || (*((_DWORD *)this + 152) & 0x3C) != 0);
      *(_WORD *)((char *)this + 617) = 0;
      *((_BYTE *)this + 622) = v18;
      *((_BYTE *)this + 696) = (v14 & 0x40) != 0;
      *((_BYTE *)this + 621) = 0;
      *((_BYTE *)this + 619) = 0;
      *((_BYTE *)this + 616) = 0;
    }
    v36 = 0;
    v34 = 0;
    v35 = 0;
    v37 = 0;
    NativeLuminance = DisplayID_GetNativeLuminance(v2, &v36, &v34, &v35, &v37);
    v23 = NativeLuminance;
    *((_BYTE *)this + 688) = 0;
    if ( NativeLuminance < 0 )
    {
      *((_DWORD *)this + 173) = 3;
      *((_DWORD *)this + 166) = 2700000;
      *((_DWORD *)this + 165) = 5000;
      *((_DWORD *)this + 167) = 2700000;
      *((_DWORD *)this + 169) = 2700000;
      *((_DWORD *)this + 168) = 5000;
      *((_DWORD *)this + 170) = 2700000;
      v27 = WdLogNewEntry5_WdWarning(5000LL, v21, v22);
      *(_QWORD *)(v27 + 24) = v23;
      *(_QWORD *)(v27 + 32) = *((unsigned int *)this + 11);
      WdLogEvent5_WdWarning(v27);
    }
    else
    {
      v24 = v34;
      v25 = v35;
      v26 = v36;
      *((_DWORD *)this + 166) = v34;
      *((_DWORD *)this + 165) = v25;
      *((_DWORD *)this + 167) = v26;
      *((_DWORD *)this + 169) = v24;
      *((_DWORD *)this + 168) = v25;
      *((_DWORD *)this + 170) = v26;
      *((_DWORD *)this + 173) = 7;
    }
  }
  return 0LL;
}
