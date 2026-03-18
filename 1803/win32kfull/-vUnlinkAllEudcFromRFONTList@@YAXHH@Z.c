/*
 * XREFs of ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C0110264
 * Callers:
 *     bDeleteAllFlEntry @ 0x1C00C8494 (bDeleteAllFlEntry.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00CEF20 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00CEF40 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     vMakeInactiveHelper @ 0x1C026891C (vMakeInactiveHelper.c)
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
    for ( j = PDEVOBJ::prfntActive((PDEVOBJ *)&v14); j; j = (struct RFONT *)*((_QWORD *)j + 82) )
    {
      vMakeInactiveHelper((char *)j + 712);
      if ( *((_QWORD *)j + 90) )
        vMakeInactiveHelper((char *)j + 720);
      v3 = (struct RFONT *)*((_QWORD *)j + 91);
      if ( v3 )
      {
        v4 = 0;
        if ( *((_DWORD *)j + 206) )
        {
          do
            vMakeInactiveHelper(*((_QWORD *)j + 91) + 8LL * v4++);
          while ( v4 < *((_DWORD *)j + 206) );
          v3 = (struct RFONT *)*((_QWORD *)j + 91);
        }
        if ( v3 != (struct RFONT *)((char *)j + 736) )
          Win32FreePool(v3);
        *(_QWORD *)((char *)j + 820) = 0LL;
        *((_QWORD *)j + 91) = 0LL;
        *((_DWORD *)j + 204) = 0;
      }
      v5 = *((_QWORD *)j + 13);
      v11 = 0;
      v10 = 0LL;
      *(_QWORD *)(v5 + 120) = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
    }
    for ( k = PDEVOBJ::prfntInactive((PDEVOBJ *)&v14); k; k = (struct RFONT *)*((_QWORD *)k + 82) )
    {
      vMakeInactiveHelper((char *)k + 712);
      if ( *((_QWORD *)k + 90) )
        vMakeInactiveHelper((char *)k + 720);
      v6 = (struct RFONT *)*((_QWORD *)k + 91);
      if ( v6 )
      {
        v7 = 0;
        if ( *((_DWORD *)k + 206) )
        {
          do
            vMakeInactiveHelper(*((_QWORD *)k + 91) + 8LL * v7++);
          while ( v7 < *((_DWORD *)k + 206) );
          v6 = (struct RFONT *)*((_QWORD *)k + 91);
        }
        if ( v6 != (struct RFONT *)((char *)k + 736) )
          Win32FreePool(v6);
        *(_QWORD *)((char *)k + 820) = 0LL;
        *((_QWORD *)k + 91) = 0LL;
        *((_DWORD *)k + 204) = 0;
      }
      v8 = *((_QWORD *)k + 13);
      v13 = 0;
      v12 = 0LL;
      *(_QWORD *)(v8 + 120) = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
}
