/*
 * XREFs of MiProcessLoadConfigForDriver @ 0x140683008
 * Callers:
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiReloadBootLoadedDrivers @ 0x1409B8C6C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     MiProcessKernelCfgImage @ 0x1400F55E4 (MiProcessKernelCfgImage.c)
 *     LdrInitSecurityCookie @ 0x14068306C (LdrInitSecurityCookie.c)
 *     VslCompleteSecureDriverLoad @ 0x1408190E8 (VslCompleteSecureDriverLoad.c)
 */

__int64 __fastcall MiProcessLoadConfigForDriver(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // eax
  int v6; // r8d

  if ( !a3 )
    goto LABEL_4;
  result = MiProcessKernelCfgImage(a1, a2, a3);
  if ( (int)result < 0 )
    return result;
  if ( (MiFlags & 0x8000) == 0 || (MiFlags & 0x80000) != 0 || (*(_DWORD *)(a1 + 104) & 0x2000) != 0 )
    goto LABEL_4;
  result = VslCompleteSecureDriverLoad(0LL, *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64));
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 104) |= 0x2000u;
LABEL_4:
    ExGenRandom(0);
    v5 = ExGenRandom(0);
    LdrInitSecurityCookie(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), v6, v5);
    return 0LL;
  }
  return result;
}
