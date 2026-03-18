/*
 * XREFs of _PopulateDisplayModeFromPresentPath @ 0x1C00E3B50
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C00E2DB0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C020345C (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000F638 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C00E3C90 (ConvertDMMScalingToGdiScaling.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00E3D10 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall PopulateDisplayModeFromPresentPath(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        struct _D3DDDI_RATIONAL *a9,
        unsigned __int8 *a10)
{
  __int64 v11; // rbp
  struct _D3DDDI_RATIONAL v14; // rax
  unsigned int v15; // edx
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax

  v11 = a4;
  *a10 = 0;
  a9[1].Numerator = a1[7];
  a9->Numerator = a1[4];
  a9->Denominator = a1[5];
  a9[3].Numerator = (int)(a2[14] << 29) >> 29;
  a9[4].Denominator = a9[4].Denominator & 0xFFFFFFFC | a5 & 1;
  a9[5].Numerator = (unsigned __int8)((a7 != 0 ? 0x80 : 0) | a8 & 0xF | (a6 != 0 ? 0x40 : 0));
  v14 = *(struct _D3DDDI_RATIONAL *)(a2 + 7);
  a9[2] = v14;
  v15 = a2[14];
  if ( ((v15 >> 3) & 0x3F) != 0 )
  {
    a9[2].Denominator = ((v15 >> 3) & 0x3F) * v14.Denominator;
    v15 = a2[14];
  }
  a9[1].Denominator = DmmMapVSyncFromRationalToInteger(
                        a9 + 2,
                        (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(v15 << 29) >> 29),
                        a10);
  ConvertDMMScalingToGdiScaling(a3, &a9[4]);
  result = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v11) - 1;
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result - 1);
    if ( !(_DWORD)result )
    {
      a9[3].Denominator = 2;
      goto LABEL_8;
    }
    result = (unsigned int)(result - 1);
    if ( !(_DWORD)result )
    {
      a9[3].Denominator = 3;
      goto LABEL_8;
    }
    if ( (_DWORD)result == 1 )
    {
      a9[3].Denominator = 4;
      goto LABEL_8;
    }
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v20[3] = v11;
    v20[4] = *a1;
    v20[5] = *a2;
    result = WdLogEvent5_WdWarning(v20);
  }
  a9[3].Denominator = 1;
LABEL_8:
  if ( a1[1] == 3 )
  {
LABEL_16:
    a9[5].Numerator |= 0x10u;
    a9[4].Denominator |= 1u;
    return result;
  }
  if ( a1[1] == 4 )
  {
    a9[5].Numerator |= 0x20u;
    goto LABEL_16;
  }
  return result;
}
