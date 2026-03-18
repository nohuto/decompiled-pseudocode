/*
 * XREFs of _anonymous_namespace_::RemoveForegroundActivate @ 0x1C00D7F6C
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z @ 0x1C00D77CC (-xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00D82B0 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120D28 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     <none>
 */

bool anonymous_namespace_::RemoveForegroundActivate()
{
  __int64 v0; // rbx
  int v1; // eax
  int v2; // edx
  bool v3; // cl
  bool result; // al

  v0 = *(_QWORD *)(gptiCurrent + 424LL);
  v1 = *(_DWORD *)(v0 + 12);
  if ( (v1 & 0x40) != 0 )
  {
    ClearAppStarting(*(_QWORD *)(gptiCurrent + 424LL));
    v1 = *(_DWORD *)(v0 + 12);
  }
  v2 = *(_DWORD *)(gptiCurrent + 488LL);
  v3 = (v1 & 0x100) == 0 && (v2 & 0x20) == 0;
  result = !v3;
  if ( !v3 )
  {
    *(_DWORD *)(gptiCurrent + 488LL) = v2 & 0xFFFFFFDF;
    *(_DWORD *)(v0 + 12) &= ~0x100u;
  }
  return result;
}
