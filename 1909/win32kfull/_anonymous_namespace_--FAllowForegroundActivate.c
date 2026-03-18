/*
 * XREFs of _anonymous_namespace_::FAllowForegroundActivate @ 0x1C0135164
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01326E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0133A90 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0027D6C (IAMThreadAccessGranted.c)
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00723EC (WPP_RECORDER_SF_qq.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C01338AC (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     IsForegroundLocked @ 0x1C013441C (IsForegroundLocked.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C0134BF0 (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C0137768 (IsImmersiveBandOrShellManaged.c)
 */

char __fastcall anonymous_namespace_::FAllowForegroundActivate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // rcx
  int v9; // edx
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // edx
  int v15; // ecx
  __int64 v16; // rcx
  int v17; // r9d
  int v18; // r9d

  v5 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( !anonymous_namespace_::RemoveForegroundActivate(a1, a2, a3, a4) )
    return 0;
  v7 = grpdeskRitInput;
  if ( *(_QWORD *)(gptiCurrent + 448LL) != grpdeskRitInput
    || (v6 = *(_QWORD *)(gptiCurrent + 424LL), gpqForeground == v6)
    || (unsigned int)IsForegroundLocked() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_(v6, v7, 2, 17, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
    }
    return 0;
  }
  v8 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v8 + 27) & 8) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v17 = 18;
LABEL_27:
    WPP_RECORDER_SF_q(v8, v7, 2, v17, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids, a1);
    return 0;
  }
  if ( *(_DWORD *)(v8 + 236) == 15 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v17 = 19;
    goto LABEL_27;
  }
  if ( IAMThreadAccessGranted(gptiCurrent) || *(int *)(v5 + 12) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_(v10, v9, 2, 20, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
    }
    return 1;
  }
  if ( (unsigned int)IsImmersiveBroker(v5)
    && (unsigned int)IsImmersiveBandOrShellManaged(a1)
    && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) & 0x10) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 21;
LABEL_32:
      WPP_RECORDER_SF_q(v15, v14, 2, v18, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids, v5);
      return 0;
    }
    return 0;
  }
  if ( !(unsigned int)IsImmersiveBroker(v5)
    || !gpqForeground
    || (v16 = *(_QWORD *)(gpqForeground + 128LL)) == 0
    || !(unsigned int)IsImmersiveBandOrShellManaged(v16) )
  {
    if ( !anonymous_namespace_::CheckImmersiveForegroundAccess(a1, 2LL) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(v12, v11, 2u, 0x17u, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids, v5, a1);
      return 0;
    }
    return 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = 22;
    goto LABEL_32;
  }
  return 0;
}
