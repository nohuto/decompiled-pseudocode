/*
 * XREFs of NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C0299120
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C008FD6C (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00E2AC4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 *     STROBJ_bGetAdvanceWidths @ 0x1C02A0CE0 (STROBJ_bGetAdvanceWidths.c)
 */

__int64 __fastcall NtGdiSTROBJ_bGetAdvanceWidths(__int64 a1, __int64 a2, unsigned int a3, void *a4)
{
  __int64 v5; // r14
  ULONG v6; // r12d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  STROBJ *v10; // rdi
  char *v11; // rax
  char *v12; // r15
  unsigned int AdvanceWidths; // edi
  ULONG64 v14; // rax

  v5 = a3;
  v6 = a2;
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
  v10 = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v10
    || (unsigned int)v5 > 0x271000
    || (v11 = UMPDOBJ::_AllocUserMem(ThreadCurrentObj, (unsigned int)(16 * v5), 0), (v12 = v11) == 0LL) )
  {
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
    return 0LL;
  }
  AdvanceWidths = STROBJ_bGetAdvanceWidths(v10, v6, v5, (POINTQF *)v11);
  if ( AdvanceWidths )
  {
    v14 = (ULONG64)a4 + 16 * v5;
    if ( v14 > MmUserProbeAddress || v14 <= (unsigned __int64)a4 || ((unsigned __int8)a4 & 7) != 0 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a4, v12, 16 * v5);
  }
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return AdvanceWidths;
}
