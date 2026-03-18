/*
 * XREFs of IsForegroundShellFrameQueueAccessible @ 0x1C0006640
 * Callers:
 *     IsGpqForegroundAccessibleForPti @ 0x1C00AFFE8 (IsGpqForegroundAccessibleForPti.c)
 *     EditionIsGpqForegroundInaccessibleExplicit @ 0x1C011B940 (EditionIsGpqForegroundInaccessibleExplicit.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C015CB98 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsForegroundShellFrameQueueAccessible(__int64 a1)
{
  __int64 v2; // rax
  __int64 v4; // rcx

  if ( !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 424)) )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 432);
  if ( gpqForeground != v2 || (*(_DWORD *)(v2 + 388) & 0x2000000) == 0 )
    return 0LL;
  v4 = *(_QWORD *)(gpqForeground + 112LL);
  if ( v4 )
    v4 = *(_QWORD *)(v4 + 16);
  return v4 && *(_QWORD *)(v4 + 424) == *(_QWORD *)(a1 + 424);
}
