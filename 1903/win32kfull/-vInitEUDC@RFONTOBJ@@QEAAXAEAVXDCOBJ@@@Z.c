/*
 * XREFs of ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0104A14
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C004D128 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00517A8 (GreGetGlyphOutlineInternal.c)
 * Callees:
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x1C004BD78 (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C004ED30 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C004EEA0 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00547E0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C006E370 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0104EE8 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z @ 0x1C010569C (-bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C0105714 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0105858 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A0B54 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C02A1B98 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vInitEUDC(RFONTOBJ *this, struct XDCOBJ *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  struct PFE *v8; // rax
  struct HLFONT__ *v9; // rdx
  HDC *v10; // rdx
  __int64 v11; // rcx
  _BYTE *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r14
  struct PFE *v15; // r12
  struct PFE *v16; // r15
  __int64 v17; // rdx
  int v18; // ecx
  struct PFE * near *v19; // r10
  BOOL v20; // r12d
  unsigned int v21; // ecx
  struct _LIST_ENTRY *LinkedFontList; // rax
  __int64 v23; // rbx
  struct _LIST_ENTRY *i; // r12
  int Blink; // ecx
  struct PFE *v26; // r10
  __int64 v27; // rax
  _BYTE *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rax
  int v32; // ecx
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  struct PFE *v37; // rax
  struct PFE *v38; // r10
  struct PFE *EUDCDefaultFontPFE; // rax
  __int64 v40; // rcx
  struct PFE *v41; // r11
  struct PFE **v42; // rbx
  __int64 v43; // rdi
  int v44; // [rsp+20h] [rbp-E0h]
  struct PFE *v45; // [rsp+30h] [rbp-D0h] BYREF
  BOOL v46; // [rsp+38h] [rbp-C8h]
  struct RFONT *v47; // [rsp+40h] [rbp-C0h] BYREF
  struct PFE *v48; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A0h]
  struct LFONT *v51; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v52[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v53[2]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v54[2]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v55[4]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v56[80]; // [rsp+F0h] [rbp-10h] BYREF

  v3 = *(_QWORD *)a2;
  if ( *(_DWORD *)(v3 + 304) )
  {
    RFONTOBJ::vInitEUDCRemote(this, a2);
    return;
  }
  v5 = *(_QWORD *)this;
  v6 = *(_QWORD *)(v5 + 120);
  v50 = v6;
  v49 = v6;
  if ( !*(_QWORD *)(v5 + 728) && *(_OWORD *)&gappfeSysEUDC != 0LL
    || (bFinallyInitializeFontAssocDefault || gbSystemDBCSFontEnabled) && !*(_QWORD *)(v5 + 736)
    || (v7 = *(_QWORD *)(v6 + 120)) != 0
    && (!*(_QWORD *)(v5 + 744) || *(_DWORD *)(v5 + 832) != 1 || *(_DWORD *)(v5 + 836) != *(_DWORD *)(v7 + 104)) )
  {
    v8 = *(struct PFE **)(v3 + 48);
    v9 = *(struct HLFONT__ **)(v3 + 1728);
    v45 = v8;
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v51, v9, (struct PDEVOBJ *)&v45);
    v10 = *(HDC **)a2;
    v45 = *(struct PFE **)this;
    DCOBJ::DCOBJ((DCOBJ *)v52, *v10);
    IFIOBJR::IFIOBJR(
      (IFIOBJR *)v55,
      *(const struct _IFIMETRICS **)(v6 + 32),
      (struct RFONTOBJ *)&v45,
      (struct DCOBJ *)v52);
    memset(v54, 0, sizeof(v54));
    RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)v54, a2);
    v11 = *(_QWORD *)this;
    v12 = v56;
    v13 = *(_QWORD *)(v6 + 120);
    v14 = 0LL;
    v46 = 0;
    v15 = *(struct PFE **)(v11 + 728);
    v16 = *(struct PFE **)(v11 + 736);
    v48 = v15;
    if ( v13 )
    {
      v17 = v11;
      v46 = *(_DWORD *)(v11 + 832) == 0;
      if ( *(_QWORD *)(v11 + 744) && *(_DWORD *)(v11 + 836) != *(_DWORD *)(v13 + 104) )
      {
        v33 = 0LL;
        if ( *(_DWORD *)(v11 + 840) )
        {
          v34 = v11;
          do
          {
            v35 = *(_QWORD *)(v34 + 744);
            if ( *(_QWORD *)(v35 + 8 * v33) )
            {
              v47 = *(struct RFONT **)(v35 + 8 * v33);
              RFONTOBJ::bMakeInactiveHelper(&v47, 0LL);
              v36 = *(_QWORD *)this;
              v47 = 0LL;
              *(_QWORD *)(*(_QWORD *)(v36 + 744) + 8 * v33) = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v47);
              v11 = *(_QWORD *)this;
            }
            v33 = (unsigned int)(v33 + 1);
            v34 = v11;
          }
          while ( (unsigned int)v33 < *(_DWORD *)(v11 + 840) );
        }
        if ( *(_QWORD *)(v11 + 744) != v11 + 752 )
        {
          Win32FreePool(*(_QWORD *)(v11 + 744));
          v11 = *(_QWORD *)this;
        }
        *(_QWORD *)(v11 + 744) = 0LL;
        v15 = v48;
        *(_DWORD *)(*(_QWORD *)this + 840LL) = 0;
        v17 = *(_QWORD *)this;
      }
      v11 = v17;
      if ( !*(_QWORD *)(v17 + 744) )
        v46 = 1;
    }
    *(_DWORD *)(v11 + 712) |= 0x200u;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 848LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)this + 504LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 504LL));
    }
    v18 = *(_DWORD *)(*(_QWORD *)this + 844LL) != 0;
    LODWORD(v47) = v18;
    if ( !v15 )
    {
      v19 = (&gappfeSysEUDC)[v18];
      if ( v19 )
      {
        v37 = v19[4];
        v45 = 0LL;
        v48 = v37;
        if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)&v48) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v45, a2, v38, (struct _EUDCLOGFONT *)v54, v44);
          if ( v45 )
            v15 = v45;
          v48 = v15;
        }
        else
        {
          v48 = 0LL;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
        v18 = (int)v47;
      }
    }
    if ( bFinallyInitializeFontAssocDefault )
    {
      if ( v16 )
      {
LABEL_18:
        v20 = v46;
        if ( v46 )
        {
          v21 = *(_DWORD *)(*(_QWORD *)(v6 + 120) + 100LL);
          v12 = v21 > 0xA ? PALLOCMEM2(8 * v21, 1718382187LL, 1) : v56;
          if ( v12 )
          {
            LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v49);
            v23 = (unsigned int)v47;
            for ( i = LinkedFontList->Flink; i != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v49); i = i->Flink )
            {
              Blink = (int)i[1].Blink;
              v55[0] = v54[0];
              v55[1] = v54[1];
              if ( Blink )
                HIDWORD(v55[0]) = Blink * HIDWORD(v54[0]) / SHIDWORD(i[1].Blink);
              v53[0] = *(_QWORD *)(*((_QWORD *)&i[2].Flink + (*((_QWORD *)&i[2].Flink + v23) != 0LL ? v23 : 0)) + 32LL);
              if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v53) )
              {
                v45 = 0LL;
                RFONTOBJ::vInit((RFONTOBJ *)&v45, a2, v26, (struct _EUDCLOGFONT *)v55, v44);
                if ( v45 )
                {
                  *(_QWORD *)&v12[8 * v14] = v45;
                  v14 = (unsigned int)(v14 + 1);
                }
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
              }
            }
            v6 = v50;
            v20 = v46;
          }
        }
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 0x8000) != 0 )
        {
          GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 504LL));
          GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 848LL));
        }
        if ( (*(_DWORD *)(*(_QWORD *)this + 712LL) & 0x200) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)this + 728LL) = v48;
          *(_QWORD *)(*(_QWORD *)this + 736LL) = v16;
          if ( v20 )
          {
            v27 = *(_QWORD *)this;
            if ( (_DWORD)v14 )
            {
              v28 = v12;
              if ( (unsigned int)v14 <= 0xA )
                v28 = (_BYTE *)(v27 + 752);
              *(_QWORD *)(v27 + 744) = v28;
              v29 = 0LL;
              v30 = (unsigned int)v14;
              do
              {
                *(_QWORD *)(v29 + *(_QWORD *)(*(_QWORD *)this + 744LL)) = *(_QWORD *)&v12[v29];
                v29 += 8LL;
                --v30;
              }
              while ( v30 );
            }
            else
            {
              *(_QWORD *)(v27 + 744) = 0LL;
            }
            *(_DWORD *)(*(_QWORD *)this + 840LL) = v14;
            v31 = *(_QWORD *)(v6 + 120);
            if ( v31 )
              v32 = *(_DWORD *)(v31 + 104);
            else
              v32 = 0;
            *(_DWORD *)(*(_QWORD *)this + 836LL) = v32;
            *(_DWORD *)(*(_QWORD *)this + 832LL) = 1;
          }
          if ( *(_BYTE **)(*(_QWORD *)this + 744LL) != v12 && v12 && v12 != v56 )
            Win32FreePool(v12);
          RFONTOBJ::UpdateFontLinksLockOrder(this);
          *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x200u;
        }
        else
        {
          v45 = v48;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)&v45);
          v45 = v16;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)&v45);
          if ( (_DWORD)v14 )
          {
            v42 = (struct PFE **)v12;
            v43 = (unsigned int)v14;
            do
            {
              v45 = *v42;
              RFONTOBJ::vMakeInactive((RFONTOBJ *)&v45);
              v45 = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
              ++v42;
              --v43;
            }
            while ( v43 );
          }
          if ( v12 != v56 )
            Win32FreePool(v12);
          v45 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
          v45 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
        }
        if ( v52[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v52);
        v45 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
        if ( v51 )
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v51);
        return;
      }
      EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v18);
      if ( EUDCDefaultFontPFE )
      {
        v40 = *((_QWORD *)EUDCDefaultFontPFE + 4);
        v45 = 0LL;
        v53[0] = v40;
        if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v53) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v45, a2, v41, (struct _EUDCLOGFONT *)v54, v44);
          if ( v45 )
            v16 = v45;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
        goto LABEL_18;
      }
    }
    v16 = 0LL;
    goto LABEL_18;
  }
}
