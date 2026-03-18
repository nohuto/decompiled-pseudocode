/*
 * XREFs of NtGdiFONTOBJ_pifi @ 0x1C00879A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000254C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     FONTOBJ_pifi @ 0x1C00874E0 (FONTOBJ_pifi.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00875F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C00877C8 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C0087930 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C00C5D50 (--0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00E2AC4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

IFIMETRICS *__fastcall NtGdiFONTOBJ_pifi(__int64 a1, __int64 a2)
{
  IFIMETRICS *v3; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  struct RFONT *v7; // rax
  FONTOBJ *v8; // rsi
  IFIMETRICS *v9; // rsi
  IFIMETRICS *v10; // rax
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
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
  v7 = (struct RFONT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  v8 = (FONTOBJ *)v7;
  if ( v7 )
  {
    v3 = (IFIMETRICS *)*((_QWORD *)ThreadCurrentObj + 40);
    if ( !v3 )
    {
      RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)v11, v7);
      UMPDAcquireRFONTSem((struct RFONTOBJ *)v11, ThreadCurrentObj, 0, 0, 0LL);
      v3 = FONTOBJ_pifi(v8);
      if ( v3 && v3 >= MmSystemRangeStart )
      {
        v9 = v3;
        v10 = (IFIMETRICS *)UMPDOBJ::_AllocUserMem(ThreadCurrentObj, v3->cjThis, 0);
        v3 = v10;
        if ( v10 )
        {
          memmove(v10, v9, v9->cjThis);
          *((_QWORD *)ThreadCurrentObj + 40) = v3;
        }
      }
      UMPDReleaseRFONTSem((struct RFONTOBJ *)v11, ThreadCurrentObj, 0LL, 0LL, 0LL);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v11);
    }
  }
  UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v3;
}
