/*
 * XREFs of ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0164C44
 * Callers:
 *     NtGdiStartPage @ 0x1C010FB70 (NtGdiStartPage.c)
 *     NtGdiEndDoc @ 0x1C0141AA0 (NtGdiEndDoc.c)
 *     NtGdiAbortDoc @ 0x1C0279FE0 (NtGdiAbortDoc.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0072B7C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0079AE0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vInit@RESTORESAVEDCATTRS@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C010FB30 (-vInit@RESTORESAVEDCATTRS@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C010FCC0 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C010FD5C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?UMPDServer@@YAHPEAVSURFACE@@@Z @ 0x1C013F154 (-UMPDServer@@YAHPEAVSURFACE@@@Z.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C0141480 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C02797DC (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?bIsProcessLocalSystem@@YAHXZ @ 0x1C0285778 (-bIsProcessLocalSystem@@YAHXZ.c)
 */

__int64 __fastcall bEndDocInternal(HDC a1, unsigned int a2, __int16 a3)
{
  int v6; // eax
  DC *v7; // r9
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // edx
  struct SURFACE *v12; // rsi
  bool v13; // zf
  int v14; // edi
  int v15; // r15d
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // r14d
  __int64 v19; // rsi
  DC *v20; // rax
  SURFACE *v21; // rcx
  int v22; // edx
  XDCOBJ *v24; // [rsp+20h] [rbp-30h] BYREF
  DC *v25[2]; // [rsp+28h] [rbp-28h] BYREF
  DC *v26; // [rsp+38h] [rbp-18h] BYREF
  int v27; // [rsp+40h] [rbp-10h]
  int v28; // [rsp+44h] [rbp-Ch]
  __int64 v29; // [rsp+88h] [rbp+38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v25, a1);
  if ( !v25[0] )
    goto LABEL_37;
  v6 = *((_DWORD *)v25[0] + 9);
  if ( (v6 & 0x800) != 0
    || (v6 & 0x200000) != 0
    || *((_WORD *)v25[0] + 6) != a3
    || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v25)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    goto LABEL_37;
  }
  v8 = *((unsigned int *)v7 + 27);
  if ( *((_DWORD *)v7 + 26) > (int)v8 )
  {
    GreRestoreDC(a1, v8);
    v7 = v25[0];
  }
  *((_DWORD *)v7 + 9) |= 0x200000u;
  v9 = 1;
  v10 = *((_QWORD *)v25[0] + 6);
  v29 = v10;
  v11 = *(_DWORD *)(v10 + 40);
  if ( (v11 & 1) != 0 || !*(_QWORD *)(v10 + 2560) )
  {
LABEL_37:
    EngSetLastError(0x3EBu);
    v9 = 0;
  }
  else
  {
    v24 = 0LL;
    v12 = (struct SURFACE *)*((_QWORD *)v25[0] + 62);
    if ( (v11 & 0x8000) != 0 )
    {
      RESTORESAVEDCATTRS::vInit((RESTORESAVEDCATTRS *)&v24, (struct XDCOBJ *)v25);
      v10 = v29;
    }
    if ( gUMPDSecurityLevel == 2
      || gUMPDSecurityLevel && (v13 = (unsigned int)bIsProcessLocalSystem() == 0, v10 = v29, !v13)
      || *(_QWORD *)(v10 + 2960) )
    {
      v14 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v10 + 2960))(
              ((unsigned __int64)v12 + 24) & -(__int64)(v12 != 0LL),
              a2);
    }
    else
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:bEndDocInternal:!(PPFNVALID(po,EndDoc))\n", 2088);
      v14 = 0;
    }
    RESTORESAVEDCATTRS::vDone(&v24);
    v15 = *(_DWORD *)(v29 + 40) & 0x8000;
    *((_WORD *)v25[0] + 1036) = -1;
    UMPDServer(v12);
    DC::pSurface(v25[0], 0LL);
    v18 = 0;
    *((_DWORD *)v25[0] + 79) |= 0xFu;
    v19 = *((_QWORD *)v25[0] + 14);
    if ( *((_DWORD *)v25[0] + 26) - 1 > 0 )
    {
      while ( 1 )
      {
        v27 = 0;
        LOBYTE(v16) = 1;
        v28 = 0;
        v26 = 0LL;
        v20 = (DC *)HmgLockAllOwners(v19, v16);
        v26 = v20;
        if ( !v20 || (v21 = (SURFACE *)*((_QWORD *)v20 + 62)) == 0LL )
        {
          DCOBJ::~DCOBJ((DCOBJ *)&v26);
          goto LABEL_33;
        }
        v22 = *((_DWORD *)v21 + 28);
        if ( (v22 & 0x800) != 0 )
          break;
        if ( v22 >= 0 )
        {
          SURFACE::vDec_cRef(v21);
          goto LABEL_29;
        }
LABEL_30:
        DC::pSurface(v20, 0LL);
        *((_DWORD *)v26 + 79) |= 0xFu;
        v19 = *((_QWORD *)v26 + 14);
        DCOBJ::~DCOBJ((DCOBJ *)&v26);
        if ( ++v18 >= *((_DWORD *)v25[0] + 26) - 1 )
          goto LABEL_33;
      }
      DEC_SHARE_REF_CNT(v21);
LABEL_29:
      v20 = v26;
      goto LABEL_30;
    }
LABEL_33:
    LOBYTE(v17) = 1;
    PDEVOBJ::vDisableSurface(&v29, 0LL, v17);
    *((_DWORD *)v25[0] + 9) &= ~0x200000u;
    if ( !v15 || !v14 )
      v9 = 0;
    RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(&v24);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v25);
  return v9;
}
