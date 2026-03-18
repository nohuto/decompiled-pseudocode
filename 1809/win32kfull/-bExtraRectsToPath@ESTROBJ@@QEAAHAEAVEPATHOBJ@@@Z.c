/*
 * XREFs of ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C029F5C4
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C005C640 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000254C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 *     ??0RFONTTMPOBJ@@QEAA@XZ @ 0x1C027BC4C (--0RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?bLinkedGlyphs@ESTROBJ@@QEBAHXZ @ 0x1C027C748 (-bLinkedGlyphs@ESTROBJ@@QEBAHXZ.c)
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C028A92C (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?GetLinkedRfontOnIndex@ESTROBJ@@QEAAPEAVRFONT@@JAEAVRFONTOBJ@@@Z @ 0x1C029F33C (-GetLinkedRfontOnIndex@ESTROBJ@@QEAAPEAVRFONT@@JAEAVRFONTOBJ@@@Z.c)
 *     ?bAddPgmToPath@@YAHAEAVEPATHOBJ@@JJJJJJ@Z @ 0x1C029F538 (-bAddPgmToPath@@YAHAEAVEPATHOBJ@@JJJJJJ@Z.c)
 */

__int64 __fastcall ESTROBJ::bExtraRectsToPath(ESTROBJ *this, struct EPATHOBJ *a2)
{
  _DWORD *v4; // r8
  int v5; // r11d
  int v6; // r12d
  int v7; // r13d
  int v8; // ecx
  int v9; // edx
  int v10; // r9d
  int v11; // r10d
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // edi
  __int64 v16; // rbx
  __int64 v17; // r10
  unsigned int v18; // r9d
  unsigned int v19; // r15d
  unsigned int v20; // r12d
  unsigned int v21; // r13d
  unsigned int v22; // r9d
  struct _GLYPHPOS *v23; // r10
  RFONTOBJ *v24; // r11
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // r9d
  __int64 v28; // r12
  _DWORD *v29; // rcx
  struct RFONT *LinkedRfontOnIndex; // rax
  unsigned int GlyphData; // eax
  _QWORD *v32; // rax
  float *v33; // r8
  int v34; // eax
  int v35; // edx
  __int64 v36; // rbx
  float v37; // xmm3_4
  int v38; // esi
  int v39; // r9d
  int v40; // edi
  int v41; // eax
  float v42; // xmm1_4
  float v43; // xmm2_4
  unsigned int v44; // r8d
  int v45; // eax
  float v46; // xmm1_4
  unsigned int v47; // r8d
  unsigned int v48; // r8d
  int v49; // ebx
  int v50; // edi
  struct EXFORMOBJ *v51; // [rsp+30h] [rbp-69h]
  int v52; // [rsp+40h] [rbp-59h] BYREF
  int v53; // [rsp+44h] [rbp-55h] BYREF
  int v54; // [rsp+48h] [rbp-51h]
  int v55; // [rsp+4Ch] [rbp-4Dh]
  int v56; // [rsp+50h] [rbp-49h]
  int v57; // [rsp+54h] [rbp-45h]
  int v58; // [rsp+58h] [rbp-41h]
  int v59; // [rsp+5Ch] [rbp-3Dh]
  int v60; // [rsp+60h] [rbp-39h]
  unsigned int v61; // [rsp+64h] [rbp-35h]
  __int64 v62; // [rsp+68h] [rbp-31h]
  int v63; // [rsp+70h] [rbp-29h]
  int v64; // [rsp+74h] [rbp-25h]
  int v65; // [rsp+78h] [rbp-21h]
  float *v66; // [rsp+80h] [rbp-19h]
  _QWORD *v67; // [rsp+88h] [rbp-11h]
  __int64 v68; // [rsp+90h] [rbp-9h]
  _QWORD v69[11]; // [rsp+98h] [rbp-1h] BYREF
  unsigned int v70; // [rsp+100h] [rbp+67h]
  int v72; // [rsp+110h] [rbp+77h] BYREF
  int v73; // [rsp+118h] [rbp+7Fh] BYREF

  v4 = (_DWORD *)**((_QWORD **)this + 7);
  v5 = 16 * v4[70];
  v6 = 16 * v4[71];
  v7 = 16 * v4[74];
  v8 = 16 * v4[72];
  v9 = 16 * v4[73];
  v10 = 16 * v4[76];
  v11 = 16 * v4[77];
  v54 = 16 * v4[75];
  v12 = *((_DWORD *)this + 58);
  v64 = v5;
  v63 = v6;
  v65 = v7;
  v58 = v8;
  v57 = v9;
  v60 = v10;
  v59 = v11;
  if ( (v12 & 8) != 0 )
  {
    v16 = *((_QWORD *)this + 5);
    v62 = *((_QWORD *)this + 8);
    RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)v69);
    v18 = *(_DWORD *)this;
    v19 = 0;
    v67 = 0LL;
    v70 = v18;
    v20 = 0;
    v21 = v18;
    if ( v18 )
    {
      while ( 1 )
      {
        if ( (*((_DWORD *)this + 58) & 2) == 0 )
        {
          if ( ESTROBJ::bLinkedGlyphs(this) )
          {
            if ( !v20 )
            {
              v25 = *((_QWORD *)this + 26);
              v26 = *(_DWORD *)this - v22;
              v27 = *(_DWORD *)(v25 + 4 * v26);
              v28 = (unsigned int)(v26 + 1);
              if ( (unsigned int)v28 < *(_DWORD *)this )
              {
                v29 = (_DWORD *)(v25 + 4 * v28);
                do
                {
                  if ( *v29 != v27 )
                    break;
                  LODWORD(v28) = v28 + 1;
                  ++v29;
                }
                while ( (unsigned int)v28 < *(_DWORD *)this );
              }
              v20 = v28 - v26;
              LinkedRfontOnIndex = ESTROBJ::GetLinkedRfontOnIndex(this, v26, *((struct RFONTOBJ **)this + 7));
              v24 = (RFONTOBJ *)v69;
              v69[0] = LinkedRfontOnIndex;
              v67 = v69;
            }
            GlyphData = RFONTOBJ::cGetGlyphData(v24, v20, v23);
            v21 = GlyphData;
            if ( !GlyphData )
              goto LABEL_35;
            v20 -= GlyphData;
          }
          else
          {
            v21 = RFONTOBJ::cGetGlyphData(*((RFONTOBJ **)this + 7), v22, v23);
            if ( !v21 )
              goto LABEL_35;
          }
          v17 = v62;
          v18 = v70;
        }
        v61 = 0;
        v16 += 2LL * v21;
        v32 = (_QWORD *)*((_QWORD *)this + 7);
        v68 = v16;
        v33 = (float *)(*v32 + 396LL);
        v66 = v33;
        if ( v21 )
          break;
LABEL_33:
        v18 -= v21;
        v70 = v18;
        if ( !v18 )
          goto LABEL_34;
      }
      while ( 1 )
      {
        v34 = *(_DWORD *)(v17 + 20);
        v35 = *(_DWORD *)(v17 + 16);
        v36 = *(_QWORD *)(v17 + 8);
        v37 = *v33;
        v38 = *((_DWORD *)this + 58);
        v39 = 16 * v34;
        v40 = *(_DWORD *)(v36 + 16);
        v73 = 0;
        if ( (v38 & 0x100) != 0 )
          v39 = v34;
        v41 = 16 * v35;
        v42 = (float)v40;
        if ( (v38 & 0x100) != 0 )
          v41 = v35;
        v55 = v39;
        v56 = v41;
        bFToL(v42 * v37, &v73, 0);
        v72 = 0;
        v43 = v66[1];
        bFToL(v42 * v43, &v72, v44);
        v45 = *(_DWORD *)(v36 + 20) - v40;
        v53 = 0;
        v46 = (float)v45;
        bFToL((float)v45 * v37, &v53, v47);
        v52 = 0;
        bFToL(v46 * v43, &v52, v48);
        v49 = v55;
        v50 = v56;
        if ( (v38 & 0x20) != 0 )
        {
          LODWORD(v51) = v54;
          if ( !(unsigned int)bAddPgmToPath(a2, v56 + v64 + v73, v55 + v72 + v63, v53, v52, v65, v51) )
            break;
        }
        if ( (*((_DWORD *)this + 58) & 0x80u) != 0 )
        {
          LODWORD(v51) = v59;
          if ( !(unsigned int)bAddPgmToPath(a2, v73 + v50 + v58, v72 + v49 + v57, v53, v52, v60, v51) )
            break;
        }
        v33 = v66;
        v17 = v62 + 24;
        ++v61;
        v62 += 24LL;
        if ( v61 >= v21 )
        {
          v18 = v70;
          v16 = v68;
          goto LABEL_33;
        }
      }
    }
    else
    {
LABEL_34:
      v19 = 1;
    }
LABEL_35:
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v69);
    return v19;
  }
  else
  {
    v13 = (*((_DWORD *)this + 18) + 8) & 0xFFFFFFF0;
    v14 = (*((_DWORD *)this + 19) + 8) & 0xFFFFFFF0;
    if ( (v12 & 0x20) != 0 )
    {
      LODWORD(v51) = v54;
      if ( !(unsigned int)bAddPgmToPath(a2, v5 + v13, v6 + v14, *((_DWORD *)this + 22), *((_DWORD *)this + 23), v7, v51) )
        return 0LL;
      v8 = v58;
      v9 = v57;
      v10 = v60;
      v11 = v59;
    }
    if ( (*((_DWORD *)this + 58) & 0x80u) != 0 )
    {
      LODWORD(v51) = v11;
      if ( !(unsigned int)bAddPgmToPath(
                            a2,
                            v13 + v8,
                            v14 + v9,
                            *((_DWORD *)this + 22),
                            *((_DWORD *)this + 23),
                            v10,
                            v51) )
        return 0LL;
    }
    return 1LL;
  }
}
