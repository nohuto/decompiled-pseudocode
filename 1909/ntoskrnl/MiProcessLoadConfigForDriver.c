/*
 * XREFs of MiProcessLoadConfigForDriver @ 0x14071092C
 * Callers:
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MiReloadBootLoadedDrivers @ 0x1409EF52C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 *     LdrInitSecurityCookie @ 0x14071097C (LdrInitSecurityCookie.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140710BB4 (MiProcessKernelCfgImageLoadConfig.c)
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
