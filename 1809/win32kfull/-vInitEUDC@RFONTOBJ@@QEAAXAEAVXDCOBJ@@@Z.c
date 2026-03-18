/*
 * XREFs of ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00C3E78
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00C467C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00C5440 (GreGetGlyphOutlineInternal.c)
 * Callees:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C000321C (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C0006CFC (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C00074D0 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z @ 0x1C0007CBC (-bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023F04 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0045A3C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C00816A8 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0081840 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00853D0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00A19EC (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C00C5138 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x1C00C5158 (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C015F19C (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C028AB48 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
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
  _BYTE *v13; // r14
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned int v23; // ecx
  struct PFE * near *v24; // r10
  struct PFE *v25; // rax
  struct PFE *v26; // r10
  struct PFE *EUDCDefaultFontPFE; // rax
  struct PFE *v28; // r11
  unsigned int v29; // ecx
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *Flink; // rdi
  __int64 v32; // rbx
  __int128 v33; // xmm0
  EVENT_DATA_DESCRIPTOR v34; // xmm1
  int Blink; // ecx
  struct PFE *v36; // r10
  int v37; // r12d
  const struct SEMOBJSHARED *v38; // rdx
  const struct SEMOBJSHARED *v39; // rdx
  const GUID *v40; // r9
  bool v41; // di
  __int64 v42; // rax
  _BYTE *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rax
  int v47; // ecx
  __int64 *v48; // rbx
  __int64 v49; // rdi
  __int64 v50; // [rsp+30h] [rbp-D0h] BYREF
  int v51; // [rsp+38h] [rbp-C8h]
  BOOL v52; // [rsp+40h] [rbp-C0h]
  unsigned int v53; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v54; // [rsp+48h] [rbp-B8h] BYREF
  int v55; // [rsp+50h] [rbp-B0h]
  __int64 v56; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v57[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v58; // [rsp+70h] [rbp-90h] BYREF
  int v59; // [rsp+78h] [rbp-88h]
  __int64 v60; // [rsp+80h] [rbp-80h] BYREF
  int v61; // [rsp+88h] [rbp-78h]
  struct LFONT *v62; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v63; // [rsp+98h] [rbp-68h] BYREF
  __int128 v64; // [rsp+A8h] [rbp-58h]
  __int64 v65; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v66[16]; // [rsp+C8h] [rbp-38h] BYREF
  char v67[40]; // [rsp+D8h] [rbp-28h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  __int128 v69; // [rsp+110h] [rbp+10h]
  unsigned int *v70; // [rsp+120h] [rbp+20h]
  __int64 v71; // [rsp+128h] [rbp+28h]
  __int64 *v72; // [rsp+130h] [rbp+30h]
  __int64 v73; // [rsp+138h] [rbp+38h]
  __int64 *v74; // [rsp+140h] [rbp+40h]
  __int64 v75; // [rsp+148h] [rbp+48h]
  __int64 *v76; // [rsp+150h] [rbp+50h]
  __int64 v77; // [rsp+158h] [rbp+58h]
  _BYTE v78[80]; // [rsp+160h] [rbp+60h] BYREF

  v3 = *(_QWORD *)a2;
  if ( *(_DWORD *)(v3 + 304) )
  {
    RFONTOBJ::vInitEUDCRemote(this, a2);
    return;
  }
  v5 = *(_QWORD *)this;
  v6 = *(_QWORD *)(v5 + 120);
  v58 = v6;
  v56 = v6;
  if ( !*(_QWORD *)(v5 + 728) && *(_OWORD *)&gappfeSysEUDC != 0LL
    || (bFinallyInitializeFontAssocDefault || gbSystemDBCSFontEnabled) && !*(_QWORD *)(v5 + 736)
    || (v7 = *(_QWORD *)(v6 + 120)) != 0
    && (!*(_QWORD *)(v5 + 744) || *(_DWORD *)(v5 + 832) != 1 || *(_DWORD *)(v5 + 836) != *(_DWORD *)(v7 + 104)) )
  {
    v8 = *(_QWORD *)(v3 + 48);
    v9 = *(struct HLFONT__ **)(v3 + 1752);
    v57[0] = v8;
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v62, v9, (struct PDEVOBJ *)v57);
    v10 = *(HDC **)a2;
    v11 = *(_QWORD *)this;
    v61 = 0;
    v60 = v11;
    DCOBJ::DCOBJ((DCOBJ *)v66, *v10);
    IFIOBJR::IFIOBJR(
      (IFIOBJR *)&pData,
      *(const struct _IFIMETRICS **)(v6 + 32),
      (struct RFONTOBJ *)&v60,
      (struct DCOBJ *)v66);
    RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)&v63, a2);
    v12 = *(_QWORD *)this;
    v13 = v78;
    v14 = *(_QWORD *)(v6 + 120);
    v15 = 0LL;
    v52 = 0;
    v16 = *(_QWORD *)(v12 + 728);
    v17 = *(_QWORD *)(v12 + 736);
    v57[0] = v16;
    v54 = v17;
    if ( v14 )
    {
      v18 = v12;
      v52 = *(_DWORD *)(v12 + 832) == 0;
      if ( *(_QWORD *)(v12 + 744) && *(_DWORD *)(v12 + 836) != *(_DWORD *)(v14 + 104) )
      {
        v19 = 0LL;
        if ( *(_DWORD *)(v12 + 840) )
        {
          v20 = v12;
          do
          {
            v21 = *(_QWORD *)(*(_QWORD *)(v20 + 744) + 8 * v19);
            if ( v21 )
            {
              v51 = 0;
              v50 = v21;
              RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v50, 0LL);
              v22 = *(_QWORD *)this;
              v50 = 0LL;
              *(_QWORD *)(*(_QWORD *)(v22 + 744) + 8 * v19) = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
              v12 = *(_QWORD *)this;
            }
            v19 = (unsigned int)(v19 + 1);
            v20 = v12;
          }
          while ( (unsigned int)v19 < *(_DWORD *)(v12 + 840) );
        }
        if ( *(_QWORD *)(v12 + 744) != v12 + 752 )
        {
          Win32FreePool(*(_QWORD *)(v12 + 744));
          v12 = *(_QWORD *)this;
        }
        *(_QWORD *)(v12 + 744) = 0LL;
        v16 = v57[0];
        *(_DWORD *)(*(_QWORD *)this + 840LL) = 0;
        v18 = *(_QWORD *)this;
      }
      v12 = v18;
      if ( !*(_QWORD *)(v18 + 744) )
        v52 = 1;
    }
    *(_DWORD *)(v12 + 712) |= 0x200u;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 848LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)this + 504LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 504LL));
    }
    v23 = *(_DWORD *)(*(_QWORD *)this + 844LL) != 0;
    v53 = v23;
    if ( !v16 )
    {
      v24 = (&gappfeSysEUDC)[v23];
      if ( v24 )
      {
        v25 = v24[4];
        v51 = 0;
        v50 = 0LL;
        v57[0] = v25;
        if ( RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v57) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v50, a2, v26, (struct _EUDCLOGFONT *)&v63);
          if ( v50 )
            v16 = v50;
          v57[0] = v16;
        }
        else
        {
          v57[0] = 0LL;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
        v23 = v53;
      }
    }
    if ( bFinallyInitializeFontAssocDefault )
    {
      if ( v17 )
        goto LABEL_43;
      EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v23);
      if ( EUDCDefaultFontPFE )
      {
        v51 = 0;
        v50 = 0LL;
        v54 = *((_QWORD *)EUDCDefaultFontPFE + 4);
        if ( RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)&v54) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v50, a2, v28, (struct _EUDCLOGFONT *)&v63);
          if ( v50 )
            v17 = v50;
        }
        v54 = v17;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
        goto LABEL_43;
      }
    }
    v17 = 0LL;
    v54 = 0LL;
LABEL_43:
    if ( v52 )
    {
      v29 = *(_DWORD *)(*(_QWORD *)(v6 + 120) + 100LL);
      v13 = v29 <= 0xA ? v78 : PALLOCMEM2(8 * v29, 1718382187LL, 1);
      if ( v13 )
      {
        LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v56);
        Flink = LinkedFontList->Flink;
        if ( LinkedFontList->Flink != LinkedFontList )
        {
          v32 = v53;
          v33 = v64;
          v34 = v63;
          do
          {
            Blink = (int)Flink[1].Blink;
            pData = v34;
            v69 = v33;
            if ( Blink )
              pData.Reserved = (signed int)(Blink * v63.Reserved) / SHIDWORD(Flink[1].Blink);
            v65 = *(_QWORD *)(*((_QWORD *)&Flink[2].Flink + (*((_QWORD *)&Flink[2].Flink + v32) != 0LL ? v32 : 0)) + 32LL);
            if ( RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)&v65) )
            {
              v51 = 0;
              v50 = 0LL;
              RFONTOBJ::vInit((RFONTOBJ *)&v50, a2, v36, (struct _EUDCLOGFONT *)&pData);
              if ( v50 )
              {
                *(_QWORD *)&v13[8 * v15] = v50;
                v15 = (unsigned int)(v15 + 1);
              }
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
              v33 = v64;
              v34 = v63;
            }
            Flink = Flink->Flink;
          }
          while ( Flink != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v56) );
          v6 = v58;
          v17 = v54;
        }
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 0x8000) != 0 )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 504LL));
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 848LL));
    }
    v37 = *(_DWORD *)(*(_QWORD *)this + 712LL) & 0x200;
    *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x200u;
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v50, ghsemRFONTList);
    if ( !RFONTOBJ::bActive(this, v38)
      && v37
      && hProvider > 5u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v53 = 68651;
      v70 = &v53;
      v72 = &v58;
      v74 = &v56;
      v76 = &v54;
      v71 = 4LL;
      v58 = 0x1000000LL;
      v73 = 8LL;
      LODWORD(v56) = 2;
      v75 = 4LL;
      LODWORD(v54) = (_DWORD)v40;
      v77 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D707D, 0LL, v40, 6u, &pData);
    }
    v41 = RFONTOBJ::bActive(this, v39);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v50);
    if ( ((unsigned __int8)-(v37 != 0) & v41) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)this + 728LL) = v57[0];
      *(_QWORD *)(*(_QWORD *)this + 736LL) = v17;
      if ( v52 )
      {
        v42 = *(_QWORD *)this;
        if ( (_DWORD)v15 )
        {
          v43 = v13;
          if ( (unsigned int)v15 <= 0xA )
            v43 = (_BYTE *)(v42 + 752);
          *(_QWORD *)(v42 + 744) = v43;
          v44 = 0LL;
          v45 = (unsigned int)v15;
          do
          {
            *(_QWORD *)(v44 + *(_QWORD *)(*(_QWORD *)this + 744LL)) = *(_QWORD *)&v13[v44];
            v44 += 8LL;
            --v45;
          }
          while ( v45 );
        }
        else
        {
          *(_QWORD *)(v42 + 744) = 0LL;
        }
        *(_DWORD *)(*(_QWORD *)this + 840LL) = v15;
        v46 = *(_QWORD *)(v6 + 120);
        if ( v46 )
          v47 = *(_DWORD *)(v46 + 104);
        else
          v47 = 0;
        *(_DWORD *)(*(_QWORD *)this + 836LL) = v47;
        *(_DWORD *)(*(_QWORD *)this + 832LL) = 1;
      }
      if ( *(_BYTE **)(*(_QWORD *)this + 744LL) != v13 && v13 && v13 != v78 )
        Win32FreePool(v13);
      RFONTOBJ::UpdateFontLinksLockOrder(this);
    }
    else
    {
      v54 = v57[0];
      v55 = 0;
      RFONTOBJ::vMakeInactive((RFONTOBJ *)&v54);
      v59 = 0;
      v58 = v17;
      RFONTOBJ::vMakeInactive((RFONTOBJ *)&v58);
      if ( (_DWORD)v15 )
      {
        v48 = (__int64 *)v13;
        v49 = (unsigned int)v15;
        do
        {
          v50 = *v48;
          v51 = 0;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)&v50);
          v50 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
          ++v48;
          --v49;
        }
        while ( v49 );
      }
      if ( v13 != v78 )
        Win32FreePool(v13);
      v58 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v58);
      v54 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v54);
    }
    MDCOBJ::~MDCOBJ((MDCOBJ *)v66);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v67);
    v60 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v60);
    if ( v62 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v62);
  }
}
