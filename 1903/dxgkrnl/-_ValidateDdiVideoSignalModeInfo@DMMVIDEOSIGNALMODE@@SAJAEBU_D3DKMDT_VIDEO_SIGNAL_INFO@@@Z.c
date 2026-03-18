/*
 * XREFs of ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0005E00
 * Callers:
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0005DA0 (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ConvertVideoSignalInfo @ 0x1C01724A8 (ConvertVideoSignalInfo.c)
 *     ?_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0176AA8 (-_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 * Callees:
 *     ??$?OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z @ 0x1C0005F30 (--$-OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00DB31C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(__int64 a1, __int64 a2, __int64 a3)
{
  D3DDDI_RATIONAL *v3; // rsi
  unsigned __int64 v4; // rdx
  const struct _D3DKMDT_VIDEO_SIGNAL_INFO *v5; // rdi
  __int64 v6; // rax
  unsigned __int64 Numerator; // rdx
  __int64 Denominator; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  int v16; // [rsp+30h] [rbp+8h] BYREF
  int v17; // [rsp+34h] [rbp+Ch]

  v3 = (D3DDDI_RATIONAL *)(a1 + 20);
  v4 = *(unsigned int *)(a1 + 20);
  v5 = (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)a1;
  if ( *(_QWORD *)(a1 + 20) != 0xFFFFFFFEFFFFFFFEuLL )
  {
    v6 = *(unsigned int *)(a1 + 24);
    if ( !(_DWORD)v6
      || (a1 = 5 * v6, v4 < 5 * v6)
      || (v16 = 500, v17 = 1, (unsigned __int8)operator><_D3DDDI_RATIONAL>(v3, &v16)) )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdError(a1, v4, a3);
      v15[3] = v3->Numerator;
      v15[4] = v5->VSyncFreq.Denominator;
      v15[5] = v5;
      v15[6] = v5->ActiveSize.cx;
      v15[7] = v5->ActiveSize.cy;
      v11 = v15;
      goto LABEL_25;
    }
  }
  Numerator = v5->HSyncFreq.Numerator;
  if ( *(_QWORD *)&v5->HSyncFreq != 0xFFFFFFFEFFFFFFFEuLL )
  {
    Denominator = v5->HSyncFreq.Denominator;
    if ( !(_DWORD)Denominator
      || (a1 = 1000 * Denominator, Numerator < 1000 * Denominator)
      || (v16 = 1000000, v17 = 1, (unsigned __int8)operator><_D3DDDI_RATIONAL>(&v5->HSyncFreq, &v16)) )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdError(a1, Numerator, a3);
      v10[3] = v5->HSyncFreq.Numerator;
      v10[4] = v5->HSyncFreq.Denominator;
      v10[5] = v5->ActiveSize.cx;
      v10[6] = v5->ActiveSize.cy;
      v10[7] = DmmMapVSyncFromRationalToInteger(
                 v3,
                 (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&v5->AdditionalSignalInfo << 29) >> 29),
                 0LL);
      goto LABEL_20;
    }
  }
  if ( v5->PixelRate - 1000000 > 0x253FCA1C0LL )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(9999000000LL, Numerator, a3);
    v10[3] = v5->PixelRate;
    v10[4] = v5->ActiveSize.cx;
    v10[5] = v5->ActiveSize.cy;
    v10[6] = DmmMapVSyncFromRationalToInteger(
               v3,
               (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&v5->AdditionalSignalInfo << 29) >> 29),
               0LL);
LABEL_20:
    v11 = v10;
LABEL_25:
    WdLogEvent5_WdError(v11);
    return 3223192330LL;
  }
  if ( v5->ActiveSize.cx < 0x64 || v5->ActiveSize.cy < 0x64 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(9999000000LL, Numerator, a3);
    v14[3] = v5->ActiveSize.cx;
    v14[4] = v5->ActiveSize.cy;
    v14[5] = v5;
    WdLogEvent5_WdError(v14);
    return 3223192331LL;
  }
  else if ( v5->TotalSize.cx < 0x64 || v5->TotalSize.cy < 0x64 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(9999000000LL, Numerator, a3);
    v13[3] = v5->TotalSize.cx;
    v13[4] = v5->TotalSize.cy;
    v13[5] = v5;
    WdLogEvent5_WdError(v13);
    return 3223192332LL;
  }
  else if ( (unsigned int)(((int)(*(_DWORD *)&v5->AdditionalSignalInfo << 29) >> 29) - 1) > 2 )
  {
    v12 = WdLogNewEntry5_WdError(9999000000LL, Numerator, a3);
    *(_QWORD *)(v12 + 24) = (int)(*(_DWORD *)&v5->AdditionalSignalInfo << 29) >> 29;
    *(_QWORD *)(v12 + 32) = v5;
    WdLogEvent5_WdError(v12);
    return 3223192402LL;
  }
  else
  {
    return 0LL;
  }
}
