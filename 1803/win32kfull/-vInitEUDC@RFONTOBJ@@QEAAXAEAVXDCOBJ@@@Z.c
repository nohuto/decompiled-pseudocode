/*
 * XREFs of ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000399C
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C0076F24 (GreGetGlyphOutlineInternal.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0086740 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 * Callees:
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C0003340 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C000363C (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C000406C (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z @ 0x1C000462C (-bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0083964 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0086C60 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00CB7B4 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C00CCBE8 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x1C0128090 (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0197244 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02775D8 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 */

void __fastcall RFONTOBJ::vInitEUDC(RFONTOBJ *this, struct XDCOBJ *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  struct HLFONT__ *v9; // rdx
  HDC *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  _BYTE *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // rax
  struct PFE *v21; // r8
  __int64 v22; // rax
  unsigned int v23; // ecx
  struct PFE * near *v24; // r15
  struct PFE *v25; // rax
  __int64 v26; // r15
  struct PFE *EUDCDefaultFontPFE; // rax
  struct PFE *v28; // r15
  BOOL v29; // r15d
  unsigned int v30; // ecx
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *Flink; // r15
  __int64 v33; // rbx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  int Blink; // ecx
  __int64 v37; // rax
  _BYTE *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rax
  int v42; // ecx
  __int64 *v43; // rbx
  __int64 v44; // rdi
  BOOL v45; // [rsp+30h] [rbp-D0h]
  __int64 v46; // [rsp+38h] [rbp-C8h] BYREF
  int v47; // [rsp+40h] [rbp-C0h]
  __int64 v48; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+50h] [rbp-B0h]
  struct PFE *v50; // [rsp+58h] [rbp-A8h] BYREF
  int v51; // [rsp+60h] [rbp-A0h]
  __int64 v52; // [rsp+68h] [rbp-98h] BYREF
  int v53; // [rsp+70h] [rbp-90h]
  __int64 v54; // [rsp+78h] [rbp-88h] BYREF
  int v55; // [rsp+80h] [rbp-80h]
  _QWORD v56[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v57; // [rsp+98h] [rbp-68h] BYREF
  int v58; // [rsp+A0h] [rbp-60h]
  struct LFONT *v59; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v60[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v61; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v62; // [rsp+D0h] [rbp-30h]
  _OWORD v63[4]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v64[80]; // [rsp+120h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a2;
  if ( *(_DWORD *)(v3 + 312) )
  {
    RFONTOBJ::vInitEUDCRemote(this, a2);
    return;
  }
  v5 = *(_QWORD *)this;
  v6 = *(_QWORD *)(v5 + 104);
  v54 = v6;
  v52 = v6;
  if ( !*(_QWORD *)(v5 + 712) && *(_OWORD *)&gappfeSysEUDC != 0LL
    || (bFinallyInitializeFontAssocDefault || gbSystemDBCSFontEnabled) && !*(_QWORD *)(v5 + 720)
    || (v7 = *(_QWORD *)(v6 + 120)) != 0
    && (!*(_QWORD *)(v5 + 728) || *(_DWORD *)(v5 + 816) != 1 || *(_DWORD *)(v5 + 820) != *(_DWORD *)(v7 + 104)) )
  {
    v8 = *(_QWORD *)(v3 + 48);
    v9 = *(struct HLFONT__ **)(v3 + 2136);
    v48 = v8;
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v59, v9, (struct PDEVOBJ *)&v48);
    v10 = *(HDC **)a2;
    v11 = *(_QWORD *)this;
    v58 = 0;
    v57 = v11;
    MDCOBJ::MDCOBJ((MDCOBJ *)v60, *v10);
    IFIOBJR::IFIOBJR(
      (IFIOBJR *)v63,
      *(const struct _IFIMETRICS **)(v6 + 32),
      (struct RFONTOBJ *)&v57,
      (struct DCOBJ *)v60);
    RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)&v61, a2);
    v12 = *(_QWORD *)this;
    v13 = v64;
    v14 = *(_QWORD *)(v6 + 120);
    v15 = 0LL;
    v45 = 0;
    v16 = *(_QWORD *)(*(_QWORD *)this + 712LL);
    v17 = *(_QWORD *)(*(_QWORD *)this + 720LL);
    v49 = v16;
    v48 = v17;
    if ( v14 )
    {
      v18 = v12;
      v45 = *(_DWORD *)(v12 + 816) == 0;
      if ( *(_QWORD *)(v12 + 728) && *(_DWORD *)(v12 + 820) != *(_DWORD *)(v14 + 104) )
      {
        v19 = 0LL;
        if ( *(_DWORD *)(v12 + 824) )
        {
          v20 = v12;
          do
          {
            v21 = *(struct PFE **)(*(_QWORD *)(v20 + 728) + 8 * v19);
            if ( v21 )
            {
              v51 = 0;
              v50 = v21;
              RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v50, 0LL);
              v22 = *(_QWORD *)this;
              v50 = 0LL;
              *(_QWORD *)(*(_QWORD *)(v22 + 728) + 8 * v19) = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
              v12 = *(_QWORD *)this;
            }
            v19 = (unsigned int)(v19 + 1);
            v20 = v12;
          }
          while ( (unsigned int)v19 < *(_DWORD *)(v12 + 824) );
        }
        if ( *(_QWORD *)(v12 + 728) != v12 + 736 )
        {
          Win32FreePool(*(_QWORD *)(v12 + 728));
          v12 = *(_QWORD *)this;
        }
        *(_QWORD *)(v12 + 728) = 0LL;
        v16 = v49;
        *(_DWORD *)(*(_QWORD *)this + 824LL) = 0;
        v18 = *(_QWORD *)this;
      }
      v12 = v18;
      if ( !*(_QWORD *)(v18 + 728) )
        v45 = 1;
    }
    *(_DWORD *)(v12 + 696) |= 0x200u;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 832LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 832LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)this + 496LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 496LL));
    }
    v23 = *(_DWORD *)(*(_QWORD *)this + 828LL) != 0;
    LODWORD(v50) = v23;
    if ( !v16 )
    {
      v24 = (&gappfeSysEUDC)[v23];
      if ( v24 )
      {
        v25 = v24[4];
        v47 = 0;
        v46 = 0LL;
        v56[0] = v25;
        if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v56) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v46, a2, (struct PFE *)v24, (struct _EUDCLOGFONT *)&v61);
          v26 = v49;
          if ( v46 )
            v26 = v46;
          v49 = v26;
        }
        else
        {
          v49 = 0LL;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v46);
        v23 = (unsigned int)v50;
      }
    }
    if ( bFinallyInitializeFontAssocDefault )
    {
      if ( v17 )
        goto LABEL_43;
      EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v23);
      v28 = EUDCDefaultFontPFE;
      if ( EUDCDefaultFontPFE )
      {
        v47 = 0;
        v46 = 0LL;
        v56[0] = *((_QWORD *)EUDCDefaultFontPFE + 4);
        if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v56) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v46, a2, v28, (struct _EUDCLOGFONT *)&v61);
          if ( v46 )
            v17 = v46;
        }
        v48 = v17;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v46);
        goto LABEL_43;
      }
    }
    v17 = 0LL;
    v48 = 0LL;
