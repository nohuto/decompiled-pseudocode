/*
 * XREFs of DrvBuildDevmodeList @ 0x1C00534C0
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C00144F0 (DrvEnumDisplaySettings.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C0052A70 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0051280 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C0053D54 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C0056A30 (DrvGetDisplayDriverNames.c)
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C00572C0 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C0095728 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

void __fastcall DrvBuildDevmodeList(struct tagGRAPHICS_DEVICE *a1, int a2, int a3)
{
  int v3; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int *DisplayDriverNames; // rax
  unsigned int *v8; // rdi
  unsigned int v9; // esi
  unsigned int DriverModes; // eax
  void *v11; // r14
  size_t v12; // r15
  char *v13; // rax
  char *v14; // rbp
  __int64 v15; // rcx
  unsigned int v16; // r8d
  unsigned int v17; // edi
  unsigned int i; // r9d
  void *v19; // rax
  unsigned int v20; // r8d
  unsigned int v21; // esi
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r11
  int v28; // ebp
  unsigned int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rcx
  unsigned int v32; // r10d
  __int64 v33; // r9
  int v34; // [rsp+20h] [rbp-38h]
  void *Src; // [rsp+60h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a1 + 40);
  if ( (v3 & 0x4000000) != 0 )
    goto LABEL_9;
  if ( (v3 & 0x800000) != 0 && *((_DWORD *)a1 + 46) && *((_QWORD *)a1 + 22) )
  {
    if ( a3 && !a2 )
      goto LABEL_14;
    if ( (int)((__int64 (__fastcall *)(char *, _QWORD, void **))qword_1C01CD998)(
                (char *)a1 + 248,
                *((unsigned int *)a1 + 64),
                &Src) >= 0 )
    {
      if ( *((void **)a1 + 21) == Src )
        goto LABEL_14;
      *((_QWORD *)a1 + 21) = Src;
      goto LABEL_9;
    }
    a2 = 1;
  }
  if ( !a2 )
    goto LABEL_14;
LABEL_9:
  if ( *((_DWORD *)a1 + 46) )
  {
    v5 = *((_QWORD *)a1 + 22);
    if ( v5 )
    {
      Win32FreePool(v5);
      v6 = *((_QWORD *)a1 + 24);
      *((_QWORD *)a1 + 22) = 0LL;
      *((_DWORD *)a1 + 46) = 0;
      if ( v6 )
      {
        Win32FreePool(v6);
        *((_QWORD *)a1 + 24) = 0LL;
      }
    }
LABEL_14:
    if ( *((_DWORD *)a1 + 46) )
      return;
  }
  if ( *((_QWORD *)a1 + 22) )
    return;
  *((_DWORD *)a1 + 47) = 0;
  DisplayDriverNames = (unsigned int *)DrvGetDisplayDriverNames(a1);
  v8 = DisplayDriverNames;
  if ( DisplayDriverNames )
  {
    v9 = 0;
    if ( *DisplayDriverNames )
    {
      do
      {
        DriverModes = ldevGetDriverModes(
                        a1,
                        *(const unsigned __int16 **)&v8[4 * v9 + 4],
                        *(void **)&v8[4 * v9 + 2],
                        (struct _devicemodeW **)&Src);
        v11 = Src;
        v12 = DriverModes;
        if ( DriverModes )
        {
          v13 = (char *)PALLOCMEM2(DriverModes + *((_DWORD *)a1 + 46), 1936876615LL, 0);
          v14 = v13;
          if ( v13 )
          {
            v15 = *((unsigned int *)a1 + 46);
            if ( (_DWORD)v15 )
            {
              memmove(v13, *((const void **)a1 + 22), *((unsigned int *)a1 + 46));
              Win32FreePool(*((_QWORD *)a1 + 22));
              v15 = *((unsigned int *)a1 + 46);
            }
            memmove(&v14[v15], v11, v12);
            *((_DWORD *)a1 + 46) += v12;
            *((_QWORD *)a1 + 22) = v14;
          }
        }
        if ( v11 )
          Win32FreePool((__int64)v11);
        ++v9;
      }
      while ( v9 < *v8 );
    }
    Win32FreePool((__int64)v8);
  }
  v16 = *((_DWORD *)a1 + 46);
  if ( !v16 && !*((_QWORD *)a1 + 22) )
  {
LABEL_53:
    DrvLogDisplayDriverEvent(2LL);
    return;
  }
  v17 = 0;
  for ( i = 0;
        i < v16;
        i += *(unsigned __int16 *)(i + *((_QWORD *)a1 + 22) + 70LL)
           + *(unsigned __int16 *)(i + *((_QWORD *)a1 + 22) + 68LL) )
  {
    ++v17;
  }
  v19 = PALLOCMEM2(16 * v17, 1936876615LL, 1);
  *((_QWORD *)a1 + 24) = v19;
  if ( !v19 )
  {
    v31 = *((_QWORD *)a1 + 22);
    *((_DWORD *)a1 + 46) = 0;
    Win32FreePool(v31);
    *((_QWORD *)a1 + 22) = 0LL;
    goto LABEL_53;
  }
  v20 = 0;
  *((_DWORD *)a1 + 47) = v17;
  v21 = 0;
  if ( !*((_DWORD *)a1 + 46) )
    goto LABEL_38;
  do
  {
    v22 = *((_QWORD *)a1 + 22) + v21;
    v23 = *(_DWORD *)(v22 + 72);
    if ( (v23 & 0x80u) == 0 )
    {
      v23 |= 0x80u;
      *(_DWORD *)(v22 + 72) = v23;
      v24 = v23;
    }
    else
    {
      v24 = *(_DWORD *)(v22 + 72);
      if ( *(_DWORD *)(v22 + 84) <= 3u )
        goto LABEL_34;
    }
    *(_DWORD *)(v22 + 84) = 0;
LABEL_34:
    if ( (v24 & 0x20000000) == 0 )
      goto LABEL_35;
    if ( (unsigned int)(*(_DWORD *)(v22 + 88) - 1) > 1 )
    {
      *(_DWORD *)(v22 + 72) = v23 & 0xDFFFFFFF;
LABEL_35:
      *(_DWORD *)(v22 + 88) = 0;
    }
    v25 = v20++;
    v25 *= 2LL;
    *(_DWORD *)(*((_QWORD *)a1 + 24) + 8 * v25) = 0;
    *(_QWORD *)(*((_QWORD *)a1 + 24) + 8 * v25 + 8) = v22;
    v21 += *(unsigned __int16 *)(v22 + 70) + *(unsigned __int16 *)(v22 + 68);
  }
  while ( v21 < *((_DWORD *)a1 + 46) );
  v17 = *((_DWORD *)a1 + 47);
LABEL_38:
  v26 = 1LL;
  if ( v17 )
  {
    do
    {
      v27 = *((_QWORD *)a1 + 24);
      v28 = v26 - 1;
      v29 = v17;
      v30 = *(_QWORD *)(v27 + 16LL * (unsigned int)(v26 - 1) + 8);
      if ( *(_DWORD *)(v30 + 184) == 1 )
      {
        v32 = 1;
        if ( v17 )
        {
          while ( 1 )
          {
            if ( v32 != (_DWORD)v26 )
            {
              v33 = *(_QWORD *)(v27 + 16LL * (v32 - 1) + 8);
              if ( *(_DWORD *)(v30 + 168) == *(_DWORD *)(v33 + 168)
                && *(_DWORD *)(v30 + 172) == *(_DWORD *)(v33 + 172)
                && *(_DWORD *)(v30 + 176) == *(_DWORD *)(v33 + 176)
                && ((*(_BYTE *)(v30 + 180) ^ *(_BYTE *)(v33 + 180)) & 4) == 0
                && *(_DWORD *)(v30 + 84) == *(_DWORD *)(v33 + 84)
                && *(_DWORD *)(v30 + 88) == *(_DWORD *)(v33 + 88) )
              {
                break;
              }
            }
            v29 = *((_DWORD *)a1 + 47);
            ++v32;
            v17 = v29;
            if ( v32 > v29 )
              goto LABEL_40;
          }
          if ( v17 > (unsigned int)v26 )
          {
            memmove(
              (void *)(v27 + 16LL * (unsigned int)(v26 - 1)),
              (const void *)(v27 + 16 * v26),
              16LL * (v17 - (unsigned int)v26));
            v17 = *((_DWORD *)a1 + 47);
          }
          v29 = v17 - 1;
          LODWORD(v26) = v28;
          *((_DWORD *)a1 + 47) = v17 - 1;
        }
      }
LABEL_40:
      v26 = (unsigned int)(v26 + 1);
      v17 = v29;
    }
    while ( (unsigned int)v26 <= v29 );
  }
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_RemoveGdiModePruning__private_propertyCache,
    17015447LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0193408,
    1,
    v34);
  if ( (*((_DWORD *)a1 + 40) & 0x6000008) == 0 )
    v21 = PruneModesByDisplayDeviceCaps(a1, *((_DWORD *)a1 + 47), *((struct tagDEVMODEMARK **)a1 + 24));
  if ( !v21 )
    goto LABEL_53;
}
