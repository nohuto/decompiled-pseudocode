/*
 * XREFs of bUnloadEudcFont @ 0x1C00CB0C4
 * Callers:
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C00C3A08 (-CleanUpEUDC@@YAXXZ.c)
 *     bDeleteAllFlEntry @ 0x1C00CAE88 (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C027BD1C (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C027BF94 (GreEudcUnloadLinkW.c)
 *     bDeleteFlEntry @ 0x1C027C558 (bDeleteFlEntry.c)
 * Callees:
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0080080 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00824F8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C00869C0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vFreePql@PFEOBJ@@QEAAXXZ @ 0x1C00CB1A8 (-vFreePql@PFEOBJ@@QEAAXXZ.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00CB1D8 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C00CB6E8 (prfntDeactivateEudcRFONTs.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall bUnloadEudcFont(__int64 *a1)
{
  unsigned int v2; // edi
  int v3; // edx
  char *v4; // rcx
  __int64 v5; // rsi
  __int64 i; // r14
  __int64 v8; // r8
  struct _FONTOBJ *v9; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+28h] [rbp-38h]
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v12[32]; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int16 *v13; // [rsp+88h] [rbp+28h] BYREF
  __int64 v14; // [rsp+90h] [rbp+30h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v13, 0x20Au);
  v2 = 0;
  if ( v13 )
  {
    v14 = *a1;
    if ( (int)StringCchCopyW((char *)v13, 261LL, *(char **)(*(_QWORD *)v14 + 24LL)) >= 0 )
    {
      v3 = 0;
      if ( (dword_1C03177D4 & 0x10) != 0 || !bFinallyInitializeFontAssocDefault )
        goto LABEL_5;
      v4 = (char *)&unk_1C031121C;
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
        for ( i = v5; v5; i = v5 )
        {
          v5 = *(_QWORD *)(v5 + 672);
          v11 = *(_QWORD *)(i + 128);
          v10 = 0;
          v9 = (struct _FONTOBJ *)i;
          memset(v12, 0, sizeof(v12));
          PushThreadGuardedObject(v12, i, vRestartKillEudcRFONTs);
          RFONTOBJ::vDeleteRFONT(&v9, 0LL, (struct PFFOBJ *)&v11, 1);
          PopThreadGuardedObject(v12);
          v9 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
        }
      }
      if ( (unsigned int)PFTOBJ::bUnloadEUDCFont((PFTOBJ *)v4, v13) )
        v2 = 1;
    }
    Win32FreePool(v13);
  }
  return v2;
}
