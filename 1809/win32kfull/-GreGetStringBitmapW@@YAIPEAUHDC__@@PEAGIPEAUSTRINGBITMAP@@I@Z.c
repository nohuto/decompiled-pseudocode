/*
 * XREFs of ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C027C0B8
 * Callers:
 *     NtGdiGetStringBitmapW @ 0x1C027D030 (NtGdiGetStringBitmapW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C016014C (--1ESTROBJ@@QEAA@XZ.c)
 *     vStringBitmapTextOut @ 0x1C0160D3C (vStringBitmapTextOut.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C028AAD8 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1C02A0B2C (-vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
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
  _DWORD *v27; // [rsp+58h] [rbp-A8h] BYREF
  int v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  int v30; // [rsp+70h] [rbp-90h]
  _QWORD v31[2]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v32[32]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v33[3]; // [rsp+A8h] [rbp-58h] BYREF
  STROBJ v34; // [rsp+C0h] [rbp-40h] BYREF
  int v35; // [rsp+F0h] [rbp-10h]
  _QWORD *v36; // [rsp+F8h] [rbp-8h]
  __int64 v37; // [rsp+100h] [rbp+0h]
  int *v38; // [rsp+190h] [rbp+90h]
  int v39; // [rsp+1A8h] [rbp+A8h]
  int v40; // [rsp+1ACh] [rbp+ACh]

  DCOBJ::DCOBJ((DCOBJ *)v31, a1);
  if ( v31[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v33, (struct XDCOBJ *)v31, 516);
    if ( (*(_BYTE *)(v33[0] + 32LL) & 0x43) != 0x43 )
      goto LABEL_4;
    v25 = 0;
    *(_QWORD *)v24 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)v24, (struct XDCOBJ *)v31, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v24 + 504LL));
    if ( !*(_QWORD *)v24
      || (*(_DWORD *)(*(_QWORD *)v24 + 88LL) & 2) != 0
      || *(_DWORD *)(v31[0] + 1764LL) | *(_DWORD *)(*(_QWORD *)v24 + 392LL) )
    {
      v7 = 0;
      goto LABEL_36;
    }
    v39 = 0;
    ESTROBJ::vInitSimple((ESTROBJ *)&v34, a2, v24[0], (struct XDCOBJ *)v31, (struct RFONTOBJ *)v24, v21, v22, v23);
    if ( (v39 & 4) == 0 )
    {
      v7 = 0;
LABEL_33:
      ESTROBJ::~ESTROBJ((ESTROBJ *)&v34);
LABEL_36:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v24);
      goto LABEL_37;
    }
    v8 = v34.rclBkGround.bottom - v34.rclBkGround.top;
    v9 = *(_QWORD *)(v37 + 24LL * (v34.cGlyphs - 1) + 8);
    v10 = v34.rclBkGround.right
        + (*(int *)(*(_QWORD *)(v37 + 8) + 16LL) >> 4)
        + ((*(_DWORD *)(v9 + 12) - *(_DWORD *)(v9 + 20)) >> 4)
        - v34.rclBkGround.left;
    v11 = (unsigned int)(v10 + 7) >> 3;
    v12 = (v34.rclBkGround.bottom - v34.rclBkGround.top) * v11;
    v7 = v12 + 8;
    if ( a5 < v12 + 8 )
      goto LABEL_33;
    memset((char *)a4 + 8, 0, v12);
    v13 = (v39 & 0x1400) == 0;
    *((_DWORD *)a4 + 1) = v8;
    v14 = 0;
    *(_DWORD *)a4 = v10;
    v15 = 0LL;
    v26 = 0LL;
    if ( !v13 )
    {
      v14 = *v38;
      if ( *v38 )
      {
        if ( *v38 == 1 )
        {
          v15 = *(_DWORD **)(*(_QWORD *)v24 + 720LL);
        }
        else if ( *v38 == 2 )
        {
          v15 = *(_DWORD **)(*(_QWORD *)v24 + 728LL);
        }
        else
        {
          v15 = *v38 == 3
              ? *(_DWORD **)(*(_QWORD *)v24 + 736LL)
              : *(_DWORD **)(*(_QWORD *)(*(_QWORD *)v24 + 744LL) + 8LL * (unsigned int)(v14 - 4));
        }
        if ( v15 )
        {
          v16 = v15[79];
          v17 = v15[80];
          v18 = *(_DWORD *)(*(_QWORD *)v24 + 316LL);
          v30 = 0;
          if ( v18 < v16 - v17 )
            v17 = v16 - v18;
          pgp = v34.pgp;
          v26.y = v17 >> 4;
          v29 = 0LL;
          if ( v17 >> 4 )
            pgp = 0LL;
          v34.pgp = pgp;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v29);
        }
      }
    }
    v40 = v14;
    v35 = 0;
    v28 = 0;
    v27 = v15;
    if ( v15 )
    {
      if ( (v15[22] & 2) != 0 )
      {
        v7 = 0;
        goto LABEL_32;
      }
      v36 = &v27;
    }
    ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)&v34, &v26);
    vStringBitmapTextOut(&v34, a4, v11);
LABEL_32:
    v27 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v27);
    goto LABEL_33;
  }
  EngSetLastError(6u);
LABEL_4:
  v7 = 0;
LABEL_37:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v31);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v32);
  return v7;
}
