/*
 * XREFs of ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0053880
 * Callers:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C004B5E0 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C004F4D4 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C004F840 (xInsertMetricsRFONTOBJ.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00517A8 (GreGetGlyphOutlineInternal.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0053010 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C00738D8 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C00748BC (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     GreGetGlyphIndicesW @ 0x1C011B238 (GreGetGlyphIndicesW.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C014A8BC (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C0278AFC (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 * Callees:
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C004D83C (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C0074754 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0074E24 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
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
  struct _FD_GLYPHSET *v12; // rbx
  ULONG cRuns; // eax
  unsigned int v14; // edx
  unsigned __int16 *p_wcLow; // rsi
  int v16; // ebx
  unsigned int v17; // r8d
  __int64 v18; // r11
  __int64 v19; // r15
  __int64 v20; // r13
  __int64 v21; // rcx
  unsigned __int16 v22; // r9
  int v23; // eax
  __int64 v24; // r8
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  unsigned __int16 *v33; // r8
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // r9d
  struct _FD_GLYPHSET *v40; // rax
  unsigned __int16 v41; // cx
  int v42; // eax
  __int64 v43; // r8
  int v44; // ecx
  __int64 v45; // rdx
  int v46; // ecx
  unsigned __int16 v47; // cx
  int v48; // edx
  char v49; // cl
  int v50; // ecx
  __int64 v51; // [rsp+20h] [rbp-38h]
  __int64 v52[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v53; // [rsp+60h] [rbp+8h] BYREF

  v6 = *(_QWORD **)this;
  v8 = 0LL;
  LODWORD(v53) = 0;
  v51 = 0LL;
  v12 = (struct _FD_GLYPHSET *)v6[59];
  if ( a6 )
  {
    v39 = *(_DWORD *)(v6[15] + 8LL);
    if ( !v39 || (v39 & 1) != 0 )
    {
      v8 = 0LL;
    }
    else
    {
      v8 = *(_QWORD *)(v6[16] + 8LL * ((v39 - 1) & 0xFFFFFFFE) + 216);
      v51 = v8;
      v52[0] = v8;
      if ( v8 )
      {
        v40 = PFEOBJ::pfdg((PFEOBJ *)v52);
        v8 = v51;
        if ( v40 )
        {
          LODWORD(v53) = 1;
          v12 = v40;
        }
      }
    }
  }
  cRuns = v12->cRuns;
  if ( cRuns )
  {
    v14 = a5;
    p_wcLow = &v12->awcrun[0].wcLow;
    v16 = cRuns - 1;
    if ( a5 == 1 )
      v17 = -1;
    else
      v17 = *(_DWORD *)(*(_QWORD *)this + 460LL);
    a6 = v17;
    if ( v16 > 0xFFFF )
      v16 = 0xFFFF;
    v18 = v16;
    if ( (v16 & 0xF000) != 0 )
    {
      v19 = (unsigned int)acBits[(unsigned __int8)((__int64)v16 >> 12)] + 12;
    }
    else if ( (v16 & 0xF00) != 0 )
    {
      v19 = (unsigned int)acBits[BYTE1(v16)] + 8;
    }
    else if ( (v16 & 0xF0) != 0 )
    {
      v19 = (unsigned int)acBits[(unsigned __int8)((__int64)v16 >> 4)] + 4;
    }
    else
    {
      v19 = acBits[v16];
    }
    v20 = *((int *)&aiStart + v19);
    if ( a3 )
    {
      v21 = *((int *)&aiStart + v19);
      while ( 1 )
      {
        v22 = *a2;
        if ( *a2 < *p_wcLow )
          break;
        v23 = v20;
        v24 = v21;
        if ( (_DWORD)v19 == 8 )
        {
LABEL_15:
          if ( v23 <= v16 && v22 >= p_wcLow[8 * v23] )
            v25 = 64;
          else
            v25 = -64;
          v23 += v25;
        }
        else if ( (_DWORD)v19 != 7 )
        {
          switch ( (int)v19 )
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
              goto LABEL_87;
            case 10:
              goto LABEL_83;
            case 11:
              goto LABEL_79;
            case 12:
              goto LABEL_75;
            case 13:
              goto LABEL_71;
            case 14:
              goto LABEL_124;
            case 15:
              goto LABEL_119;
            case 16:
              v41 = p_wcLow[8 * v20];
              v42 = 0x4000;
              if ( v22 < v41 )
                v42 = -16384;
              v43 = 0x4000LL;
              v23 = v20 + v42;
              if ( v22 < v41 )
                v43 = -16384LL;
              v24 = v20 + v43;
LABEL_119:
              if ( v24 > v18 || v22 < p_wcLow[8 * v24] )
              {
                v44 = -8192;
                v45 = -8192LL;
              }
              else
              {
                v44 = 0x2000;
                v45 = 0x2000LL;
              }
              v23 += v44;
              v24 += v45;
LABEL_124:
              if ( v24 > v18 || (v46 = 4096, v22 < p_wcLow[8 * v24]) )
                v46 = -4096;
              v23 += v46;
LABEL_71:
              if ( v23 <= v16 && v22 >= p_wcLow[8 * v23] )
                v35 = 2048;
              else
                v35 = -2048;
              v23 += v35;
LABEL_75:
              if ( v23 <= v16 && v22 >= p_wcLow[8 * v23] )
                v36 = 1024;
              else
                v36 = -1024;
              v23 += v36;
LABEL_79:
              if ( v23 <= v16 && v22 >= p_wcLow[8 * v23] )
                v37 = 512;
              else
                v37 = -512;
              v23 += v37;
LABEL_83:
              if ( v23 <= v16 && v22 >= p_wcLow[8 * v23] )
                v38 = 256;
              else
                v38 = -256;
              v23 += v38;
LABEL_87:
              if ( v23 <= v16 && v22 >= p_wcLow[8 * v23] )
                v23 += 128;
              else
                v23 -= 128;
              goto LABEL_15;
            default:
              goto LABEL_48;
          }
        }
        if ( v23 <= v16 && v22 >= p_wcLow[8 * v23] )
          v26 = 32;
        else
          v26 = -32;
        v23 += v26;
LABEL_23:
        if ( v23 <= v16 && v22 >= p_wcLow[8 * v23] )
          v27 = 16;
        else
          v27 = -16;
        v23 += v27;
LABEL_27:
        if ( v23 <= v16 && v22 >= p_wcLow[8 * v23] )
          v28 = 8;
        else
          v28 = -8;
        v23 += v28;
LABEL_31:
        if ( v23 <= v16 && v22 >= p_wcLow[8 * v23] )
          v29 = 4;
        else
          v29 = -4;
        v23 += v29;
LABEL_35:
        if ( v23 <= v16 && v22 >= p_wcLow[8 * v23] )
          v30 = 2;
        else
          v30 = -2;
        v23 += v30;
LABEL_39:
        if ( v23 <= v16 && v22 >= p_wcLow[8 * v23] )
          v31 = 1;
        else
          v31 = -1;
        v23 += v31;
LABEL_43:
        if ( v23 <= v16 && v22 >= p_wcLow[8 * v23] )
          v32 = 0;
        else
          v32 = -1;
        v23 += v32;
LABEL_47:
        v14 = a5;
LABEL_48:
        v33 = &p_wcLow[8 * v23];
        v34 = v22 - *v33;
        if ( v34 < v33[1] )
        {
          if ( *((_QWORD *)v33 + 1) )
          {
            while ( 1 )
            {
              ++a2;
              *a4++ = *(_DWORD *)(*((_QWORD *)v33 + 1) + 4LL * v34);
              if ( !--a3 )
                break;
              v34 = *a2 - *v33;
              if ( v34 < 0 || v34 >= v33[1] )
                goto LABEL_53;
            }
          }
          else
          {
            while ( 1 )
            {
              ++a2;
              *a4++ = v22;
              if ( !--a3 )
                break;
              v50 = *a2 - *v33;
              if ( v50 >= 0 )
              {
                v22 = *a2;
                if ( v50 < v33[1] )
                  continue;
              }
LABEL_53:
              v17 = a6;
              goto LABEL_57;
            }
          }
          goto LABEL_59;
        }
        if ( v14 == 2 || (unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v22) )
          goto LABEL_55;
        if ( *(_DWORD *)(*(_QWORD *)this + 708LL) )
        {
          v47 = *a2;
          if ( *a2 >= gqlTTSystem && v47 <= (unsigned __int16)word_1C032E042 )
          {
            v48 = v47 - gqlTTSystem;
            v49 = (v47 - gqlTTSystem) & 0x1F;
            if ( v48 < 0 )
            {
              v48 += 31;
              v49 -= 32;
            }
            if ( ((0x80000000 >> v49) & *(_DWORD *)(qword_1C032E048 + 4LL * (v48 >> 5))) != 0 )
LABEL_55:
              *(_DWORD *)(*(_QWORD *)this + 712LL) |= 0x40u;
          }
        }
        v17 = a6;
        *a4 = a6;
        ++a2;
        ++a4;
        v18 = v16;
        --a3;
LABEL_57:
        v21 = v20;
LABEL_58:
        v14 = a5;
        if ( !a3 )
          goto LABEL_59;
      }
      while ( 1 )
      {
        *a4 = v17;
        ++a2;
        ++a4;
        if ( !--a3 )
          break;
        if ( *a2 >= *p_wcLow )
          goto LABEL_58;
      }
LABEL_59:
      v8 = v51;
    }
    if ( (_DWORD)v53 )
    {
      v53 = v8;
      PFEOBJ::vFreepfdg((PFEOBJ *)&v53);
    }
  }
  else
  {
    for ( ; a3; --a3 )
      *a4++ = *(_DWORD *)(*(_QWORD *)this + 460LL);
  }
}
