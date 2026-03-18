/*
 * XREFs of prfntKillList @ 0x1C00C5374
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00C8994 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00C8B3C (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0088CB4 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0088D5C (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00CEF20 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00CEF40 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C00CEF60 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 */

unsigned __int64 __fastcall prfntKillList(__int64 *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct PDEV *v9; // rdi
  struct RFONT *v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  struct PDEV *v14; // rdx
  struct RFONT *v15; // rsi
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  struct PDEV *v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  int v23; // [rsp+38h] [rbp-18h]
  unsigned __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  int v25; // [rsp+48h] [rbp-8h]
  struct PDEV *v26; // [rsp+88h] [rbp+38h] BYREF
  unsigned __int64 v27; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v28; // [rsp+98h] [rbp+48h] BYREF

  v2 = 0LL;
  v27 = 0LL;
  v21 = ghsemDriverMgmt;
  GreAcquireSemaphore(ghsemDriverMgmt);
  v20 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  GreAcquireHmgrSemaphore(v4, v3, v5, v6);
  v9 = gppdevList;
  if ( gppdevList )
  {
    do
    {
      if ( (*((_DWORD *)v9 + 10) & 1) != 0 )
      {
        v26 = v9;
        v11 = PDEVOBJ::prfntActive((PDEVOBJ *)&v26);
        while ( v11 )
        {
          v12 = *a1;
          v13 = (unsigned __int64)v11;
          v11 = (struct RFONT *)*((_QWORD *)v11 + 82);
          v23 = 0;
          v22 = v13;
          if ( *(_QWORD *)(v13 + 112) == v12 && !*(_DWORD *)(v13 + 644) )
          {
            v28 = *(_QWORD *)(v12 + 72);
            RFONTOBJ::vRemove((__int64)&v22, &v28, 0);
            *(_QWORD *)(*a1 + 72) = v28;
            if ( (*((_DWORD *)v9 + 10) & 0x800000) != 0 )
              v14 = (struct PDEV *)*((_QWORD *)v9 + 439);
            else
              v14 = v9;
            RFONTOBJ::vRemove((__int64)&v22, (unsigned __int64 *)v14 + 189, 1);
            RFONTOBJ::vInsert(&v22, &v27, 1);
          }
          v22 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
        }
        v15 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v26);
        while ( v15 )
        {
          v16 = *a1;
          v17 = (unsigned __int64)v15;
          v15 = (struct RFONT *)*((_QWORD *)v15 + 82);
          v25 = 0;
          v24 = v17;
          if ( *(_QWORD *)(v17 + 112) == v16 )
          {
            v28 = *(_QWORD *)(v16 + 72);
            RFONTOBJ::vRemove((__int64)&v24, &v28, 0);
            *(_QWORD *)(*a1 + 72) = v28;
            if ( (*((_DWORD *)v9 + 10) & 0x800000) != 0 )
              v18 = (struct PDEV *)*((_QWORD *)v9 + 439);
            else
              v18 = v9;
            RFONTOBJ::vRemove((__int64)&v24, (unsigned __int64 *)v18 + 190, 1);
            RFONTOBJ::vInsert(&v24, &v27, 1);
            v19 = PDEVOBJ::cInactive((PDEVOBJ *)&v26) - 1;
            if ( (*((_DWORD *)v9 + 10) & 0x800000) != 0 )
              *(_DWORD *)(*((_QWORD *)v9 + 439) + 1528LL) = v19;
            else
              *((_DWORD *)v9 + 382) = v19;
          }
          v24 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
        }
      }
      v9 = *(struct PDEV **)v9;
    }
    while ( v9 );
    v2 = v27;
  }
  GreReleaseHmgrSemaphore(v8, v7);
  SEMOBJ::vUnlock((SEMOBJ *)&v20);
  SEMOBJ::vUnlock((SEMOBJ *)&v21);
  return v2;
}
