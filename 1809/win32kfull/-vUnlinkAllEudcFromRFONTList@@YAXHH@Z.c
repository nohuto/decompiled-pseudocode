/*
 * XREFs of ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C0135950
 * Callers:
 *     bDeleteAllFlEntry @ 0x1C00CAE88 (bDeleteAllFlEntry.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00855AC (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00863E4 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     vMakeInactiveHelper @ 0x1C027C874 (vMakeInactiveHelper.c)
 */

void __fastcall vUnlinkAllEudcFromRFONTList()
{
  struct PDEV *i; // rdi
  struct RFONT *j; // rbx
  struct RFONT *k; // rbx
  struct RFONT *v3; // rcx
  unsigned int v4; // esi
  __int64 v5; // rax
  struct RFONT *v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h] BYREF
  int v11; // [rsp+30h] [rbp-20h]
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  int v13; // [rsp+40h] [rbp-10h]
  struct PDEV *v14; // [rsp+80h] [rbp+30h] BYREF
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF

  v9 = ghsemDriverMgmt;
  GreAcquireSemaphore(ghsemDriverMgmt);
  v15 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  for ( i = gppdevList; i; i = *(struct PDEV **)i )
  {
    v14 = i;
    for ( j = PDEVOBJ::prfntActive((PDEVOBJ *)&v14); j; j = (struct RFONT *)*((_QWORD *)j + 84) )
    {
      vMakeInactiveHelper((char *)j + 728);
      if ( *((_QWORD *)j + 92) )
        vMakeInactiveHelper((char *)j + 736);
      v3 = (struct RFONT *)*((_QWORD *)j + 93);
      if ( v3 )
      {
        v4 = 0;
        if ( *((_DWORD *)j + 210) )
        {
          do
            vMakeInactiveHelper(*((_QWORD *)j + 93) + 8LL * v4++);
          while ( v4 < *((_DWORD *)j + 210) );
          v3 = (struct RFONT *)*((_QWORD *)j + 93);
        }
        if ( v3 != (struct RFONT *)((char *)j + 752) )
          Win32FreePool(v3);
        *(_QWORD *)((char *)j + 836) = 0LL;
        *((_QWORD *)j + 93) = 0LL;
        *((_DWORD *)j + 208) = 0;
      }
      v5 = *((_QWORD *)j + 15);
      v11 = 0;
      v10 = 0LL;
      *(_QWORD *)(v5 + 120) = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
    }
    for ( k = PDEVOBJ::prfntInactive((PDEVOBJ *)&v14); k; k = (struct RFONT *)*((_QWORD *)k + 84) )
    {
      vMakeInactiveHelper((char *)k + 728);
      if ( *((_QWORD *)k + 92) )
        vMakeInactiveHelper((char *)k + 736);
      v6 = (struct RFONT *)*((_QWORD *)k + 93);
      if ( v6 )
      {
        v7 = 0;
        if ( *((_DWORD *)k + 210) )
        {
          do
            vMakeInactiveHelper(*((_QWORD *)k + 93) + 8LL * v7++);
          while ( v7 < *((_DWORD *)k + 210) );
          v6 = (struct RFONT *)*((_QWORD *)k + 93);
        }
        if ( v6 != (struct RFONT *)((char *)k + 752) )
          Win32FreePool(v6);
        *(_QWORD *)((char *)k + 836) = 0LL;
        *((_QWORD *)k + 93) = 0LL;
        *((_DWORD *)k + 208) = 0;
      }
      v8 = *((_QWORD *)k + 15);
      v13 = 0;
      v12 = 0LL;
      *(_QWORD *)(v8 + 120) = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
}
