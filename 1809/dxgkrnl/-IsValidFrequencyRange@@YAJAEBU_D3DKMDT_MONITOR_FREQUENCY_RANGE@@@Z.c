/*
 * XREFs of ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C029A46C
 * Callers:
 *     ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0294BA8 (-_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     ConvertFrequencyRange @ 0x1C0299EBC (ConvertFrequencyRange.c)
 * Callees:
 *     ??$?OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z @ 0x1C00171F4 (--$-OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z.c)
 */

__int64 __fastcall IsValidFrequencyRange(const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *a1)
{
  D3DKMDT_FREQUENCY_RANGE *p_RangeLimits; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rax
  D3DDDI_RATIONAL *p_MinHSyncFreq; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rax
  unsigned int v13; // [rsp+30h] [rbp+10h] BYREF
  int v14; // [rsp+34h] [rbp+14h]

  if ( !a1->RangeLimits.MinVSyncFreq.Denominator )
    return 3223192330LL;
  p_RangeLimits = &a1->RangeLimits;
  v13 = 500;
  v14 = 1;
  if ( operator><_D3DDDI_RATIONAL>((unsigned int *)&a1->RangeLimits.MinVSyncFreq, &v13) )
    return 3223192330LL;
  v5 = 5LL * p_RangeLimits->MinVSyncFreq.Denominator;
  if ( p_RangeLimits->MinVSyncFreq.Numerator < v5 )
  {
    if ( a1->Origin != D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE )
      return 3223192330LL;
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v5, v3, v4);
    v6[3] = p_RangeLimits->MinVSyncFreq.Numerator;
    v6[4] = a1->RangeLimits.MinVSyncFreq.Denominator;
    v6[5] = 5LL;
    WdLogEvent5_WdWarning(v6);
  }
  if ( !a1->RangeLimits.MinHSyncFreq.Denominator )
    return 3223192330LL;
  p_MinHSyncFreq = &a1->RangeLimits.MinHSyncFreq;
  v13 = 1000000;
  v14 = 1;
  if ( operator><_D3DDDI_RATIONAL>((unsigned int *)&a1->RangeLimits.MinHSyncFreq, &v13) )
    return 3223192330LL;
  v10 = 1000LL * a1->RangeLimits.MinHSyncFreq.Denominator;
  if ( p_MinHSyncFreq->Numerator < v10 )
  {
    if ( a1->Origin == D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v8, v9);
      v11[3] = p_MinHSyncFreq->Numerator;
      v11[4] = a1->RangeLimits.MinHSyncFreq.Denominator;
      v11[5] = 1000LL;
      WdLogEvent5_WdWarning(v11);
      goto LABEL_11;
    }
    return 3223192330LL;
  }
LABEL_11:
  if ( !a1->RangeLimits.MaxVSyncFreq.Denominator )
    return 3223192330LL;
  if ( a1->RangeLimits.MaxVSyncFreq.Numerator < 5 * (unsigned __int64)a1->RangeLimits.MaxVSyncFreq.Denominator )
    return 3223192330LL;
  v13 = 500;
  v14 = 1;
  if ( operator><_D3DDDI_RATIONAL>((unsigned int *)&a1->RangeLimits.MaxVSyncFreq, &v13) )
    return 3223192330LL;
  if ( !a1->RangeLimits.MaxHSyncFreq.Denominator )
    return 3223192330LL;
  if ( a1->RangeLimits.MaxHSyncFreq.Numerator < 1000 * (unsigned __int64)a1->RangeLimits.MaxHSyncFreq.Denominator )
    return 3223192330LL;
  v13 = 1000000;
  v14 = 1;
  if ( operator><_D3DDDI_RATIONAL>((unsigned int *)&a1->RangeLimits.MaxHSyncFreq, &v13) )
    return 3223192330LL;
  if ( a1->ConstraintType != D3DKMDT_MFRC_ACTIVESIZE )
  {
    if ( a1->ConstraintType != D3DKMDT_MFRC_MAXPIXELRATE )
      return 3223192408LL;
    if ( a1->Constraint.MaxPixelRate - 1 > 0x2540BE3FFLL )
      return 3223192330LL;
    return 0LL;
  }
  if ( a1->Constraint.ActiveSize.cx >= 0x64 && a1->Constraint.ActiveSize.cy >= 0x64 )
    return 0LL;
  return 3223192331LL;
}
