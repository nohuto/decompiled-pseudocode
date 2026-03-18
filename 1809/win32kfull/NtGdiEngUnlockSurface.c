/*
 * XREFs of NtGdiEngUnlockSurface @ 0x1C0130640
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?UnlockSurface@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C01306C0 (-UnlockSurface@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiEngUnlockSurface(struct _SURFOBJ *a1, __int64 a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  UMPDOBJ *v5; // rcx
  unsigned int v6; // edi

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  if ( !ThreadCurrentObj )
    goto LABEL_5;
  if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
  {
    if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
    {
      ThreadCurrentObj = 0LL;
LABEL_5:
      v6 = -1073741811;
      goto LABEL_6;
    }
  }
  else
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
  }
  UMPDOBJ::UnlockSurface(v5, a1);
  v6 = 0;
LABEL_6:
  if ( ThreadCurrentObj )
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v6;
}
