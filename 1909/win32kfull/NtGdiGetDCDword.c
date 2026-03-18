/*
 * XREFs of NtGdiGetDCDword @ 0x1C00D7D70
 * Callers:
 *     <none>
 * Callees:
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269334 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C0287884 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiGetDCDword(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v5; // edi
  int FontLanguageInfo; // r15d
  DC *v7; // r9
  struct _DC_ATTR *UserAttr; // rax
  struct _DC_ATTR *v9; // rax
  __int64 v10; // rbx
  int v12; // eax
  DC *v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v5 = 1;
  FontLanguageInfo = 0;
  v14 = 0LL;
  v7 = (DC *)HmgLockEx(a1, 1LL, 0LL);
  v13 = v7;
  if ( !v7 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_39;
  }
  if ( (*((_DWORD *)v7 + 11) & 2) == 0 )
  {
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v13);
    if ( UserAttr && !DC::SaveAttributes(v13, UserAttr) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
      return 0;
    }
    *((_DWORD *)v13 + 11) |= 2u;
    LODWORD(v14) = 1;
    v7 = v13;
  }
  if ( (*((_DWORD *)v7 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v7);
LABEL_39:
    v7 = v13;
  }
  if ( !v7 )
    return 0;
  if ( a2 == 7 )
  {
    LOBYTE(FontLanguageInfo) = *((_DWORD *)v7 + 8) == 1;
  }
  else
  {
    switch ( a2 )
    {
      case 0:
        if ( (*((_DWORD *)v7 + 18) & 0x2000) == 0 )
          goto LABEL_30;
        break;
      case 1:
        FontLanguageInfo = *(_DWORD *)(*((_QWORD *)v7 + 122) + 352LL);
        break;
      case 2:
        FontLanguageInfo = *(_DWORD *)(*((_QWORD *)v7 + 122) + 284LL);
        break;
      case 3:
        FontLanguageInfo = *(_DWORD *)(*((_QWORD *)v7 + 122) + 288LL);
        break;
      case 4:
        v12 = *((_DWORD *)v7 + 62);
        if ( (*(_DWORD *)(*((_QWORD *)v7 + 122) + 108LL) & 1) != 0 )
        {
          FontLanguageInfo = 2 - ((v12 & 4) != 0);
        }
        else if ( (v12 & 4) != 0 )
        {
          FontLanguageInfo = 2;
        }
        else
        {
LABEL_30:
          FontLanguageInfo = 1;
        }
        break;
      case 5:
        FontLanguageInfo = *((_DWORD *)v7 + 26);
        break;
      case 6:
        FontLanguageInfo = dwGetFontLanguageInfo((struct XDCOBJ *)&v13);
        v7 = v13;
        break;
      case 8:
        FontLanguageInfo = *(_DWORD *)(*((_QWORD *)v7 + 122) + 104LL);
        break;
      default:
        v5 = 0;
        break;
    }
  }
  if ( v5 )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_DWORD *)MmUserProbeAddress;
    *a3 = FontLanguageInfo;
    v7 = v13;
  }
  if ( (_DWORD)v14 && (*((_DWORD *)v7 + 11) & 2) != 0 )
  {
    if ( !HIDWORD(v14) )
    {
      v9 = XDCOBJ::GetUserAttr((XDCOBJ *)&v13);
      if ( v9 )
        DC::RestoreAttributes(v13, v9);
      v7 = v13;
    }
    *((_DWORD *)v7 + 11) &= ~2u;
    LODWORD(v14) = 0;
    v7 = v13;
  }
  v15 = 0;
  v10 = *(_QWORD *)v7;
  HmgDecrementExclusiveReferenceCountEx(v7, HIDWORD(v14), &v15);
  if ( v15 )
    bDeleteDCInternalEx(v10, 0LL);
  return v5;
}
