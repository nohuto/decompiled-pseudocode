/*
 * XREFs of InitFNTCache @ 0x1C0141490
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C011D930 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     QueryFontReg @ 0x1C0141720 (QueryFontReg.c)
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C01417E8 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     bFntCacheDisabled @ 0x1C01418F4 (bFntCacheDisabled.c)
 *     bServicingStackModifiedFonts @ 0x1C0141A3C (bServicingStackModifiedFonts.c)
 *     bSetFntCacheReg @ 0x1C0141A90 (bSetFntCacheReg.c)
 *     vGetLastBootTimeStatus @ 0x1C0141B10 (vGetLastBootTimeStatus.c)
 *     ComputeFileviewCheckSum @ 0x1C0142960 (ComputeFileviewCheckSum.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C01429CC (-bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z.c)
 *     vGetFontDriverLWT @ 0x1C0142ABC (vGetFontDriverLWT.c)
 *     bInitCacheTable @ 0x1C02854F8 (bInitCacheTable.c)
 */

void InitFNTCache()
{
  int v0; // ebx
  __int64 v1; // r9
  int FontReg; // eax
  int v3; // r12d
  const unsigned __int16 *v4; // rcx
  int *v5; // r9
  _DWORD *v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rdi
  int v11; // edx
  _DWORD *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  int CurrentServiceSessionId; // eax
  char v17; // r10
  _DWORD *v18; // r8
  unsigned __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  int inited; // eax
  int v23; // ecx
  __int64 v24; // [rsp+40h] [rbp-38h] BYREF
  __int64 v25; // [rsp+48h] [rbp-30h] BYREF
  __int64 v26; // [rsp+50h] [rbp-28h]
  __int64 v27; // [rsp+58h] [rbp-20h]
  _QWORD v28[3]; // [rsp+60h] [rbp-18h] BYREF
  USHORT AnsiCodePage; // [rsp+C0h] [rbp+48h] BYREF
  USHORT OemCodePage; // [rsp+C8h] [rbp+50h] BYREF
  int v31; // [rsp+D0h] [rbp+58h]
  int v32; // [rsp+D8h] [rbp+60h]

  v0 = 0;
  v27 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v28[0] = ghsemFntCache;
  v24 = 0LL;
  v31 = 0;
  v32 = 0;
  GreAcquireSemaphore(ghsemFntCache);
  dword_1C032A320 = 0;
  if ( (int)GetGreRegKey(
              &ghkeyGreInitialize,
              0xC0000000,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize") < 0
    || (unsigned int)bFntCacheDisabled() )
  {
LABEL_43:
    v1 = qword_1C032A328;
    goto LABEL_19;
  }
  qword_1C032A328 = (__int64)PALLOCMEM2(0x80uLL, 1128682580LL, 1);
  v1 = qword_1C032A328;
  if ( !qword_1C032A328 )
    goto LABEL_19;
  if ( G_fConsole )
  {
    v20 = bSetFntCacheReg(0LL, 1LL);
    v1 = qword_1C032A328;
    if ( !v20 )
      goto LABEL_19;
  }
  *(_QWORD *)v1 = 0LL;
  *(_DWORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 20) = 0;
  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  vGetLastBootTimeStatus();
  vGetFontDriverLWT(&v25, &v24);
  FontReg = QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Fonts");
  v3 = v31;
  if ( FontReg )
  {
    v3 = v31 + 40;
    QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Type 1 Installer\\Type 1 Fonts");
    v0 = v32;
  }
  if ( (unsigned int)bServicingStackModifiedFonts()
    || !bMapFileRetainHandle(v4, (struct _FILEVIEW *)(qword_1C032A328 + 48), 0, v5) )
  {
    v1 = qword_1C032A328;
  }
  else
  {
    v1 = qword_1C032A328;
    *(_QWORD *)qword_1C032A328 = *(_QWORD *)(qword_1C032A328 + 56);
  }
  v6 = *(_DWORD **)v1;
  if ( !*(_QWORD *)v1 )
  {
    if ( !G_fConsole )
      goto LABEL_19;
    inited = bInitCacheTable(v3, v0, v27, v26, v25, v24, AnsiCodePage);
    v23 = dword_1C032A320;
    if ( inited )
      v23 = 2;
    dword_1C032A320 = v23;
    goto LABEL_43;
  }
  v7 = v27;
  v8 = v26;
  v9 = v25;
  v10 = v24;
  if ( *v6 )
  {
    v11 = *(_DWORD *)(v1 + 72);
    if ( v11 == v6[6] )
    {
      v12 = *(_DWORD **)v1;
      if ( *v12 == (unsigned int)ComputeFileviewCheckSum(v6 + 1, (unsigned int)(v11 - 4)) && *((_QWORD *)v12 + 6) == v10 )
      {
        v1 = qword_1C032A328;
        if ( v12[3] == AnsiCodePage )
        {
          v15 = *(unsigned int *)(qword_1C032A328 + 12);
          if ( (v15 & 1) == 0
            && (!G_fConsole
             || (v15 & 2) == 0 && *((_QWORD *)v12 + 5) == v9 && v7 == *((_QWORD *)v12 + 7) && v8 == *((_QWORD *)v12 + 8)) )
          {
            dword_1C032A320 = 1;
            CurrentServiceSessionId = RtlGetCurrentServiceSessionId(v15, v13, v14, qword_1C032A328);
            v1 = qword_1C032A328;
            if ( CurrentServiceSessionId && v7 == *(_QWORD *)(*(_QWORD *)qword_1C032A328 + 56LL) )
              dword_1C032A320 |= 4u;
            goto LABEL_19;
          }
        }
      }
      else
      {
        v1 = qword_1C032A328;
      }
    }
  }
  if ( G_fConsole )
  {
    v21 = bInitCacheTable(v3, v32, v7, v8, v9, v10, AnsiCodePage);
    v1 = qword_1C032A328;
    if ( v21 )
      dword_1C032A320 = 2;
  }
LABEL_19:
  v17 = dword_1C032A320;
  if ( (dword_1C032A320 & 3) != 0 )
  {
    v18 = *(_DWORD **)v1;
    v19 = *(_QWORD *)v1 + ((80LL * *(unsigned int *)(*(_QWORD *)v1 + 16LL) + 327) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(v1 + 24) = v19;
    *(_QWORD *)(v1 + 32) = v19 + (unsigned int)v18[9];
    *(_QWORD *)(v1 + 40) = v19 + (unsigned int)v18[8] + (unsigned int)v18[7];
    *(_DWORD *)(v1 + 8) = v18[5];
    if ( (v17 & 1) != 0 )
      bSetFntCacheReg(0LL, 0LL);
    else
      *(_DWORD *)(v1 + 16) = 0;
  }
  else
  {
    vCleanUpFntCacheInternal();
  }
  SEMOBJ::vUnlock((SEMOBJ *)v28);
}
