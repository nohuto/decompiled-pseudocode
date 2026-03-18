/*
 * XREFs of ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C000321C
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00C3E78 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C028A810 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C028AB48 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C000359C (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023F04 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C00855CC (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0086DC0 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C010F070 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C014CED8 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void __fastcall RFONTOBJ::vInit(RFONTOBJ *this, struct XDCOBJ *a2, struct PFE *a3, struct _EUDCLOGFONT *a4)
{
  __int64 v5; // rdx
  int v7; // r14d
  __int64 v9; // rdi
  int v10; // eax
  struct HLFONT__ *v11; // rdx
  struct _POINTL v12; // rbx
  int v13; // r9d
  __int64 v14; // r13
  int v15; // r8d
  unsigned int v16; // esi
  int v17; // ecx
  int v18; // eax
  size_t v19; // rdi
  unsigned int v20; // eax
  PFEOBJ *v21; // rcx
  struct XDCOBJ *v22; // rdi
  FLOATL v23; // xmm2_4
  __int64 v24; // r13
  __int64 v25; // rcx
  int v26; // r15d
  __int64 v27; // rcx
  unsigned int v28; // r10d
  unsigned int v29; // [rsp+28h] [rbp-D8h]
  struct _POINTL v30; // [rsp+60h] [rbp-A0h] BYREF
  int v31; // [rsp+68h] [rbp-98h]
  struct PFE *v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  struct XDCOBJ *v34; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v35[2]; // [rsp+88h] [rbp-78h] BYREF
  int v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h] BYREF
  int v38; // [rsp+ACh] [rbp-54h]
  struct _FD_XFORM v39; // [rsp+B0h] [rbp-50h] BYREF
  struct tagENUMLOGFONTEXDVW v40; // [rsp+C0h] [rbp-40h] BYREF

  v34 = a2;
  v5 = *(_QWORD *)a2;
  v32 = a3;
  v7 = 1;
  v9 = *(_QWORD *)(v5 + 48);
  v10 = *(_DWORD *)(v5 + 248) & 1;
  v11 = *(struct HLFONT__ **)(v5 + 1752);
  v31 = v10;
  v33 = v9;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v30, v11, (struct PDEVOBJ *)&v33);
  v12 = v30;
  v13 = 0;
  if ( !*(_QWORD *)&v30 )
  {
    *(_QWORD *)this = 0LL;
    return;
  }
  v14 = *((_QWORD *)a3 + 4);
  v15 = *((_DWORD *)a4 + 1);
  v16 = 0;
  v35[0] = v14;
  if ( ((v15 & 0x4000) != 0 || (*(_DWORD *)a4 & 1) != 0)
    && (*(_BYTE *)(v14 + 52) & 1) == 0
    && *(_BYTE *)(*(_QWORD *)&v30 + 296LL)
    && (unsigned int)IFIOBJ::bSimItalic((IFIOBJ *)v35) )
  {
    v16 = v28;
  }
  if ( ((*(_DWORD *)(v9 + 40) & 1) != 0 || *((_DWORD *)a4 + 6) != v13)
    && ((v15 & 0x2000) != 0 || (*(_BYTE *)a4 & 0x20) != 0) )
  {
    v17 = 400;
    if ( *(_DWORD *)(*(_QWORD *)&v12 + 292LL) )
      v17 = *(_DWORD *)(*(_QWORD *)&v12 + 292LL);
    v16 |= ((*(unsigned __int16 *)(v14 + 46) - v17) >> 31) & 0x2000;
  }
  v18 = *(_DWORD *)(v14 + 48);
  if ( (v18 & 1) != 0 && *(_DWORD *)(*(_QWORD *)&v12 + 276LL) <= v13 )
    v16 |= 0x8000u;
  if ( (v15 & 0x10000) != 0 && (v18 & 0x40) != 0 )
    v16 |= v15 & 0x10010000;
  v19 = 420LL;
  memset(&v40, 0, sizeof(v40));
  v20 = *(_DWORD *)(*(_QWORD *)&v12 + 272LL);
  if ( v20 < 0x1A4 )
    v19 = v20;
  memmove(&v40, (const void *)(*(_QWORD *)&v12 + 276LL), v19);
  v40.elfEnumLogfontEx.elfLogFont.lfHeight = *((_DWORD *)a4 + 3);
  v40.elfEnumLogfontEx.elfLogFont.lfWidth = *((_DWORD *)a4 + 2);
  v40.elfEnumLogfontEx.elfLogFont.lfOrientation = *((_DWORD *)a4 + 5);
  v40.elfEnumLogfontEx.elfLogFont.lfEscapement = *((_DWORD *)a4 + 4);
  if ( (*(_DWORD *)(v14 + 48) & 0x3000010) != 0 )
  {
    v22 = v34;
    v30.x = 1;
    v30.y = 1;
    if ( PFEOBJ::bSetFontXform(v21, v34, &v40.elfEnumLogfontEx.elfLogFont, &v39, 0, v29, &v30, (struct IFIOBJ *)v35, 1) )
    {
      v23 = v39.eXY * *((float *)a4 + 7);
      v39.eXX = v39.eXX * *((float *)a4 + 7);
      v34 = (struct XDCOBJ *)ghsemPublicPFT;
      v39.eXY = v23;
      ((void (*)(void))GreAcquireSemaphore)();
      v36 = 0;
      v24 = *(_QWORD *)v32;
      v35[0] = v24;
      ++*(_DWORD *)(v24 + 68);
      SEMOBJ::vUnlock((SEMOBJ *)&v34);
      v25 = *(_QWORD *)v22;
      v38 = 0;
      v26 = v31;
      v37 = v25 + 320;
      if ( (unsigned int)RFONTOBJ::bFindRFONT(
                           this,
                           &v39,
                           v16,
                           0,
                           (struct PDEVOBJ *)&v33,
                           (struct EXFORMOBJ *)&v37,
                           v32,
                           v31,
                           *(_DWORD *)(*(_QWORD *)(v25 + 976) + 208LL),
                           0,
                           2u) )
      {
        GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 504LL));
        *(_DWORD *)(*(_QWORD *)v22 + 252LL) &= ~1u;
      }
      else
      {
        if ( (unsigned int)RFONTOBJ::bRealizeFont(
                             this,
                             v22,
                             (struct PDEVOBJ *)&v33,
                             &v40,
                             v32,
                             &v39,
                             &v30,
                             v16,
                             0,
                             v26,
                             0,
                             2u) )
        {
          v27 = *(_QWORD *)this;
          v36 = 1;
          GreAcquireSemaphore(*(_QWORD *)(v27 + 504));
          *(_DWORD *)(*(_QWORD *)v22 + 252LL) &= ~1u;
          goto LABEL_22;
        }
        *(_QWORD *)this = 0LL;
      }
      v7 = 0;
LABEL_22:
      if ( v24 && !v7 )
        PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v35);
      goto LABEL_25;
    }
  }
  *(_QWORD *)this = 0LL;
LABEL_25:
  if ( v12 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)&v12);
}
