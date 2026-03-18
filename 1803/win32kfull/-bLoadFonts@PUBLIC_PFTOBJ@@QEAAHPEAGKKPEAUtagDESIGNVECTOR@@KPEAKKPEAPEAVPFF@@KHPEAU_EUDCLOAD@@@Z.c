/*
 * XREFs of ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C003E43C
 * Callers:
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C003EBC0 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C003F6A8 (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     GreAddFontResourceWInternal @ 0x1C00F0AC4 (GreAddFontResourceWInternal.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0004B8C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0004BC0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C003E388 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C007EE54 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C00808F4 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0080CC0 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0080E14 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@@Z @ 0x1C00BE990 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C00BF054 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00C6A8C (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C00C6D84 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00C6DA4 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C00C6E9C (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1C00C6EC8 (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C00C8774 (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00CB000 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C00CEE64 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?IsTrustedFontFilePath@@YA_NPEBG@Z @ 0x1C00FF8E8 (-IsTrustedFontFilePath@@YA_NPEBG@Z.c)
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadFonts(
        PUBLIC_PFTOBJ *this,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        struct tagDESIGNVECTOR *Src,
        size_t a6,
        unsigned int *a7,
        unsigned int a8,
        struct PFF **a9,
        unsigned int a10,
        int a11,
        struct _EUDCLOAD *a12)
{
  struct _EUDCLOAD *v12; // rbx
  struct PFF **v14; // r13
  __int64 v15; // r14
  unsigned int v16; // edi
  unsigned int v17; // r15d
  unsigned int *v18; // r12
  unsigned int v19; // ecx
  unsigned int v20; // r8d
  unsigned __int16 *v21; // rdx
  struct PFF *v22; // rax
  unsigned int v23; // eax
  struct PFF *v24; // rcx
  struct PFF *v26; // rbx
  void **v27; // rbx
  __int64 v28; // r13
  __int64 v29; // rax
  struct _FONTFILEVIEW **v30; // rsi
  unsigned __int16 *v31; // rax
  WCHAR *v32; // rcx
  __int64 v33; // r15
  struct _FONTFILEVIEW **v34; // r12
  void **v35; // r13
  signed __int64 v36; // rax
  __int64 v37; // rbx
  signed __int64 v38; // rsi
  unsigned int FontFile; // edx
  unsigned int v41; // r9d
  unsigned __int16 *v42; // r8
  struct PFF *v43; // rdx
  struct PFF **v44; // rax
  __int64 v45; // rcx
  struct PFF **v46; // rdx
  struct PFF **v47; // rdi
  struct PFF *v48; // rcx
  _WORD *v49; // rcx
  struct _FONTFILEVIEW **v50; // rdx
  __int64 v51; // r8
  struct PFF *v53; // rcx
  __int64 v54; // rdi
  ULONG_PTR *v55; // r15
  __int64 v56; // r12
  struct _FONTFILEVIEW **v57; // r15
  __int64 v58; // r12
  struct _FONTFILEVIEW *v59; // rcx
  struct _FONTFILEVIEW **v60; // r14
  struct _FONTFILEVIEW *v61; // rcx
  unsigned int v62; // ebx
  struct PFF *v63; // rax
  __int64 v64; // r14
  __int64 v65; // rcx
  struct PFF **v66; // rdx
  struct PFF *v67; // rcx
  unsigned int v68; // eax
  unsigned int v69; // eax
  struct PFF *v70; // rcx
  size_t Size; // [rsp+38h] [rbp-B9h]
  unsigned int v72; // [rsp+60h] [rbp-91h]
  bool v73; // [rsp+88h] [rbp-69h]
  char v74; // [rsp+89h] [rbp-68h]
  int v75; // [rsp+8Ch] [rbp-65h] BYREF
  HDEV v76; // [rsp+90h] [rbp-61h] BYREF
  unsigned int v77; // [rsp+98h] [rbp-59h]
  _QWORD v78[2]; // [rsp+A0h] [rbp-51h] BYREF
  char v79; // [rsp+B0h] [rbp-41h]
  struct PFF **v80; // [rsp+B8h] [rbp-39h] BYREF
  HDEV v81; // [rsp+C0h] [rbp-31h] BYREF
  unsigned __int64 v82; // [rsp+C8h] [rbp-29h] BYREF
  __int64 v83; // [rsp+D0h] [rbp-21h] BYREF
  HDEV v84; // [rsp+D8h] [rbp-19h] BYREF
  __int64 v85; // [rsp+E0h] [rbp-11h]
  void **v86; // [rsp+E8h] [rbp-9h]
  PCWSTR SourceString; // [rsp+140h] [rbp+4Fh] BYREF
  unsigned int v89; // [rsp+148h] [rbp+57h]

  v89 = a3;
  SourceString = a2;
  v12 = a12;
  v14 = a9;
  v15 = a4;
  v16 = 0;
  v75 = 0;
  v73 = a12 != 0LL;
  v74 = 1;
  if ( a2 && a4 <= 3 )
  {
    v83 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v17 = a10;
    v18 = a7;
    v77 = a10;
    if ( !a11 )
    {
      v19 = a6;
      v20 = v89;
      v21 = (unsigned __int16 *)SourceString;
      *a7 = 0;
      v22 = PUBLIC_PFTOBJ::pPFFGet(this, v21, v20, v15, Src, v19, &v80, v73);
      *v14 = v22;
      if ( v22 )
      {
        v23 = PFTOBJ::chpfeIncrPFF(this, v22, &v75, v17, v12);
        *v18 = v23;
        if ( v23 )
        {
          if ( (v17 & 0x40) != 0 )
            *v18 = 0;
          v24 = *v14;
          if ( (v17 & 0x400) != 0 )
            *((_DWORD *)v24 + 13) |= 0x400u;
          if ( (v17 & 0x100) != 0 )
            *((_DWORD *)v24 + 13) |= 0x800u;
          v16 = v75;
LABEL_13:
          SEMOBJ::vUnlock((SEMOBJ *)&v83);
          return v16;
        }
        v16 = v75;
      }
      v26 = PUBLIC_PFTOBJ::pPFFGet(this, (unsigned __int16 *)SourceString, v89, v15, Src, a6, &v80, v12 == 0LL);
      if ( v26 && !*((_QWORD *)v26 + 19) )
      {
        PFFMEMOBJ::PFFMEMOBJ((PFFMEMOBJ *)v78, v26, a8, v17, *(struct PFT **)this);
        v62 = *((_DWORD *)v26 + 52);
        v16 = 0;
        v75 = 0;
        SEMOBJ::vUnlock((SEMOBJ *)&v83);
        if ( v78[0] )
        {
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable(
                               (PFFMEMOBJ *)v78,
                               (unsigned __int16 *)SourceString,
                               v62,
                               0LL,
                               a12) )
          {
            v76 = (HDEV)ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            v63 = PUBLIC_PFTOBJ::pPFFGet(this, (unsigned __int16 *)SourceString, v89, v15, Src, a6, &v80, v73);
            *v14 = v63;
            if ( v63 && (v68 = PFTOBJ::chpfeIncrPFF(this, v63, &v75, v17, a12), v16 = v75, (v62 = v68) != 0) )
            {
              *v18 = v68;
            }
            else
            {
              v64 = v78[0];
              *v14 = (struct PFF *)v78[0];
              if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v78, v73) )
              {
                v65 = *(_QWORD *)this;
                if ( (*(_DWORD *)(v64 + 52) & 0x200) == 0 )
                  ++*(_DWORD *)(v65 + 32);
                ++*(_DWORD *)(v65 + 28);
                v66 = v80;
                v67 = *v14;
                if ( *v80 )
                  *((_QWORD *)*v80 + 2) = v67;
                *((_QWORD *)v67 + 1) = *v66;
                *((_QWORD *)v67 + 2) = 0LL;
                *v66 = v67;
                PFFOBJ::vSetUniqueness((PFFOBJ *)v78);
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v78);
                *v18 = v62;
                v16 = 1;
              }
              else
              {
                *v18 = 0;
                PFFOBJ::vRemoveHash((PFFOBJ *)v78);
              }
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v76);
          }
          else
          {
            *v18 = 0;
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v78);
        goto LABEL_13;
      }
    }
    v82 = 0LL;
    SEMOBJ::vUnlock((SEMOBJ *)&v83);
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v76, 12 * v15);
    v27 = (void **)v76;
    v84 = v76;
    if ( v76
      && (v28 = v15,
          v29 = PALLOCMEM2((unsigned int)((_DWORD)v15 << 7)),
          v81 = (HDEV)v29,
          (v30 = (struct _FONTFILEVIEW **)v29) != 0LL) )
    {
      v85 = v29 + (unsigned int)(8 * v15);
      v31 = (unsigned __int16 *)SourceString;
      v76 = (HDEV)SourceString;
      v32 = (WCHAR *)SourceString;
      if ( (_DWORD)v15 )
      {
        v33 = v85;
        v86 = &v27[v15];
        v34 = v30;
        v35 = v86;
        v36 = (char *)v27 - (char *)v30;
        v37 = v15;
        v38 = v36;
        do
        {
          *v34 = (struct _FONTFILEVIEW *)v33;
          *(_QWORD *)(v33 + 80) = v32;
          *((_DWORD *)*v34 + 10) = *((_DWORD *)*v34 + 10) & 0xFFFFFFF7 | (8 * IsTrustedFontFilePath(v32));
          v32 = (WCHAR *)v76;
          *(struct _FONTFILEVIEW **)((char *)v34 + v38) = 0LL;
          *(_DWORD *)v35 = 0;
          while ( *v32++ )
            ;
          v33 += 120LL;
          v76 = (HDEV)v32;
          ++v34;
          v35 = (void **)((char *)v35 + 4);
          --v37;
        }
        while ( v37 );
        v27 = (void **)v84;
        v28 = v15;
        v30 = (struct _FONTFILEVIEW **)v81;
        v17 = v77;
        v18 = a7;
        v31 = (unsigned __int16 *)SourceString;
      }
      vLoadFontFileView(
        v31,
        v89,
        v30,
        v15,
        v27,
        (unsigned int *)&v27[v28],
        Src,
        a6,
        &v82,
        (struct PDEV **)&v76,
        (struct _FNTCHECKSUM *)&v84);
      v81 = v76;
      if ( !v82 )
        goto LABEL_52;
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v81, v82, 2u, 0, 0LL);
      v77 = FontFile;
      if ( FontFile - 1 > 0xFFFFFFFD )
        goto LABEL_52;
      if ( !a12 || *((_QWORD *)a12 + 1) || FontFile <= 2 )
      {
        v41 = v89;
        v42 = (unsigned __int16 *)SourceString;
        v72 = a8;
        *v18 = FontFile;
        LODWORD(Size) = a6;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v78,
          FontFile,
          v42,
          v41,
          v15,
          Src,
          Size,
          v82,
          v76,
          0LL,
          *(struct PFT **)this,
          v72,
          v17,
          (struct _FNTCHECKSUM *)&v84,
          v30,
          0LL);
        if ( !v78[0] )
        {
LABEL_51:
          PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v78);
LABEL_52:
          if ( v30 && (_DWORD)v15 )
          {
            v55 = (ULONG_PTR *)v30;
            v56 = v28;
            do
            {
              EngUnmapFontFileFD(*v55++);
              --v56;
            }
            while ( v56 );
          }
          if ( v74 )
          {
            CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&a12, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
            if ( UmfdFileviewLookup && (_DWORD)v15 )
            {
              v57 = v30;
              v58 = v28;
              do
              {
                v59 = *v57;
                if ( (*((_DWORD *)*v57 + 10) & 0x20) != 0 )
                {
                  LODWORD(SourceString) = *((_DWORD *)v59 + 16);
                  NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v59, &SourceString);
                }
                ++v57;
                --v58;
              }
              while ( v58 );
            }
            PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&a12);
            if ( (_DWORD)v15 )
            {
              v60 = v30;
              do
              {
                v61 = *v60;
                if ( (*((_DWORD *)*v60 + 10) & 8) == 0 && !*((_QWORD *)v61 + 2) && !*((_QWORD *)v61 + 1) )
                  vUnreferenceFileviewSection(v61);
                ++v60;
                --v28;
              }
              while ( v28 );
            }
            Win32FreePool(v30);
          }
          goto LABEL_54;
        }
        v74 = 0;
        if ( !(unsigned int)PFFMEMOBJ::bLoadFontFileTable(
                              (PFFMEMOBJ *)v78,
                              (unsigned __int16 *)SourceString,
                              v77,
                              0LL,
                              a12) )
        {
          *v18 = 0;
LABEL_50:
          if ( (v79 & 2) == 0 )
          {
            if ( (_DWORD)v15 )
            {
              do
              {
                EngUnmapFontFileFD((ULONG_PTR)*v30++);
                --v28;
              }
              while ( v28 );
            }
            PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v78);
            goto LABEL_54;
          }
          goto LABEL_51;
        }
        v81 = (HDEV)ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v43 = PUBLIC_PFTOBJ::pPFFGet(this, (unsigned __int16 *)SourceString, v89, v15, Src, a6, &v80, v73);
        v44 = a9;
        *a9 = v43;
        if ( v43 )
        {
          v69 = PFTOBJ::chpfeIncrPFF(this, v43, &v75, v17, a12);
          if ( v69 )
          {
            if ( (v17 & 0x40) != 0 )
              v69 = 0;
            *v18 = v69;
            v70 = *a9;
            if ( (v17 & 0x400) != 0 )
              *((_DWORD *)v70 + 13) |= 0x400u;
            v16 = v75;
            if ( (v17 & 0x100) != 0 )
              *((_DWORD *)v70 + 13) |= 0x800u;
            goto LABEL_49;
          }
          v16 = v75;
          v44 = a9;
        }
        *v44 = (struct PFF *)v78[0];
        if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v78, v73) )
        {
          v45 = *(_QWORD *)this;
          if ( (*(_DWORD *)(v78[0] + 52LL) & 0x200) == 0 )
            ++*(_DWORD *)(v45 + 32);
          ++*(_DWORD *)(v45 + 28);
          v46 = v80;
          v47 = a9;
          v48 = *a9;
          if ( *v80 )
            *((_QWORD *)*v80 + 2) = v48;
          *((_QWORD *)v48 + 1) = *v46;
          *((_QWORD *)v48 + 2) = 0LL;
          *v46 = v48;
          PFFOBJ::vSetUniqueness((PFFOBJ *)v78);
          PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v78);
          v49 = *(_WORD **)(v78[0] + 24LL);
          if ( (_DWORD)v15 )
          {
            v50 = v30;
            v51 = v28;
            do
            {
              *((_QWORD *)*v50 + 10) = v49;
              while ( *v49++ )
                ;
              ++v50;
              --v51;
            }
            while ( v51 );
          }
          v53 = *v47;
          if ( (v17 & 0x40) != 0 )
            *((_DWORD *)v53 + 13) |= 0x80u;
          if ( (v17 & 0x400) != 0 )
            *((_DWORD *)v53 + 13) |= 0x400u;
          if ( (v17 & 0x100) != 0 )
            *((_DWORD *)v53 + 13) |= 0x800u;
          if ( (_DWORD)v15 )
          {
            v54 = v28;
            do
            {
              EngUnmapFontFileFD((ULONG_PTR)*v30++);
              --v54;
            }
            while ( v54 );
          }
          v30 = 0LL;
          v16 = 1;
        }
        else
        {
          *v18 = 0;
          PFFOBJ::vRemoveHash((PFFOBJ *)v78);
        }
LABEL_49:
        SEMOBJ::vUnlock((SEMOBJ *)&v81);
        goto LABEL_50;
      }
    }
    else
    {
      v16 = 0;
    }
LABEL_54:
    if ( v27 )
      Win32FreePool(v27);
    goto LABEL_13;
  }
  return 0LL;
}
