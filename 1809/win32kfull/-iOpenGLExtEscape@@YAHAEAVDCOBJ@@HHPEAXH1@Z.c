/*
 * XREFs of ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C025F864
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0098F00 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C004CB04 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C009B98C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C014F010 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C014F068 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015E8A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C025F28C (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C025F33C (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C025F3FC (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C025F7A4 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C02602A8 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     EngControlSprites @ 0x1C0269210 (EngControlSprites.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0289C70 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02A13BC (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 */

__int64 __fastcall iOpenGLExtEscape(struct DCOBJ *a1, int a2, unsigned int a3, void *a4, int a5, void *a6)
{
  unsigned int v7; // r14d
  __int64 v8; // rax
  XLATEOBJ *v10; // r13
  __int64 v11; // r8
  HDEV DeviceHdev; // r8
  WNDOBJ *v13; // rbx
  size_t v14; // rax
  HDC *v15; // rsi
  __int64 v16; // r9
  int v17; // ecx
  int v18; // edx
  __int64 v19; // r8
  unsigned int v20; // ecx
  unsigned int v21; // eax
  _WORD *v22; // rdx
  ULONG v23; // ecx
  __int64 v24; // rax
  struct REGION *v25; // rax
  struct REGION *v26; // rax
  HDEV v28; // [rsp+38h] [rbp-7C0h] BYREF
  XLATEOBJ *v29; // [rsp+40h] [rbp-7B8h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-7B0h]
  unsigned __int64 v31; // [rsp+50h] [rbp-7A8h]
  int v32; // [rsp+58h] [rbp-7A0h]
  struct SURFACE *v33; // [rsp+60h] [rbp-798h]
  void *Src; // [rsp+68h] [rbp-790h]
  HDEV *Parameter; // [rsp+70h] [rbp-788h] BYREF
  char *v36; // [rsp+78h] [rbp-780h]
  int v37; // [rsp+80h] [rbp-778h]
  unsigned int v38; // [rsp+84h] [rbp-774h]
  void *v39; // [rsp+88h] [rbp-770h]
  unsigned __int64 v40; // [rsp+90h] [rbp-768h]
  int v41; // [rsp+98h] [rbp-760h]
  unsigned int v42; // [rsp+9Ch] [rbp-75Ch]
  struct _RECTL v43; // [rsp+A0h] [rbp-758h] BYREF
  _BYTE v44[104]; // [rsp+B0h] [rbp-748h] BYREF
  WNDOBJ *pwo; // [rsp+118h] [rbp-6E0h]
  __int64 v46; // [rsp+130h] [rbp-6C8h] BYREF
  int v47; // [rsp+138h] [rbp-6C0h]
  int v48; // [rsp+13Ch] [rbp-6BCh]
  _DWORD v49[8]; // [rsp+140h] [rbp-6B8h] BYREF
  __int64 v50; // [rsp+160h] [rbp-698h]
  char v51[4]; // [rsp+170h] [rbp-688h] BYREF
  struct _RECTL v52; // [rsp+174h] [rbp-684h] BYREF
  char v53[768]; // [rsp+210h] [rbp-5E8h] BYREF
  char v54; // [rsp+510h] [rbp-2E8h] BYREF
  _BYTE v55[512]; // [rsp+5B0h] [rbp-248h] BYREF

  Src = a4;
  v30 = a3;
  v31 = (unsigned __int64)a6;
  v7 = 0;
  v32 = 0;
  `vector constructor iterator'(v53, 48LL, 16LL, (void (__fastcall *)(char *))DCOBJ::DCOBJ);
  v8 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 496LL) )
  {
    EngSetLastError(6u);
LABEL_3:
    `vector destructor iterator'(v53, 48LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
    return 0LL;
  }
  v29 = 0LL;
  v10 = 0LL;
  v28 = *(HDEV *)(v8 + 48);
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v44, a1);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 || (v44[24] & 1) == 0 && !(unsigned int)XDCOBJ::bFullScreen(a1) )
    goto LABEL_5;
  v33 = XDCOBJ::pSurfaceEff(a1);
  if ( ((_DWORD)v28[10] & 0x20000) != 0 )
  {
    v43 = *(struct _RECTL *)(v11 + 1032);
    DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v11 + 48), &v43, (struct EWNDOBJ *)pwo);
    if ( DeviceHdev )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) == *((_QWORD *)v28 + 319) )
        v33 = (struct SURFACE *)*((_QWORD *)DeviceHdev + 319);
      v28 = DeviceHdev;
    }
  }
  if ( !*((_QWORD *)v28 + 360) || ((_DWORD)v28[10] & 0x8000) != 0 )
  {
LABEL_5:
    DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v44);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v29);
    goto LABEL_3;
  }
  *(_QWORD *)&v43.left = ghsemSprite;
  GreAcquireSemaphore(ghsemSprite);
  v13 = 0LL;
  v46 = 0LL;
  v50 = 0LL;
  v49[0] = 0;
  Parameter = &v28;
  if ( v33 )
    v36 = (char *)v33 + 24;
  else
    v36 = 0LL;
  v37 = a2;
  v38 = v30;
  v41 = a5;
  v40 = v31;
  if ( a2 != 4352 )
  {
    v39 = Src;
    if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      v7 = v42;
    goto LABEL_25;
  }
  v14 = (int)v30;
  v31 = (int)v30;
  if ( (unsigned __int64)(int)v30 >= 0x18 )
  {
    if ( (unsigned __int64)(int)v30 > 0x98 )
    {
      v15 = (HDC *)PALLOCMEM2((int)v30, 1818718023LL, 0);
      if ( !v15 )
      {
        EngSetLastError(8u);
        goto LABEL_25;
      }
      v14 = v31;
    }
    else
    {
      v15 = (HDC *)&v54;
    }
    memmove(v15, Src, v14);
    if ( (*((_DWORD *)v15 + 1) & 4) != 0 )
    {
      v16 = *((unsigned int *)v15 + 2);
      if ( (unsigned int)v16 > 0x10 || v30 < (unsigned __int64)(8 * v16 + 24) )
      {
        v23 = 8;
        goto LABEL_46;
      }
      a2 = LookUpWndobjs(a1, (struct DCOBJ *)v53, v15 + 3, v16);
      if ( a2 < 0 )
        goto LABEL_64;
    }
    v17 = *((_DWORD *)v15 + 1);
    if ( (v17 & 2) != 0 )
    {
      v18 = *((_DWORD *)v28 + 527);
      if ( (unsigned int)(v18 - 2) > 1 )
      {
        v10 = xloIdent;
      }
      else
      {
        v19 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
        if ( v19 )
        {
          v20 = 16;
          if ( v18 != 2 )
            v20 = 256;
          v21 = 0;
          v22 = v55;
          do
            *v22++ = v21++;
          while ( v21 < v20 );
          if ( (unsigned int)EXLATEOBJ::bMakeXlate(&v29, v55, v19, v33, v20, v20) )
            v10 = v29;
        }
        if ( !v10 )
          v10 = xloIdent;
        v17 = *((_DWORD *)v15 + 1);
      }
    }
    v15[2] = (HDC)v10;
    if ( (v17 & 4) != 0 )
      goto LABEL_57;
    if ( (v17 & 1) == 0 )
    {
      v15[1] = 0LL;
      goto LABEL_57;
    }
    if ( pwo && (pwo[3].coClient.rclBounds.bottom & 0x8000000) == 0 )
    {
      v24 = *(_QWORD *)(*(_QWORD *)&pwo[3].coClient.iUniq + 32LL);
      if ( v24 == *(_QWORD *)(*(_QWORD *)a1 + 496LL)
        || *(_QWORD *)(*(_QWORD *)(v24 + 48) + 24LL) == *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
      {
        v15[1] = (HDC)pwo;
LABEL_57:
        if ( pwo )
        {
          if ( (pwo[3].coClient.rclBounds.bottom & 0x80u) == 0 )
          {
            v13 = pwo;
            EngControlSprites(pwo, 1u);
          }
        }
        else
        {
          v25 = XDCOBJ::prgnEffRao((DC **)a1);
          v46 = *((_QWORD *)v25 + 11);
          v47 = *((_DWORD *)v25 + 24);
          v48 = *((_DWORD *)v25 + 25);
          v26 = XDCOBJ::prgnEffRao((DC **)a1);
          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v51, v26, (struct ERECTL *)&v46, 0);
          DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v49, a1, &v52);
        }
        ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 92LL);
        v39 = v15;
        if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
        {
          v7 = v42;
          if ( (*((_DWORD *)v15 + 1) & 4) != 0 )
            v7 = (a2 << 16) | (unsigned __int16)v42;
        }
      }
LABEL_64:
      if ( v31 > 0x98 )
        Win32FreePool(v15);
      goto LABEL_25;
    }
    v23 = 6;
LABEL_46:
    EngSetLastError(v23);
    goto LABEL_64;
  }
  EngSetLastError(0x57u);
LABEL_25:
  DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)v49);
  if ( v13 )
    EngControlSprites(v13, 2u);
  SEMOBJ::vUnlock((SEMOBJ *)&v43);
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v44);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v29);
  `vector destructor iterator'(v53, 48LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
  return v7;
}
