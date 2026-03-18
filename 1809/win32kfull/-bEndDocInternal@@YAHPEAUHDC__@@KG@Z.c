/*
 * XREFs of ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C015F82C
 * Callers:
 *     NtGdiStartPage @ 0x1C00E3160 (NtGdiStartPage.c)
 *     NtGdiEndDoc @ 0x1C0137380 (NtGdiEndDoc.c)
 *     NtGdiAbortDoc @ 0x1C0260940 (NtGdiAbortDoc.c)
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C004CA70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vInit@RESTORESAVEDCATTRS@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C00E3128 (-vInit@RESTORESAVEDCATTRS@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C00E3370 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00E340C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?UMPDServer@@YAHPEAVSURFACE@@@Z @ 0x1C0134EB8 (-UMPDServer@@YAHPEAVSURFACE@@@Z.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C0136D70 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C026014C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?bIsProcessLocalSystem@@YAHXZ @ 0x1C026C9C8 (-bIsProcessLocalSystem@@YAHXZ.c)
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
  __int64 v16; // r8
  int v17; // r14d
  __int64 v18; // rsi
  __int64 v19; // rdx
  DC *v20; // rax
  SURFACE *v21; // rcx
  int v22; // edx
  XDCOBJ *v24; // [rsp+28h] [rbp-29h] BYREF
  DC *v25[6]; // [rsp+30h] [rbp-21h] BYREF
  _QWORD v26[7]; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v27; // [rsp+D0h] [rbp+7Fh] BYREF

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
  v27 = v10;
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
      v10 = v27;
    }
    if ( gUMPDSecurityLevel == 2
      || gUMPDSecurityLevel && (v13 = (unsigned int)bIsProcessLocalSystem() == 0, v10 = v27, !v13)
      || *(_QWORD *)(v10 + 2960) )
    {
      v14 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v10 + 2960))(
              ((unsigned __int64)v12 + 24) & -(__int64)(v12 != 0LL),
              a2);
    }
    else
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:bEndDocInternal:!(PPFNVALID(po,EndDoc))\n", 2107);
      v14 = 0;
    }
    RESTORESAVEDCATTRS::vDone(&v24);
    v15 = *(_DWORD *)(v27 + 40) & 0x8000;
    *((_WORD *)v25[0] + 1048) = -1;
    UMPDServer(v12);
    DC::pSurface(v25[0], 0LL);
    v17 = 0;
    *((_DWORD *)v25[0] + 79) |= 0xFu;
    v18 = *((_QWORD *)v25[0] + 14);
    if ( *((_DWORD *)v25[0] + 26) - 1 > 0 )
    {
      while ( 1 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v26);
        LOBYTE(v19) = 1;
        v20 = (DC *)HmgLockAllOwners(v18, v19);
        v26[0] = v20;
        if ( !v20 || (v21 = (SURFACE *)*((_QWORD *)v20 + 62)) == 0LL )
        {
          DCOBJ::~DCOBJ((DCOBJ *)v26);
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
        *(_DWORD *)(v26[0] + 316LL) |= 0xFu;
        v18 = *(_QWORD *)(v26[0] + 112LL);
        DCOBJ::~DCOBJ((DCOBJ *)v26);
        if ( ++v17 >= *((_DWORD *)v25[0] + 26) - 1 )
          goto LABEL_33;
      }
      DEC_SHARE_REF_CNT(v21);
LABEL_29:
      v20 = (DC *)v26[0];
      goto LABEL_30;
    }
LABEL_33:
    LOBYTE(v16) = 1;
    PDEVOBJ::vDisableSurface(&v27, 0LL, v16);
    *((_DWORD *)v25[0] + 9) &= ~0x200000u;
    if ( !v15 || !v14 )
      v9 = 0;
    RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(&v24);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v25);
  return v9;
}
