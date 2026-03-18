/*
 * XREFs of vFillIFICharsets @ 0x1C021BC34
 * Callers:
 *     vFill_IFIMETRICS @ 0x1C021C0F0 (vFill_IFIMETRICS.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 *     IsBogusSignature @ 0x1C0217D08 (IsBogusSignature.c)
 *     fs_GetGlyphIDs @ 0x1C02B1B4C (fs_GetGlyphIDs.c)
 */

char __fastcall vFillIFICharsets(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, __int64 OemCodePage, __int64 a6)
{
  __int64 v6; // r14
  __int64 v8; // r13
  __int64 v10; // rdx
  unsigned int v11; // ebx
  unsigned __int16 v12; // r15
  unsigned __int8 v13; // al
  int v14; // ecx
  int v15; // ecx
  unsigned __int32 v16; // r8d
  __int64 v17; // r9
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int32 v21; // r14d
  _DWORD *v22; // rcx
  unsigned int i; // ecx
  unsigned __int16 v24; // cx
  __int16 v25; // cx
  int v26; // esi
  int v27; // ecx
  int v28; // edx
  int v29; // r9d
  int v30; // edx
  int v31; // r9d
  int v32; // edx
  int v33; // r9d
  __int64 v34; // rax
  int v35; // edx
  int v36; // r9d
  __int64 v37; // rax
  int v38; // edx
  int v39; // r9d
  __int64 v40; // rax
  int v41; // edx
  int v42; // r9d
  int v43; // edx
  int v44; // r9d
  __int64 v45; // rax
  int v46; // edx
  int v47; // r9d
  int v48; // edx
  int v49; // r9d
  __int64 v50; // rax
  int v51; // edx
  int v52; // r9d
  __int64 v53; // rax
  unsigned __int16 v54; // ax
  char v55; // cl
  char v56; // cl
  USHORT AnsiCodePage; // [rsp+70h] [rbp+40h] BYREF
  int v59; // [rsp+78h] [rbp+48h]

  v6 = OemCodePage;
  v8 = *(unsigned int *)(a1 + 304) + a4 + 6;
  v10 = a1;
  v11 = 0;
  if ( OemCodePage )
    v12 = __ROR2__(*(_WORD *)(OemCodePage + 64), 8);
  else
    v12 = 0;
  v13 = *(_BYTE *)(a2 + 44) + 0x80;
  if ( v13 > 8u || (v14 = 323, !_bittest(&v14, v13)) )
  {
    v59 = 0;
    goto LABEL_11;
  }
  v59 = 1;
  if ( OemCodePage )
  {
    if ( !__ROR2__(*(_WORD *)OemCodePage, 8)
      || (v15 = _byteswap_ulong(*(_DWORD *)(OemCodePage + 78)), v59 = 1, IsBogusSignature(v15, v10)) )
    {
      v11 = 1;
      *a3 = *(_BYTE *)(a2 + 44);
      goto LABEL_84;
    }
LABEL_11:
    if ( v6 && *(_WORD *)v6 )
    {
      v16 = _byteswap_ulong(*(_DWORD *)(v6 + 78));
      if ( (gfsCurSignature & v16) != 0 && (gfsCurSignature & 0x10060) == 0 )
      {
        v11 = 1;
        *a3 = gjCurCharset;
      }
      v10 = 0LL;
      v17 = 16LL;
      do
      {
        v18 = *(_DWORD *)((char *)&unk_1C02EC760 + v10);
        LOBYTE(v19) = gfsCurSignature;
        if ( (v18 != gfsCurSignature || (gfsCurSignature & 0x10060) != 0) && (v18 & v16) != 0 && v11 < 0x10 )
        {
          LOBYTE(v19) = charsets[v10];
          v20 = v11++;
          a3[v20] = v19;
        }
        v10 += 4LL;
        --v17;
      }
      while ( v17 );
      v21 = _byteswap_ulong(*(_DWORD *)(v6 + 82));
      if ( v21 )
      {
        RtlGetDefaultCodePage(&AnsiCodePage, (PUSHORT)&OemCodePage);
        v22 = &unk_1C02E8110;
        LODWORD(v19) = 0x80000000;
        LODWORD(v10) = 0;
        while ( (unsigned __int16)OemCodePage != *v22 )
        {
          LODWORD(v19) = (unsigned int)v19 >> 1;
          LODWORD(v10) = v10 + 1;
          ++v22;
          if ( (unsigned int)v10 >= 0x10 )
            goto LABEL_30;
        }
        if ( ((unsigned int)v19 & v21) != 0 && v11 < 0x10 )
        {
          v19 = v11++;
          a3[v19] = -1;
        }
      }
LABEL_30:
      for ( i = 0; i < v11; ++i )
      {
        LOBYTE(v19) = i;
        if ( a3[i] == *(_BYTE *)(a2 + 44) )
          break;
      }
      if ( i == v11 )
      {
        if ( v11 )
        {
          LOBYTE(v19) = *a3;
          *(_BYTE *)(a2 + 44) = *a3;
        }
        else
        {
          *(_BYTE *)(a2 + 44) = 1;
        }
      }
      goto LABEL_82;
    }
  }
  if ( *(_BYTE *)(a2 + 172) != 5 )
  {
    LOBYTE(v19) = 0;
    if ( v12 < 0x100u )
    {
      if ( v8 )
      {
        v24 = *(_WORD *)(a2 + 52);
        LODWORD(v10) = 65280;
        if ( (v24 & 0xFF00) != 0 )
        {
          v25 = HIBYTE(v24);
          LOBYTE(v19) = v25 + 78;
          if ( (unsigned __int8)(v25 + 78) <= 2u )
          {
            LODWORD(v19) = -*(_DWORD *)(gpGdiSharedMemory + 1573012LL);
            LOBYTE(v25) = *(_DWORD *)(gpGdiSharedMemory + 1573012LL) != 0 ? -78 : 2;
            *(_BYTE *)(a2 + 44) = v25;
          }
          *a3 = v25;
          v11 = 1;
        }
        else
        {
          v26 = a6;
          v27 = a6;
          *a3 = 0;
          v11 = 1;
          if ( !(unsigned int)fs_GetGlyphIDs(v27, 65280, 8710, a4, (__int64)&OemCodePage) && (_WORD)OemCodePage )
          {
            a3[1] = 77;
            v11 = 2;
          }
          LOWORD(OemCodePage) = 0;
          fs_GetGlyphIDs(v26, v28, 971, v29, (__int64)&OemCodePage);
          if ( !(unsigned int)fs_GetGlyphIDs(v26, v30, 937, v31, (__int64)&AnsiCodePage)
            && ((_WORD)OemCodePage || AnsiCodePage) )
          {
            v34 = v11++;
            a3[v34] = -95;
          }
          if ( !(unsigned int)fs_GetGlyphIDs(v26, v32, 304, v33, (__int64)&OemCodePage) && (_WORD)OemCodePage )
          {
            v37 = v11++;
            a3[v37] = -94;
          }
          if ( !(unsigned int)fs_GetGlyphIDs(v26, v35, 1488, v36, (__int64)&OemCodePage) && (_WORD)OemCodePage )
          {
            v40 = v11++;
            a3[v40] = -79;
          }
          LOWORD(OemCodePage) = 0;
          fs_GetGlyphIDs(v26, v38, 1105, v39, (__int64)&OemCodePage);
          if ( !(unsigned int)fs_GetGlyphIDs(v26, v41, 1071, v42, (__int64)&AnsiCodePage)
            && ((_WORD)OemCodePage || AnsiCodePage) )
          {
            v45 = v11++;
            a3[v45] = -52;
          }
          LOWORD(OemCodePage) = 0;
          fs_GetGlyphIDs(v26, v43, 328, v44, (__int64)&OemCodePage);
          if ( !(unsigned int)fs_GetGlyphIDs(v26, v46, 268, v47, (__int64)&AnsiCodePage)
            && ((_WORD)OemCodePage || AnsiCodePage) )
          {
            v50 = v11++;
            a3[v50] = -18;
          }
          if ( !(unsigned int)fs_GetGlyphIDs(v26, v48, 371, v49, (__int64)&OemCodePage) && (_WORD)OemCodePage )
          {
            v53 = v11++;
            a3[v53] = -70;
          }
          LODWORD(v19) = fs_GetGlyphIDs(v26, v51, 9618, v52, (__int64)&OemCodePage);
          if ( !(_DWORD)v19 && (_WORD)OemCodePage )
          {
            v19 = v11++;
            a3[v19] = -1;
          }
        }
      }
      goto LABEL_82;
    }
  }
  if ( v12 < 0xF000u || (v54 = *(_WORD *)(a2 + 52), LODWORD(v10) = 65280, (v54 & 0xFF00) == 0) )
  {
    LOBYTE(v19) = *(_BYTE *)(a2 + 44);
    *a3 = v19;
    goto LABEL_81;
  }
  LOWORD(v19) = HIBYTE(v54);
  if ( (_BYTE)v19 == 0xB1 )
    goto LABEL_77;
  if ( (unsigned __int8)v19 > 0xB1u )
  {
    if ( (unsigned __int8)v19 <= 0xB4u )
    {
      LODWORD(v19) = -*(_DWORD *)(gpGdiSharedMemory + 1573012LL);
      v55 = *(_DWORD *)(gpGdiSharedMemory + 1573012LL) != 0 ? 0xB0 : 0;
      goto LABEL_79;
    }
    if ( (_BYTE)v19 == 0xB5 )
    {
LABEL_77:
      LODWORD(v19) = -*(_DWORD *)(gpGdiSharedMemory + 1573012LL);
      v55 = *(_DWORD *)(gpGdiSharedMemory + 1573012LL) != 0 ? 0xAF : 0;
LABEL_79:
      v56 = v55 + 2;
      *(_BYTE *)(a2 + 44) = v56;
      *a3 = v56;
LABEL_81:
      v11 = 1;
    }
  }
LABEL_82:
  if ( !v59 )
    goto LABEL_85;
  if ( v11 >= 0x10 )
    return v19;
LABEL_84:
  v19 = v11++;
  a3[v19] = -2;
LABEL_85:
  if ( v11 < 0x10 )
  {
    LOBYTE(v10) = 1;
    LOBYTE(v19) = (unsigned __int8)memset(&a3[v11], v10, 16 - v11);
  }
  return v19;
}
