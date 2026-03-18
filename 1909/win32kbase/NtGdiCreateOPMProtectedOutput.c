/*
 * XREFs of NtGdiCreateOPMProtectedOutput @ 0x1C01240A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00A45F0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     ?OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00AF628 (-OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiCreateOPMProtectedOutput(_OWORD *a1, void **a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  int v6; // edi
  unsigned __int64 v7; // rdx
  int v8; // [rsp+30h] [rbp-38h] BYREF
  void *v9; // [rsp+38h] [rbp-30h] BYREF
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v10[4]; // [rsp+40h] [rbp-28h] BYREF

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v5 = 0;
  if ( (int)result >= 0 )
  {
    memset(v10, 0, sizeof(v10));
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)v10 = *a1;
    v8 = 0;
    v9 = (void *)-1LL;
    v6 = OPMCreateProtectedOutput((COPM *)(unsigned int)v10[3], (struct _LUID *)v10, v10[2], &v9, &v8);
    if ( v8 && v6 >= 0 )
      v6 = -1073741198;
    v7 = (unsigned __int64)(a2 + 1);
    if ( (unsigned __int64)(a2 + 1) > MmUserProbeAddress || v7 <= (unsigned __int64)a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v9;
    UserSessionSwitchLeaveCrit(MmUserProbeAddress, v7);
    if ( v6 < 0 )
      return (unsigned int)v6;
    return v5;
  }
  return result;
}
