/*
 * XREFs of ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C013E618
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C0090FA8 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C009B008 (GreGetGlyphOutlineInternal.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0092BB0 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x1C0093CC8 (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C009E040 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C00B8770 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C013E408 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C013EDEC (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C013F6C8 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z @ 0x1C013F79C (-bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C013F814 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?bActive@RFONTOBJ@@QEBAHXZ @ 0x1C026F990 (-bActive@RFONTOBJ@@QEBAHXZ.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A05A4 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C02A16B8 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
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
  __int64 v11; // rcx
  _BYTE *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r14
  struct RFONT *v15; // r15
  struct RFONT *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  BOOL v22; // ecx
  struct PFE * near *v23; // r10
  struct PFE *v24; // rax
  struct PFE *v25; // r10
  struct PFE *EUDCDefaultFontPFE; // rax
  __int64 v27; // rcx
  struct PFE *v28; // r11
  unsigned int v29; // ecx
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *Flink; // r15
  __int64 v32; // rbx
  __int128 v33; // xmm0
  EVENT_DATA_DESCRIPTOR v34; // xmm1
  int Blink; // ecx
  struct PFE *v36; // r10
  int v37; // r15d
  __int64 v38; // rax
  _BYTE *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  int v43; // ecx
  _QWORD *v44; // rbx
  __int64 v45; // rdi
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  struct RFONT *v47; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v48[2]; // [rsp+38h] [rbp-C8h] BYREF
  BOOL v49; // [rsp+48h] [rbp-B8h]
  unsigned int v50; // [rsp+4Ch] [rbp-B4h] BYREF
  _QWORD v51[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v53; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v54[2]; // [rsp+70h] [rbp-90h] BYREF
  struct LFONT *v55; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v56[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v57[3]; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v59; // [rsp+D0h] [rbp-30h]
  unsigned int *v60; // [rsp+E0h] [rbp-20h]
  __int64 v61; // [rsp+E8h] [rbp-18h]
  __int64 *v62; // [rsp+F0h] [rbp-10h]
  __int64 v63; // [rsp+F8h] [rbp-8h]
  struct RFONT **v64; // [rsp+100h] [rbp+0h]
  __int64 v65; // [rsp+108h] [rbp+8h]
  _QWORD *v66; // [rsp+110h] [rbp+10h]
  __int64 v67; // [rsp+118h] [rbp+18h]
  _BYTE v68[80]; // [rsp+120h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a2;
  if ( *(_DWORD *)(v3 + 304) )
  {
    RFONTOBJ::vInitEUDCRemote(this, a2);
    return;
  }
  v5 = *(_QWORD *)this;
  v6 = *(_QWORD *)(v5 + 120);
  v52 = v6;
  v53 = v6;
  if ( !*(_QWORD *)(v5 + 728) && *(_OWORD *)&gappfeSysEUDC != 0LL
    || (bFinallyInitializeFontAssocDefault || gbSystemDBCSFontEnabled) && !*(_QWORD *)(v5 + 736)
    || (v7 = *(_QWORD *)(v6 + 120)) != 0
    && (!*(_QWORD *)(v5 + 744) || *(_DWORD *)(v5 + 832) != 1 || *(_DWORD *)(v5 + 836) != *(_DWORD *)(v7 + 104)) )
  {
    v8 = *(_QWORD *)(v3 + 48);
    v9 = *(struct HLFONT__ **)(v3 + 1728);
    v48[0] = v8;
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v55, v9, (struct PDEVOBJ *)v48);
    v10 = *(HDC **)a2;
    v48[0] = *(_QWORD *)this;
    DCOBJ::DCOBJ((DCOBJ *)v56, *v10);
    IFIOBJR::IFIOBJR(
      (IFIOBJR *)&pData,
      *(const struct _IFIMETRICS **)(v6 + 32),
      (struct RFONTOBJ *)v48,
      (struct DCOBJ *)v56);
    memset(v54, 0, sizeof(v54));
    RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)v54, a2);
    v11 = *(_QWORD *)this;
    v12 = v68;
    v13 = *(_QWORD *)(v6 + 120);
    v14 = 0LL;
    v49 = 0;
    v15 = *(struct RFONT **)(v11 + 728);
    v16 = *(struct RFONT **)(v11 + 736);
    v48[0] = v15;
    v51[0] = v16;
    if ( v13 )
    {
      v17 = v11;
      v49 = *(_DWORD *)(v11 + 832) == 0;
      if ( *(_QWORD *)(v11 + 744) && *(_DWORD *)(v11 + 836) != *(_DWORD *)(v13 + 104) )
      {
        v18 = 0LL;
        if ( *(_DWORD *)(v11 + 840) )
        {
          v19 = v11;
          do
          {
            v20 = *(_QWORD *)(v19 + 744);
            if ( *(_QWORD *)(v20 + 8 * v18) )
            {
              v47 = *(struct RFONT **)(v20 + 8 * v18);
              RFONTOBJ::bMakeInactiveHelper(&v47, 0LL);
              v21 = *(_QWORD *)this;
              v47 = 0LL;
              *(_QWORD *)(*(_QWORD *)(v21 + 744) + 8 * v18) = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v47);
              v11 = *(_QWORD *)this;
            }
            v18 = (unsigned int)(v18 + 1);
            v19 = v11;
          }
          while ( (unsigned int)v18 < *(_DWORD *)(v11 + 840) );
        }
        if ( *(_QWORD *)(v11 + 744) != v11 + 752 )
        {
          Win32FreePool(*(_QWORD *)(v11 + 744));
          v11 = *(_QWORD *)this;
        }
        *(_QWORD *)(v11 + 744) = 0LL;
        v15 = (struct RFONT *)v48[0];
        *(_DWORD *)(*(_QWORD *)this + 840LL) = 0;
        v17 = *(_QWORD *)this;
      }
      v11 = v17;
      if ( !*(_QWORD *)(v17 + 744) )
        v49 = 1;
    }
    *(_DWORD *)(v11 + 712) |= 0x200u;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 848LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)this + 504LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 504LL));
    }
    v22 = *(_DWORD *)(*(_QWORD *)this + 844LL) != 0;
    v50 = v22;
    if ( !v15 )
    {
      v23 = (&gappfeSysEUDC)[v22];
      if ( v23 )
      {
        v24 = v23[4];
        v47 = 0LL;
        v48[0] = v24;
        if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v48) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v47, a2, v25, (struct _EUDCLOGFONT *)v54, cData);
          if ( v47 )
            v15 = v47;
          v48[0] = v15;
        }
        else
        {
          v48[0] = 0LL;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v47);
        v22 = v50;
      }
    }
    if ( bFinallyInitializeFontAssocDefault )
    {
      if ( v16 )
        goto LABEL_43;
      EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v22);
      if ( EUDCDefaultFontPFE )
      {
        v27 = *((_QWORD *)EUDCDefaultFontPFE + 4);
        v47 = 0LL;
        v51[0] = v27;
        if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v51) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v47, a2, v28, (struct _EUDCLOGFONT *)v54, cData);
          if ( v47 )
            v16 = v47;
        }
        v51[0] = v16;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v47);
        goto LABEL_43;
      }
    }
    v16 = 0LL;
    v51[0] = 0LL;
LABEL_43:
    if ( v49 )
    {
      v29 = *(_DWORD *)(*(_QWORD *)(v6 + 120) + 100LL);
      v12 = v29 <= 0xA ? v68 : PALLOCMEM2(8 * v29, 1718382187LL, 1);
      if ( v12 )
      {
        LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v53);
        Flink = LinkedFontList->Flink;
        if ( LinkedFontList->Flink != LinkedFontList )
        {
          v32 = v50;
          v33 = v54[1];
          v34 = (EVENT_DATA_DESCRIPTOR)v54[0];
          do
          {
            Blink = (int)Flink[1].Blink;
            pData = v34;
            v59 = v33;
            if ( Blink )
              pData.Reserved = Blink * HIDWORD(v54[0]) / SHIDWORD(Flink[1].Blink);
            v57[0] = *(_QWORD *)(*((_QWORD *)&Flink[2].Flink + (*((_QWORD *)&Flink[2].Flink + v32) != 0LL ? v32 : 0))
                               + 32LL);
            if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v57) )
            {
              v47 = 0LL;
              RFONTOBJ::vInit((RFONTOBJ *)&v47, a2, v36, (struct _EUDCLOGFONT *)&pData, cData);
              if ( v47 )
              {
                *(_QWORD *)&v12[8 * v14] = v47;
                v14 = (unsigned int)(v14 + 1);
              }
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v47);
              v33 = v54[1];
              v34 = (EVENT_DATA_DESCRIPTOR)v54[0];
            }
            Flink = Flink->Flink;
          }
          while ( Flink != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v53) );
          v6 = v52;
          v16 = (struct RFONT *)v51[0];
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
    if ( !(unsigned int)RFONTOBJ::bActive(this)
      && v37
      && hProvider > 5u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v50 = 68651;
      v60 = &v50;
      v62 = &v52;
      v64 = &v47;
      v66 = v51;
      v61 = 4LL;
      v52 = 0x1000000LL;
      v63 = 8LL;
      LODWORD(v47) = 2;
      v65 = 4LL;
      LODWORD(v51[0]) = 0;
      v67 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E93E3, 0LL, 0LL, 6u, &pData);
    }
    if ( ((unsigned __int8)-(v37 != 0) & ((unsigned int)RFONTOBJ::bActive(this) != 0)) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)this + 728LL) = v48[0];
      *(_QWORD *)(*(_QWORD *)this + 736LL) = v16;
      if ( v49 )
      {
        v38 = *(_QWORD *)this;
        if ( (_DWORD)v14 )
        {
          v39 = v12;
          if ( (unsigned int)v14 <= 0xA )
            v39 = (_BYTE *)(v38 + 752);
          *(_QWORD *)(v38 + 744) = v39;
          v40 = 0LL;
          v41 = (unsigned int)v14;
          do
          {
            *(_QWORD *)(v40 + *(_QWORD *)(*(_QWORD *)this + 744LL)) = *(_QWORD *)&v12[v40];
            v40 += 8LL;
            --v41;
          }
          while ( v41 );
        }
        else
        {
          *(_QWORD *)(v38 + 744) = 0LL;
        }
        *(_DWORD *)(*(_QWORD *)this + 840LL) = v14;
        v42 = *(_QWORD *)(v6 + 120);
        if ( v42 )
          v43 = *(_DWORD *)(v42 + 104);
        else
          v43 = 0;
        *(_DWORD *)(*(_QWORD *)this + 836LL) = v43;
        *(_DWORD *)(*(_QWORD *)this + 832LL) = 1;
      }
      if ( *(_BYTE **)(*(_QWORD *)this + 744LL) != v12 && v12 && v12 != v68 )
        Win32FreePool(v12);
      RFONTOBJ::UpdateFontLinksLockOrder(this);
    }
    else
    {
      RFONTOBJ::vMakeInactive((RFONTOBJ *)v48);
      v48[0] = v16;
      RFONTOBJ::vMakeInactive((RFONTOBJ *)v48);
      if ( (_DWORD)v14 )
      {
        v44 = v12;
        v45 = (unsigned int)v14;
        do
        {
          v48[0] = *v44;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)v48);
          v48[0] = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v48);
          ++v44;
          --v45;
        }
        while ( v45 );
      }
      if ( v12 != v68 )
        Win32FreePool(v12);
      v48[0] = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v48);
      v48[0] = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v48);
    }
    if ( v56[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v56);
    v48[0] = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v48);
    if ( v55 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v55);
  }
}
