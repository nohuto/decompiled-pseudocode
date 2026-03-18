/*
 * XREFs of ?GetColor@CProjectedShadowCaster@@QEBA?AU_D3DCOLORVALUE@@W4Enum@ShadowPath@@@Z @ 0x1801AD8D0
 * Callers:
 *     ?GetFinalColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x1801CA7E0 (-GetFinalColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowCaster::GetColor(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v6; // rcx

  v3 = *(_QWORD *)(a1 + 112);
  *(_OWORD *)a2 = _xmm;
  if ( v3 )
    *(_OWORD *)a2 = *(_OWORD *)(v3 + 72);
  if ( a3 == 1 && *(_DWORD *)(a1 + 92) == 1 )
  {
    v6 = *(_QWORD *)(a1 + 120);
    if ( v6 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 48LL))(v6, 19LL) )
        *(float *)(a2 + 12) = *(float *)(*(_QWORD *)(a1 + 120) + 84LL) * *(float *)(a2 + 12);
    }
  }
  return a2;
}
