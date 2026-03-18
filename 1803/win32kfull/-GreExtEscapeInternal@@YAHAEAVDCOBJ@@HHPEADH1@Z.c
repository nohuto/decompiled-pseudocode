/*
 * XREFs of ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00F2E58
 * Callers:
 *     GreExtEscape @ 0x1C00F2DBC (GreExtEscape.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C008F108 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008F364 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C008F8E0 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C00CED98 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C00F3110 (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C011B090 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C02475B8 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0247998 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0247F88 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02768D4 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall GreExtEscapeInternal(
        struct DCOBJ *this,
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
  int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r15
  struct _SURFOBJ *v19; // r10
  __int64 v20; // rdx
  unsigned int v21; // ebx
  unsigned int v22; // r8d
  unsigned int v24; // eax
  bool v25; // zf
  int v26; // ecx
  __int64 v27; // rax
  int v28; // ecx
  HDEV DeviceHdev; // rax
  __int64 v30; // r10
  int v31; // eax
  int v32; // [rsp+40h] [rbp-158h]
  HDEV v33; // [rsp+50h] [rbp-148h] BYREF
  unsigned __int16 v34; // [rsp+58h] [rbp-140h]
  int v35; // [rsp+5Ch] [rbp-13Ch]
  int v36; // [rsp+60h] [rbp-138h]
  __int64 v37; // [rsp+68h] [rbp-130h] BYREF
  int v38; // [rsp+74h] [rbp-124h]
  _BYTE v39[80]; // [rsp+80h] [rbp-118h] BYREF
  struct _RECTL v40; // [rsp+D0h] [rbp-C8h] BYREF
  struct _SURFOBJ v41; // [rsp+E0h] [rbp-B8h] BYREF
  __int128 v42; // [rsp+130h] [rbp-68h] BYREF
  int v43; // [rsp+140h] [rbp-58h]
  __int64 *v44; // [rsp+148h] [rbp-50h]

  v6 = a4;
  v32 = a3;
  v10 = *(_QWORD *)this;
  v11 = *(HDEV *)(v10 + 48);
  v33 = v11;
  v12 = 0;
  if ( !*((_DWORD *)v11 + 3) && a2 != 4354 )
    return 0LL;
  v13 = *((unsigned int *)v11 + 650);
  v14 = 0;
  if ( a2 == 8 )
  {
    if ( a3 < 4 )
      return 0LL;
    v35 = *(_DWORD *)a4;
    v14 = v35;
    if ( (unsigned int)(v35 - 4352) <= 1 && (v13 & 8) != 0 )
      return 0LL;
LABEL_5:
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v39);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v39, this);
    if ( !(unsigned int)fBlockExtEscape(this) )
    {
      v15 = *(_QWORD *)this;
      if ( !*(_DWORD *)(*(_QWORD *)this + 32LL) )
      {
LABEL_9:
        v37 = 0LL;
        v38 = 0;
        if ( a2 != 25 )
          goto LABEL_10;
        if ( *((int *)v11 + 454) >= 0 )
        {
          v26 = v32;
          goto LABEL_49;
        }
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v37, this, 516);
        if ( v32 == 20 )
        {
          v42 = *(_OWORD *)v6;
          v43 = *((_DWORD *)v6 + 4);
          v44 = &v37;
          v6 = (char *)&v42;
          v26 = 32;
          v32 = 32;
          v15 = *(_QWORD *)this;
LABEL_49:
          v27 = *(_QWORD *)(v15 + 504);
          if ( v27 && (*(_DWORD *)(v27 + 112) & 0x2000000) != 0 && (v26 == 20 || *((int *)v11 + 454) < 0) )
          {
            v28 = *(_DWORD *)(v15 + 2500);
            *(_DWORD *)v6 -= *(_DWORD *)(v15 + 2496);
            *((_DWORD *)v6 + 1) -= v28;
          }
LABEL_10:
          if ( a2 - 256 <= 0x2FE || a2 == 8 && (unsigned int)(v14 - 256) <= 0x2FE )
          {
            v24 = DoFontManagement(this, a2, v32, v6, a5, a6);
          }
          else
          {
            if ( a2 - 4119 > 1 && (a2 != 8 || (unsigned int)(v14 - 4119) > 1) )
            {
              if ( (unsigned int)XDCOBJ::bValidSurf(this) && !a6 )
                ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 504LL) + 92LL);
              v17 = *(_QWORD *)this;
              v18 = (*(_QWORD *)(*(_QWORD *)this + 504LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 504LL) != 0LL);
              v19 = (struct _SURFOBJ *)v18;
              if ( ((_DWORD)v11[10] & 0x20000) != 0 && a2 == 8 && (v14 == 4353 || v14 == 4352) )
              {
                v40 = *(struct _RECTL *)(v17 + 1440);
                DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v17 + 48), &v40, 0LL);
                v19 = (struct _SURFOBJ *)v18;
                if ( DeviceHdev )
                {
                  if ( *(_QWORD *)(*(_QWORD *)this + 504LL) == *((_QWORD *)v11 + 318) )
                  {
                    v30 = *((_QWORD *)DeviceHdev + 318);
                    if ( v30 )
                      v19 = (struct _SURFOBJ *)(v30 + 24);
                    else
                      v19 = 0LL;
                  }
                  v11 = DeviceHdev;
                  v33 = DeviceHdev;
                }
              }
              if ( *((_QWORD *)v11 + 359) )
              {
                if ( v19 )
                {
                  v22 = v32;
                }
                else
                {
                  memset(&v41, 0, sizeof(v41));
                  v20 = *(_QWORD *)this;
                  v41.dhpdev = *(DHPDEV *)(*(_QWORD *)this + 24LL);
                  v41.hdev = *(HDEV *)(v20 + 48);
                  v21 = 1;
                  v41.iType = 1;
                  v19 = &v41;
                  v22 = v32;
                  if ( a2 == 17 && (unsigned __int64)v32 >= 2 )
                  {
                    v34 = *(_WORD *)v6;
                    *(_DWORD *)(v20 + 2484) = v34;
                    PDEVOBJ::Escape((PDEVOBJ *)&v33, &v41, 0x11u, v32, v6, a5, a6);
                    goto LABEL_23;
                  }
                  if ( a2 == 33 && (unsigned __int64)v32 >= 2 )
                  {
                    v31 = *(unsigned __int16 *)v6;
                    v36 = v31;
                    if ( v31 )
                      *(_DWORD *)(v20 + 36) |= 0x400u;
                    else
                      *(_DWORD *)(v20 + 36) &= ~0x400u;
                    goto LABEL_23;
                  }
                }
                v21 = PDEVOBJ::Escape((PDEVOBJ *)&v33, v19, a2, v22, v6, a5, a6);
LABEL_23:
                DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v39);
                return v21;
              }
LABEL_26:
              DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v39);
              return v12;
            }
            v24 = iCheckPassthroughImage(this, (struct PDEVOBJ *)&v33, a2, v32, v6, a5, a6);
          }
          v12 = v24;
          goto LABEL_26;
        }
        goto LABEL_44;
      }
      v16 = *(_QWORD *)(v15 + 504);
      if ( (*(_DWORD *)(*(_QWORD *)(v15 + 48) + 40LL) & 0x80u) == 0 )
      {
        if ( !v16 )
          goto LABEL_44;
        v25 = *(_WORD *)(v16 + 100) == 3;
      }
      else
      {
        if ( !v16 )
          goto LABEL_9;
        v25 = *(_QWORD *)(v16 + 40) == *((_QWORD *)v11 + 224);
      }
      if ( v25 )
        goto LABEL_9;
    }
LABEL_44:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v39);
    return 0LL;
  }
  if ( a2 - 4352 <= 1 )
  {
    if ( (v13 & 8) != 0 || *(_DWORD *)(v10 + 32) )
      return 0LL;
    return iOpenGLExtEscape(this, a2, a3, a4, a5, a6);
  }
  else
  {
    if ( a2 != 4354 )
    {
      if ( a2 == 3075 || a2 == 4124 && !(unsigned int)UserUnsafeIsCurrentProcessDwm(v10, 4354LL, v13) )
        return 0LL;
      goto LABEL_5;
    }
    if ( *(_DWORD *)(v10 + 32) )
      return 0LL;
    return iWndObjSetupExtEscape(this, 0x1102u, a3, a4, a5, a6);
  }
}
