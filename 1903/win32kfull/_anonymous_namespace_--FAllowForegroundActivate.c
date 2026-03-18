/*
 * XREFs of _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00117A8
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0013B80 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00182B4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 * Callees:
 *     IsImmersiveBandOrShellManaged @ 0x1C00115A0 (IsImmersiveBandOrShellManaged.c)
 *     IsForegroundLocked @ 0x1C0017818 (IsForegroundLocked.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C0018040 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C0018B84 (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     IAMThreadAccessGranted @ 0x1C008AAEC (IAMThreadAccessGranted.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00D0D1C (WPP_RECORDER_SF_qq.c)
 */

char __fastcall anonymous_namespace_::FAllowForegroundActivate(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  int v4; // edx
  __int64 v5; // rcx
  int v6; // edx
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // edx
  int v11; // ecx
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rcx
  int v16; // r9d
  int v17; // r9d

  v2 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( !(unsigned __int8)anonymous_namespace_::RemoveForegroundActivate() )
    return 0;
  v4 = grpdeskRitInput;
  if ( *(_QWORD *)(gptiCurrent + 448LL) != grpdeskRitInput
    || (v3 = *(_QWORD *)(gptiCurrent + 424LL), gpqForeground == v3)
    || (unsigned int)IsForegroundLocked() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_(v3, v4, 2, 17, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
    }
    return 0;
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v5 + 27) & 8) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v16 = 18;
LABEL_27:
    WPP_RECORDER_SF_q(v5, v4, 2, v16, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids, a1);
    return 0;
  }
  if ( *(_DWORD *)(v5 + 236) == 15 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v16 = 19;
    goto LABEL_27;
  }
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) || *(int *)(v2 + 12) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_(v7, v6, 2, 20, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
    }
    return 1;
  }
  if ( (unsigned int)IsImmersiveBroker(v2)
    && (unsigned int)IsImmersiveBandOrShellManaged(a1, v8)
    && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) & 0x10) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 21;
LABEL_32:
      WPP_RECORDER_SF_q(v14, v13, 2, v17, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids, v2);
      return 0;
    }
    return 0;
  }
  if ( !(unsigned int)IsImmersiveBroker(v2)
    || !gpqForeground
    || (v15 = *(_QWORD *)(gpqForeground + 128LL)) == 0
    || !(unsigned int)IsImmersiveBandOrShellManaged(v15, v9) )
  {
    if ( !(unsigned __int8)anonymous_namespace_::CheckImmersiveForegroundAccess(a1, 2LL) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(v11, v10, 2, 23, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids, v2, a1);
      return 0;
    }
    return 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = 22;
    goto LABEL_32;
  }
  return 0;
}
