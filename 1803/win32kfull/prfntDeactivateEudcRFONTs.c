/*
 * XREFs of prfntDeactivateEudcRFONTs @ 0x1C00C86B4
 * Callers:
 *     bUnloadEudcFont @ 0x1C00CAC68 (bUnloadEudcFont.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0088CB4 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0088D5C (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00CE388 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00CE3B0 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00CEF20 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00CEF40 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C00CEF60 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 */

unsigned __int64 __fastcall prfntDeactivateEudcRFONTs(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  struct _FONTHASH **v3; // rdi
  unsigned int v4; // r12d
  struct _FONTHASH *i; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // ecx
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  int v14; // [rsp+38h] [rbp-18h]
  __int64 v15; // [rsp+40h] [rbp-10h] BYREF
  int v16; // [rsp+48h] [rbp-8h]
  struct RFONT *v17; // [rsp+98h] [rbp+48h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v19; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0LL;
  v19 = 0LL;
  v12 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v11 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v3 = gpPFTPublic;
  v4 = 0;
  if ( *((_DWORD *)gpPFTPublic + 6) )
  {
    do
    {
      for ( i = v3[v4 + 5]; i; i = (struct _FONTHASH *)*((_QWORD *)i + 1) )
      {
        if ( (*((_DWORD *)i + 13) & 8) != 0 )
        {
          v7 = *((_QWORD *)i + 9);
          while ( v7 )
          {
            v8 = *(_QWORD *)(v7 + 104);
            if ( v8 == *a1 || v8 == a1[1] )
            {
              v9 = *(_QWORD *)(v7 + 88);
              v18 = v9;
              v14 = 0;
              v13 = v7;
              if ( *(_DWORD *)(v7 + 644) )
              {
                v17 = PDEVOBJ::prfntActive((PDEVOBJ *)&v18);
                RFONTOBJ::vRemove((__int64)&v13, (unsigned __int64 *)&v17, 1);
                PDEVOBJ::prfntActive((PDEVOBJ *)&v18, v17);
              }
              else
              {
                v17 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v18);
                RFONTOBJ::vRemove((__int64)&v13, (unsigned __int64 *)&v17, 1);
                PDEVOBJ::prfntInactive((PDEVOBJ *)&v18, v17);
                v10 = PDEVOBJ::cInactive((PDEVOBJ *)&v18) - 1;
                if ( (*(_DWORD *)(v9 + 40) & 0x800000) != 0 )
                  *(_DWORD *)(*(_QWORD *)(v9 + 3512) + 1528LL) = v10;
                else
                  *(_DWORD *)(v9 + 1528) = v10;
              }
              RFONTOBJ::vInsert(&v13, &v19, 1);
              v13 = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
            }
            v7 = *(_QWORD *)(v7 + 488);
            v16 = 0;
            v15 = 0LL;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
          }
        }
      }
      ++v4;
    }
    while ( v4 < *((_DWORD *)v3 + 6) );
    v2 = v19;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v11);
  SEMOBJ::vUnlock((SEMOBJ *)&v12);
  return v2;
}
