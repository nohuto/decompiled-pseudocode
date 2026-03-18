/*
 * XREFs of ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C007E678
 * Callers:
 *     GreExtEscape @ 0x1C007E5DC (GreExtEscape.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003EF2C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0072B7C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C007E954 (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C007F24C (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C007F2CC (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C00803CC (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C0278AFC (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0278F08 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0279538 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C029FF20 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall GreExtEscapeInternal(
        struct DCOBJ *this,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        char *a6)
{
  char *v6; // r15
  unsigned int v7; // r12d
  __int64 v10; // rcx
  HDEV v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // r12
  struct _SURFOBJ *v20; // r14
  __int64 v21; // rdx
  unsigned int v22; // ebx
  unsigned int v23; // r9d
  unsigned int v25; // eax
  __int64 v26; // rax
  bool v27; // zf
  __int64 v28; // rax
  int v29; // ecx
  HDEV DeviceHdev; // rax
  __int64 v31; // r14
  int v32; // eax
  signed int v33; // [rsp+40h] [rbp-158h]
  int v34; // [rsp+44h] [rbp-154h]
  HDEV v35; // [rsp+50h] [rbp-148h] BYREF
  unsigned __int16 v36; // [rsp+58h] [rbp-140h]
  int v37; // [rsp+5Ch] [rbp-13Ch]
  int v38; // [rsp+60h] [rbp-138h]
  __int64 v39; // [rsp+68h] [rbp-130h] BYREF
  int v40; // [rsp+74h] [rbp-124h]
  _BYTE v41[80]; // [rsp+80h] [rbp-118h] BYREF
  struct _RECTL v42; // [rsp+D0h] [rbp-C8h] BYREF
  struct _SURFOBJ v43; // [rsp+E0h] [rbp-B8h] BYREF
  _OWORD v44[2]; // [rsp+130h] [rbp-68h] BYREF

  v6 = a4;
  v7 = a3;
  v33 = a3;
  v10 = *(_QWORD *)this;
  v11 = *(HDEV *)(v10 + 48);
  v35 = v11;
  v12 = 0;
  if ( !*((_DWORD *)v11 + 3) && a2 != 4354 )
    return 0LL;
  v13 = *((unsigned int *)v11 + 652);
  v34 = 0;
  if ( a2 == 8 )
  {
    if ( v7 < 4 )
      return 0LL;
    v34 = *(_DWORD *)a4;
    v37 = *(_DWORD *)a4;
    if ( (unsigned int)(v37 - 4352) <= 1 && (v13 & 8) != 0 )
      return 0LL;
LABEL_5:
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v41);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v41, this);
    if ( !(unsigned int)fBlockExtEscape(this) )
    {
      v14 = *(_QWORD *)this;
      if ( !*(_DWORD *)(*(_QWORD *)this + 32LL) )
      {
LABEL_9:
        memset(v44, 0, sizeof(v44));
        v39 = 0LL;
        v40 = 0;
        if ( a2 != 25 )
          goto LABEL_10;
        if ( *((int *)v11 + 456) >= 0 )
        {
LABEL_48:
          v28 = *(_QWORD *)(v14 + 496);
          if ( v28 && (*(_DWORD *)(v28 + 112) & 0x2000000) != 0 && (v7 == 20 || *((int *)v11 + 456) < 0) )
          {
            v29 = *(_DWORD *)(v14 + 2092);
            *(_DWORD *)v6 -= *(_DWORD *)(v14 + 2088);
            *((_DWORD *)v6 + 1) -= v29;
          }
LABEL_10:
          if ( a2 - 256 <= 0x2FE || a2 == 8 && (unsigned int)(v34 - 256) <= 0x2FE )
          {
            v25 = DoFontManagement(this, a2, v7, v6, a5, a6);
          }
          else
          {
            if ( a2 - 4119 > 1 && (a2 != 8 || (unsigned int)(v34 - 4119) > 1) )
            {
              if ( (unsigned int)XDCOBJ::bValidSurf(this) && !a6 )
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 496LL) + 92LL) += v16;
              v18 = *(_QWORD *)this;
              v19 = (*(_QWORD *)(*(_QWORD *)this + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 496LL) != 0LL);
              v20 = (struct _SURFOBJ *)v19;
              if ( ((_DWORD)v11[10] & 0x20000) != 0 && a2 == 8 && (v17 == 4353 || v17 == 4352) )
              {
                v42 = *(struct _RECTL *)(v18 + 1032);
                DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v18 + 48), &v42, 0LL);
                v20 = (struct _SURFOBJ *)v19;
                if ( DeviceHdev )
                {
                  if ( *(_QWORD *)(*(_QWORD *)this + 496LL) == *((_QWORD *)v11 + 319) )
                  {
                    v31 = *((_QWORD *)DeviceHdev + 319);
                    if ( v31 )
                      v20 = (struct _SURFOBJ *)(v31 + 24);
                    else
                      v20 = 0LL;
                  }
                  v11 = DeviceHdev;
                  v35 = DeviceHdev;
                }
              }
              if ( *((_QWORD *)v11 + 360) )
              {
                memset(&v43, 0, sizeof(v43));
                if ( v20 )
                {
                  v23 = v33;
                }
                else
                {
                  v21 = *(_QWORD *)this;
                  v43.dhpdev = *(DHPDEV *)(*(_QWORD *)this + 24LL);
                  v43.hdev = *(HDEV *)(v21 + 48);
                  v22 = 1;
                  v43.iType = 1;
                  v20 = &v43;
                  v23 = v33;
                  if ( a2 == 17 && (unsigned __int64)v33 >= 2 )
                  {
                    v36 = *(_WORD *)v6;
                    *(_DWORD *)(v21 + 2076) = v36;
                    PDEVOBJ::Escape((PDEVOBJ *)&v35, &v43, 0x11u, v33, v6, a5, a6);
                    goto LABEL_23;
                  }
                  if ( a2 == 33 && (unsigned __int64)v33 >= 2 )
                  {
                    v32 = *(unsigned __int16 *)v6;
                    v38 = v32;
                    if ( v32 )
                      *(_DWORD *)(v21 + 36) |= 0x400u;
                    else
                      *(_DWORD *)(v21 + 36) &= ~0x400u;
                    goto LABEL_23;
                  }
                }
                v22 = PDEVOBJ::Escape((PDEVOBJ *)&v35, v20, a2, v23, v6, a5, a6);
LABEL_23:
                DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v41);
                return v22;
              }
LABEL_26:
              DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v41);
              return v12;
            }
            v25 = iCheckPassthroughImage(this, (struct PDEVOBJ *)&v35, a2, v7, v6, a5, a6);
          }
          v12 = v25;
          goto LABEL_26;
        }
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v39, this, 0x204u);
        if ( v7 == 20 )
        {
          v44[0] = *(_OWORD *)v6;
          LODWORD(v44[1]) = *((_DWORD *)v6 + 4);
          *((_QWORD *)&v44[1] + 1) = &v39;
          v6 = (char *)v44;
          v7 = 32;
          v33 = 32;
          v14 = *(_QWORD *)this;
          goto LABEL_48;
        }
        goto LABEL_44;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v14 + 48) + 40LL) & 0x80u) == 0 )
      {
        v26 = *(_QWORD *)(v14 + 496);
        if ( !v26 )
          goto LABEL_44;
        v27 = *(_WORD *)(v26 + 100) == 3;
      }
      else
      {
        v15 = *(_QWORD *)(v14 + 496);
        if ( !v15 )
          goto LABEL_9;
        v27 = *(_QWORD *)(v15 + 40) == *((_QWORD *)v11 + 225);
      }
      if ( v27 )
        goto LABEL_9;
    }
LABEL_44:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v41);
    return 0LL;
  }
  if ( a2 - 4352 <= 1 )
  {
    if ( (v13 & 8) != 0 || *(_DWORD *)(v10 + 32) )
      return 0LL;
    return iOpenGLExtEscape(this, a2, v7, a4, a5, a6);
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
    return iWndObjSetupExtEscape(this, 0x1102u, v7, a4, a5, a6);
  }
}
