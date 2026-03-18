/*
 * XREFs of bDeleteAllFlEntry @ 0x1C008E3CC
 * Callers:
 *     GreEnableEUDC @ 0x1C011CCCC (GreEnableEUDC.c)
 * Callees:
 *     vLinkEudcPFEs @ 0x1C0088BFC (vLinkEudcPFEs.c)
 *     bUnloadEudcFont @ 0x1C008EB48 (bUnloadEudcFont.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C0102DE8 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C011AC8C (-vUnlinkAllEudcFromRFONTList@@YAXHH@Z.c)
 */

__int64 bDeleteAllFlEntry()
{
  __int64 v0; // rcx
  int v1; // edx
  int v2; // ecx
  _UNKNOWN **v3; // rbx
  int v4; // eax
  int v5; // esi
  char v6; // di
  _UNKNOWN **v7; // rcx
  int v8; // r9d
  _QWORD *v9; // rdx
  _QWORD *v10; // r8
  int v11; // r11d
  _QWORD *v12; // r11
  _QWORD *v13; // r11
  __int64 v14; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  _QWORD *v19; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-20h] BYREF
  _QWORD **v22; // [rsp+28h] [rbp-18h]
  __int128 v23; // [rsp+30h] [rbp-10h] BYREF

  v22 = &v21;
  v21 = &v21;
  v23 = 0LL;
  GreAcquireSemaphore(ghsemEUDC1);
  if ( gcEUDCCount > 0 )
  {
    EngSetLastError(0xA7u);
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    return 0LL;
  }
  else
  {
    vUnlinkAllEudcRFONTsAndPFEs(v0, 1LL);
    vUnlinkAllEudcFromRFONTList(v2, v1);
    if ( *(_OWORD *)&gappfeSysEUDC != 0LL )
    {
      ++dword_1C0330E70;
      v23 = *(_OWORD *)&gappfeSysEUDC;
      *(_OWORD *)&gappfeSysEUDC = 0uLL;
      Dst = 0;
    }
    v3 = (_UNKNOWN **)off_1C031F388;
    if ( off_1C031F388 != (_UNKNOWN *)&off_1C031F388 )
    {
      v4 = dword_1C032A7B4;
      v5 = dword_1C032A7B4;
      v6 = dword_1C032A7BC;
      do
      {
        v7 = v3;
        v8 = 0;
        v3 = (_UNKNOWN **)*v3;
        v9 = v7[2];
        if ( v9 == v7 + 2 )
          goto LABEL_15;
        do
        {
          v10 = v9;
          v9 = (_QWORD *)*v9;
          v11 = *((_DWORD *)v10 + 4);
          if ( !v11 && (v6 & 2) != 0 || v11 == 1 && (v6 & 8) != 0 )
          {
            if ( (_QWORD *)v9[1] != v10 )
              goto LABEL_31;
            v12 = (_QWORD *)v10[1];
            if ( (_QWORD *)*v12 != v10 )
              goto LABEL_31;
            *v12 = v9;
            v9[1] = v12;
            v13 = v22;
            if ( *v22 != &v21 )
              goto LABEL_31;
            v10[1] = v22;
            *v10 = &v21;
            *v13 = v10;
            v22 = (_QWORD **)v10;
          }
          else
          {
            ++v8;
          }
        }
        while ( v9 != v7 + 2 );
        if ( v8 )
        {
          if ( *((_DWORD *)v7 + 25) != v8 )
          {
            ++*((_DWORD *)v7 + 26);
            *((_DWORD *)v7 + 25) = v8;
          }
        }
        else
        {
LABEL_15:
          v14 = (__int64)*v7;
          if ( *((_UNKNOWN ***)*v7 + 1) != v7 || (v15 = v7[1], (_UNKNOWN **)*v15 != v7) )
LABEL_31:
            __fastfail(3u);
          *v15 = v14;
          *(_QWORD *)(v14 + 8) = v15;
          Win32FreePool(v7);
          v6 = dword_1C032A7BC;
          v4 = --dword_1C032A7B4;
        }
      }
      while ( v3 != &off_1C031F388 );
      if ( v5 != v4 )
        ++dword_1C032A7B8;
      if ( v4 )
        vLinkEudcPFEs(0LL);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    if ( v23 != 0 )
      bUnloadEudcFont(&v23);
    v16 = v21;
    while ( v16 != &v21 )
    {
      v17 = (_QWORD *)*v16;
      v18 = v16;
      v16 = v17;
      if ( (_QWORD *)v17[1] != v18 )
        goto LABEL_31;
      v19 = (_QWORD *)v18[1];
      if ( (_QWORD *)*v19 != v18 )
        goto LABEL_31;
      *v19 = v17;
      v17[1] = v19;
      bUnloadEudcFont(v18 + 4);
      Win32FreePool(v18);
    }
    return 1LL;
  }
}
