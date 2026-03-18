/*
 * XREFs of NtGdiEngCreateClip @ 0x1C0296470
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?CreateCLIPOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@XZ @ 0x1C0277E08 (-CreateCLIPOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@XZ.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

struct _CLIPOBJ *__fastcall NtGdiEngCreateClip(__int64 a1, __int64 a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  struct _CLIPOBJ *CLIPOBJ; // rdi

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  if ( !ThreadCurrentObj )
    goto LABEL_5;
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
  {
    if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
    {
      ThreadCurrentObj = 0LL;
LABEL_5:
      CLIPOBJ = 0LL;
      goto LABEL_6;
    }
  }
  else
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
  }
  CLIPOBJ = UMPDOBJ::CreateCLIPOBJ(ThreadCurrentObj);
LABEL_6:
  if ( ThreadCurrentObj )
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return CLIPOBJ;
}
