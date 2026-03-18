/*
 * XREFs of prfntKillList @ 0x1C00CBFA4
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00CB410 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00CB9F8 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00855AC (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C008605C (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00863E4 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0086C2C (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C0126690 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
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
  struct RFONT *v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  struct PDEV *v13; // rdx
  struct RFONT *v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  struct PDEV *v17; // rdx
  unsigned int v18; // ecx
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
        v10 = PDEVOBJ::prfntActive((PDEVOBJ *)&v26);
        while ( v10 )
        {
          v11 = *a1;
          v12 = (unsigned __int64)v10;
          v10 = (struct RFONT *)*((_QWORD *)v10 + 84);
          v23 = 0;
          v22 = v12;
          if ( *(_QWORD *)(v12 + 128) == v11 && *(int *)(v12 + 660) <= 0 )
          {
            v28 = *(_QWORD *)(v11 + 72);
            RFONTOBJ::vRemove((__int64)&v22, &v28, 0);
            *(_QWORD *)(*a1 + 72) = v28;
            if ( (*((_DWORD *)v9 + 10) & 0x800000) != 0 )
              v13 = (struct PDEV *)*((_QWORD *)v9 + 440);
            else
              v13 = v9;
            RFONTOBJ::vRemove((__int64)&v22, (unsigned __int64 *)v13 + 190, 1);
            RFONTOBJ::vInsert(&v22, &v27, 1);
          }
          v22 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
        }
        v14 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v26);
        while ( v14 )
        {
          v15 = *a1;
          v16 = (unsigned __int64)v14;
          v14 = (struct RFONT *)*((_QWORD *)v14 + 84);
          v25 = 0;
          v24 = v16;
          if ( *(_QWORD *)(v16 + 128) == v15 )
          {
            v28 = *(_QWORD *)(v15 + 72);
            RFONTOBJ::vRemove((__int64)&v24, &v28, 0);
            *(_QWORD *)(*a1 + 72) = v28;
            if ( (*((_DWORD *)v9 + 10) & 0x800000) != 0 )
              v17 = (struct PDEV *)*((_QWORD *)v9 + 440);
            else
              v17 = v9;
            RFONTOBJ::vRemove((__int64)&v24, (unsigned __int64 *)v17 + 191, 1);
            RFONTOBJ::vInsert(&v24, &v27, 1);
            v18 = PDEVOBJ::cInactive((PDEVOBJ *)&v26) - 1;
            if ( (*((_DWORD *)v9 + 10) & 0x800000) != 0 )
              *(_DWORD *)(*((_QWORD *)v9 + 440) + 1536LL) = v18;
            else
              *((_DWORD *)v9 + 384) = v18;
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
