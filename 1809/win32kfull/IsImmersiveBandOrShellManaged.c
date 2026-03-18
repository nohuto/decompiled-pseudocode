/*
 * XREFs of IsImmersiveBandOrShellManaged @ 0x1C00CCB7C
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z @ 0x1C00D77CC (-xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00D82B0 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     NtUserDisableImmersiveOwner @ 0x1C0212E00 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00CEDF0 (IsNonImmersiveBand.c)
 */

__int64 __fastcall IsImmersiveBandOrShellManaged(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r8
  unsigned int v3; // edx

  v1 = IsNonImmersiveBand(a1);
  v3 = 0;
  if ( !v1 || (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 234LL) & 0x20) != 0 )
    return 1;
  return v3;
}
