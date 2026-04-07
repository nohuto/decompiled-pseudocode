/*
 * XREFs of ??4?$ComPtr@VCapturedWindowSWRVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCapturedWindowSWRVisual@@@Z @ 0x180085D3C
 * Callers:
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@IAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180089784 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 *     ?_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18008A9CC (-_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@AEBU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180002AC4 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CBaseObject **__fastcall Microsoft::WRL::ComPtr<CapturedWindowSWRVisual>::operator=(
        CBaseObject **a1,
        volatile signed __int32 *a2)
{
  CBaseObject *v2; // rax
  CBaseObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 != (CBaseObject *)a2 )
  {
    if ( a2 )
    {
      _InterlockedIncrement(a2 + 2);
      v2 = *a1;
    }
    *a1 = (CBaseObject *)a2;
    v5 = v2;
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v5);
  }
  return a1;
}
