/*
 * XREFs of ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C028C12C
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00922E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x1C0004838 (-bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C0277568 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C028C34C (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall ESTROBJ::bLinkedTextToPath(STROBJ *pstro, struct EPATHOBJ *a2, struct XDCOBJ *a3)
{
  __int64 v3; // rax
  struct RFONTOBJ *v4; // rsi
  __int64 cGlyphs; // rdx
  WCHAR *pwszOrg; // r15
  int v9; // edi
  struct XDCOBJ *v10; // r8
  __int64 v11; // rax
  int v12; // r12d
  struct RFONTOBJ *v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  struct XDCOBJ *v17; // r9
  WCHAR *v18; // r14
  WCHAR *v19; // r10
  unsigned __int64 v20; // r8
  ULONG v21; // edx
  unsigned __int64 v22; // r11
  __int64 result; // rax
  __int64 v24; // [rsp+20h] [rbp-10h] BYREF
  int v25; // [rsp+28h] [rbp-8h]
  struct _POINTL v26; // [rsp+70h] [rbp+40h] BYREF
  struct XDCOBJ *v27; // [rsp+80h] [rbp+50h]

  v27 = a3;
  v3 = *(_QWORD *)&pstro[4].rclBkGround.top;
  v4 = *(struct RFONTOBJ **)&pstro[1].ulCharInc;
  cGlyphs = pstro->cGlyphs;
  pwszOrg = pstro->pwszOrg;
  v9 = 0;
  pstro->pgp = 0LL;
  *(_QWORD *)&pstro->flAccel = 0LL;
  v10 = (struct XDCOBJ *)(v3 + 4 * cGlyphs);
  v11 = *(_QWORD *)v4;
  v27 = v10;
  v12 = *(_DWORD *)(v11 + 824) + 4;
  if ( v12 <= 0 )
  {
LABEL_35:
    pstro->pwszOrg = pwszOrg;
    result = 1LL;
    *(_QWORD *)&pstro[1].ulCharInc = v4;
    return result;
  }
  while ( 1 )
  {
    v25 = 0;
    v24 = 0LL;
    *(_QWORD *)&pstro[1].ulCharInc = v4;
    if ( v9 )
    {
      switch ( v9 )
      {
        case 1:
          if ( !pstro[5].ulCharInc )
            goto LABEL_33;
          v16 = *(_QWORD *)(*(_QWORD *)v4 + 704LL);
          break;
        case 2:
          if ( !pstro[5].rclBkGround.left )
            goto LABEL_33;
          v16 = *(_QWORD *)(*(_QWORD *)v4 + 712LL);
          break;
        case 3:
          if ( !pstro[5].rclBkGround.top )
            goto LABEL_33;
          v16 = *(_QWORD *)(*(_QWORD *)v4 + 720LL);
          break;
        default:
          v14 = *(_QWORD *)&pstro[5].rclBkGround.bottom;
          if ( v14 )
            v15 = *(_DWORD *)(v14 + 4LL * (unsigned int)(v9 - 4));
          else
            v15 = 0;
          if ( !v15 )
            goto LABEL_33;
          v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 728LL) + 8LL * (unsigned int)(v9 - 4));
          break;
      }
      if ( !v16 )
        goto LABEL_32;
      v24 = v16;
      v13 = (struct RFONTOBJ *)&v24;
    }
    else
    {
      v13 = v4;
    }
    v17 = *(struct XDCOBJ **)&pstro[4].rclBkGround.top;
    v18 = *(WCHAR **)&pstro[4].ulCharInc;
    v19 = pwszOrg;
    v20 = (unsigned __int64)(v10 - v17 + 3) >> 2;
    v21 = 0;
    v22 = 0LL;
    if ( v17 > v27 )
      v20 = 0LL;
    if ( v20 )
    {
      do
      {
        if ( *(_DWORD *)v17 == v9 )
        {
          *v18++ = *v19;
          ++v21;
        }
        ++v19;
        v17 = (struct XDCOBJ *)((char *)v17 + 4);
        ++v22;
      }
      while ( v22 < v20 );
      if ( v21 )
      {
        pstro->pwszOrg = *(LPWSTR *)&pstro[4].ulCharInc;
        pstro->cGlyphs = v21;
        *(_QWORD *)&pstro[1].ulCharInc = v13;
        HIDWORD(pstro[4].pwszOrg) = v9;
        pstro[1].cGlyphs = 0;
        if ( v9 )
        {
          if ( (unsigned int)bAdjusBaseLine(v13, (struct RFONTOBJ *)&v24, &v26) )
            ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)pstro, &v26);
        }
        if ( !(unsigned int)ESTROBJ::bTextToPathWorkhorse(pstro, a2) )
          break;
      }
    }
LABEL_33:
    v24 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
    if ( ++v9 >= v12 )
      goto LABEL_35;
    v10 = v27;
  }
  pstro->pwszOrg = pwszOrg;
  *(_QWORD *)&pstro[1].ulCharInc = v4;
LABEL_32:
  v24 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
  return 0LL;
}
