/*
 * XREFs of NtGdiGetDCDword @ 0x1C00DA640
 * Callers:
 *     <none>
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C008FBB0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C023BC78 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C025BDB0 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiGetDCDword(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // esi
  int FontLanguageInfo; // edi
  unsigned int v6; // r15d
  DC *v7; // rdx
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  __int64 v15; // rbx
  char v17; // al
  DC *v18; // [rsp+20h] [rbp-28h] BYREF
  int v19; // [rsp+28h] [rbp-20h]
  unsigned int v20; // [rsp+2Ch] [rbp-1Ch]
  int v21; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  FontLanguageInfo = 0;
  v6 = 1;
  v19 = 0;
  v20 = 0;
  LOBYTE(a2) = 1;
  v18 = (DC *)HmgLockEx(a1, a2);
  if ( !v18 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_31;
  }
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v18) )
  {
    _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
    return 0;
  }
  v7 = v18;
  if ( (*((_DWORD *)v18 + 132) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v18);
LABEL_31:
    v7 = v18;
  }
  if ( !v7 )
    return 0;
  if ( v4 )
  {
    v8 = v4 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  if ( v14 == 1 )
                    FontLanguageInfo = *(_DWORD *)(*((_QWORD *)v7 + 10) + 308LL);
                  else
                    v6 = 0;
                }
                else
                {
                  LOBYTE(FontLanguageInfo) = *((_DWORD *)v7 + 8) == 1;
                }
              }
              else
              {
                FontLanguageInfo = dwGetFontLanguageInfo((struct XDCOBJ *)&v18);
              }
            }
            else
            {
              FontLanguageInfo = *((_DWORD *)v7 + 28);
            }
          }
          else
          {
            v17 = *((_DWORD *)v7 + 64) & 4;
            if ( (*(_DWORD *)(*((_QWORD *)v7 + 10) + 312LL) & 1) != 0 )
              FontLanguageInfo = 2 - (v17 != 0);
            else
              FontLanguageInfo = (v17 != 0) + 1;
          }
        }
        else
        {
          FontLanguageInfo = *(_DWORD *)(*((_QWORD *)v7 + 10) + 172LL);
        }
      }
      else
      {
        FontLanguageInfo = *(_DWORD *)(*((_QWORD *)v7 + 10) + 168LL);
      }
    }
    else
    {
      FontLanguageInfo = *(_DWORD *)(*((_QWORD *)v7 + 10) + 164LL);
    }
  }
  else
  {
    FontLanguageInfo = ((*((_DWORD *)v7 + 18) >> 13) & 1) == 0;
  }
  if ( v6 )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_DWORD *)MmUserProbeAddress;
    *a3 = FontLanguageInfo;
  }
  XDCOBJ::RestoreAttributes((XDCOBJ *)&v18);
  v21 = 0;
  v15 = *(_QWORD *)v18;
  HmgDecrementExclusiveReferenceCountEx(v18, v20, &v21);
  if ( v21 )
    bDeleteDCInternalEx(v15, 0LL);
  return v6;
}
