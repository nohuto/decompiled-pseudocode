/*
 * XREFs of ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C029F9B8
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C005C640 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x1C000619C (-bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C028AAD8 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C029FBF0 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall ESTROBJ::bLinkedTextToPath(STROBJ *pstro, struct EPATHOBJ *a2, struct XDCOBJ *a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r11
  __int64 cGlyphs; // r8
  struct RFONTOBJ *v7; // rsi
  WCHAR *pwszOrg; // rbp
  int v10; // edi
  unsigned __int64 v11; // r13
  int v12; // r15d
  struct RFONTOBJ *v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  _DWORD *v17; // r9
  WCHAR *v18; // r14
  unsigned __int64 v19; // r8
  WCHAR *v20; // r10
  ULONG v21; // edx
  __int64 result; // rax
  __int64 v23; // [rsp+20h] [rbp-38h] BYREF
  int v24; // [rsp+28h] [rbp-30h]
  struct _POINTL v25; // [rsp+70h] [rbp+18h] BYREF

  v25 = (struct _POINTL)a3;
  v3 = *(_QWORD *)&pstro[4].rclBkGround.top;
  v4 = 0LL;
  cGlyphs = pstro->cGlyphs;
  v7 = *(struct RFONTOBJ **)&pstro[1].ulCharInc;
  pwszOrg = pstro->pwszOrg;
  v10 = 0;
  pstro->pgp = 0LL;
  *(_QWORD *)&pstro->flAccel = 0LL;
  v11 = v3 + 4 * cGlyphs;
  v12 = *(_DWORD *)(*(_QWORD *)v7 + 840LL) + 4;
  if ( v12 <= 0 )
  {
LABEL_35:
    pstro->pwszOrg = pwszOrg;
    result = 1LL;
    *(_QWORD *)&pstro[1].ulCharInc = v7;
    return result;
  }
  while ( 1 )
  {
    v24 = 0;
    v23 = 0LL;
    *(_QWORD *)&pstro[1].ulCharInc = v7;
    if ( v10 )
    {
      switch ( v10 )
      {
        case 1:
          if ( !pstro[5].ulCharInc )
            goto LABEL_33;
          v16 = *(_QWORD *)(*(_QWORD *)v7 + 720LL);
          break;
        case 2:
          if ( !pstro[5].rclBkGround.left )
            goto LABEL_33;
          v16 = *(_QWORD *)(*(_QWORD *)v7 + 728LL);
          break;
        case 3:
          if ( !pstro[5].rclBkGround.top )
            goto LABEL_33;
          v16 = *(_QWORD *)(*(_QWORD *)v7 + 736LL);
          break;
        default:
          v14 = *(_QWORD *)&pstro[5].rclBkGround.bottom;
          if ( v14 )
            v15 = *(_DWORD *)(v14 + 4LL * (unsigned int)(v10 - 4));
          else
            v15 = 0;
          if ( !v15 )
            goto LABEL_33;
          v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 744LL) + 8LL * (unsigned int)(v10 - 4));
          break;
      }
      if ( !v16 )
        goto LABEL_32;
      v23 = v16;
      v13 = (struct RFONTOBJ *)&v23;
    }
    else
    {
      v13 = v7;
    }
    v17 = *(_DWORD **)&pstro[4].rclBkGround.top;
    v18 = *(WCHAR **)&pstro[4].ulCharInc;
    v19 = (v11 - (unsigned __int64)v17 + 3) >> 2;
    v20 = pwszOrg;
    v21 = 0;
    if ( (unsigned __int64)v17 > v11 )
      v19 = 0LL;
    if ( v19 )
    {
      do
      {
        if ( *v17 == v10 )
        {
          *v18++ = *v20;
          ++v21;
        }
        ++v20;
        ++v17;
        ++v4;
      }
      while ( v4 < v19 );
      if ( v21 )
      {
        pstro->pwszOrg = *(LPWSTR *)&pstro[4].ulCharInc;
        pstro->cGlyphs = v21;
        *(_QWORD *)&pstro[1].ulCharInc = v13;
        HIDWORD(pstro[4].pwszOrg) = v10;
        pstro[1].cGlyphs = 0;
        if ( v10 )
        {
          if ( (unsigned int)bAdjusBaseLine(v13, (struct RFONTOBJ *)&v23, &v25) )
            ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)pstro, &v25);
        }
        if ( !(unsigned int)ESTROBJ::bTextToPathWorkhorse(pstro, a2) )
          break;
      }
    }
LABEL_33:
    v23 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v23);
    if ( ++v10 >= v12 )
      goto LABEL_35;
    v4 = 0LL;
  }
  pstro->pwszOrg = pwszOrg;
  *(_QWORD *)&pstro[1].ulCharInc = v7;
LABEL_32:
  v23 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v23);
  return 0LL;
}
