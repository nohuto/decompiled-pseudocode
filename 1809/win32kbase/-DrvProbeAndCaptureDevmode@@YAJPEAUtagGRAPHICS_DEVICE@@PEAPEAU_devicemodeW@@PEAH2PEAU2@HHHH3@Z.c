/*
 * XREFs of ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C0052A70
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C003F640 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00496B8 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00548D8 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     ?AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z @ 0x1C00410F0 (-AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z.c)
 *     DrvBuildDevmodeList @ 0x1C00534C0 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C0053824 (DrvGetDisplayDriverParameters.c)
 *     ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x1C008ED24 (-GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall DrvProbeAndCaptureDevmode(
        struct tagGRAPHICS_DEVICE *a1,
        struct _devicemodeW **a2,
        int *a3,
        int *a4,
        struct _devicemodeW *Src,
        int a6,
        int a7,
        int a8,
        int a9,
        struct _devicemodeW *a10)
{
  unsigned int v12; // r14d
  const struct _devicemodeW *v13; // rsi
  struct _devicemodeW *v14; // r13
  struct _devicemodeW *v16; // rbx
  int v17; // eax
  struct _devicemodeW *v18; // rdi
  unsigned int dmSize; // eax
  unsigned int dmDriverExtra; // r13d
  unsigned int v21; // r12d
  struct _devicemodeW *v22; // rax
  DWORD dmFields; // ecx
  int v24; // eax
  struct tagGRAPHICS_DEVICE *v25; // r15
  const struct _devicemodeW *v26; // r10
  WCHAR *dmBitsPerPel; // rcx
  DWORD v28; // eax
  DWORD v29; // eax
  int v30; // edx
  DWORD dmDisplayFlags; // eax
  DWORD v32; // ecx
  char v33; // r8
  unsigned int dmDisplayOrientation; // eax
  DWORD v35; // ecx
  unsigned int dmDisplayFixedOutput; // eax
  LONG y; // eax
  unsigned int v38; // r12d
  struct _devicemodeW *v39; // rdi
  char *v40; // rdx
  struct _devicemodeW *v41; // r13
  struct _devicemodeW *v42; // r12
  int v43; // eax
  int v44; // r11d
  int v45; // eax
  int v46; // r10d
  int v47; // ebp
  unsigned int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rdx
  DWORD v51; // eax
  DWORD v52; // ecx
  struct _devicemodeW *v53; // rax
  DWORD v54; // r8d
  DWORD v55; // edx
  unsigned int v56; // r14d
  WORD dmLogPixels; // ax
  int v58; // ecx
  int v60; // r8d
  struct _devicemodeW *ClosestMode; // rcx
  int v62; // eax
  unsigned __int16 v63; // ax
  DWORD dmDisplayFrequency; // eax
  __int64 v65; // rax
  bool v66; // zf
  unsigned int v67; // ebp
  __int64 v68; // rcx
  DWORD *v69; // r15
  struct _devicemodeW *v70; // rcx
  _OWORD *v71; // rcx
  int v72; // ecx
  int v73; // [rsp+20h] [rbp-98h]
  int v74; // [rsp+24h] [rbp-94h]
  DWORD dmPanningHeight; // [rsp+28h] [rbp-90h]
  DWORD v76; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v77; // [rsp+30h] [rbp-88h]
  LONG x; // [rsp+34h] [rbp-84h]
  LONG v79; // [rsp+38h] [rbp-80h]
  DWORD dmPanningWidth; // [rsp+3Ch] [rbp-7Ch]
  BOOL v81; // [rsp+40h] [rbp-78h]
  int v82; // [rsp+44h] [rbp-74h]
  int v83; // [rsp+48h] [rbp-70h]
  struct _devicemodeW *v84; // [rsp+50h] [rbp-68h]
  __int64 v85; // [rsp+58h] [rbp-60h]
  struct _devicemodeW *v86; // [rsp+60h] [rbp-58h]
  unsigned int v89; // [rsp+D0h] [rbp+18h]
  unsigned int Srca; // [rsp+E0h] [rbp+28h]
  unsigned int Srcb; // [rsp+E0h] [rbp+28h]

  v76 = 0;
  dmPanningWidth = 0;
  dmPanningHeight = 0;
  v12 = -1073741823;
  v81 = 0;
  v13 = 0LL;
  v86 = 0LL;
  v14 = 0LL;
  *a2 = 0LL;
  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !Src )
    return 0;
  v16 = (struct _devicemodeW *)PALLOCMEM2(0x100DBuLL, 1986356295LL, 0);
  if ( v16 )
  {
    v17 = *((_DWORD *)a1 + 40);
    v18 = a10;
    if ( (v17 & 0x800000) != 0 && a10 )
    {
      if ( a10->dmSize + a10->dmDriverExtra == 244 )
        v14 = a10;
      v86 = v14;
    }
    dmSize = Src->dmSize;
    dmDriverExtra = Src->dmDriverExtra;
    Srca = dmSize;
    if ( dmSize < 0xBC )
      goto LABEL_129;
    v21 = dmSize + dmDriverExtra;
    v22 = (struct _devicemodeW *)PALLOCMEM2(dmSize + dmDriverExtra, 1986356295LL, 0);
    v13 = v22;
    if ( !v22 )
      goto LABEL_129;
    memmove(v22, Src, v21);
    dmFields = v13->dmFields;
    v13->dmSize = Srca;
    v13->dmDriverExtra = dmDriverExtra;
    v24 = 1;
    if ( dmFields )
      v24 = a8;
    v83 = v24;
    if ( (dmFields & 0x80020) == 0x80020 && !v13->dmPelsWidth && (dmFields & 0x100000) != 0 && !v13->dmPelsHeight )
    {
      *a3 = 1;
      v12 = 0;
LABEL_129:
      Win32FreePool((__int64)v16);
      if ( v13 )
        Win32FreePool((__int64)v13);
      return v12;
    }
    v84 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 1986356295LL, 0);
    if ( !v84 )
      goto LABEL_129;
    memset(v16, 0, sizeof(struct _devicemodeW));
    v25 = a1;
    *(_DWORD *)&v16->dmSize = -8739;
    if ( a6 )
    {
      DrvGetDisplayDriverParameters(a1, v16, 1LL, v18);
      v26 = v84;
    }
    else
    {
      if ( (int)DrvGetDisplayDriverParameters(a1, v16, 0LL, v18) < 0 )
        *(_DWORD *)&v16->dmSize = 220;
      v26 = v84;
      dmBitsPerPel = &v16->dmFormName[13];
      *(_OWORD *)v84->dmDeviceName = *(_OWORD *)v16->dmDeviceName;
      *(_OWORD *)&v84->dmDeviceName[8] = *(_OWORD *)&v16->dmDeviceName[8];
      *(_OWORD *)&v84->dmDeviceName[16] = *(_OWORD *)&v16->dmDeviceName[16];
      *(_OWORD *)&v84->dmDeviceName[24] = *(_OWORD *)&v16->dmDeviceName[24];
      *(_OWORD *)&v84->dmSpecVersion = *(_OWORD *)&v16->dmSpecVersion;
      *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&v84->76 + 4) = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&v16->76 + 4);
      *(_OWORD *)&v84->dmYResolution = *(_OWORD *)&v16->dmYResolution;
      *(_OWORD *)&v84->dmFormName[5] = *(_OWORD *)&v16->dmFormName[5];
      *(_OWORD *)&v84->dmFormName[13] = *(_OWORD *)&v16->dmFormName[13];
      *(_OWORD *)&v84->dmFormName[21] = *(_OWORD *)&v16->dmFormName[21];
      *(_OWORD *)&v84->dmFormName[29] = *(_OWORD *)&v16->dmFormName[29];
      *(_OWORD *)&v84->dmPelsHeight = *(_OWORD *)&v16->dmPelsHeight;
      *(_OWORD *)&v84->dmICMIntent = *(_OWORD *)&v16->dmICMIntent;
      *(_QWORD *)&v84->dmReserved2 = *(_QWORD *)&v16->dmReserved2;
      v84->dmPanningHeight = v16->dmPanningHeight;
      v28 = v13->dmFields;
      if ( (v28 & 0x40000) != 0 )
      {
        dmBitsPerPel = (WCHAR *)v13->dmBitsPerPel;
        if ( (_DWORD)dmBitsPerPel )
        {
          v16->dmBitsPerPel = (unsigned int)dmBitsPerPel;
          v28 = v13->dmFields;
        }
      }
      if ( (v28 & 0x80000) != 0 )
      {
        dmBitsPerPel = (WCHAR *)v13->dmPelsWidth;
        if ( (_DWORD)dmBitsPerPel )
        {
          v16->dmPelsWidth = (unsigned int)dmBitsPerPel;
          v28 = v13->dmFields;
        }
      }
      if ( (v28 & 0x100000) != 0 )
      {
        dmBitsPerPel = (WCHAR *)v13->dmPelsHeight;
        if ( (_DWORD)dmBitsPerPel )
        {
          v16->dmPelsHeight = (unsigned int)dmBitsPerPel;
          v28 = v13->dmFields;
        }
      }
      if ( (v28 & 0x400000) != 0 && (v29 = v13->dmDisplayFrequency) != 0 )
      {
        v16->dmDisplayFrequency = v29;
      }
      else if ( v13->dmPelsWidth || v13->dmPelsHeight )
      {
        dmDisplayFrequency = v16->dmDisplayFrequency;
        v16->dmDisplayFrequency = 0;
        v76 = dmDisplayFrequency;
        if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 && v21 == 244 )
        {
          v65 = WdLogNewEntry5_WdWarning(dmBitsPerPel);
          WdLogEvent5_WdWarning(v65);
          v26 = v84;
        }
      }
    }
    v30 = 0;
    if ( (v13->dmFields & 0x200000) != 0 )
    {
      dmDisplayFlags = v13->dmDisplayFlags;
      v16->dmDisplayFlags = dmDisplayFlags;
      LOBYTE(v30) = (dmDisplayFlags & 0xFFFFFFF9) != 0;
      a8 = 0;
    }
    else if ( (v16->dmFields & 0x200000) != 0 )
    {
      v16->dmDisplayFlags &= 6u;
    }
    v32 = v13->dmFields;
    if ( (v32 & 0x18000000) == 0x18000000 )
    {
      if ( Srca < 0xDC )
      {
        v32 &= 0xE7FFFFFF;
        v13->dmFields = v32;
      }
      else
      {
        dmPanningWidth = v13->dmPanningWidth;
        dmPanningHeight = v13->dmPanningHeight;
        if ( dmPanningWidth > v16->dmPelsWidth || v13->dmPanningHeight > v16->dmPelsHeight )
        {
          v30 = 1;
          dmPanningHeight = v13->dmPanningHeight;
        }
      }
      v33 = v32;
    }
    else
    {
      v33 = v32;
      if ( (v16->dmFields & 0x18000000) == 0x18000000
        && v16->dmPanningHeight < v16->dmPelsHeight
        && v16->dmPanningWidth < v16->dmPelsWidth )
      {
        dmPanningWidth = v16->dmPanningWidth;
        dmPanningHeight = v16->dmPanningHeight;
      }
    }
    if ( v33 < 0 )
    {
      dmDisplayOrientation = v13->dmDisplayOrientation;
      v16->dmDisplayOrientation = dmDisplayOrientation;
      if ( dmDisplayOrientation > 3 )
        v30 = 1;
    }
    v85 = 1LL;
    if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
    {
      v35 = v13->dmFields;
      v85 = 1LL;
      if ( (v35 & 0x20400000) == 0x400000 )
      {
        v13->dmDisplayFixedOutput = 0;
        v13->dmFields = v35 | 0x20000000;
        v85 = 0LL;
      }
    }
    if ( (v13->dmFields & 0x20000000) != 0 )
    {
      dmDisplayFixedOutput = v13->dmDisplayFixedOutput;
      v16->dmDisplayFixedOutput = dmDisplayFixedOutput;
      if ( dmDisplayFixedOutput )
      {
        v73 = 1;
        if ( dmDisplayFixedOutput > 2 )
          v30 = 1;
      }
      else
      {
        v73 = 3;
      }
      if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
        v16->dmFields |= 0x20000000u;
    }
    else
    {
      v60 = 0;
      if ( (v16->dmFields & 0x20000000) != 0 )
        v60 = 2;
      v73 = v60;
    }
    if ( v86 )
      v81 = v16->dmDisplayFixedOutput == 0;
    if ( (v13->dmFields & 0x20) != 0 )
    {
      x = v13->dmPosition.x;
      y = v13->dmPosition.y;
      v74 = 1;
    }
    else
    {
      v74 = v16->dmFields & 0x20;
      x = v16->dmPosition.x;
      y = v16->dmPosition.y;
    }
    v79 = y;
    if ( v30 == 1 )
      goto LABEL_128;
    v77 = dmDriverExtra;
    v38 = dmDriverExtra;
    if ( !dmDriverExtra
      && ((*((_DWORD *)a1 + 40) & 0x800000) == 0
       || !v13->dmPelsWidth && !v13->dmPelsHeight
       || AreEquivalentDevModes(v13, v26)) )
    {
      v38 = v16->dmDriverExtra;
      v77 = v38;
    }
    v39 = (struct _devicemodeW *)PALLOCMEM2(v38 + 220, 1986356295LL, 1);
    if ( !v39 )
      goto LABEL_128;
    if ( v38 )
    {
      if ( dmDriverExtra )
      {
        v40 = (char *)v13 + Srca;
        goto LABEL_62;
      }
      if ( v16->dmDriverExtra )
      {
        v40 = (char *)v16 + v16->dmSize;
LABEL_62:
        memmove(&v39[1], v40, v38);
      }
    }
    v82 = 0;
    v41 = 0LL;
    DrvBuildDevmodeList(a1);
    v42 = (struct _devicemodeW *)*((_QWORD *)a1 + 22);
    if ( v16->dmBitsPerPel || v16->dmPelsWidth || v16->dmPelsHeight || v16->dmDisplayOrientation )
    {
      v43 = *((_DWORD *)a1 + 40);
      if ( (v43 & 8) != 0 && !*((_DWORD *)a1 + 46) )
      {
        v44 = 0;
        v41 = v16;
        goto LABEL_68;
      }
      if ( a9
        && (v43 & 0x800000) != 0
        && v16->dmDriverExtra + v16->dmSize == 244
        && v13->dmBitsPerPel != 4
        && v16->dmDisplayFrequency )
      {
        v41 = v16;
        if ( *((_DWORD *)a1 + 47) )
        {
          v71 = *(_OWORD **)(*((_QWORD *)a1 + 24) + 8LL);
          if ( v71 )
          {
            *(_OWORD *)v16->dmDeviceName = *v71;
            *(_OWORD *)&v16->dmDeviceName[8] = v71[1];
            *(_OWORD *)&v16->dmDeviceName[16] = v71[2];
            *(_OWORD *)&v16->dmDeviceName[24] = v71[3];
          }
        }
        v82 = 1;
        v44 = 2;
        v45 = 0;
        goto LABEL_69;
      }
      if ( v83 )
      {
        ClosestMode = GetClosestMode(a1, v16, a7, 1);
        if ( ClosestMode || (ClosestMode = GetClosestMode(a1, v16, a7, 0)) != 0LL )
        {
          v16->dmBitsPerPel = ClosestMode->dmBitsPerPel;
          v16->dmPelsWidth = ClosestMode->dmPelsWidth;
          v16->dmPelsHeight = ClosestMode->dmPelsHeight;
          v16->dmDisplayFrequency = ClosestMode->dmDisplayFrequency;
          v16->dmDisplayOrientation = ClosestMode->dmDisplayOrientation;
          v16->dmDisplayFixedOutput = ClosestMode->dmDisplayFixedOutput;
          v16->dmDisplayFlags = ClosestMode->dmDisplayFlags;
        }
      }
    }
    else
    {
      v62 = *((_DWORD *)a1 + 40);
      if ( (v62 & 0x6000000) != 0 )
      {
        v44 = 0;
        if ( v42 )
        {
          v16->dmBitsPerPel = v42->dmBitsPerPel;
          v16->dmPelsWidth = *(_DWORD *)(*((_QWORD *)a1 + 22) + 172LL);
          v16->dmPelsHeight = *(_DWORD *)(*((_QWORD *)a1 + 22) + 176LL);
          v16->dmDisplayFrequency = *(_DWORD *)(*((_QWORD *)a1 + 22) + 184LL);
          v16->dmDisplayOrientation = *(_DWORD *)(*((_QWORD *)a1 + 22) + 84LL);
          v16->dmDisplayFixedOutput = *(_DWORD *)(*((_QWORD *)a1 + 22) + 88LL);
          v16->dmDisplayFlags = *(_DWORD *)(*((_QWORD *)a1 + 22) + 180LL);
        }
        goto LABEL_68;
      }
      if ( (v62 & 8) != 0 )
      {
        v12 = *((_DWORD *)a1 + 46) != 0 ? -1073741823 : -1073741776;
      }
      else
      {
        v66 = gbBaseVideo == 0;
        v16->dmBitsPerPel = 0;
        v67 = !v66;
        v68 = 8LL * !v66;
        if ( v83 )
        {
          v69 = (DWORD *)((char *)&unk_1C01A5D40 + v68 + 4);
          do
          {
            v16->dmPelsWidth = *(v69 - 1);
            v16->dmPelsHeight = *v69;
            v70 = GetClosestMode(a1, v16, a7, 1);
            if ( (v70 || (v70 = GetClosestMode(a1, v16, a7, 0)) != 0LL) && v70->dmBitsPerPel > 0x10 )
              break;
            ++v67;
            v69 += 2;
          }
          while ( v67 < 3 );
          v12 = -1073741823;
          v25 = a1;
          v44 = 0;
          if ( v70 )
          {
            v16->dmBitsPerPel = v70->dmBitsPerPel;
            v16->dmPelsWidth = v70->dmPelsWidth;
            v16->dmPelsHeight = v70->dmPelsHeight;
            v16->dmDisplayFrequency = v70->dmDisplayFrequency;
            v16->dmDisplayOrientation = v70->dmDisplayOrientation;
            v16->dmDisplayFixedOutput = v70->dmDisplayFixedOutput;
            v16->dmDisplayFlags = v70->dmDisplayFlags;
          }
          goto LABEL_68;
        }
        v16->dmPelsWidth = *(_DWORD *)((char *)&unk_1C01A5D40 + v68);
        v16->dmPelsHeight = *(_DWORD *)((char *)&unk_1C01A5D40 + v68 + 4);
      }
    }
    v44 = 0;
LABEL_68:
    v45 = 1;
LABEL_69:
    v46 = v44;
    v47 = v44;
    if ( v45 )
    {
      v48 = 0;
      Srcb = 0;
      v89 = *((_DWORD *)v25 + 47);
      if ( v89 )
      {
        do
        {
          v49 = *((_QWORD *)v25 + 24);
          v50 = v48;
          if ( a7 && *(_DWORD *)(v49 + 16LL * v48) )
            goto LABEL_76;
          v51 = v16->dmBitsPerPel;
          v42 = *(struct _devicemodeW **)(v49 + 16 * v50 + 8);
          if ( v51 )
          {
            if ( v51 != v42->dmBitsPerPel )
              goto LABEL_76;
          }
          if ( v16->dmPelsWidth != v42->dmPelsWidth )
            goto LABEL_76;
          if ( v16->dmPelsHeight != v42->dmPelsHeight )
            goto LABEL_76;
          v52 = v42->dmDisplayOrientation;
          if ( v16->dmDisplayOrientation != v52
            || v85 && v16->dmDisplayFixedOutput != v42->dmDisplayFixedOutput && (v73 == 1 || v46 == 2 && v44 == 2) )
          {
            goto LABEL_76;
          }
          v53 = v42;
          if ( v41 )
            v53 = v41;
          v41 = v53;
          if ( !v44 )
          {
            if ( v52 )
              goto LABEL_88;
            v41 = v42;
            v44 = 1;
            v46 = 0;
            v47 = 0;
          }
          if ( v44 != 2 )
          {
LABEL_88:
            v41 = v42;
            v44 = 2;
            v46 = 0;
            v47 = 0;
          }
          if ( v46 != 2 && (v16->dmDisplayFixedOutput == v42->dmDisplayFixedOutput || !v85) )
          {
            v41 = v42;
            v46 = 2;
            v47 = 0;
          }
          if ( v47 )
            goto LABEL_96;
          if ( v42->dmDisplayFrequency == 60 && v42->dmDisplayFlags == v16->dmDisplayFlags )
          {
            v41 = v42;
            v47 = 1;
LABEL_96:
            if ( v47 == 2 )
              goto LABEL_76;
          }
          v54 = v42->dmDisplayFrequency;
          if ( v54 == 1 && v16->dmDisplayFrequency == 64 && v42->dmDisplayFlags == v16->dmDisplayFlags )
          {
            v41 = v42;
            v47 = 2;
          }
          if ( v47 != 2 )
          {
            v55 = v16->dmDisplayFrequency;
            if ( (v54 == v55
               || (*((_DWORD *)v25 + 40) & 0x800000) != 0
               && v16->dmDriverExtra + v16->dmSize == 244
               && !v55
               && v76 == v54)
              && v42->dmDisplayFlags == v16->dmDisplayFlags )
            {
              v47 = 2;
              v41 = v42;
              if ( v46 == 2 || !v16->dmDisplayFixedOutput && (*((_DWORD *)v25 + 40) & 0x800000) == 0 )
              {
                v82 = 1;
                break;
              }
            }
          }
LABEL_76:
          v48 = Srcb + 1;
          Srcb = v48;
        }
        while ( v48 < v89 );
      }
    }
    if ( v41 )
    {
      v56 = v77;
      if ( (*((_DWORD *)v25 + 40) & 0x800000) != 0
        && v77 + v41->dmSize == 244
        && !v16->dmDisplayFrequency
        && v76 != v42->dmDisplayFrequency )
      {
        v56 = 0;
      }
      if ( a8 && v47 != 2 && v41->dmDisplayFrequency == v16->dmDisplayFrequency )
        v47 = 2;
      if ( (*((_DWORD *)v25 + 40) & 0x800000) != 0 && v44 == 2 && v46 == 2 && (v73 & 0xFFFFFFFD) == 0 )
        v47 = 2;
      memmove(v39, v41, v41->dmSize);
      v39->dmDriverExtra = v56;
      if ( !gdmLogPixels )
      {
        GetDpiSetting(1LL, &a8);
        v63 = a8;
        v16->dmLogPixels = a8;
        gdmLogPixels = v63;
      }
      dmLogPixels = v16->dmLogPixels;
      v58 = v39->dmFields | 0x18220000;
      v39->dmFields = v58;
      v39->dmLogPixels = dmLogPixels;
      if ( (*((_DWORD *)v25 + 40) & 0x4000000) != 0 )
      {
        if ( !v74 )
        {
LABEL_118:
          v39->dmPanningWidth = dmPanningWidth;
          v39->dmPanningHeight = dmPanningHeight;
          if ( (*((_DWORD *)v25 + 40) & 0x800000) != 0 && v56 + v39->dmSize == 244 )
            ((void (__fastcall *)(struct _devicemodeW *, struct _devicemodeW *))qword_1C01CD918)(v39, v39);
          if ( v86 )
          {
            if ( *(_DWORD *)&v86[1].dmDeviceName[6] )
            {
              v72 = v39->dmFields | 0x2000000;
              v39->dmFields = v72;
              v39->dmMediaType = *(_DWORD *)&v86[1].dmDeviceName[6];
              if ( v81 )
              {
                v39->dmFields = v72 | 0x4000000;
                v39->dmDisplayFixedOutput = *(_DWORD *)&v86[1].dmDeviceName[8];
              }
            }
          }
          if ( a4 && v41->dmSize + v41->dmDriverExtra == 244 && (*(_DWORD *)&v41[1].dmDeviceName[10] & 0x20) != 0 )
            *a4 = 1;
          *a2 = v39;
          if ( v82 || v47 == 2 )
          {
            v12 = 0;
          }
          else if ( v16->dmDisplayFrequency )
          {
            v12 = -1073741811;
          }
          else
          {
            v12 = 1073741839;
          }
          goto LABEL_128;
        }
        v39->dmFields = v58 | 0x20;
      }
      else
      {
        v39->dmFields = v58 | (v74 != 0 ? 0x20 : 0);
      }
      v39->dmPosition.x = x;
      v39->dmPosition.y = v79;
      goto LABEL_118;
    }
    Win32FreePool((__int64)v39);
LABEL_128:
    Win32FreePool((__int64)v84);
    goto LABEL_129;
  }
  return v12;
}
