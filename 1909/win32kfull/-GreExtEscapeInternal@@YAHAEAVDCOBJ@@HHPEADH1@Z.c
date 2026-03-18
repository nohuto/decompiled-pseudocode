/*
 * XREFs of ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0123D78
 * Callers:
 *     GreExtEscape @ 0x1C0123CDC (GreExtEscape.c)
 * Callees:
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C00A0330 (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00AAFBC (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00BC8F0 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00DE2F0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C01091FC (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C0124300 (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0125A4C (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C0125ACC (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027843C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0278848 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0278E78 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C029F970 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall GreExtEscapeInternal(
        struct DCOBJ *a1,
        unsigned int a2,
        signed int a3,
        char *a4,
        unsigned int a5,
        char *a6)
{
  char *v6; // r12
  __int64 v10; // rcx
  HDEV v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // r8
  __int64 v15; // r14
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // rdx
  unsigned int v23; // r8d
  int v24; // r9d
  struct _SURFOBJ *v25; // r14
  HDEV DeviceHdev; // rax
  HDEV v27; // r8
  unsigned int v28; // ebx
  int v29; // eax
  __int64 v30; // rax
  unsigned int v31; // eax
  int v32; // [rsp+40h] [rbp-3C8h]
  HDEV v33; // [rsp+50h] [rbp-3B8h] BYREF
  unsigned __int16 v34; // [rsp+58h] [rbp-3B0h]
  int v35; // [rsp+5Ch] [rbp-3ACh]
  int v36; // [rsp+60h] [rbp-3A8h]
  __int64 v37; // [rsp+68h] [rbp-3A0h] BYREF
  int v38; // [rsp+74h] [rbp-394h]
  _BYTE v39[80]; // [rsp+80h] [rbp-388h] BYREF
  struct _RECTL v40; // [rsp+D0h] [rbp-338h] BYREF
  _OWORD v41[2]; // [rsp+E0h] [rbp-328h] BYREF
  _BYTE v42[704]; // [rsp+100h] [rbp-308h] BYREF

  v6 = a4;
  v10 = *(_QWORD *)a1;
  v11 = *(HDEV *)(v10 + 48);
  v33 = v11;
  v12 = 0;
  if ( !*((_DWORD *)v11 + 3) && a2 != 4354 )
    return 0LL;
  v13 = *((unsigned int *)v11 + 652);
  v32 = 0;
  if ( a2 == 8 )
  {
    if ( (unsigned int)a3 < 4 )
      return 0LL;
    v32 = *(_DWORD *)a4;
    v35 = *(_DWORD *)a4;
    if ( (unsigned int)(v35 - 4352) <= 1 && (v13 & 8) != 0 )
      return 0LL;
LABEL_15:
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v39);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v39, a1);
    if ( (unsigned int)fBlockExtEscape(a1) )
    {
LABEL_16:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v39);
      return 0LL;
    }
    v15 = *(_QWORD *)a1;
    if ( *(_DWORD *)(*(_QWORD *)a1 + 32LL) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v15 + 48) + 40LL) & 0x80u) != 0 )
      {
        v18 = *(_QWORD *)(v15 + 496);
        if ( !v18 )
          goto LABEL_22;
        v17 = *(_QWORD *)(v18 + 40) == *((_QWORD *)v11 + 225);
      }
      else
      {
        v16 = *(_QWORD *)(v15 + 496);
        if ( !v16 )
          goto LABEL_16;
        v17 = *(_WORD *)(v16 + 100) == 3;
      }
      if ( !v17 )
        goto LABEL_16;
    }
LABEL_22:
    memset(v41, 0, sizeof(v41));
    v37 = 0LL;
    v38 = 0;
    if ( a2 == 25 )
    {
      if ( *((int *)v11 + 456) < 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v37, a1, 516);
        if ( a3 != 20 )
          goto LABEL_16;
        v41[0] = *(_OWORD *)v6;
        LODWORD(v41[1]) = *((_DWORD *)v6 + 4);
        *((_QWORD *)&v41[1] + 1) = &v37;
        v6 = (char *)v41;
        a3 = 32;
        v15 = *(_QWORD *)a1;
      }
      v19 = *(_QWORD *)(v15 + 496);
      if ( v19 && (*(_DWORD *)(v19 + 112) & 0x2000000) != 0 && (a3 == 20 || *((int *)v11 + 456) < 0) )
      {
        v20 = *(_DWORD *)(v15 + 2092);
        *(_DWORD *)v6 -= *(_DWORD *)(v15 + 2088);
        *((_DWORD *)v6 + 1) -= v20;
      }
    }
    if ( a2 - 256 <= 0x2FE || a2 == 8 && (unsigned int)(v32 - 256) <= 0x2FE )
    {
      v31 = DoFontManagement(a1, a2, a3, v6, a5, a6);
    }
    else
    {
      if ( a2 - 4119 > 1 && (a2 != 8 || (unsigned int)(v32 - 4119) > 1) )
      {
        if ( (unsigned int)XDCOBJ::bValidSurf(a1) && !a6 )
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 92LL) += v21;
        v25 = SURFACE::pSurfobj(*(SURFACE **)(*(_QWORD *)a1 + 496LL));
        if ( ((_DWORD)v11[10] & 0x20000) != 0 && a2 == 8 && v24 - 4352 <= v23 )
        {
          v40 = *(struct _RECTL *)(v22 + 1032);
          DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v22 + 48), &v40, 0LL);
          v27 = DeviceHdev;
          if ( DeviceHdev )
          {
            if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) == *((_QWORD *)v11 + 319) )
              v25 = SURFACE::pSurfobj(*((SURFACE **)DeviceHdev + 319));
            v11 = v27;
            v33 = v27;
          }
        }
        if ( *((_QWORD *)v11 + 360) )
        {
          if ( !v25 )
          {
            memset(v42, 0, 0x2B8uLL);
            v25 = SURFACE::pSurfobj((SURFACE *)v42);
            v25->dhpdev = *(DHPDEV *)(*(_QWORD *)a1 + 24LL);
            v25->hdev = *(HDEV *)(*(_QWORD *)a1 + 48LL);
            v28 = 1;
            v25->iType = 1;
            if ( a2 == 17 && (unsigned __int64)a3 >= 2 )
            {
              v34 = *(_WORD *)v6;
              *(_DWORD *)(*(_QWORD *)a1 + 2076LL) = v34;
              PDEVOBJ::Escape((PDEVOBJ *)&v33, v25, 0x11u, a3, v6, a5, a6);
LABEL_54:
              DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v39);
              return v28;
            }
            if ( a2 == 33 && (unsigned __int64)a3 >= 2 )
            {
              v29 = *(unsigned __int16 *)v6;
              v36 = v29;
              v17 = v29 == 0;
              v30 = *(_QWORD *)a1;
              if ( v17 )
                *(_DWORD *)(v30 + 36) &= ~0x400u;
              else
                *(_DWORD *)(v30 + 36) |= 0x400u;
              goto LABEL_54;
            }
          }
          v28 = PDEVOBJ::Escape((PDEVOBJ *)&v33, v25, a2, a3, v6, a5, a6);
          goto LABEL_54;
        }
        goto LABEL_64;
      }
      v31 = iCheckPassthroughImage(a1, (struct PDEVOBJ *)&v33, a2, a3, v6, a5, a6);
    }
    v12 = v31;
LABEL_64:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v39);
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
