/*
 * XREFs of IsWhitePixelOptimizationCandidate @ 0x18003F23C
 * Callers:
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180038FF0 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x18003BEB4 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall IsWhitePixelOptimizationCandidate(_QWORD *a1, int a2)
{
  char v4; // bl
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]

  if ( !CCommonRegistryData::m_fEnableCommonSuperSets )
    return 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 144LL))(*a1) )
    return 0;
  v4 = 1;
  if ( a2 != 1 )
  {
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)a1[1] + 24LL))(a1[1], v6);
    if ( v7 )
      return 0;
  }
  return v4;
}
