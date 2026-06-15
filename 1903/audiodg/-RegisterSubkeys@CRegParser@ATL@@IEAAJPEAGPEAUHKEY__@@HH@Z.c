/*
 * XREFs of ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140050B54
 * Callers:
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x1400507BC (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140050B54 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140017D00 (_alloca_probe.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14002F608 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x14004E4B0 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?AtlHresultFromWin32@ATL@@YAJK@Z @ 0x14004EA80 (-AtlHresultFromWin32@ATL@@YAJK@Z.c)
 *     ?CanForceRemoveKey@CRegParser@ATL@@IEAAHPEBG@Z @ 0x14004EA98 (-CanForceRemoveKey@CRegParser@ATL@@IEAAHPEBG@Z.c)
 *     ?Close@CRegKey@ATL@@QEAAJXZ @ 0x14004EBB4 (-Close@CRegKey@ATL@@QEAAJXZ.c)
 *     ?Create@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAK@Z @ 0x14004EBE0 (-Create@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAK@Z.c)
 *     ?DeleteSubKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x14004F6D4 (-DeleteSubKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 *     ?HasSubKeys@CRegParser@ATL@@IEAAHPEAUHKEY__@@@Z @ 0x14004F7DC (-HasSubKeys@CRegParser@ATL@@IEAAHPEAUHKEY__@@@Z.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x14004F954 (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z @ 0x14004FAEC (-Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z.c)
 *     ?RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x1400506C8 (-RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140050B54 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 *     ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140051278 (-SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z @ 0x140051340 (-StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ATL::CRegParser::RegisterSubkeys(
        ATL::CRegParser *this,
        unsigned __int16 *a2,
        HKEY a3,
        int a4,
        int a5)
{
  int v5; // r15d
  unsigned __int16 *v7; // rdi
  ATL::CRegParser *v8; // rsi
  int v9; // r14d
  int Token; // eax
  int v11; // ebx
  int v12; // r12d
  ATL::CRegParser *v13; // rcx
  int v14; // eax
  int v15; // eax
  unsigned __int16 *v16; // r9
  int v17; // eax
  int v18; // r14d
  int v19; // r15d
  unsigned int v20; // eax
  ATL::CRegParser *v21; // rcx
  __int64 v22; // rax
  int HasSubKeys; // r14d
  __int64 v24; // rax
  int v26; // ecx
  unsigned int v27; // [rsp+20h] [rbp-E0h]
  HKEY hKey; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  HKEY v32[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v33[264]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR ValueName[4096]; // [rsp+290h] [rbp+190h] BYREF

  v32[3] = HKEY_DYN_DATA|0x7FFFFFF8LL;
  v5 = a4;
  v7 = a2;
  v8 = this;
  v9 = 0;
  memset(v32, 0, 24);
LABEL_2:
  Token = ATL::CRegParser::NextToken(this, a2);
  while ( 2 )
  {
    v11 = Token;
    if ( Token < 0 )
      goto LABEL_80;
    while ( 1 )
    {
      if ( *v7 == 125 )
        goto LABEL_80;
      v12 = 1;
      LOBYTE(v9) = lstrcmpiW(v7, L"Delete") == 0;
      if ( !lstrcmpiW(v7, L"ForceRemove") || v9 )
      {
        v11 = ATL::CRegParser::NextToken(v8, v7);
        if ( v11 < 0 )
          goto LABEL_80;
        if ( v5 )
        {
          hKey = 0LL;
          v30 = 0LL;
          v31 = 0LL;
          if ( ATL::CRegParser::StrChrW(v7, 0x5Cu) )
          {
            ATL::CRegKey::Close(&hKey);
LABEL_79:
            v11 = -2147352567;
            goto LABEL_80;
          }
          if ( (unsigned int)ATL::CRegParser::CanForceRemoveKey(v13, v7) )
          {
            hKey = a3;
            ATL::CRegKey::RecurseDeleteKey(&hKey, v7);
            hKey = 0LL;
          }
          if ( v9 )
          {
            v11 = ATL::CRegParser::NextToken(v8, v7);
            v9 = 0;
            if ( v11 < 0 )
              goto LABEL_82;
            v14 = ATL::CRegParser::SkipAssignment(v8, v7);
            v11 = v14;
            goto LABEL_15;
          }
          ATL::CRegKey::Close(&hKey);
        }
      }
      v9 = 0;
      if ( !lstrcmpiW(v7, L"NoRemove") )
      {
        v12 = 0;
        v11 = ATL::CRegParser::NextToken(v8, v7);
        if ( v11 < 0 )
          goto LABEL_80;
      }
      if ( !lstrcmpiW(v7, L"Val") )
        break;
      if ( ATL::CRegParser::StrChrW(v7, 0x5Cu) )
        goto LABEL_79;
      if ( v5 )
      {
        if ( !(unsigned int)ATL::CRegKey::Open(v32, a3, v7, 0x2001Fu)
          || !(unsigned int)ATL::CRegKey::Open(v32, a3, v7, 0x20019u)
          || (v17 = ATL::CRegKey::Create(v32, a3, v7, v16, v27)) == 0 )
        {
          v11 = ATL::CRegParser::NextToken(v8, v7);
          if ( v11 < 0 )
            goto LABEL_80;
          if ( *v7 == 61 )
          {
            v11 = ATL::CRegParser::AddValue(v8, v32, 0LL, v7);
            if ( v11 < 0 )
              goto LABEL_80;
          }
          goto LABEL_70;
        }
LABEL_85:
        v26 = v17;
LABEL_84:
        v11 = ATL::AtlHresultFromWin32(v26);
        goto LABEL_80;
      }
      if ( a5 )
        v18 = 2;
      else
        v18 = ATL::CRegKey::Open(v32, a3, v7, 0x20019u);
      v19 = a5;
      if ( v18 )
        v19 = 1;
      v20 = _o_wcsncpy_s(v33, 260LL, v7, -1LL);
      ATL::AtlCrtErrorCheck(v20);
      v11 = ATL::CRegParser::NextToken(v8, v7);
      if ( v11 < 0 )
        goto LABEL_80;
      v11 = ATL::CRegParser::SkipAssignment(v8, v7);
      v21 = 0LL;
      if ( v11 < 0 )
        goto LABEL_80;
      if ( *v7 == 123 )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( v7[v22] );
        if ( v22 == 1 )
        {
          v11 = ATL::CRegParser::RegisterSubkeys(v8, v7, v32[0], 0, v19);
          if ( v11 < 0 && !v19 )
            goto LABEL_80;
          v11 = ATL::CRegParser::NextToken(v8, v7);
          v21 = 0LL;
          if ( v11 < 0 )
            goto LABEL_80;
        }
      }
      if ( v18 == 2 )
        goto LABEL_58;
      if ( v18 )
      {
        if ( !a5 )
        {
          v26 = v18;
          goto LABEL_84;
        }
LABEL_58:
        v9 = 0;
        goto LABEL_59;
      }
      v9 = 0;
      if ( a5 && (unsigned int)ATL::CRegParser::HasSubKeys(0LL, v32[0]) )
      {
        if ( (unsigned int)ATL::CRegParser::CanForceRemoveKey(v21, v33) && v12 )
          ATL::CRegKey::RecurseDeleteKey(v32, v33);
LABEL_59:
        v5 = a4;
      }
      else
      {
        HasSubKeys = ATL::CRegParser::HasSubKeys(v21, v32[0]);
        v17 = ATL::CRegKey::Close(v32);
        if ( v17 )
          goto LABEL_85;
        if ( !v12 || HasSubKeys )
          goto LABEL_58;
        v9 = 0;
        v30 = 0LL;
        v31 = 0LL;
        hKey = a3;
        v15 = ATL::CRegKey::DeleteSubKey((ATL::CRegKey *)&hKey, v33);
        hKey = 0LL;
        if ( v15 )
          goto LABEL_81;
        ATL::CRegKey::Close(&hKey);
        v5 = a4;
LABEL_70:
        if ( v5 )
        {
          if ( *v7 == 123 )
          {
            v24 = -1LL;
            do
              ++v24;
            while ( v7[v24] );
            if ( v24 == 1 )
            {
              v11 = ATL::CRegParser::RegisterSubkeys(v8, v7, v32[0], v5, 0);
              if ( v11 < 0 )
                goto LABEL_80;
              a2 = v7;
              this = v8;
              goto LABEL_2;
            }
          }
        }
      }
    }
    v11 = ATL::CRegParser::NextToken(v8, ValueName);
    if ( v11 < 0 )
      goto LABEL_80;
    v11 = ATL::CRegParser::NextToken(v8, v7);
    if ( v11 < 0 )
      goto LABEL_80;
    if ( *v7 != 61 )
      goto LABEL_79;
    if ( v5 )
    {
      v30 = 0LL;
      v31 = 0LL;
      hKey = a3;
      v14 = ATL::CRegParser::AddValue(v8, &hKey, ValueName, v7);
      v11 = v14;
      hKey = 0LL;
LABEL_15:
      if ( v14 < 0 )
        goto LABEL_82;
      ATL::CRegKey::Close(&hKey);
      goto LABEL_70;
    }
    if ( a5 || !v12 )
      goto LABEL_31;
    hKey = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v15 = ATL::CRegKey::Open(&hKey, a3, 0LL, 0x20006u);
    if ( !v15 )
    {
      v15 = RegDeleteValueW(hKey, ValueName);
      if ( (v15 & 0xFFFFFFFD) == 0 )
      {
        ATL::CRegKey::Close(&hKey);
LABEL_31:
        Token = ATL::CRegParser::SkipAssignment(v8, v7);
        continue;
      }
    }
    break;
  }
LABEL_81:
  v11 = ATL::AtlHresultFromWin32(v15);
LABEL_82:
  ATL::CRegKey::Close(&hKey);
LABEL_80:
  ATL::CRegKey::Close(v32);
  return (unsigned int)v11;
}
