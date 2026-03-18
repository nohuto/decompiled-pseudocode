/*
 * XREFs of _anonymous_namespace_::RemoveForegroundActivate @ 0x1C0018B84
 * Callers:
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00101A4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00117A8 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 * Callees:
 *     WPP_RECORDER_SF_qsqs @ 0x1C001946C (WPP_RECORDER_SF_qsqs.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 */

char __fastcall anonymous_namespace_::RemoveForegroundActivate(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  const char *v5; // rdx
  const char *v6; // rcx
  int v7; // edx
  bool v8; // cl
  char v9; // si

  v4 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( (*(_DWORD *)(v4 + 12) & 0x40) != 0 )
    ClearAppStarting(*(_QWORD *)(gptiCurrent + 416LL));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = "Yes";
    v6 = "Yes";
    if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20) == 0 )
      v6 = "No";
    if ( (*(_DWORD *)(v4 + 12) & 0x100) == 0 )
      v5 = "No";
    WPP_RECORDER_SF_qsqs((_DWORD)v6, (_DWORD)v5, (unsigned int)"No", a4);
  }
  v7 = *(_DWORD *)(gptiCurrent + 480LL);
  v8 = (*(_DWORD *)(v4 + 12) & 0x100) == 0;
  if ( v8 && (v7 & 0x20) == 0 )
    return 0;
  v9 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_(v8, v7, 2, 11, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
    v7 = *(_DWORD *)(gptiCurrent + 480LL);
  }
  *(_DWORD *)(gptiCurrent + 480LL) = v7 & 0xFFFFFFDF;
  *(_DWORD *)(v4 + 12) &= ~0x100u;
  return v9;
}
