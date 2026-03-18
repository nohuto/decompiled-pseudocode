/*
 * XREFs of NtGdiPATHOBJ_bEnumClipLines @ 0x1C0298B60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C013A5A8 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C0295228 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

_BOOL8 __fastcall NtGdiPATHOBJ_bEnumClipLines(__int64 a1, __int64 a2, volatile void *a3)
{
  unsigned __int64 v4; // r13
  BOOL v6; // r14d
  struct _CLIPLINE *v7; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  unsigned __int64 v10; // r15
  struct _CLIPLINE *v11; // rax
  __int64 v12; // rax

  v4 = (unsigned int)a2;
  v6 = 0;
  v7 = 0LL;
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
  if ( (unsigned int)(v4 - 33) > 0x270FFDF )
  {
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
    return 0LL;
  }
  v10 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v10 )
  {
    v11 = (struct _CLIPLINE *)PALLOCMEM2((unsigned int)v4, 1886221639LL, 0);
    v7 = v11;
    if ( v11 )
    {
      memset(v11, 0, v4);
      if ( (*((_DWORD *)ThreadCurrentObj + 103) & 0x100) != 0 )
      {
        v12 = *(_QWORD *)(v10 + 72);
        if ( !v12 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnumClipLines:ppo->pco == NULL\n",
              4143);
          v6 = 1;
          goto LABEL_21;
        }
        if ( !*(_QWORD *)(v12 + 144) )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnumClipLines:ppo->pco->pcle == NULL\n",
              4149);
          v6 = 1;
        }
      }
      if ( !v6 )
        v6 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)(v10 + 72), (struct _PATHOBJ *)v10, v4, v7, 0);
    }
  }
LABEL_21:
  ProbeForWrite(a3, v4, 4u);
  if ( v7 )
    memmove((void *)a3, v7, v4);
  else
    memset((void *)a3, 0, v4);
  if ( v7 )
    Win32FreePool(v7);
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v6;
}
