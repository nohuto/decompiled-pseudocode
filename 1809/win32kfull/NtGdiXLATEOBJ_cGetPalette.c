/*
 * XREFs of NtGdiXLATEOBJ_cGetPalette @ 0x1C0299600
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C008F4AC (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C01509D0 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 *     XLATEOBJ_cGetPalette @ 0x1C02A1030 (XLATEOBJ_cGetPalette.c)
 */

__int64 __fastcall NtGdiXLATEOBJ_cGetPalette(__int64 a1, __int64 a2, ULONG a3, char *a4)
{
  ULONG v7; // r13d
  ULONG Palette; // edi
  ULONG *v9; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  XLATEOBJ *v12; // r15
  unsigned int v13; // r14d

  v7 = a2;
  Palette = 0;
  v9 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  if ( ThreadCurrentObj )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
    {
      if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
      {
        ThreadCurrentObj = 0LL;
        goto LABEL_15;
      }
    }
    else
    {
      ++*((_DWORD *)ThreadCurrentObj + 105);
    }
    v12 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, a1);
    if ( v12 )
    {
      if ( a4 )
      {
        if ( a3 > 0x9C4000 )
          goto LABEL_15;
        v13 = 4 * a3;
        v9 = (ULONG *)PALLOCMEM2(4 * a3, 1886221639LL, 0);
      }
      else
      {
        v13 = 4 * a3;
      }
      if ( v9 )
      {
        Palette = XLATEOBJ_cGetPalette(v12, v7, a3, v9);
        if ( Palette )
          Palette &= -((unsigned int)bSafeCopyBits(a4, v9, v13) != 0);
        Win32FreePool(v9);
      }
    }
  }
LABEL_15:
  if ( ThreadCurrentObj )
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return Palette;
}
