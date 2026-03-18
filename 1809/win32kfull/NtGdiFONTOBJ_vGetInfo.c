/*
 * XREFs of NtGdiFONTOBJ_vGetInfo @ 0x1C02987A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C0087930 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C01509D0 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     FONTOBJ_vGetInfo @ 0x1C0277B50 (FONTOBJ_vGetInfo.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiFONTOBJ_vGetInfo(__int64 a1, __int64 a2, char *a3)
{
  unsigned __int64 v4; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  FONTOBJ *v9; // r15
  FONTINFO *v10; // rax
  FONTINFO *v11; // r14

  v4 = (unsigned int)a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  if ( ThreadCurrentObj )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
    {
      if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
        return 3221225485LL;
    }
    else
    {
      ++*((_DWORD *)ThreadCurrentObj + 105);
    }
  }
  if ( !ThreadCurrentObj )
    return 3221225485LL;
  v9 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v9 && (_DWORD)v4 && a3 && (unsigned int)v4 <= 0x2710000 )
  {
    v10 = (FONTINFO *)PALLOCMEM2((unsigned int)v4, 1886221639LL, 0);
    v11 = v10;
    if ( v10 )
    {
      memset(v10, 0, v4);
      FONTOBJ_vGetInfo(v9, v4, v10);
      bSafeCopyBits(a3, v11, v4);
      Win32FreePool(v11);
    }
  }
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return 0LL;
}
