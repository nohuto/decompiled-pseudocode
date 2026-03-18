/*
 * XREFs of ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C013EDEC
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C013E618 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C02A0380 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A05A4 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C009674C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0097464 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C013F184 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C013F4B8 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C013F6C8 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C01567C8 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
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
  bool v22; // zf
  struct XDCOBJ *v23; // rdi
  FLOATL v24; // xmm2_4
  __int64 v25; // r13
  __int64 v26; // rcx
  int v27; // r15d
  __int64 v28; // rcx
  unsigned int v29; // r10d
  unsigned int v30; // [rsp+28h] [rbp-D8h]
  struct _POINTL v31; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+68h] [rbp-98h]
  struct PFE *v33; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+78h] [rbp-88h] BYREF
  struct XDCOBJ *v35; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v36[2]; // [rsp+88h] [rbp-78h] BYREF
  int v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A0h] [rbp-60h] BYREF
  int v39; // [rsp+ACh] [rbp-54h]
  _FD_XFORM v40; // [rsp+B0h] [rbp-50h] BYREF
  struct tagENUMLOGFONTEXDVW v41; // [rsp+C0h] [rbp-40h] BYREF

  v35 = a2;
  v5 = *(_QWORD *)a2;
  v33 = a3;
  v7 = 1;
  v9 = *(_QWORD *)(v5 + 48);
  v10 = *(_DWORD *)(v5 + 248) & 1;
  v11 = *(struct HLFONT__ **)(v5 + 1728);
  v32 = v10;
  v34 = v9;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v31, v11, (struct PDEVOBJ *)&v34);
  v12 = v31;
  v13 = 0;
  if ( !*(_QWORD *)&v31 )
  {
    *(_QWORD *)this = 0LL;
    return;
  }
  v14 = *((_QWORD *)a3 + 4);
  v15 = *((_DWORD *)a4 + 1);
  v16 = 0;
  v36[0] = v14;
  if ( ((v15 & 0x4000) != 0 || (*(_DWORD *)a4 & 1) != 0)
    && (*(_BYTE *)(v14 + 52) & 1) == 0
    && *(_BYTE *)(*(_QWORD *)&v31 + 296LL)
    && (unsigned int)IFIOBJ::bSimItalic((IFIOBJ *)v36) )
  {
    v16 = v29;
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
  memset(&v41, 0, sizeof(v41));
  v20 = *(_DWORD *)(*(_QWORD *)&v12 + 272LL);
  if ( v20 < 0x1A4 )
    v19 = v20;
  memmove(&v41, (const void *)(*(_QWORD *)&v12 + 276LL), v19);
  v41.elfEnumLogfontEx.elfLogFont.lfHeight = *((_DWORD *)a4 + 3);
  v41.elfEnumLogfontEx.elfLogFont.lfWidth = *((_DWORD *)a4 + 2);
  v41.elfEnumLogfontEx.elfLogFont.lfOrientation = *((_DWORD *)a4 + 5);
  v41.elfEnumLogfontEx.elfLogFont.lfEscapement = *((_DWORD *)a4 + 4);
  v22 = (*(_DWORD *)(v14 + 48) & 0x3000010) == 0;
  *(_QWORD *)&v40.eXX = 0LL;
  *(_QWORD *)&v40.eYX = 0LL;
  if ( !v22 )
  {
    v23 = v35;
    v31.x = 1;
    v31.y = 1;
    if ( PFEOBJ::bSetFontXform(v21, v35, &v41.elfEnumLogfontEx.elfLogFont, &v40, 0, v30, &v31, (struct IFIOBJ *)v36, 1) )
    {
      v24 = v40.eXY * *((float *)a4 + 7);
      v40.eXX = v40.eXX * *((float *)a4 + 7);
      v35 = (struct XDCOBJ *)ghsemPublicPFT;
      v40.eXY = v24;
      GreAcquireSemaphore(ghsemPublicPFT);
      v37 = 0;
      v25 = *(_QWORD *)v33;
      v36[0] = v25;
      ++*(_DWORD *)(v25 + 68);
      SEMOBJ::vUnlock((SEMOBJ *)&v35);
      v26 = *(_QWORD *)v23;
      v39 = 0;
      v27 = v32;
      v38 = v26 + 320;
      if ( (unsigned int)RFONTOBJ::bFindRFONT(
                           this,
                           &v40,
                           v16,
                           0,
                           (struct PDEVOBJ *)&v34,
                           (struct EXFORMOBJ *)&v38,
                           v33,
                           v32,
                           *(_DWORD *)(*(_QWORD *)(v26 + 976) + 208LL),
                           0,
                           2u) )
      {
        GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 504LL));
        *(_DWORD *)(*(_QWORD *)v23 + 252LL) &= ~1u;
      }
      else
      {
        if ( (unsigned int)RFONTOBJ::bRealizeFont(
                             this,
                             v23,
                             (struct PDEVOBJ *)&v34,
                             &v41,
                             v33,
                             &v40,
                             &v31,
                             v16,
                             0,
                             v27,
                             0,
                             2u) )
        {
          v28 = *(_QWORD *)this;
          v37 = 1;
          GreAcquireSemaphore(*(_QWORD *)(v28 + 504));
          *(_DWORD *)(*(_QWORD *)v23 + 252LL) &= ~1u;
          goto LABEL_22;
        }
        *(_QWORD *)this = 0LL;
      }
      v7 = 0;
LABEL_22:
      if ( v25 && !v7 )
        PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v36);
      goto LABEL_25;
    }
  }
  *(_QWORD *)this = 0LL;
LABEL_25:
  if ( v12 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)&v12);
}
