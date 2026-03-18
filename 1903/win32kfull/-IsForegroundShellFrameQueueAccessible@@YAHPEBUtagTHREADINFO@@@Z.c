/*
 * XREFs of ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C01124D0
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C00A1D00 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C0112468 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsForegroundShellFrameQueueAccessible(const struct tagTHREADINFO *a1)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  if ( !(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)a1 + 52)) )
    return 0LL;
  v3 = *((_QWORD *)a1 + 53);
  if ( gpqForeground != v3 || (*(_DWORD *)(v3 + 396) & 0x2000000) == 0 )
    return 0LL;
  v4 = *(_QWORD *)(gpqForeground + 120LL);
  if ( v4 )
    v4 = *(_QWORD *)(v4 + 16);
  return v4 && *(_QWORD *)(v4 + 416) == *((_QWORD *)a1 + 52);
}
