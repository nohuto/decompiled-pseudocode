/*
 * XREFs of ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C02681D8
 * Callers:
 *     NtGdiGetStringBitmapW @ 0x1C02690D0 (NtGdiGetStringBitmapW.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C013917C (--1ESTROBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     vStringBitmapTextOut @ 0x1C013BA00 (vStringBitmapTextOut.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C0277568 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1C028D504 (-vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
 */

__int64 __fastcall GreGetStringBitmapW(
        HDC a1,
        unsigned __int16 *a2,
        __int64 a3,
        struct STRINGBITMAP *a4,
        unsigned int a5)
{
  unsigned int v7; // edi
  int v8; // esi
  __int64 v9; // rcx
  int v10; // ebx
  unsigned int v11; // r15d
  unsigned int v12; // eax
  bool v13; // zf
  int v14; // esi
  _DWORD *v15; // rbx
  int v16; // r8d
  int v17; // ecx
  int v18; // r9d
  GLYPHPOS *pgp; // rax
  int v21; // [rsp+28h] [rbp-D8h]
  int v22; // [rsp+30h] [rbp-D0h]
  void *v23; // [rsp+38h] [rbp-C8h]
  int v24[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+48h] [rbp-B8h]
  struct _POINTL v26; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v27[2]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v28; // [rsp+68h] [rbp-98h] BYREF
  int v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  int v31; // [rsp+80h] [rbp-80h]
  _QWORD v32[3]; // [rsp+88h] [rbp-78h] BYREF
  STROBJ v33; // [rsp+A0h] [rbp-60h] BYREF
  int v34; // [rsp+D0h] [rbp-30h]
  _QWORD *v35; // [rsp+D8h] [rbp-28h]
  __int64 v36; // [rsp+E0h] [rbp-20h]
  int *v37; // [rsp+170h] [rbp+70h]
  int v38; // [rsp+188h] [rbp+88h]
  int v39; // [rsp+18Ch] [rbp+8Ch]

  MDCOBJ::MDCOBJ((MDCOBJ *)v27, a1);
  if ( !v27[0] )
  {
    EngSetLastError(6u);
LABEL_4:
    v7 = 0;
    goto LABEL_37;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v32, (struct XDCOBJ *)v27, 516);
  if ( (*(_BYTE *)(v32[0] + 32LL) & 0x43) != 0x43 )
    goto LABEL_4;
  v25 = 0;
  *(_QWORD *)v24 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)v24, (struct XDCOBJ *)v27, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v24 + 496LL));
  if ( !*(_QWORD *)v24
    || (*(_DWORD *)(*(_QWORD *)v24 + 72LL) & 2) != 0
    || *(_DWORD *)(v27[0] + 2148LL) | *(_DWORD *)(*(_QWORD *)v24 + 380LL) )
  {
    v7 = 0;
    goto LABEL_36;
  }
  v38 = 0;
  ESTROBJ::vInitSimple((ESTROBJ *)&v33, a2, v24[0], (struct XDCOBJ *)v27, (struct RFONTOBJ *)v24, v21, v22, v23);
  if ( (v38 & 4) != 0 )
  {
    v8 = v33.rclBkGround.bottom - v33.rclBkGround.top;
    v9 = *(_QWORD *)(v36 + 24LL * (v33.cGlyphs - 1) + 8);
    v10 = v33.rclBkGround.right
        + (*(int *)(*(_QWORD *)(v36 + 8) + 16LL) >> 4)
        + ((*(_DWORD *)(v9 + 12) - *(_DWORD *)(v9 + 20)) >> 4)
        - v33.rclBkGround.left;
    v11 = (unsigned int)(v10 + 7) >> 3;
    v12 = (v33.rclBkGround.bottom - v33.rclBkGround.top) * v11;
    v7 = v12 + 8;
    if ( a5 < v12 + 8 )
      goto LABEL_33;
    memset((char *)a4 + 8, 0, v12);
    v13 = (v38 & 0x1400) == 0;
    *((_DWORD *)a4 + 1) = v8;
    v14 = 0;
    *(_DWORD *)a4 = v10;
    v15 = 0LL;
    v26 = 0LL;
    if ( !v13 )
    {
      v14 = *v37;
      if ( *v37 )
      {
        if ( *v37 == 1 )
        {
          v15 = *(_DWORD **)(*(_QWORD *)v24 + 704LL);
        }
        else if ( *v37 == 2 )
        {
          v15 = *(_DWORD **)(*(_QWORD *)v24 + 712LL);
        }
        else
        {
          v15 = *v37 == 3
              ? *(_DWORD **)(*(_QWORD *)v24 + 720LL)
              : *(_DWORD **)(*(_QWORD *)(*(_QWORD *)v24 + 728LL) + 8LL * (unsigned int)(v14 - 4));
        }
        if ( v15 )
        {
          v16 = v15[75];
          v17 = v15[76];
          v18 = *(_DWORD *)(*(_QWORD *)v24 + 300LL);
          v31 = 0;
          if ( v18 < v16 - v17 )
            v17 = v16 - v18;
          pgp = v33.pgp;
          v26.y = v17 >> 4;
          v30 = 0LL;
          if ( v17 >> 4 )
            pgp = 0LL;
          v33.pgp = pgp;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v30);
        }
      }
    }
    v39 = v14;
    v34 = 0;
    v29 = 0;
    v28 = v15;
    if ( v15 )
    {
      if ( (v15[18] & 2) != 0 )
      {
        v7 = 0;
        goto LABEL_32;
      }
      v35 = &v28;
    }
    ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)&v33, &v26);
    vStringBitmapTextOut(&v33, a4, v11);
LABEL_32:
    v28 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
    goto LABEL_33;
  }
  v7 = 0;
LABEL_33:
  ESTROBJ::~ESTROBJ((ESTROBJ *)&v33);
LABEL_36:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v24);
LABEL_37:
  if ( v27[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v27);
  return v7;
}
