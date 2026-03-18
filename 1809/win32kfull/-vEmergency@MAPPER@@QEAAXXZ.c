/*
 * XREFs of ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C014CEFC
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0027840 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C0028020 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C014D01C (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z @ 0x1C014D05C (-vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z.c)
 *     ulCharsetToCodePage @ 0x1C014D0C4 (ulCharsetToCodePage.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C014D0F8 (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 */

void __fastcall MAPPER::vEmergency(MAPPER *this)
{
  struct _FONTHASH **v1; // rax
  _DWORD *v3; // rdx
  int v4; // edi
  unsigned __int8 v5; // bp
  _DWORD *v6; // rdx
  struct PFE *i; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  struct PFE *v10; // rsi
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // r9
  struct PFE *v14; // rax
  _QWORD v15[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+30h] [rbp-28h]
  unsigned __int8 v17; // [rsp+60h] [rbp+8h] BYREF
  struct PFE *v18; // [rsp+68h] [rbp+10h] BYREF

  v1 = gpPFTPublic;
  v3 = (_DWORD *)*((_QWORD *)this + 29);
  v4 = 0;
  v15[0] = gpPFTPublic;
  v17 = 1;
  v5 = 1;
  *v3 = 0;
  v6 = (_DWORD *)*((_QWORD *)this + 27);
  *((_DWORD *)this + 52) = -1;
  *((_QWORD *)this + 25) = 0LL;
  *v6 = 0;
  **((_DWORD **)this + 28) = 1;
  *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
  *((_DWORD *)this + 63) &= ~0x80u;
  *((_DWORD *)this + 45) = -2;
  v15[1] = *v1;
  v16 = 0LL;
  for ( i = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v15); ; i = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v15) )
  {
    v10 = i;
    if ( !i )
      break;
    v18 = i;
    if ( (unsigned int)MAPPER::bNearMatch(this, &v18, &v17, 1) )
    {
      v5 = v17;
      MAPPER::vSetBest(this, v10, 0, v17);
      v11 = *((_DWORD *)this + 46);
      if ( !v11 )
        goto LABEL_8;
      *((_DWORD *)this + 45) = v11;
    }
  }
  if ( !*((_QWORD *)this + 25) )
  {
    v14 = gppfeMapperDefault;
    *((_QWORD *)this + 25) = gppfeMapperDefault;
    if ( v14 )
      v4 = *((_DWORD *)v14 + 20);
    *((_DWORD *)this + 52) = v4;
  }
LABEL_8:
  v12 = ulCharsetToCodePage(v5, v8, v9);
  *v13 |= v12 << 8;
}
