/*
 * XREFs of ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0247998
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00F2E58 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C008F90C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0119DA0 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0119DF8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0138FF0 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0247480 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C02474C8 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C0247588 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C02478F0 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C02482C8 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     EngControlSprites @ 0x1C0256290 (EngControlSprites.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02768D4 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C028DD78 (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 */

__int64 __fastcall iOpenGLExtEscape(struct DCOBJ *a1, int a2, int a3, void *a4, int a5, void *a6)
{
  unsigned __int64 v6; // r14
  unsigned int v8; // r15d
  __int64 v9; // rax
  XLATEOBJ *v11; // r13
  __int64 v12; // r8
  HDEV DeviceHdev; // r8
  WNDOBJ *v14; // rbx
  size_t v15; // rax
  ULONG v16; // ecx
  HDC *v17; // r14
  __int64 v18; // r9
  int v19; // ecx
  int v20; // edx
  __int64 v21; // r8
  unsigned int v22; // ecx
  unsigned int v23; // eax
  _WORD *v24; // rdx
  ULONG v25; // ecx
  __int64 v26; // rax
  struct REGION *v27; // rax
  struct REGION *v28; // rax
  int v29; // [rsp+30h] [rbp-5A8h]
  HDEV v30; // [rsp+38h] [rbp-5A0h] BYREF
  XLATEOBJ *v31; // [rsp+40h] [rbp-598h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-590h]
  int v33; // [rsp+50h] [rbp-588h]
  struct SURFACE *v34; // [rsp+58h] [rbp-580h]
  void *Src; // [rsp+60h] [rbp-578h]
  HDEV *Parameter; // [rsp+68h] [rbp-570h] BYREF
  char *v37; // [rsp+70h] [rbp-568h]
  int v38; // [rsp+78h] [rbp-560h]
  int v39; // [rsp+7Ch] [rbp-55Ch]
  void *v40; // [rsp+80h] [rbp-558h]
  void *v41; // [rsp+88h] [rbp-550h]
  int v42; // [rsp+90h] [rbp-548h]
  unsigned int v43; // [rsp+94h] [rbp-544h]
  void *v44; // [rsp+98h] [rbp-540h]
  struct _RECTL v45; // [rsp+A0h] [rbp-538h] BYREF
  _BYTE v46[72]; // [rsp+B0h] [rbp-528h] BYREF
  WNDOBJ *pwo; // [rsp+F8h] [rbp-4E0h]
  __int64 v48; // [rsp+110h] [rbp-4C8h] BYREF
  int v49; // [rsp+118h] [rbp-4C0h]
  int v50; // [rsp+11Ch] [rbp-4BCh]
  _DWORD v51[8]; // [rsp+120h] [rbp-4B8h] BYREF
  __int64 v52; // [rsp+140h] [rbp-498h]
  char v53[4]; // [rsp+150h] [rbp-488h] BYREF
  struct _RECTL v54; // [rsp+154h] [rbp-484h] BYREF
  char v55[256]; // [rsp+1F0h] [rbp-3E8h] BYREF
  char v56; // [rsp+2F0h] [rbp-2E8h] BYREF
  _BYTE v57[512]; // [rsp+390h] [rbp-248h] BYREF

  Src = a4;
  v6 = a3;
  v29 = a3;
  LODWORD(v32) = a2;
  v44 = a6;
  v8 = 0;
  v33 = 0;
  `vector constructor iterator'(v55, 16LL, 16LL, (void (__fastcall *)(char *))DCOBJ::DCOBJ);
  v9 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 504LL) )
  {
    EngSetLastError(6u);
LABEL_3:
    `vector destructor iterator'(v55, 16LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
    return 0LL;
  }
  v31 = 0LL;
  v11 = 0LL;
  v30 = *(HDEV *)(v9 + 48);
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v46, a1);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 || (v46[24] & 1) == 0 && !(unsigned int)XDCOBJ::bFullScreen(a1) )
    goto LABEL_5;
  v34 = XDCOBJ::pSurfaceEff(a1);
  if ( ((_DWORD)v30[10] & 0x20000) != 0 )
  {
    v45 = *(struct _RECTL *)(v12 + 1440);
    DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v12 + 48), &v45, (struct EWNDOBJ *)pwo);
    if ( DeviceHdev )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 504LL) == *((_QWORD *)v30 + 318) )
        v34 = (struct SURFACE *)*((_QWORD *)DeviceHdev + 318);
      v30 = DeviceHdev;
    }
  }
  if ( !*((_QWORD *)v30 + 359) || ((_DWORD)v30[10] & 0x8000) != 0 )
  {
LABEL_5:
    DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v46);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v31);
    goto LABEL_3;
  }
  *(_QWORD *)&v45.left = ghsemSprite;
  GreAcquireSemaphore(ghsemSprite);
  v14 = 0LL;
  v48 = 0LL;
  v52 = 0LL;
  v51[0] = 0;
  Parameter = &v30;
  if ( v34 )
    v37 = (char *)v34 + 24;
  else
    v37 = 0LL;
  v38 = v32;
  v39 = v6;
  v42 = a5;
  v41 = v44;
  if ( (_DWORD)v32 != 4352 )
  {
    v40 = Src;
    if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      v8 = v43;
    goto LABEL_66;
  }
  v15 = v6;
  v32 = v6;
  if ( v6 >= 0x18 )
  {
    if ( v6 > 0x98 )
    {
      v17 = (HDC *)PALLOCMEM2((unsigned int)v6, 1818718023LL, 0);
      if ( !v17 )
      {
        v16 = 8;
        goto LABEL_21;
      }
      v15 = v32;
    }
    else
    {
      v17 = (HDC *)&v56;
    }
    memmove(v17, Src, v15);
    if ( (*((_DWORD *)v17 + 1) & 4) != 0 )
    {
      v18 = *((unsigned int *)v17 + 2);
      if ( (unsigned int)v18 > 0x10 || (unsigned int)v29 < (unsigned __int64)(8 * v18 + 24) )
      {
        v25 = 8;
        goto LABEL_44;
      }
      v29 = LookUpWndobjs(a1, (struct DCOBJ *)v55, v17 + 3, v18);
      if ( v29 < 0 )
        goto LABEL_62;
    }
    v19 = *((_DWORD *)v17 + 1);
    if ( (v19 & 2) != 0 )
    {
      v20 = *((_DWORD *)v30 + 525);
      if ( (unsigned int)(v20 - 2) > 1 )
      {
        v11 = xloIdent;
      }
      else
      {
        v21 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
        if ( v21 )
        {
          v22 = 16;
          if ( v20 != 2 )
            v22 = 256;
          v23 = 0;
          v24 = v57;
          do
            *v24++ = v23++;
          while ( v23 < v22 );
          if ( (unsigned int)EXLATEOBJ::bMakeXlate(&v31, v57, v21, v34, v22, v22) )
            v11 = v31;
        }
        if ( !v11 )
          v11 = xloIdent;
        v19 = *((_DWORD *)v17 + 1);
      }
    }
    v17[2] = (HDC)v11;
    if ( (v19 & 4) != 0 )
      goto LABEL_55;
    if ( (v19 & 1) == 0 )
    {
      v17[1] = 0LL;
      goto LABEL_55;
    }
    if ( pwo && (pwo[3].coClient.rclBounds.bottom & 0x8000000) == 0 )
    {
      v26 = *(_QWORD *)(*(_QWORD *)&pwo[3].coClient.iUniq + 32LL);
      if ( v26 == *(_QWORD *)(*(_QWORD *)a1 + 504LL)
        || *(_QWORD *)(*(_QWORD *)(v26 + 48) + 24LL) == *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
      {
        v17[1] = (HDC)pwo;
LABEL_55:
        if ( pwo )
        {
          if ( (pwo[3].coClient.rclBounds.bottom & 0x80u) == 0 )
          {
            v14 = pwo;
            EngControlSprites(pwo, 1u);
          }
        }
        else
        {
          v27 = XDCOBJ::prgnEffRao((DC **)a1);
          v48 = *((_QWORD *)v27 + 11);
          v49 = *((_DWORD *)v27 + 24);
          v50 = *((_DWORD *)v27 + 25);
          v28 = XDCOBJ::prgnEffRao((DC **)a1);
          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v53, v28, (struct ERECTL *)&v48, 0);
          DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v51, a1, &v54);
        }
        ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 504LL) + 92LL);
        v40 = v17;
        if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
        {
          v8 = v43;
          if ( (*((_DWORD *)v17 + 1) & 4) != 0 )
            v8 = (v29 << 16) | (unsigned __int16)v43;
        }
      }
LABEL_62:
      if ( v32 > 0x98 )
        Win32FreePool(v17);
      goto LABEL_66;
    }
    v25 = 6;
LABEL_44:
    EngSetLastError(v25);
    goto LABEL_62;
  }
  v16 = 87;
LABEL_21:
  EngSetLastError(v16);
LABEL_66:
  DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)v51);
  if ( v14 )
    EngControlSprites(v14, 2u);
  SEMOBJ::vUnlock((SEMOBJ *)&v45);
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v46);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v31);
  `vector destructor iterator'(v55, 16LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
  return v8;
}
