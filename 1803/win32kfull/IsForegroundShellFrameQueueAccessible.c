/*
 * XREFs of IsForegroundShellFrameQueueAccessible @ 0x1C0135F88
 * Callers:
 *     IsGpqForegroundAccessibleForPti @ 0x1C005DF90 (IsGpqForegroundAccessibleForPti.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C013A3EC (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsForegroundShellFrameQueueAccessible(__int64 a1)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  if ( !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 416)) )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 424);
  if ( gpqForeground != v3 || (*(_DWORD *)(v3 + 388) & 0x2000000) == 0 )
    return 0LL;
  v4 = *(_QWORD *)(gpqForeground + 112LL);
  if ( v4 )
    v4 = *(_QWORD *)(v4 + 16);
  return v4 && *(_QWORD *)(v4 + 416) == *(_QWORD *)(a1 + 416);
}
