/*
 * XREFs of ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C029540C
 * Callers:
 *     NtGdiSTROBJ_bEnum @ 0x1C02990E0 (NtGdiSTROBJ_bEnum.c)
 *     NtGdiSTROBJ_bEnumPositionsOnly @ 0x1C0299100 (NtGdiSTROBJ_bEnumPositionsOnly.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     STROBJ_bEnum @ 0x1C008B570 (STROBJ_bEnum.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C008FD6C (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00E2AC4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 *     STROBJ_bEnumPositionsOnly @ 0x1C02A0CB0 (STROBJ_bEnumPositionsOnly.c)
 */

__int64 __fastcall NtGdiSTROBJ_bEnumInternal(struct _STROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3, int a4)
{
  unsigned int *v6; // r12
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  STROBJ *v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rdi
  char *v14; // rax
  char *v15; // r14
  _QWORD *v16; // rax
  __int64 v17; // rcx
  ULONG pc; // [rsp+20h] [rbp-38h] BYREF
  PGLYPHPOS ppgpos; // [rsp+28h] [rbp-30h] BYREF
  struct _GLYPHPOS *v21; // [rsp+30h] [rbp-28h]
  struct UMPDOBJ *v22; // [rsp+38h] [rbp-20h]

  v6 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v22 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
    {
      if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
        return 0xFFFFFFFFLL;
    }
    else
    {
      ++*((_DWORD *)ThreadCurrentObj + 105);
    }
  }
  if ( !ThreadCurrentObj )
    return 0xFFFFFFFFLL;
  v10 = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, (__int64)a1);
  if ( !v10
    || (!a4 ? (v11 = STROBJ_bEnum(v10, &pc, &ppgpos)) : (v11 = STROBJ_bEnumPositionsOnly(v10, &pc, &ppgpos)),
        (v12 = v11, v11 == -1)
     || (v13 = pc, pc > 0x1A0AAA)
     || (v14 = UMPDOBJ::_AllocUserMem(ThreadCurrentObj, 24 * pc, 0), v15 = v14, (v21 = (struct _GLYPHPOS *)v14) == 0LL)) )
  {
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
    return 0xFFFFFFFFLL;
  }
  memmove(v14, ppgpos, 24 * v13);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct _GLYPHPOS **)MmUserProbeAddress;
  *a3 = v21;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (unsigned int *)MmUserProbeAddress;
  *v6 = v13;
  if ( (_DWORD)v13 )
  {
    v16 = v15 + 8;
    v17 = (unsigned int)v13;
    do
    {
      *v16 = 0LL;
      v16 += 3;
      --v17;
    }
    while ( v17 );
  }
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v12;
}
