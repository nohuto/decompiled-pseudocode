/*
 * XREFs of HvlpFastSendSyntheticClusterIpiEx @ 0x140276630
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x140275490 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401C73F0 (HvcallpExtendedFastHypercall.c)
 *     HvlpAffinityToHvProcessorSet @ 0x140279580 (HvlpAffinityToHvProcessorSet.c)
 */

__int64 __fastcall HvlpFastSendSyntheticClusterIpiEx(__int64 a1, unsigned int a2)
{
  int v2; // eax
  __int64 v3; // r8
  int v4; // eax
  __int64 v6; // [rsp+20h] [rbp-98h]
  __int64 v7; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v8[104]; // [rsp+38h] [rbp-80h] BYREF

  v7 = a2;
  v2 = HvlpAffinityToHvProcessorSet(a1, v8, 88LL);
  v3 = (unsigned int)(v2 + 24);
  v4 = ((v2 + 7) << 14) & 0x3FE0000;
  v6 = v4 | 0x15u;
  LODWORD(v6) = v4 | 0x10015;
  return (unsigned __int16)HvcallpExtendedFastHypercall(v6, (__int64)&v7, v3) != 0 ? 0xC0000001 : 0;
}
