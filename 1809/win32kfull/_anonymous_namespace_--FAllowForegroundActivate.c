/*
 * XREFs of _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00D82B0
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00CE0A8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00D83CC (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C00CCB7C (IsImmersiveBandOrShellManaged.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C00D7DC0 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     IsForegroundLocked @ 0x1C00D7F44 (IsForegroundLocked.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C00D7F6C (_anonymous_namespace_--RemoveForegroundActivate.c)
 */

bool __fastcall anonymous_namespace_::FAllowForegroundActivate(__int64 a1)
{
  __int64 v2; // rdi
  bool result; // al
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = *(_QWORD *)(gptiCurrent + 424LL);
  result = 0;
  if ( anonymous_namespace_::RemoveForegroundActivate()
    && *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput
    && gpqForeground != *(_QWORD *)(gptiCurrent + 432LL)
    && !(unsigned int)IsForegroundLocked() )
  {
    v4 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v4 + 27) & 8) == 0 && *(_DWORD *)(v4 + 236) != 15 )
    {
      if ( IAMThreadAccessGranted(gptiCurrent) || *(int *)(v2 + 12) < 0 )
        return 1;
      if ( (!(unsigned int)IsImmersiveBroker(v2)
         || !(unsigned int)IsImmersiveBandOrShellManaged(a1)
         || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) & 0x10) != 0)
        && (!(unsigned int)IsImmersiveBroker(v2)
         || !gpqForeground
         || (v5 = *(_QWORD *)(gpqForeground + 120LL)) == 0
         || !(unsigned int)IsImmersiveBandOrShellManaged(v5))
        && anonymous_namespace_::CheckImmersiveForegroundAccess(v2, a1) )
      {
        return 1;
      }
    }
  }
  return result;
}
