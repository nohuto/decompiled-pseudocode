/*
 * XREFs of ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1C00E87D4
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00E86D4 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00855AC (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00863E4 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     _lambda_42f186421c331d4d68df43a01bbfc838_::operator() @ 0x1C0161648 (_lambda_42f186421c331d4d68df43a01bbfc838_--operator().c)
 */

void UmfdZombifyAllUmfdFonts(void)
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  struct PDEV *i; // r8
  struct RFONT *j; // rax
  __int64 v4; // r9
  struct RFONT *k; // rax
  struct PDEV **v6; // r8
  __int64 v7; // r9
  struct PDEV *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v8 = (struct PDEV *)ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  GreAcquireFastMutex(ghfmMemory);
  lambda_42f186421c331d4d68df43a01bbfc838_::operator()(v0, gpPFTPublic);
  lambda_42f186421c331d4d68df43a01bbfc838_::operator()(v1, gpPFTPrivate);
  GreReleaseFastMutex(ghfmMemory);
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
  v10 = ghsemDriverMgmt;
  GreAcquireSemaphore(ghsemDriverMgmt);
  v9 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  for ( i = gppdevList; i; i = *v6 )
  {
    v8 = i;
    if ( !i )
      break;
    for ( j = PDEVOBJ::prfntActive((PDEVOBJ *)&v8); j; j = (struct RFONT *)*((_QWORD *)j + 84) )
    {
      if ( *((_QWORD *)j + 12) == v4 )
        *((_QWORD *)j + 7) = 0LL;
    }
    for ( k = PDEVOBJ::prfntInactive((PDEVOBJ *)&v8); k; k = (struct RFONT *)*((_QWORD *)k + 84) )
    {
      if ( *((_QWORD *)k + 12) == v7 )
        *((_QWORD *)k + 7) = 0LL;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
}
