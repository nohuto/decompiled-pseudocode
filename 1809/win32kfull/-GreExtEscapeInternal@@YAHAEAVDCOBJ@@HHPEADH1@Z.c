/*
 * XREFs of ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0098F00
 * Callers:
 *     GreExtEscape @ 0x1C0098E04 (GreExtEscape.c)
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C004CA70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0057424 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C00890CC (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0098060 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C0098C10 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C0099450 (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0099DC4 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C025F43C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C025F864 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C025FEA8 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0289C70 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall GreExtEscapeInternal(
        struct DCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        char *a6)
{
  char *v6; // r14
  __int64 v10; // rcx
  HDEV v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rdx
  int v21; // r8d
  struct _SURFOBJ *v22; // r13
  HDEV DeviceHdev; // rax
  HDEV v24; // r8
  unsigned int v25; // ebx
  int v26; // ecx
  __int64 v27; // rax
  unsigned int v28; // eax
  int v29; // [rsp+40h] [rbp-3E8h]
  HDEV v30; // [rsp+50h] [rbp-3D8h] BYREF
  unsigned __int16 v31; // [rsp+58h] [rbp-3D0h]
  int v32; // [rsp+5Ch] [rbp-3CCh]
  int v33; // [rsp+60h] [rbp-3C8h]
  __int64 v34; // [rsp+68h] [rbp-3C0h] BYREF
  int v35; // [rsp+74h] [rbp-3B4h]
  _BYTE v36[112]; // [rsp+80h] [rbp-3A8h] BYREF
  struct _RECTL v37; // [rsp+F0h] [rbp-338h] BYREF
  __int128 v38; // [rsp+100h] [rbp-328h] BYREF
  int v39; // [rsp+110h] [rbp-318h]
  __int64 *v40; // [rsp+118h] [rbp-310h]
  _BYTE v41[704]; // [rsp+120h] [rbp-308h] BYREF

  v6 = a4;
  v10 = *(_QWORD *)a1;
  v11 = *(HDEV *)(v10 + 48);
  v30 = v11;
  v12 = 0;
  if ( !*((_DWORD *)v11 + 3) && a2 != 4354 )
    return 0LL;
  v13 = *((unsigned int *)v11 + 652);
  v29 = 0;
  if ( a2 == 8 )
  {
    if ( a3 < 4 )
      return 0LL;
    v29 = *(_DWORD *)a4;
    v32 = *(_DWORD *)a4;
    if ( (unsigned int)(v32 - 4352) <= 1 && (v13 & 8) != 0 )
      return 0LL;
LABEL_15:
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v36);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v36, a1);
    if ( (unsigned int)fBlockExtEscape(a1) )
    {
LABEL_16:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v36);
      return 0LL;
    }
    v15 = *(_QWORD *)a1;
    if ( *(_DWORD *)(*(_QWORD *)a1 + 32LL) )
    {
      v16 = *(_QWORD *)(v15 + 496);
      if ( (*(_DWORD *)(*(_QWORD *)(v15 + 48) + 40LL) & 0x80u) != 0 )
      {
        if ( !v16 )
          goto LABEL_22;
        v17 = *(_QWORD *)(v16 + 40) == *((_QWORD *)v11 + 225);
      }
      else
      {
        if ( !v16 )
          goto LABEL_16;
        v17 = *(_WORD *)(v16 + 100) == 3;
      }
      if ( !v17 )
        goto LABEL_16;
    }
LABEL_22:
    v34 = 0LL;
    v35 = 0;
    if ( a2 == 25 )
    {
      if ( *((int *)v11 + 456) < 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v34, a1, 0x204u);
        if ( a3 != 20 )
          goto LABEL_16;
        v38 = *(_OWORD *)v6;
        v39 = *((_DWORD *)v6 + 4);
        v40 = &v34;
        v6 = (char *)&v38;
        a3 = 32;
        v15 = *(_QWORD *)a1;
      }
      v18 = *(_QWORD *)(v15 + 496);
      if ( v18 && (*(_DWORD *)(v18 + 112) & 0x2000000) != 0 && (a3 == 20 || *((int *)v11 + 456) < 0) )
      {
        v19 = *(_DWORD *)(v15 + 2116);
        *(_DWORD *)v6 -= *(_DWORD *)(v15 + 2112);
        *((_DWORD *)v6 + 1) -= v19;
      }
    }
    if ( a2 - 256 <= 0x2FE || a2 == 8 && (unsigned int)(v29 - 256) <= 0x2FE )
    {
      v28 = DoFontManagement(a1, a2, a3, v6, a5, a6);
    }
    else
    {
      if ( a2 - 4119 > 1 && (a2 != 8 || (unsigned int)(v29 - 4119) > 1) )
      {
        if ( (unsigned int)XDCOBJ::bValidSurf(a1) && !a6 )
          ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 92LL);
        v22 = SURFACE::pSurfobj(*(SURFACE **)(*(_QWORD *)a1 + 496LL));
        if ( ((_DWORD)v11[10] & 0x20000) != 0 && a2 == 8 && (unsigned int)(v21 - 4352) <= 1 )
        {
          v37 = *(struct _RECTL *)(v20 + 1032);
          DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v20 + 48), &v37, 0LL);
          v24 = DeviceHdev;
          if ( DeviceHdev )
          {
            if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) == *((_QWORD *)v11 + 319) )
              v22 = SURFACE::pSurfobj(*((SURFACE **)DeviceHdev + 319));
            v11 = v24;
            v30 = v24;
          }
        }
        if ( *((_QWORD *)v11 + 360) )
        {
          if ( !v22 )
          {
            memset(v41, 0, 0x2B8uLL);
            v22 = SURFACE::pSurfobj((SURFACE *)v41);
            v22->dhpdev = *(DHPDEV *)(*(_QWORD *)a1 + 24LL);
            v22->hdev = *(HDEV *)(*(_QWORD *)a1 + 48LL);
            v25 = 1;
            v22->iType = 1;
            if ( a2 == 17 && a3 >= 2 )
            {
              v31 = *(_WORD *)v6;
              *(_DWORD *)(*(_QWORD *)a1 + 2100LL) = v31;
              PDEVOBJ::Escape((PDEVOBJ *)&v30, v22, 0x11u, a3, v6, a5, a6);
LABEL_54:
              DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v36);
              return v25;
            }
            if ( a2 == 33 && a3 >= 2 )
            {
              v26 = *(unsigned __int16 *)v6;
              v33 = v26;
              v27 = *(_QWORD *)a1;
              if ( v26 )
                *(_DWORD *)(v27 + 36) |= 0x400u;
              else
                *(_DWORD *)(v27 + 36) &= ~0x400u;
              goto LABEL_54;
            }
          }
          v25 = PDEVOBJ::Escape((PDEVOBJ *)&v30, v22, a2, a3, v6, a5, a6);
          goto LABEL_54;
        }
        goto LABEL_64;
      }
      v28 = iCheckPassthroughImage(a1, (struct PDEVOBJ *)&v30, a2, a3, v6, a5, a6);
    }
    v12 = v28;
LABEL_64:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v36);
    return v12;
  }
  if ( a2 - 4352 <= 1 )
  {
    if ( (v13 & 8) != 0 || *(_DWORD *)(v10 + 32) )
      return 0LL;
    return iOpenGLExtEscape(a1, a2, a3, a4, a5, a6);
  }
  else
  {
    if ( a2 != 4354 )
    {
      if ( a2 == 3075 || a2 == 4124 && !(unsigned int)UserUnsafeIsCurrentProcessDwm(v10, 4354LL, v13) )
        return 0LL;
      goto LABEL_15;
    }
    if ( *(_DWORD *)(v10 + 32) )
      return 0LL;
    return iWndObjSetupExtEscape(a1, 0x1102u, a3, a4, a5, a6);
  }
}
