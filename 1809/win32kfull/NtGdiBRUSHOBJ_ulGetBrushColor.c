/*
 * XREFs of NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C008FB60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C008FADC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     BRUSHOBJ_ulGetBrushColor @ 0x1C008FC80 (BRUSHOBJ_ulGetBrushColor.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiBRUSHOBJ_ulGetBrushColor(ULONG64 a1, __int64 a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  ULONG BrushColor; // esi
  BRUSHOBJ *v7; // r8
  ULONG64 v8; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  if ( ThreadCurrentObj )
  {
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
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
  BrushColor = 0;
  v7 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v7 )
  {
    v8 = a1;
    if ( a1 >= MmUserProbeAddress )
      v8 = MmUserProbeAddress;
    if ( (*(_QWORD *)(v8 + 16) & 8) != 0 && (v7[5].iSolidColor & 0x10) != 0 )
      v7->flColorType |= 8u;
    BrushColor = BRUSHOBJ_ulGetBrushColor(v7);
    *(_DWORD *)(a1 + 16) &= ~8u;
  }
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return BrushColor;
}
