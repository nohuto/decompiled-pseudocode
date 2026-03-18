/*
 * XREFs of NtGdiEngComputeGlyphSet @ 0x1C0296380
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00E2AC4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     EngComputeGlyphSet @ 0x1C00F6300 (EngComputeGlyphSet.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C00F67E8 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiEngComputeGlyphSet(INT nCodePage, __int64 nFirstChar, INT cChars)
{
  INT v5; // ebp
  __int64 v6; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  FD_GLYPHSET *v9; // rax
  struct _FD_GLYPHSET *v10; // rsi
  ULONG cjThis; // ebp
  __int64 v12; // rax

  v5 = nFirstChar;
  v6 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), nFirstChar);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  if ( ThreadCurrentObj )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
    {
      if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
      {
        ThreadCurrentObj = 0LL;
        goto LABEL_11;
      }
    }
    else
    {
      ++*((_DWORD *)ThreadCurrentObj + 105);
    }
    v9 = EngComputeGlyphSet(nCodePage, v5, cChars);
    v10 = v9;
    if ( v9 )
    {
      cjThis = v9->cjThis;
      if ( v9->cjThis )
      {
        v12 = (__int64)UMPDOBJ::_AllocUserMem(ThreadCurrentObj, cjThis, 0);
        v6 = v12;
        if ( v12 )
          v6 = -(__int64)((unsigned int)WriteFD_GLYPHSET((struct _FD_GLYPHSET *)v12, v10, cjThis) != 0) & v12;
      }
      EngFreeMem(v10);
    }
  }
LABEL_11:
  if ( ThreadCurrentObj )
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v6;
}
