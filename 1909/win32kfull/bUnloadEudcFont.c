/*
 * XREFs of bUnloadEudcFont @ 0x1C008EB48
 * Callers:
 *     bDeleteAllFlEntry @ 0x1C008E3CC (bDeleteAllFlEntry.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C011C934 (-CleanUpEUDC@@YAXXZ.c)
 *     GreEudcLoadLinkW @ 0x1C0291A48 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C0291D3C (GreEudcUnloadLinkW.c)
 *     bDeleteFlEntry @ 0x1C02922CC (bDeleteFlEntry.c)
 * Callees:
 *     prfntDeactivateEudcRFONTs @ 0x1C008E608 (prfntDeactivateEudcRFONTs.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C008E6D4 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?vFreePql@PFEOBJ@@QEAAXXZ @ 0x1C008EC2C (-vFreePql@PFEOBJ@@QEAAXXZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0095D40 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0096348 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C009AF84 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall bUnloadEudcFont(__int64 *a1)
{
  unsigned int v2; // edi
  int v3; // edx
  char *v4; // rcx
  __int64 v5; // rsi
  __int64 i; // r14
  __int64 v8; // r8
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v10[32]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 *v11; // [rsp+78h] [rbp+28h] BYREF
  __int64 v12; // [rsp+80h] [rbp+30h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v11, 0x20Au);
  v2 = 0;
  if ( v11 )
  {
    v12 = *a1;
    if ( (int)StringCchCopyW(v11, 0x105uLL, *(const unsigned __int16 **)(*(_QWORD *)v12 + 24LL)) >= 0 )
    {
      v3 = 0;
      if ( (dword_1C032A7BC & 0x10) != 0 || !bFinallyInitializeFontAssocDefault )
        goto LABEL_5;
      v4 = (char *)&unk_1C032424C;
      v8 = 7LL;
      do
      {
        if ( *((_DWORD *)v4 - 31) && *(_WORD *)v4 && *(_QWORD *)(v4 + 524) == *a1 )
          v3 = 1;
        v4 += 664;
        --v8;
      }
      while ( v8 );
      if ( !v3 )
      {
LABEL_5:
        PFEOBJ::vFreePql((PFEOBJ *)&v12);
        v12 = a1[1];
        if ( v12 )
          PFEOBJ::vFreePql((PFEOBJ *)&v12);
        v5 = prfntDeactivateEudcRFONTs(a1);
        for ( i = v5; v5; i = v5 )
        {
          v5 = *(_QWORD *)(v5 + 672);
          v9 = *(_QWORD *)(i + 128);
          v12 = i;
          memset(v10, 0, sizeof(v10));
          PushThreadGuardedObject(v10, i, vRestartKillEudcRFONTs);
          RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v12, 0LL, (struct PFFOBJ *)&v9, 1);
          PopThreadGuardedObject(v10);
          v12 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
        }
      }
      if ( (unsigned int)PFTOBJ::bUnloadEUDCFont((struct _FONTHASH **)v4, v11) )
        v2 = 1;
    }
    Win32FreePool(v11);
  }
  return v2;
}
