/*
 * XREFs of ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000A924
 * Callers:
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000A8C4 (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00C5798 (-_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ConvertVideoSignalInfo @ 0x1C029A10C (ConvertVideoSignalInfo.c)
 * Callees:
 *     ??$?OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z @ 0x1C00171F4 (--$-OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00E3D10 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(__int64 a1)
{
  D3DDDI_RATIONAL *v1; // rsi
  unsigned __int64 v2; // rdx
  const struct _D3DKMDT_VIDEO_SIGNAL_INFO *v3; // rdi
  __int64 v4; // rax
  __int64 Denominator; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  int v13; // [rsp+30h] [rbp+8h] BYREF
  int v14; // [rsp+34h] [rbp+Ch]

  v1 = (D3DDDI_RATIONAL *)(a1 + 20);
  v2 = *(unsigned int *)(a1 + 20);
  v3 = (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)a1;
  if ( *(_QWORD *)(a1 + 20) != 0xFFFFFFFEFFFFFFFEuLL )
  {
    v4 = *(unsigned int *)(a1 + 24);
    if ( !(_DWORD)v4
      || (a1 = 5 * v4, v2 < 5 * v4)
      || (v13 = 500, v14 = 1, (unsigned __int8)operator><_D3DDDI_RATIONAL>(v1, &v13)) )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v12[3] = v1->Numerator;
      v12[4] = v3->VSyncFreq.Denominator;
      v12[5] = v3;
      v12[6] = v3->ActiveSize.cx;
      v12[7] = v3->ActiveSize.cy;
      v8 = v12;
      goto LABEL_25;
    }
  }
  if ( *(_QWORD *)&v3->HSyncFreq != 0xFFFFFFFEFFFFFFFEuLL )
  {
    Denominator = v3->HSyncFreq.Denominator;
    if ( !(_DWORD)Denominator
      || (a1 = 1000 * Denominator, v3->HSyncFreq.Numerator < (unsigned __int64)(1000 * Denominator))
      || (v13 = 1000000, v14 = 1, (unsigned __int8)operator><_D3DDDI_RATIONAL>(&v3->HSyncFreq, &v13)) )
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v7[3] = v3->HSyncFreq.Numerator;
      v7[4] = v3->HSyncFreq.Denominator;
      v7[5] = v3->ActiveSize.cx;
      v7[6] = v3->ActiveSize.cy;
      v7[7] = DmmMapVSyncFromRationalToInteger(
                v1,
                (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&v3->AdditionalSignalInfo << 29) >> 29),
                0LL);
      goto LABEL_20;
    }
  }
  if ( v3->PixelRate - 1000000 > 0x253FCA1C0LL )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(9999000000LL);
    v7[3] = v3->PixelRate;
    v7[4] = v3->ActiveSize.cx;
    v7[5] = v3->ActiveSize.cy;
    v7[6] = DmmMapVSyncFromRationalToInteger(
              v1,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&v3->AdditionalSignalInfo << 29) >> 29),
              0LL);
LABEL_20:
    v8 = v7;
LABEL_25:
    WdLogEvent5_WdError(v8);
    return 3223192330LL;
  }
  if ( v3->ActiveSize.cx < 0x64 || v3->ActiveSize.cy < 0x64 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(9999000000LL);
    v11[3] = v3->ActiveSize.cx;
    v11[4] = v3->ActiveSize.cy;
    v11[5] = v3;
    WdLogEvent5_WdError(v11);
    return 3223192331LL;
  }
  else if ( v3->TotalSize.cx < 0x64 || v3->TotalSize.cy < 0x64 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(9999000000LL);
    v10[3] = v3->TotalSize.cx;
    v10[4] = v3->TotalSize.cy;
    v10[5] = v3;
    WdLogEvent5_WdError(v10);
    return 3223192332LL;
  }
  else if ( (unsigned int)(((int)(*(_DWORD *)&v3->AdditionalSignalInfo << 29) >> 29) - 1) > 2 )
  {
    v9 = WdLogNewEntry5_WdError(9999000000LL);
    *(_QWORD *)(v9 + 24) = (int)(*(_DWORD *)&v3->AdditionalSignalInfo << 29) >> 29;
    *(_QWORD *)(v9 + 32) = v3;
    WdLogEvent5_WdError(v9);
    return 3223192402LL;
  }
  else
  {
    return 0LL;
  }
}
