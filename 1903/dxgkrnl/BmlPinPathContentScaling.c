/*
 * XREFs of BmlPinPathContentScaling @ 0x1C00D2B70
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C00D2924 (BmlPinNextBestTargetMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C02C2778 (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005854 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00097C8 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     BmlInternalTryPinningScaling @ 0x1C00D2CD4 (BmlInternalTryPinningScaling.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C012ECA0 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

__int64 __fastcall BmlPinPathContentScaling(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // r12
  int *v5; // rsi
  __int64 v6; // r14
  struct DMMVIDPNPRESENTPATH *Path; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // r8
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  int v22; // edi
  VIDPN_MGR *v23; // rcx
  __int64 v24; // r15
  _QWORD *v25; // rax
  __int64 v26; // [rsp+50h] [rbp+8h] BYREF

  v26 = a1;
  v3 = a3;
  v5 = (int *)(104LL * a3 + a1 + 16);
  v6 = v5[2];
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)v5 + 24LL),
           *(_DWORD *)(*(_QWORD *)v5 + 28LL));
  v8 = *((_DWORD *)Path + 30);
  if ( DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(Path) )
  {
    if ( (_DWORD)v6 == 5 )
    {
      result = BmlInternalTryPinningScaling(v5, a2, 5LL, v8);
      if ( (int)result >= 0 )
        return result;
      v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
      v20[3] = v26;
      v20[4] = a2;
      v20[5] = v3;
      WdLogEvent5_WdWarning(v20);
    }
    v14 = BmlInternalTryPinningScaling(v5, a2, 1LL, v8);
    if ( v14 < 0 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v15);
      v21[3] = v5[2];
      v21[4] = v26;
      v21[5] = a2;
      v21[6] = v3;
      WdLogEvent5_WdWarning(v21);
      return (unsigned int)v14;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v22 = -1071774970;
    if ( (unsigned int)(v6 - 2) > 3 && (_DWORD)v6 != 255
      || (v22 = BmlInternalTryPinningScaling(v5, a2, (unsigned int)v6, v8), v22 == -1071774970) )
    {
      if ( (dword_1C00A4278 & 1) == 0 )
      {
        v23 = *(VIDPN_MGR **)(a2 + 48);
        dword_1C00A4278 |= 1u;
        dword_1C00A4230[0] = VIDPN_MGR::GetAdapterDefaultScaling(v23);
        dword_1C00A4234 = 3;
        dword_1C00A4238 = 4;
        dword_1C00A423C = 2;
      }
      v24 = 0LL;
      do
      {
        if ( (unsigned int)v24 >= 4 )
          break;
        v10 = dword_1C00A4230;
        v11 = (unsigned int)dword_1C00A4230[v24];
        if ( (_DWORD)v11 != (_DWORD)v6 )
          v22 = BmlInternalTryPinningScaling(v5, a2, v11, v8);
        v24 = (unsigned int)(v24 + 1);
      }
      while ( v22 == -1071774970 );
    }
    if ( v22 < 0 )
    {
      ++v5[16];
      v5[18] = v22;
      if ( v22 != -1071774970 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
        v25[4] = &v26;
        v25[3] = v6;
        v25[5] = a2;
        v25[6] = v3;
        WdLogEvent5_WdWarning(v25);
      }
    }
    return (unsigned int)v22;
  }
}
