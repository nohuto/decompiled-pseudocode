/*
 * XREFs of bUnloadEudcFont @ 0x1C00CAC68
 * Callers:
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C004F844 (-CleanUpEUDC@@YAXXZ.c)
 *     bDeleteAllFlEntry @ 0x1C00C8494 (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C0267E84 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C02680CC (GreEudcUnloadLinkW.c)
 *     bDeleteFlEntry @ 0x1C026864C (bDeleteFlEntry.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0088DC8 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C00C86B4 (prfntDeactivateEudcRFONTs.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00C8894 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00CB000 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?vFreePql@PFEOBJ@@QEAAXXZ @ 0x1C00CCBB8 (-vFreePql@PFEOBJ@@QEAAXXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00D0654 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall bUnloadEudcFont(__int64 *a1)
{
  unsigned int v2; // edi
  int v3; // edx
  char *v4; // rcx
  unsigned __int64 v5; // rsi
  struct _FONTOBJ *i; // r14
  __int64 v8; // r8
  struct _FONTOBJ *v9; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+28h] [rbp-38h]
  PVOID v11[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v12[32]; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int16 *v13; // [rsp+88h] [rbp+28h] BYREF
  __int64 v14; // [rsp+90h] [rbp+30h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v13, 0x20Au);
  v2 = 0;
  if ( v13 )
  {
    v14 = *a1;
    if ( (int)StringCchCopyW(v13, 0x105uLL, *(const unsigned __int16 **)(*(_QWORD *)v14 + 24LL)) >= 0 )
    {
      v3 = 0;
      if ( (dword_1C0327114 & 0x10) != 0 || !bFinallyInitializeFontAssocDefault )
        goto LABEL_5;
      v4 = (char *)&unk_1C03209FC;
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
        PFEOBJ::vFreePql((PFEOBJ *)&v14);
        v14 = a1[1];
        if ( v14 )
          PFEOBJ::vFreePql((PFEOBJ *)&v14);
        v5 = prfntDeactivateEudcRFONTs(a1);
        for ( i = (struct _FONTOBJ *)v5; v5; i = (struct _FONTOBJ *)v5 )
        {
          v5 = *(_QWORD *)(v5 + 656);
          v11[0] = i[1].pvConsumer;
          v10 = 0;
          v9 = i;
          memset(v12, 0, sizeof(v12));
          PushThreadGuardedObject(v12, i, vRestartKillEudcRFONTs);
          RFONTOBJ::vDeleteRFONT(&v9, 0LL, (struct PFFOBJ *)v11, 1);
          PopThreadGuardedObject(v12);
          v9 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
        }
      }
      if ( (unsigned int)PFTOBJ::bUnloadEUDCFont((struct _FONTHASH **)v4, v13) )
        v2 = 1;
    }
    Win32FreePool(v13);
  }
  return v2;
}
