/*
 * XREFs of NtGdiPATHOBJ_bEnum @ 0x1C02989C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00E2AC4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C0295228 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiPATHOBJ_bEnum(__int64 a1, __int64 a2)
{
  PATHDATA *v2; // r14
  unsigned int v4; // edi
  POINTFIX *v5; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  unsigned __int64 v9; // rax
  char *v10; // rax
  PATHDATA ppd; // [rsp+20h] [rbp-38h] BYREF

  v2 = (PATHDATA *)a2;
  *(_QWORD *)&ppd.flags = 0LL;
  ppd.pptfx = 0LL;
  v4 = 0;
  v5 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  if ( ThreadCurrentObj )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
    {
      if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
        return 0LL;
    }
    else
    {
      ++*((_DWORD *)ThreadCurrentObj + 105);
    }
  }
  if ( !ThreadCurrentObj )
    return 0LL;
  v9 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v9 )
  {
    if ( (*((_DWORD *)ThreadCurrentObj + 103) & 0x100) == 0 || *(_QWORD *)(v9 + 8) )
    {
      v4 = PATHOBJ_bEnum((PATHOBJ *)v9, &ppd);
    }
    else if ( gfUMPDDebug )
    {
      DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnum:ppath == NULL.\n", 3995);
    }
    if ( ppd.count > 0x4E2000 )
    {
      UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
      return 0LL;
    }
    v10 = UMPDOBJ::_AllocUserMem(ThreadCurrentObj, 8 * ppd.count, 0);
    v5 = (POINTFIX *)v10;
    if ( v10 )
    {
      memmove(v10, ppd.pptfx, 8LL * ppd.count);
      ppd.pptfx = v5;
    }
    else
    {
      v4 = 0;
    }
  }
  if ( !v5 )
  {
    *(_QWORD *)&ppd.flags = 0LL;
    ppd.pptfx = 0LL;
  }
  if ( (unsigned __int64)v2 >= MmUserProbeAddress )
    v2 = (PATHDATA *)MmUserProbeAddress;
  *v2 = ppd;
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v4;
}
