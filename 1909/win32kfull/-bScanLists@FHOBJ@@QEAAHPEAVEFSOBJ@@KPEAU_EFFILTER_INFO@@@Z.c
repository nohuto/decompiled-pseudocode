/*
 * XREFs of ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C00918F0
 * Callers:
 *     ?bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C0090DE4 (-bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 * Callees:
 *     ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1C0091548 (-bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C0091C78 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0092BB0 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?efstyCompute@@YA?AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z @ 0x1C0117784 (-efstyCompute@@YA-AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02B3EB8 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall FHOBJ::bScanLists(FHOBJ *this, struct EFSOBJ *a2, int a3, struct _EFFILTER_INFO *a4)
{
  int v4; // r15d
  int v6; // r11d
  struct EFSOBJ *v7; // r12
  __int64 v8; // r14
  _QWORD *v9; // rsi
  __int64 v10; // rbx
  int v11; // r8d
  _DWORD *v12; // r9
  int v13; // edx
  __int64 v14; // rdx
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rcx
  char *v18; // rcx
  char v19; // r11
  char *v20; // r8
  __int64 v21; // rcx
  int v22; // r15d
  __int64 v23; // rax
  _BYTE *v24; // rsi
  unsigned __int64 v25; // r13
  int v26; // r12d
  int v27; // eax
  bool v28; // zf
  unsigned __int8 v29; // al
  _BYTE *v30; // rbx
  unsigned __int8 v31; // cl
  struct _LIST_ENTRY *LinkedFontList; // r10
  struct _LIST_ENTRY *i; // r9
  struct _LIST_ENTRY *Flink; // rcx
  __int64 Blink_low; // rax
  _BYTE *v36; // rax
  _BYTE *v37; // r8
  struct tagPvtData *v39; // rax
  int v40; // eax
  unsigned int v41; // esi
  __int64 v42; // rcx
  __int64 v44; // [rsp+38h] [rbp-31h] BYREF
  EFSOBJ *v45; // [rsp+40h] [rbp-29h]
  int v46; // [rsp+48h] [rbp-21h]
  __int64 v47; // [rsp+50h] [rbp-19h] BYREF
  __int64 v48; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v49[3]; // [rsp+68h] [rbp-1h] BYREF

  v4 = 0;
  v45 = a2;
  v46 = 0;
  v6 = a3;
  v7 = a2;
  if ( a3 == 2 )
  {
    v46 = 1;
  }
  else if ( a3 == 3 )
  {
    v46 = 2;
  }
  v8 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
  if ( !v8 )
    return 1LL;
  while ( 2 )
  {
    v9 = *(_QWORD **)(v8 + 8);
    if ( !v9 || (*(_DWORD *)(v8 + 32) & 2) != 0 )
      goto LABEL_16;
    *((_DWORD *)a4 + 7) = 1;
    memset(v49, 0, sizeof(v49));
    *((_DWORD *)a4 + 8) = *(_DWORD *)(v8 + 24);
    while ( 1 )
    {
      v10 = v9[1];
      v47 = v10;
      v11 = *(_DWORD *)(v10 + 12);
      v12 = *(_DWORD **)(v10 + 32);
      if ( (v11 & 2) != 0 )
        goto LABEL_14;
      v13 = v12[12];
      if ( (v13 & 0x800000) != 0 || (v11 & 8) != 0 || *((_DWORD *)a4 + 6) && (v13 & 2) != 0 )
        goto LABEL_14;
      if ( *((_DWORD *)a4 + 3) && (v13 & 1) != 0
        || *((_DWORD *)a4 + 4) && (v13 & 1) == 0
        || *(_DWORD *)a4
        && (v13 & 2) != 0
        && (v11 & 1) == 0
        && (*((_DWORD *)a4 + 1) != v12[32] || *((_DWORD *)a4 + 2) != v12[33])
        || *((_DWORD *)a4 + 7) && *((_DWORD *)a4 + 8) && (v13 & 2) != 0 )
      {
        goto LABEL_14;
      }
      v14 = *(_QWORD *)v10;
      v48 = v14;
      if ( *(struct PFT **const *)(v14 + 128) == gpPFTPrivate )
      {
        v39 = PFFOBJ::pPvtDataMatch((PFFOBJ *)&v48);
        v6 = a3;
        if ( !v39 || *((_DWORD *)v39 + 1) )
          goto LABEL_14;
      }
      else if ( !*(_DWORD *)(v14 + 56) )
      {
        goto LABEL_14;
      }
      if ( *((_DWORD *)a4 + 5) && (*(_DWORD *)(v10 + 12) & 1) == 0 || (*(_DWORD *)(v10 + 12) & 0x44) != 0 )
        goto LABEL_14;
      v15 = *((_DWORD *)a4 + 9);
      if ( v15 != 1 )
      {
        v16 = *(_QWORD *)(v10 + 32);
        v17 = *(int *)(v16 + 40);
        if ( (_DWORD)v17 )
        {
          if ( (_BYTE)v15 == 1 )
            LOBYTE(v15) = MAPPER::DefaultCharset;
          if ( (_BYTE)v15 == 0xFE )
          {
            LOBYTE(v15) = -2;
          }
          else
          {
            v18 = (char *)(v16 + v17);
            v19 = *v18;
            v20 = v18 + 16;
            if ( v18 >= v18 + 16 )
            {
LABEL_37:
              if ( *(_QWORD *)(v10 + 120) )
              {
                LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v47);
                for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
                {
                  Flink = i[2].Flink[2].Flink;
                  Blink_low = SLODWORD(Flink[2].Blink);
                  if ( (_DWORD)Blink_low )
                  {
                    v36 = (char *)Flink + Blink_low;
                    v37 = v36 + 16;
                    if ( v36 < v36 + 16 )
                    {
                      while ( *v36 != (_BYTE)v15 )
                      {
                        if ( *v36 != 1 && ++v36 < v37 )
                          continue;
                        goto LABEL_67;
                      }
                      goto LABEL_39;
                    }
                  }
                  else if ( BYTE4(Flink[2].Blink) == (_BYTE)v15 )
                  {
                    goto LABEL_39;
                  }
LABEL_67:
                  ;
                }
              }
              LOBYTE(v15) = v19;
            }
            else
            {
              while ( *v18 != (_BYTE)v15 )
              {
                if ( *v18 != 1 && ++v18 < v20 )
                  continue;
                goto LABEL_37;
              }
            }
LABEL_39:
            v6 = a3;
          }
        }
        else
        {
          LOBYTE(v15) = *(_BYTE *)(v16 + 44);
        }
        if ( (_BYTE)v15 != *((_BYTE *)a4 + 36) )
          goto LABEL_14;
      }
      if ( v6 != 1 )
        break;
      v40 = efstyCompute(v49, &v47);
      if ( !v4 || v40 == 5 )
      {
        if ( !(unsigned int)EFSOBJ::bAdd(v7, v10, v40, 0, 1) )
          return 0LL;
        v4 = 1;
      }
      v6 = a3;
LABEL_14:
      v9 = (_QWORD *)*v9;
      if ( !v9 )
        goto LABEL_15;
    }
    v21 = *(_QWORD *)(v10 + 32);
    v22 = *((_DWORD *)a4 + 9);
    v44 = 0LL;
    v23 = *(int *)(v21 + 40);
    v47 = v10;
    BYTE5(v44) = v22;
    v24 = (_BYTE *)(v21 + v23);
    v25 = v21 + v23 + 16;
    v26 = v46 & 2;
    if ( (v46 & 2) != 0 )
    {
      BYTE4(v44) = 2;
      if ( v22 == 1 )
      {
        if ( (_DWORD)v23 )
          LOBYTE(v27) = *v24;
        else
          v27 = *(unsigned __int8 *)(v21 + 44);
        BYTE5(v44) = v27;
      }
    }
    EFSOBJ::WriteEFE(v45, (const struct _EFENTRY *)&v44, (struct PFEOBJ *)&v47);
    v28 = v26 == 0;
    v7 = v45;
    if ( v28 )
    {
      v4 = 0;
      if ( *(_DWORD *)(v10 + 132) )
      {
        v41 = 0;
        do
        {
          LODWORD(v44) = 0;
          BYTE4(v44) = 3;
          v42 = *(unsigned __int8 *)(v41 + v10 + 140);
          HIWORD(v44) = *(unsigned __int8 *)(v41 + v10 + 140);
          BYTE5(v44) = *((_BYTE *)gpfsTable + 196 * v42 + 128);
          EFSOBJ::WriteEFE(v7, (const struct _EFENTRY *)&v44, (struct PFEOBJ *)&v47);
          ++v41;
        }
        while ( v41 < *(_DWORD *)(v10 + 132) );
      }
    }
    else
    {
      if ( v22 != 1 || !*(_DWORD *)(*(_QWORD *)(v10 + 32) + 40LL) || (v29 = v24[1], v30 = v24 + 1, v29 == 1) )
      {
LABEL_15:
        v4 = 0;
        goto LABEL_16;
      }
      v31 = v24[1];
      do
      {
        v4 = 0;
        if ( v31 > 0xFDu )
          break;
        if ( (unsigned __int64)v30 >= v25 )
          break;
        LODWORD(v44) = 0;
        BYTE4(v44) = 2;
        HIWORD(v44) = 0;
        BYTE5(v44) = v29;
        EFSOBJ::WriteEFE(v7, (const struct _EFENTRY *)&v44, (struct PFEOBJ *)&v47);
        v29 = *++v30;
        v31 = v29;
      }
      while ( v29 != 1 );
    }
LABEL_16:
    v8 = *(_QWORD *)(v8 + 48);
    if ( v8 )
    {
      v6 = a3;
      continue;
    }
    return 1LL;
  }
}
