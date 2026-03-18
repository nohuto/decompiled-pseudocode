/*
 * XREFs of InvokeProject @ 0x1C02C53A4
 * Callers:
 *     itrp_ALIGNPTS @ 0x1C02C5A40 (itrp_ALIGNPTS.c)
 *     itrp_ALIGNRP @ 0x1C02C5CD0 (itrp_ALIGNRP.c)
 *     itrp_IP @ 0x1C02C89A0 (itrp_IP.c)
 *     itrp_MD @ 0x1C02CAB40 (itrp_MD.c)
 *     itrp_MDAP @ 0x1C02CB080 (itrp_MDAP.c)
 *     itrp_MDRP @ 0x1C02CB250 (itrp_MDRP.c)
 *     itrp_MIAP @ 0x1C02CB730 (itrp_MIAP.c)
 *     itrp_MIRP @ 0x1C02CBB50 (itrp_MIRP.c)
 *     itrp_MSIRP @ 0x1C02CC450 (itrp_MSIRP.c)
 *     itrp_RC @ 0x1C02CD340 (itrp_RC.c)
 *     itrp_SH_Common @ 0x1C02CF5E8 (itrp_SH_Common.c)
 *     itrp_WC @ 0x1C02D0870 (itrp_WC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InvokeProject(int a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 v8; // rcx
  __int64 v9; // r8

  v3 = (int)a3;
  v4 = a1 - 1;
  if ( !v4 )
  {
    v8 = (__int16)dword_1C0327158;
    v9 = SHIWORD(dword_1C0327158);
    return (unsigned int)(((((unsigned int)(v3 * v9) >> 13) + 1) >> 1)
                        + ((((a2 * (unsigned int)v8) >> 13) + 1) >> 1)
                        + ((((unsigned __int64)(v3 * v9) >> 32) + ((unsigned __int64)((int)a2 * v8) >> 32)) << 18));
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v8 = (__int16)dword_1C0327160;
    v9 = SHIWORD(dword_1C0327160);
    return (unsigned int)(((((unsigned int)(v3 * v9) >> 13) + 1) >> 1)
                        + ((((a2 * (unsigned int)v8) >> 13) + 1) >> 1)
                        + ((((unsigned __int64)(v3 * v9) >> 32) + ((unsigned __int64)((int)a2 * v8) >> 32)) << 18));
  }
  v6 = v5 - 1;
  if ( !v6 )
    return a2;
  if ( v6 == 1 )
    return a3;
  EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
  return 0LL;
}
