/*
 * XREFs of ParseResolutionKeyName @ 0x1C029489C
 * Callers:
 *     ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0294BA8 (-_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ParseModeCap @ 0x1C02946E4 (ParseModeCap.c)
 */

char __fastcall ParseResolutionKeyName(const void **a1, _DWORD *a2, int *a3)
{
  size_t v6; // r8
  _WORD v8[264]; // [rsp+30h] [rbp-238h] BYREF

  memset(v8, 0, 0x208uLL);
  v6 = 518LL;
  if ( *(_WORD *)a1 <= 0x206u )
    v6 = *(unsigned __int16 *)a1;
  memmove(v8, a1[1], v6);
  return ParseModeCap(v8, 0, a2, a3, 0LL, 0LL);
}
