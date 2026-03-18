/*
 * XREFs of MiProcessLoadConfigForDriver @ 0x14070EB4C
 * Callers:
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 *     MiReloadBootLoadedDrivers @ 0x1409EF614 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExGenRandom @ 0x1400BC4C0 (ExGenRandom.c)
 *     LdrInitSecurityCookie @ 0x14070EB9C (LdrInitSecurityCookie.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14070EDD4 (MiProcessKernelCfgImageLoadConfig.c)
 */

__int64 __fastcall MiProcessLoadConfigForDriver(__int64 a1)
{
  __int64 result; // rax
  int v3; // eax
  int v4; // r8d

  result = MiProcessKernelCfgImageLoadConfig();
  if ( (int)result >= 0 )
  {
    ExGenRandom(0);
    v3 = ExGenRandom(0);
    LdrInitSecurityCookie(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), v4, v3);
    return 0LL;
  }
  return result;
}