LABEL_43:
    v29 = v45;
    if ( v45 )
    {
      v30 = *(_DWORD *)(*(_QWORD *)(v6 + 120) + 100LL);
      v13 = v30 <= 0xA ? v64 : (_BYTE *)PALLOCMEM2(8 * v30);
      if ( v13 )
      {
        LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v52);
        Flink = LinkedFontList->Flink;
        if ( LinkedFontList->Flink != LinkedFontList )
        {
          v33 = (unsigned int)v50;
          v34 = v62;
          v35 = v61;
          do
          {
            Blink = (int)Flink[1].Blink;
            v63[0] = v35;
            v63[1] = v34;
            if ( Blink )
              HIDWORD(v63[0]) = Blink * HIDWORD(v61) / SHIDWORD(Flink[1].Blink);
            v50 = (struct PFE *)*((_QWORD *)&Flink[2].Flink + (*((_QWORD *)&Flink[2].Flink + v33) != 0LL ? v33 : 0));
            v56[0] = *((_QWORD *)v50 + 4);
            if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v56) )
            {
              v47 = 0;
              v46 = 0LL;
              RFONTOBJ::vInit((RFONTOBJ *)&v46, a2, v50, (struct _EUDCLOGFONT *)v63);
              if ( v46 )
              {
                *(_QWORD *)&v13[8 * v15] = v46;
                v15 = (unsigned int)(v15 + 1);
              }
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v46);
              v34 = v62;
              v35 = v61;
            }
            Flink = Flink->Flink;
          }
          while ( Flink != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v52) );
          v6 = v54;
          v17 = v48;
        }
        v29 = v45;
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 0x8000) != 0 )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 496LL));
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 832LL));
    }
    if ( (*(_DWORD *)(*(_QWORD *)this + 696LL) & 0x200) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)this + 712LL) = v49;
      *(_QWORD *)(*(_QWORD *)this + 720LL) = v17;
      if ( v29 )
      {
        v37 = *(_QWORD *)this;
        if ( (_DWORD)v15 )
        {
          v38 = v13;
          if ( (unsigned int)v15 <= 0xA )
            v38 = (_BYTE *)(v37 + 736);
          *(_QWORD *)(v37 + 728) = v38;
          v39 = 0LL;
          v40 = (unsigned int)v15;
          do
          {
            *(_QWORD *)(v39 + *(_QWORD *)(*(_QWORD *)this + 728LL)) = *(_QWORD *)&v13[v39];
            v39 += 8LL;
            --v40;
          }
          while ( v40 );
        }
        else
        {
          *(_QWORD *)(v37 + 728) = 0LL;
        }
        *(_DWORD *)(*(_QWORD *)this + 824LL) = v15;
        v41 = *(_QWORD *)(v6 + 120);
        if ( v41 )
          v42 = *(_DWORD *)(v41 + 104);
        else
          v42 = 0;
        *(_DWORD *)(*(_QWORD *)this + 820LL) = v42;
        *(_DWORD *)(*(_QWORD *)this + 816LL) = 1;
      }
      if ( *(_BYTE **)(*(_QWORD *)this + 728LL) != v13 && v13 && v13 != v64 )
        Win32FreePool(v13);
      RFONTOBJ::UpdateFontLinksLockOrder(this);
      *(_DWORD *)(*(_QWORD *)this + 696LL) &= ~0x200u;
    }
    else
    {
      v52 = v49;
      v53 = 0;
      RFONTOBJ::vMakeInactive((RFONTOBJ *)&v52);
      v55 = 0;
      v54 = v17;
      RFONTOBJ::vMakeInactive((RFONTOBJ *)&v54);
      if ( (_DWORD)v15 )
      {
        v43 = (__int64 *)v13;
        v44 = (unsigned int)v15;
        do
        {
          v46 = *v43;
          v47 = 0;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)&v46);
          v46 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v46);
          ++v43;
          --v44;
        }
        while ( v44 );
      }
      if ( v13 != v64 )
        Win32FreePool(v13);
      v54 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v54);
      v52 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v52);
    }
    if ( v60[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v60);
    v57 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v57);
    if ( v59 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v59);
  }
}
