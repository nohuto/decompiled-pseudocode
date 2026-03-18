/*
 * XREFs of NtGdiXFORMOBJ_iGetXform @ 0x1C008BB40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     XFORMOBJ_iGetXform @ 0x1C008D690 (XFORMOBJ_iGetXform.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C008E934 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiXFORMOBJ_iGetXform(__int64 a1, __int64 a2)
{
  ULONG64 v2; // rdi
  ULONG Xform; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  XFORMOBJ *v8; // rax
  __int128 v9; // [rsp+28h] [rbp-40h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h]

  v2 = a2;
  Xform = -1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  if ( ThreadCurrentObj )
  {
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
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
  v8 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>(ThreadCurrentObj, a1);
  if ( v8 )
  {
    Xform = XFORMOBJ_iGetXform(v8, (XFORML *)((unsigned __int64)&v9 & -(__int64)(v2 != 0)));
    if ( Xform != -1 )
    {
      if ( v2 )
      {
        if ( v2 >= MmUserProbeAddress )
          v2 = MmUserProbeAddress;
        *(_OWORD *)v2 = v9;
        *(_QWORD *)(v2 + 16) = v10;
      }
    }
  }
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return Xform;
}
