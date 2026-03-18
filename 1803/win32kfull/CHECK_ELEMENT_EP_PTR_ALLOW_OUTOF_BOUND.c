/*
 * XREFs of CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C4D20
 * Callers:
 *     itrp_ALIGNPTS @ 0x1C02C5A40 (itrp_ALIGNPTS.c)
 *     itrp_ALIGNRP @ 0x1C02C5CD0 (itrp_ALIGNRP.c)
 *     itrp_DeltaEngine @ 0x1C02C6A7C (itrp_DeltaEngine.c)
 *     itrp_FLIPPT @ 0x1C02C7A00 (itrp_FLIPPT.c)
 *     itrp_FLIPRGOFF @ 0x1C02C7BB0 (itrp_FLIPRGOFF.c)
 *     itrp_FLIPRGON @ 0x1C02C7DF0 (itrp_FLIPRGON.c)
 *     itrp_IP @ 0x1C02C89A0 (itrp_IP.c)
 *     itrp_ISECT @ 0x1C02C9370 (itrp_ISECT.c)
 *     itrp_IUP @ 0x1C02C9AC0 (itrp_IUP.c)
 *     itrp_MD @ 0x1C02CAB40 (itrp_MD.c)
 *     itrp_MDAP @ 0x1C02CB080 (itrp_MDAP.c)
 *     itrp_MDRP @ 0x1C02CB250 (itrp_MDRP.c)
 *     itrp_MIAP @ 0x1C02CB730 (itrp_MIAP.c)
 *     itrp_MIRP @ 0x1C02CBB50 (itrp_MIRP.c)
 *     itrp_MSIRP @ 0x1C02CC450 (itrp_MSIRP.c)
 *     itrp_RC @ 0x1C02CD340 (itrp_RC.c)
 *     itrp_SDPVTL @ 0x1C02CDF50 (itrp_SDPVTL.c)
 *     itrp_SFVTL @ 0x1C02CE420 (itrp_SFVTL.c)
 *     itrp_SHC @ 0x1C02CE6D0 (itrp_SHC.c)
 *     itrp_SHE @ 0x1C02CEB20 (itrp_SHE.c)
 *     itrp_SHP @ 0x1C02CF050 (itrp_SHP.c)
 *     itrp_SHP_Common @ 0x1C02CF354 (itrp_SHP_Common.c)
 *     itrp_SPVTL @ 0x1C02CF8E0 (itrp_SPVTL.c)
 *     itrp_UTP @ 0x1C02D05A0 (itrp_UTP.c)
 *     itrp_WC @ 0x1C02D0870 (itrp_WC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  _WORD *v3; // r8
  unsigned __int16 v4; // cx
  unsigned int v5; // r10d
  unsigned __int16 v6; // cx
  int v7; // r8d
  __int16 v8; // ax

  v2 = 1;
  if ( a2 == *(_QWORD *)(a1 + 56) + 112LL )
  {
    v3 = *(_WORD **)(*(_QWORD *)(a1 + 64) + 344LL);
    v4 = v3[4];
    if ( v4 <= v3[6] )
      v4 = v3[6];
    v5 = v4;
    if ( v4 <= 1u )
      v5 = 1;
    v6 = v3[3];
    if ( v6 <= v3[5] )
      v6 = v3[5];
    v7 = v6;
    if ( v6 <= 1u )
      v7 = 1;
    v8 = *(_WORD *)(a2 + 80);
    if ( v8 >= 1 )
    {
      if ( v8 > v5 )
        return (unsigned int)(*(_DWORD *)(a2 + 104) + 12 * (v7 + 8) - *(_DWORD *)(a2 + 64)) >= (unsigned __int64)(2LL * (v8 - 1));
    }
    else
    {
      return 0;
    }
  }
  return v2;
}
