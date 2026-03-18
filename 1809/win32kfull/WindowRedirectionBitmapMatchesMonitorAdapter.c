/*
 * XREFs of WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C011A70C
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     GetWindowMonitorAdapterLuid @ 0x1C011A798 (GetWindowMonitorAdapterLuid.c)
 *     GreGetDxSharedSurface @ 0x1C011A7F8 (GreGetDxSharedSurface.c)
 */

__int64 __fastcall WindowRedirectionBitmapMatchesMonitorAdapter(HWND *a1)
{
  HWND v1; // rcx
  __int64 v3; // [rsp+38h] [rbp-8h] BYREF
  __int64 v4; // [rsp+60h] [rbp+20h] BYREF
  __int64 v5; // [rsp+70h] [rbp+30h]
  __int64 v6; // [rsp+78h] [rbp+38h]

  LODWORD(v4) = 0;
  v6 = 0LL;
  v1 = *a1;
  v5 = 0LL;
  GreGetDxSharedSurface(v1, (__int64)&v4, (__int64)&v3);
  return 1LL;
}
