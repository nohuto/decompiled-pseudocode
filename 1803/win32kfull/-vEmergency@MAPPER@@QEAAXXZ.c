/*
 * XREFs of ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C0264A5C
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C003F3CC (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C003FCE0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z @ 0x1C01973F8 (-vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C0264834 (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C0264868 (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ulCharsetToCodePage @ 0x1C02ADBEC (ulCharsetToCodePage.c)
 */

void __fastcall MAPPER::vEmergency(MAPPER *this)
{
  struct _FONTHASH **v1; // rax
  _DWORD *v3; // rdx
  int v4; // edi
  unsigned __int8 v5; // bp
  _DWORD *v6; // rdx
  struct PFE *i; // rax
  int v8; // eax
  struct PFE *v9; // rsi
  struct PFE *v10; // rax
  int v11; // eax
  _DWORD *v12; // r9
  _QWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h]
  unsigned __int8 v15; // [rsp+60h] [rbp+8h] BYREF
  struct PFE *v16; // [rsp+68h] [rbp+10h] BYREF

  v1 = gpPFTPublic;
  v3 = (_DWORD *)*((_QWORD *)this + 29);
  v4 = 0;
  v13[0] = gpPFTPublic;
  v15 = 1;
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
  v13[1] = *v1;
  v14 = 0LL;
  for ( i = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v13); ; i = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v13) )
  {
    v9 = i;
    if ( !i )
      break;
    v16 = i;
    if ( (unsigned int)MAPPER::bNearMatch(this, &v16, &v15, 1) )
    {
      v5 = v15;
      MAPPER::vSetBest(this, v9, 0, v15);
      v8 = *((_DWORD *)this + 46);
      if ( !v8 )
        goto LABEL_11;
      *((_DWORD *)this + 45) = v8;
    }
  }
  if ( !*((_QWORD *)this + 25) )
  {
    v10 = gppfeMapperDefault;
    *((_QWORD *)this + 25) = gppfeMapperDefault;
    if ( v10 )
      v4 = *((_DWORD *)v10 + 20);
    *((_DWORD *)this + 52) = v4;
  }
LABEL_11:
  v11 = ulCharsetToCodePage(v5);
  *v12 |= v11 << 8;
}
