/*
 * XREFs of NtGdiFONTOBJ_pfdg @ 0x1C0298520
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00875F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C00877C8 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C0087930 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00E2AC4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C00F67E8 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

void *__fastcall NtGdiFONTOBJ_pfdg(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  struct _FD_GLYPHSET *v8; // rsi
  ULONG v9; // ebp
  char *v10; // rax
  unsigned __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]

  v3 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  if ( ThreadCurrentObj )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
    {
      if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
      {
        ThreadCurrentObj = 0LL;
        goto LABEL_17;
      }
    }
    else
    {
      ++*((_DWORD *)ThreadCurrentObj + 105);
    }
    v6 = UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
    v7 = v6;
    if ( v6 )
    {
      v3 = (void *)*((_QWORD *)ThreadCurrentObj + 41);
      if ( !v3 )
      {
        v13 = 0;
        v12 = v6;
        UMPDAcquireRFONTSem((struct RFONTOBJ *)&v12, ThreadCurrentObj, 0, 0, 0LL);
        v8 = *(struct _FD_GLYPHSET **)(v7 + 472);
        if ( v8 )
        {
          if ( v8 < MmSystemRangeStart )
          {
            v3 = v8;
            *((_QWORD *)ThreadCurrentObj + 41) = v8;
          }
          else
          {
            v9 = 4 * (v8->cGlyphsSupported + 4 * (v8->cRuns + 1));
            if ( v9 )
            {
              v10 = UMPDOBJ::_AllocUserMem(ThreadCurrentObj, v9, 0);
              v3 = v10;
              if ( v10 )
              {
                if ( (unsigned int)WriteFD_GLYPHSET((struct _FD_GLYPHSET *)v10, v8, v9) )
                  *((_QWORD *)ThreadCurrentObj + 41) = v3;
                else
                  v3 = 0LL;
              }
            }
          }
        }
        UMPDReleaseRFONTSem((struct RFONTOBJ *)&v12, ThreadCurrentObj, 0LL, 0LL, 0LL);
        v12 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
      }
    }
  }
LABEL_17:
  if ( ThreadCurrentObj )
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v3;
}
