/*
 * XREFs of ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0088720
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C0076F24 (GreGetGlyphOutlineInternal.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C007FECC (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C00800D4 (xInsertMetricsRFONTOBJ.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C0084734 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0084AD4 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0085C94 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00870C4 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     GreGetGlyphIndicesW @ 0x1C00F8CAC (GreGetGlyphIndicesW.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0127EC4 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C02475B8 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 * Callees:
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C0086598 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C00CCD0C (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00CCDE0 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 */

void __fastcall RFONTOBJ::vXlatGlyphArray(
        RFONTOBJ *this,
        unsigned __int16 *a2,
        int a3,
        unsigned int *a4,
        unsigned int a5,
        int a6)
{
  _QWORD *v6; // r10
  __int64 v8; // r9
  int v10; // ecx
  struct _FD_GLYPHSET *v13; // rbx
  ULONG cRuns; // eax
  unsigned int v15; // edx
  WCRUN *awcrun; // rsi
  int v17; // ebx
  unsigned int v18; // r8d
  __int64 v19; // r11
  __int64 v20; // r15
  __int64 v21; // r13
  __int64 v22; // rcx
  unsigned __int16 v23; // r9
  int v24; // eax
  __int64 v25; // r8
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  WCRUN *v34; // r8
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  unsigned __int16 v40; // cx
  int v41; // r9d
  struct _FD_GLYPHSET *v42; // rax
  unsigned __int16 wcLow; // cx
  int v44; // eax
  __int64 v45; // r8
  int v46; // ecx
  __int64 v47; // rdx
  int v48; // ecx
  int v49; // edx
  char v50; // cl
  int v51; // ecx
  __int64 v52; // [rsp+20h] [rbp-38h]
  __int64 v53[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v54; // [rsp+60h] [rbp+8h] BYREF

  v6 = *(_QWORD **)this;
  v8 = 0LL;
  v10 = 0;
  v52 = 0LL;
  v13 = (struct _FD_GLYPHSET *)v6[58];
  LODWORD(v54) = 0;
  if ( a6 )
  {
    v41 = *(_DWORD *)(v6[13] + 8LL);
    if ( !v41 || (v41 & 1) != 0 )
    {
      v8 = 0LL;
    }
    else
    {
      v8 = *(_QWORD *)(v6[14] + 8LL * ((v41 - 1) & 0xFFFFFFFE) + 224);
      v52 = v8;
      v53[0] = v8;
      if ( v8 && (v42 = PFEOBJ::pfdg((PFEOBJ *)v53), v8 = v52, v42) )
      {
        v10 = 1;
        v13 = v42;
        LODWORD(v54) = 1;
      }
      else
      {
        v10 = v54;
      }
    }
  }
  cRuns = v13->cRuns;
  if ( cRuns )
  {
    v15 = a5;
    awcrun = v13->awcrun;
    v17 = cRuns - 1;
    if ( a5 == 1 )
      v18 = -1;
    else
      v18 = *(_DWORD *)(*(_QWORD *)this + 448LL);
    a6 = v18;
    if ( v17 > 0xFFFF )
      v17 = 0xFFFF;
    v19 = v17;
    if ( (v17 & 0xF000) != 0 )
    {
      v10 = v54;
      v20 = (unsigned int)acBits[(unsigned __int8)((__int64)v17 >> 12)] + 12;
    }
    else if ( (v17 & 0xF00) != 0 )
    {
      v10 = v54;
      v20 = (unsigned int)acBits[BYTE1(v17)] + 8;
    }
    else if ( (v17 & 0xF0) != 0 )
    {
      v10 = v54;
      v20 = (unsigned int)acBits[(unsigned __int8)((__int64)v17 >> 4)] + 4;
    }
    else
    {
      v20 = acBits[v17];
    }
    v21 = *((int *)&aiStart + v20);
    if ( a3 )
    {
      v22 = *((int *)&aiStart + v20);
      while ( 1 )
      {
        v23 = *a2;
        if ( *a2 < awcrun->wcLow )
          break;
        v24 = v21;
        v25 = v22;
        if ( (_DWORD)v20 == 8 )
        {
LABEL_15:
          if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
            v26 = 64;
          else
            v26 = -64;
          v24 += v26;
        }
        else if ( (_DWORD)v20 != 7 )
        {
          switch ( (int)v20 )
          {
            case 1:
              goto LABEL_43;
            case 2:
              goto LABEL_39;
            case 3:
              goto LABEL_35;
            case 4:
              goto LABEL_31;
            case 5:
              goto LABEL_27;
            case 6:
              goto LABEL_23;
            case 7:
            case 8:
              goto LABEL_47;
            case 9:
              goto LABEL_90;
            case 10:
              goto LABEL_86;
            case 11:
              goto LABEL_82;
            case 12:
              goto LABEL_78;
            case 13:
              goto LABEL_74;
            case 14:
              goto LABEL_125;
            case 15:
              goto LABEL_120;
            case 16:
              wcLow = awcrun[v21].wcLow;
              v44 = 0x4000;
              if ( v23 < wcLow )
                v44 = -16384;
              v45 = 0x4000LL;
              v24 = v21 + v44;
              if ( v23 < wcLow )
                v45 = -16384LL;
              v25 = v21 + v45;
LABEL_120:
              if ( v25 > v19 || v23 < awcrun[v25].wcLow )
              {
                v46 = -8192;
                v47 = -8192LL;
              }
              else
              {
                v46 = 0x2000;
                v47 = 0x2000LL;
              }
              v24 += v46;
              v25 += v47;
LABEL_125:
              if ( v25 > v19 || (v48 = 4096, v23 < awcrun[v25].wcLow) )
                v48 = -4096;
              v24 += v48;
LABEL_74:
              if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
                v36 = 2048;
              else
                v36 = -2048;
              v24 += v36;
LABEL_78:
              if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
                v37 = 1024;
              else
                v37 = -1024;
              v24 += v37;
LABEL_82:
              if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
                v38 = 512;
              else
                v38 = -512;
              v24 += v38;
LABEL_86:
              if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
                v39 = 256;
              else
                v39 = -256;
              v24 += v39;
LABEL_90:
              if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
                v24 += 128;
              else
                v24 -= 128;
              goto LABEL_15;
            default:
              goto LABEL_48;
          }
        }
        if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
          v27 = 32;
        else
          v27 = -32;
        v24 += v27;
LABEL_23:
        if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
          v28 = 16;
        else
          v28 = -16;
        v24 += v28;
LABEL_27:
        if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
          v29 = 8;
        else
          v29 = -8;
        v24 += v29;
LABEL_31:
        if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
          v30 = 4;
        else
          v30 = -4;
        v24 += v30;
LABEL_35:
        if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
          v31 = 2;
        else
          v31 = -2;
        v24 += v31;
LABEL_39:
        if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
          v32 = 1;
        else
          v32 = -1;
        v24 += v32;
LABEL_43:
        if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
          v33 = 0;
        else
          v33 = -1;
        v24 += v33;
LABEL_47:
        v15 = a5;
LABEL_48:
        v34 = &awcrun[v24];
        v35 = v23 - v34->wcLow;
        if ( v35 < v34->cGlyphs )
        {
          if ( v34->phg )
          {
            while ( 1 )
            {
              ++a2;
              *a4++ = v34->phg[v35];
              if ( !--a3 )
                break;
              v35 = *a2 - v34->wcLow;
              if ( v35 < 0 || v35 >= v34->cGlyphs )
                goto LABEL_53;
            }
          }
          else
          {
            while ( 1 )
            {
              ++a2;
              *a4++ = v23;
              if ( !--a3 )
                break;
              v51 = *a2 - v34->wcLow;
              if ( v51 >= 0 )
              {
                v23 = *a2;
                if ( v51 < v34->cGlyphs )
                  continue;
              }
LABEL_53:
              v18 = a6;
              goto LABEL_57;
            }
          }
          goto LABEL_59;
        }
        if ( v15 == 2 || (unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v23) )
          goto LABEL_55;
        v40 = *a2;
        if ( *(_DWORD *)(*(_QWORD *)this + 692LL) && v40 >= gqlTTSystem && v40 <= (unsigned __int16)word_1C032AE7A )
        {
          v49 = v40 - gqlTTSystem;
          v50 = (v40 - gqlTTSystem) & 0x1F;
          if ( v49 < 0 )
          {
            v49 += 31;
            v50 -= 32;
          }
          if ( ((0x80000000 >> v50) & *(_DWORD *)(qword_1C032AE80 + 4LL * (v49 >> 5))) != 0 )
LABEL_55:
            *(_DWORD *)(*(_QWORD *)this + 696LL) |= 0x40u;
        }
        v18 = a6;
        *a4 = a6;
        ++a2;
        ++a4;
        v19 = v17;
        --a3;
LABEL_57:
        v22 = v21;
LABEL_58:
        v15 = a5;
        if ( !a3 )
          goto LABEL_59;
      }
      while ( 1 )
      {
        *a4 = v18;
        ++a2;
        ++a4;
        if ( !--a3 )
          break;
        if ( *a2 >= awcrun->wcLow )
          goto LABEL_58;
      }
LABEL_59:
      v10 = v54;
      v8 = v52;
    }
    if ( v10 )
    {
      v54 = v8;
      PFEOBJ::vFreepfdg((PFEOBJ *)&v54);
    }
  }
  else
  {
    for ( ; a3; --a3 )
      *a4++ = *(_DWORD *)(*(_QWORD *)this + 448LL);
  }
}
