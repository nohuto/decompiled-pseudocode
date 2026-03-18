/*
 * XREFs of DrvBuildDevmodeList @ 0x1C00507C0
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C0043200 (DrvEnumDisplaySettings.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C004FF68 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C0052060 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C0052E1C (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C00533C0 (DrvGetDisplayDriverNames.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C00CFE64 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 */

int __fastcall DrvBuildDevmodeList(struct tagGRAPHICS_DEVICE *a1, int a2, int a3)
{
  void *v3; // rax
  unsigned int *DisplayDriverNames; // rax
  __int64 v6; // r8
  unsigned int *v7; // rdi
  unsigned int v8; // esi
  unsigned int DriverModes; // eax
  void *v10; // r14
  size_t v11; // r15
  char *v12; // rax
  char *v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // edi
  unsigned int i; // r8d
  unsigned int v18; // r14d
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // esi
  unsigned int v23; // ebp
  __int64 v24; // r11
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // r10d
  __int64 v29; // r9
  void *Src; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(v3) = *((_DWORD *)a1 + 40);
  if ( ((unsigned int)v3 & 0x4000000) != 0 )
    goto LABEL_46;
  if ( ((unsigned int)v3 & 0x800000) != 0 && *((_DWORD *)a1 + 46) && *((_QWORD *)a1 + 22) )
  {
    if ( a3 && !a2 )
      goto LABEL_8;
    LODWORD(v3) = ((__int64 (__fastcall *)(char *, _QWORD, void **))qword_1C01A1AF8)(
                    (char *)a1 + 248,
                    *((unsigned int *)a1 + 64),
                    &Src);
    if ( (int)v3 >= 0 )
    {
      LODWORD(v3) = (_DWORD)Src;
      if ( *((void **)a1 + 21) == Src )
        goto LABEL_8;
      *((_QWORD *)a1 + 21) = Src;
      goto LABEL_46;
    }
    a2 = 1;
  }
  if ( !a2 )
    goto LABEL_8;
LABEL_46:
  if ( *((_DWORD *)a1 + 46) )
  {
    v25 = *((_QWORD *)a1 + 22);
    if ( v25 )
    {
      LODWORD(v3) = Win32FreePool(v25);
      v26 = *((_QWORD *)a1 + 24);
      *((_QWORD *)a1 + 22) = 0LL;
      *((_DWORD *)a1 + 46) = 0;
      if ( v26 )
      {
        LODWORD(v3) = Win32FreePool(v26);
        *((_QWORD *)a1 + 24) = 0LL;
      }
    }
LABEL_8:
    if ( *((_DWORD *)a1 + 46) )
      return (int)v3;
  }
  if ( *((_QWORD *)a1 + 22) )
    return (int)v3;
  *((_DWORD *)a1 + 47) = 0;
  DisplayDriverNames = (unsigned int *)DrvGetDisplayDriverNames(a1);
  v7 = DisplayDriverNames;
  if ( DisplayDriverNames )
  {
    v8 = 0;
    if ( *DisplayDriverNames )
    {
      do
      {
        DriverModes = ldevGetDriverModes(
                        a1,
                        *(const unsigned __int16 **)&v7[4 * v8 + 4],
                        *(void **)&v7[4 * v8 + 2],
                        (struct _devicemodeW **)&Src);
        v10 = Src;
        v11 = DriverModes;
        if ( DriverModes )
        {
          v12 = (char *)PALLOCMEM2(DriverModes + *((_DWORD *)a1 + 46), 0x73726447u, 0);
          v13 = v12;
          if ( v12 )
          {
            v14 = *((unsigned int *)a1 + 46);
            if ( (_DWORD)v14 )
            {
              memmove(v12, *((const void **)a1 + 22), *((unsigned int *)a1 + 46));
              Win32FreePool(*((_QWORD *)a1 + 22));
              v14 = *((unsigned int *)a1 + 46);
            }
            memmove(&v13[v14], v10, v11);
            *((_DWORD *)a1 + 46) += v11;
            *((_QWORD *)a1 + 22) = v13;
          }
        }
        if ( v10 )
          Win32FreePool((__int64)v10);
        ++v8;
      }
      while ( v8 < *v7 );
    }
    Win32FreePool((__int64)v7);
  }
  v15 = *((unsigned int *)a1 + 46);
  if ( !(_DWORD)v15 && !*((_QWORD *)a1 + 22) )
    goto LABEL_54;
  v16 = 0;
  for ( i = 0;
        i < (unsigned int)v15;
        i += *(unsigned __int16 *)(i + *((_QWORD *)a1 + 22) + 70LL)
           + *(unsigned __int16 *)(i + *((_QWORD *)a1 + 22) + 68LL) )
  {
    ++v16;
  }
  v3 = PALLOCMEM2(16 * v16, 0x73726447u, 1);
  *((_QWORD *)a1 + 24) = v3;
  if ( !v3 )
  {
    v27 = *((_QWORD *)a1 + 22);
    *((_DWORD *)a1 + 46) = 0;
    Win32FreePool(v27);
    *((_QWORD *)a1 + 22) = 0LL;
LABEL_54:
    LODWORD(v3) = DrvLogDisplayDriverEvent(2LL, v15, v6);
    return (int)v3;
  }
  v6 = 0LL;
  *((_DWORD *)a1 + 47) = v16;
  v18 = 0;
  if ( !*((_DWORD *)a1 + 46) )
    goto LABEL_32;
  do
  {
    v15 = *((_QWORD *)a1 + 22) + v18;
    v19 = *(_DWORD *)(v15 + 72);
    if ( (v19 & 0x80u) == 0 )
    {
      v19 |= 0x80u;
      *(_DWORD *)(v15 + 72) = v19;
      v20 = v19;
    }
    else
    {
      v20 = *(_DWORD *)(v15 + 72);
      if ( *(_DWORD *)(v15 + 84) <= 3u )
        goto LABEL_28;
    }
    *(_DWORD *)(v15 + 84) = 0;
LABEL_28:
    if ( (v20 & 0x20000000) != 0 )
    {
      if ( (unsigned int)(*(_DWORD *)(v15 + 88) - 1) <= 1 )
        goto LABEL_30;
      *(_DWORD *)(v15 + 72) = v19 & 0xDFFFFFFF;
    }
    *(_DWORD *)(v15 + 88) = 0;
LABEL_30:
    v21 = (unsigned int)v6;
    v6 = (unsigned int)(v6 + 1);
    v21 *= 2LL;
    *(_DWORD *)(*((_QWORD *)a1 + 24) + 8 * v21) = 0;
    *(_QWORD *)(*((_QWORD *)a1 + 24) + 8 * v21 + 8) = v15;
    LODWORD(v3) = *(unsigned __int16 *)(v15 + 68);
    v18 += *(unsigned __int16 *)(v15 + 70) + (_DWORD)v3;
  }
  while ( v18 < *((_DWORD *)a1 + 46) );
  v16 = *((_DWORD *)a1 + 47);
LABEL_32:
  v22 = 1;
  if ( v16 )
  {
    LODWORD(v15) = v16;
    v23 = 0;
    do
    {
      v24 = *((_QWORD *)a1 + 24);
      v16 = v15;
      v6 = *(_QWORD *)(v24 + 16LL * v23 + 8);
      if ( *(_DWORD *)(v6 + 184) == 1 )
      {
        v28 = 1;
        if ( (_DWORD)v15 )
        {
          while ( 1 )
          {
            if ( v28 != v22 )
            {
              v29 = *(_QWORD *)(v24 + 16LL * (v28 - 1) + 8);
              LODWORD(v3) = *(_DWORD *)(v29 + 168);
              if ( *(_DWORD *)(v6 + 168) == (_DWORD)v3 )
              {
                LODWORD(v3) = *(_DWORD *)(v29 + 172);
                if ( *(_DWORD *)(v6 + 172) == (_DWORD)v3 )
                {
                  LODWORD(v3) = *(_DWORD *)(v29 + 176);
                  if ( *(_DWORD *)(v6 + 176) == (_DWORD)v3 && ((*(_BYTE *)(v6 + 180) ^ *(_BYTE *)(v29 + 180)) & 4) == 0 )
                  {
                    LODWORD(v3) = *(_DWORD *)(v29 + 84);
                    if ( *(_DWORD *)(v6 + 84) == (_DWORD)v3 )
                    {
                      LODWORD(v3) = *(_DWORD *)(v29 + 88);
                      if ( *(_DWORD *)(v6 + 88) == (_DWORD)v3 )
                        break;
                    }
                  }
                }
              }
            }
            v16 = *((_DWORD *)a1 + 47);
            ++v28;
            LODWORD(v15) = v16;
            if ( v28 > v16 )
              goto LABEL_35;
          }
          if ( (unsigned int)v15 > v22 )
            LODWORD(v3) = (unsigned int)memmove(
                                          (void *)(v24 + 16LL * v23),
                                          (const void *)(v24 + 16LL * v22),
                                          16LL * ((unsigned int)v15 - v22));
          --*((_DWORD *)a1 + 47);
          --v22;
          v16 = *((_DWORD *)a1 + 47);
          --v23;
        }
      }
LABEL_35:
      ++v22;
      ++v23;
      v15 = v16;
    }
    while ( v22 <= v16 );
  }
  if ( (*((_DWORD *)a1 + 40) & 0x6000008) == 0 )
  {
    LODWORD(v3) = PruneModesByDisplayDeviceCaps(a1, v16, *((struct tagDEVMODEMARK **)a1 + 24));
    v18 = (unsigned int)v3;
  }
  if ( !v18 )
    goto LABEL_54;
  return (int)v3;
}
