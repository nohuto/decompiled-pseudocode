/*
 * XREFs of prfntKillList @ 0x1C011FB00
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C008E90C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C011FBB0 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C00965B8 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0097E64 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0098428 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C013F498 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C013F7CC (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 */

unsigned __int64 __fastcall prfntKillList(__int64 *a1)
{
  unsigned __int64 v2; // rdi
  struct PDEV *v3; // rbx
  struct RFONT *v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  struct PDEV *v8; // rdx
  struct RFONT *v9; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  struct PDEV *v12; // rdx
  unsigned int v13; // ecx
  unsigned __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+38h] BYREF
  struct PDEV *v18; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0LL;
  v19 = 0LL;
  v16 = ghsemDriverMgmt;
  GreAcquireSemaphore(ghsemDriverMgmt);
  v15 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  GreAcquireHmgrSemaphore();
  v3 = gppdevList;
  if ( gppdevList )
  {
    do
    {
      if ( (*((_DWORD *)v3 + 10) & 1) != 0 )
      {
        v18 = v3;
        v5 = PDEVOBJ::prfntActive((PDEVOBJ *)&v18);
        while ( v5 )
        {
          v6 = *a1;
          v7 = (unsigned __int64)v5;
          v5 = (struct RFONT *)*((_QWORD *)v5 + 84);
          v17 = v7;
          if ( *(_QWORD *)(v7 + 128) == v6 && !*(_DWORD *)(v7 + 660) )
          {
            v14 = *(_QWORD *)(v6 + 72);
            RFONTOBJ::vRemove((__int64)&v17, &v14, 0);
            *(_QWORD *)(*a1 + 72) = v14;
            if ( (*((_DWORD *)v3 + 10) & 0x800000) != 0 )
              v8 = (struct PDEV *)*((_QWORD *)v3 + 440);
            else
              v8 = v3;
            RFONTOBJ::vRemove((__int64)&v17, (unsigned __int64 *)v8 + 190, 1);
            RFONTOBJ::vInsert(&v17, &v19, 1);
          }
          v17 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
        }
        v9 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v18);
        while ( v9 )
        {
          v10 = *a1;
          v11 = (unsigned __int64)v9;
          v9 = (struct RFONT *)*((_QWORD *)v9 + 84);
          v17 = v11;
          if ( *(_QWORD *)(v11 + 128) == v10 )
          {
            v14 = *(_QWORD *)(v10 + 72);
            RFONTOBJ::vRemove((__int64)&v17, &v14, 0);
            *(_QWORD *)(*a1 + 72) = v14;
            if ( (*((_DWORD *)v3 + 10) & 0x800000) != 0 )
              v12 = (struct PDEV *)*((_QWORD *)v3 + 440);
            else
              v12 = v3;
            RFONTOBJ::vRemove((__int64)&v17, (unsigned __int64 *)v12 + 191, 1);
            RFONTOBJ::vInsert(&v17, &v19, 1);
            v13 = PDEVOBJ::cInactive((PDEVOBJ *)&v18) - 1;
            if ( (*((_DWORD *)v3 + 10) & 0x800000) != 0 )
              *(_DWORD *)(*((_QWORD *)v3 + 440) + 1536LL) = v13;
            else
              *((_DWORD *)v3 + 384) = v13;
          }
          v17 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
        }
      }
      v3 = *(struct PDEV **)v3;
    }
    while ( v3 );
    v2 = v19;
  }
  GreReleaseHmgrSemaphore();
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  return v2;
}
