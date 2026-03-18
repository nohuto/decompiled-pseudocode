/*
 * XREFs of GreScalingDispatchEscape @ 0x1C0299478
 * Callers:
 *     NtGdiExtEscape @ 0x1C007CCD0 (NtGdiExtEscape.c)
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 *     GreEscCreateScaledCompatibleBitmap @ 0x1C0299054 (GreEscCreateScaledCompatibleBitmap.c)
 */

__int64 __fastcall GreScalingDispatchEscape(unsigned __int64 a1)
{
  _OWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v3, 0, sizeof(v3));
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 32 > MmUserProbeAddress || a1 + 32 < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v3[0] = *(_OWORD *)a1;
  v3[1] = *(_OWORD *)(a1 + 16);
  if ( LODWORD(v3[0]) )
    return 3221225659LL;
  GreEscCreateScaledCompatibleBitmap((__int64)v3);
  if ( !LODWORD(v3[0]) )
  {
    ProbeForWrite((volatile void *)(a1 + 8), 8uLL, 4u);
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v3[0] + 1);
  }
  return 0LL;
}
